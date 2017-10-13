/* -- mainwindows.cpp
 * Corp de l'interface 
 * 
 */

#include "mainwindow.h"             // AJout Interface Homme Machine    IHM
#include "ui_mainwindow.h"
#include "tcpclient.h"
// Pour l'affichage du stream video avec VLC
#include <VLCQtCore/Common.h>
#include <VLCQtCore/Instance.h>
#include <VLCQtCore/Media.h>
#include <VLCQtCore/MediaPlayer.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Demarrage de l'interface
    ui->setupUi(this);
    /*
     * Bloc d'attribution de connexion aux widgets
     */
    // Boutons generaux de l'interface FRAME MOTEUR
    connect(ui->quitButton, SIGNAL(clicked()), this, SLOT(close()));
    // Bouton moteur 1
    connect(ui->chkActif1, SIGNAL(clicked()), this, SLOT(chkActif1Changed()));
    connect(ui->chkSens1, SIGNAL(clicked()), this, SLOT(chkSens1Changed()));
    // Bouton moteur 2
    connect(ui->chkActif2, SIGNAL(clicked()), this, SLOT(chkActif2Changed()));
    connect(ui->chkSens2, SIGNAL(clicked()), this, SLOT(chkSens2Changed()));
    // Bouton moteur 3
    connect(ui->chkActif3, SIGNAL(clicked()), this, SLOT(chkActif3Changed()));
    connect(ui->chkSens3, SIGNAL(clicked()), this, SLOT(chkSens3Changed()));
    // Bouton moteur 4
    connect(ui->chkActif4, SIGNAL(clicked()), this, SLOT(chkActif4Changed()));
    connect(ui->chkSens4, SIGNAL(clicked()), this, SLOT(chkSens4Changed()));

    // Boutons generaux de l'interface FRAME SERVEUR
    // Bouton connexion serveur MOTEURS
    connect(this, SIGNAL(connexion_au_client_tcp(QString,QString)), &tcp_client, SLOT(client_tcp_connexion_au_serveur(QString,QString)));
    // Mise a jour de l'état de connexion
    connect(&tcp_client,SIGNAL(retour_client_tcp_etat_serveur(QString,bool)), this, SLOT(retour_client_tcp_etat_serveur(QString,bool)));
    // Bouton deconnexion serveur MOTEURS
    connect(ui->Button_deconnexion, SIGNAL(clicked()), &tcp_client, SLOT(deconnexion()));
    // envois trame a l'objet gerant les connexions TCP
    connect(this,SIGNAL(envois_trame_au_client_tcp(QString)), &tcp_client, SLOT(recois_trame_ihm(QString)));

    // Boutons generaux de l'interface FRAME CAMERA
    // Bouton affichage flux camera
    connect(ui->Button_connexion_camera, SIGNAL(clicked()), this, SLOT(camera_start()));
    connect(ui->Button_deconnexion_camera, SIGNAL(clicked()), this, SLOT(camera_stop()));

    // Widget generaux pour l'affichage du flux video
    vlc_instance = new VlcInstance(VlcCommon::args(), this);
    vlc_player = new VlcMediaPlayer(vlc_instance);
    vlc_player->setVideoWidget(ui->video);
    ui->video->setMediaPlayer(vlc_player);

    /*
     * Fin bloc d'attribution de connexion aux widgets
     */

    // Correction d'un petit bug qui affiche n'importe quoi si on n'initialise pas les variable au demarrage du programme
    sens1 = sens2 = sens3 = sens4 = false;
    actif1 = actif2 = actif3 = actif4 = false;
    dist1 = dist2 = dist3 = dist4 = 0;
}

MainWindow::~MainWindow()
{
    // detruit l'interface
    delete ui;
    // et ses widgets vlc
    delete vlc_player;
    delete vlc_instance;
    delete vlc_media;
}

// ! Debut bloc Slider ! //
/* SLOT
 * Les slider permettent de definir au cas par cas la vitesse d'un moteur, il y 'en a 4
 * Les explication de la méthode on_slDist1_valueChanged sont généralisable aux autres méthodes 2,3 et 4.
 */
void MainWindow::on_slDist1_valueChanged(int value)
{
    ui->leDist1->setText(QString::number(value));           // Modifier le widget affichant la valeur de leDist comme étant positif
    dist1 = value;
    calculMessage();
}

void MainWindow::on_slDist2_valueChanged(int value)
{
    ui->leDist2->setText(QString::number(value));
    dist2 = value;
    calculMessage();
}

void MainWindow::on_slDist3_valueChanged(int value)
{
    ui->leDist3->setText(QString::number(value));
    dist3 = value;
    calculMessage();
}

void MainWindow::on_slDist4_valueChanged(int value)
{
    ui->leDist4->setText(QString::number(value));
    dist4 = value;
    calculMessage();
}
// ! Fin bloc Slider ! //

// ! Debut bloc boite a cocher ! //
/* SLOT
 * Les cases a cocher permettent de definir le sens de rotation d'un moteur ainsi que son
 * état (s'il est activé ou désactivé)
 * Les explication de la méthode chkActif1Changed sont généralisable aux méthodes
 * chkActif2Changed, chkActif3Changed et chkActif4Changed
 *
 * Les explication de la méthode chkSens1Changed sont généralisable aux méthodes
 * chkSens2Changed, chkSens3Changed et chkSens4Changed
 */
// ! Boites chkActif ! //
void MainWindow::chkActif1Changed()
{
    if (ui->chkActif1->isChecked())         // Si boite chkActif1 cochée
    {
        ui->slDist1->setEnabled(true);      // Activer
        ui->chkSens1->setEnabled(true);
        actif1 = true;
        calculMessage();
    }
    else                                    // Sinon (Par defaut les boites sont décochée)
    {
        ui->slDist1->setValue(0);           // Desactiver le slider 1
        ui->slDist1->setEnabled(false);
        ui->leDist1->setText("0");          // Indiquer que la vitesse est a 0 dans le champs a côté du slider
        ui->chkSens1->setEnabled(false);    // Desactive le sens
        ui->chkSens1->setChecked(false);
        actif1 = false;
        calculMessage();
    }
}

void MainWindow::chkActif2Changed()
{
    if (ui->chkActif2->isChecked())
    {
        ui->slDist2->setEnabled(true);
        ui->chkSens2->setEnabled(true);
        actif2 = true;
        calculMessage();
    }
    else
    {
        ui->slDist2->setValue(0);
        ui->slDist2->setEnabled(false);
        ui->leDist2->setText("0");
        ui->chkSens2->setEnabled(false);
        ui->chkSens2->setChecked(false);
        actif2 = false;
        calculMessage();
    }
}

void MainWindow::chkActif3Changed()
{
    if (ui->chkActif3->isChecked())
    {
        ui->slDist3->setEnabled(true);
        ui->chkSens3->setEnabled(true);
        actif3 = true;
        calculMessage();
    }
    else
    {
        ui->slDist3->setValue(0);
        ui->slDist3->setEnabled(false);
        ui->leDist3->setText("0");
        ui->chkSens3->setEnabled(false);
        ui->chkSens3->setChecked(false);
        actif3 = false;
        calculMessage();
    }
}

void MainWindow::chkActif4Changed()
{
    if (ui->chkActif4->isChecked())
    {
        ui->slDist4->setEnabled(true);
        ui->chkSens4->setEnabled(true);
        actif4 = true;
        calculMessage();
    }
    else
    {
        ui->slDist4->setValue(0);
        ui->slDist4->setEnabled(false);
        ui->chkSens4->setEnabled(false);
        ui->chkSens4->setChecked(false);
        ui->leDist4->setText("0");
        actif4 = false;
        calculMessage();
    }
}

// ! Boites chkSens ! //
// SLOT
void MainWindow::chkSens1Changed()
{
    if (ui->chkSens1->isChecked())
    {
        ui->leDist1->setText(QString::number(dist1));
        sens1 = true;
        calculMessage();
    }
    else
    {
        ui->leDist1->setText((QString::number(dist1)));
        sens1 = false;
        calculMessage();
    }
}

void MainWindow::chkSens2Changed()
{
    if (ui->chkSens2->isChecked())
    {
        ui->leDist2->setText(QString::number(dist2));
        sens2 = true;
        calculMessage();
    }
    else
    {
        ui->leDist2->setText((QString::number(dist2)));
        sens2 = false;
        calculMessage();
    }
}

void MainWindow::chkSens3Changed()
{
    if (ui->chkSens3->isChecked())
    {
        ui->leDist3->setText(QString::number(dist3));
        sens3 = true;
        calculMessage();
    }
    else
    {
        ui->leDist3->setText((QString::number(dist3)));
        sens3 = false;
        calculMessage();
    }
}

void MainWindow::chkSens4Changed()
{
    if (ui->chkSens4->isChecked())
    {
        ui->leDist4->setText(QString::number(dist4));
        sens4 = true;
        calculMessage();
    }
    else
    {
        ui->leDist4->setText((QString::number(dist4)));
        sens4 = false;
        calculMessage();
    }
}

// Slot du bouton connexion serveur du bloc MOTEUR
void MainWindow::on_Button_connexion_clicked()
{

    // Changement IP
    IP_Serveur.clear();
    IP_Serveur.append(ui->leIPServeur->displayText());
    // Changement Port
    Port_Serveur.clear();
    Port_Serveur.append(ui->lePortServeur->displayText());
    // Message a afficher sur l'UI
    message_connexion.clear();
    message_connexion.append(IP_Serveur);
    message_connexion.append(":");
    message_connexion.append(Port_Serveur);
    // Affiche le message
    ui->leMessageConnexion->setText(message_connexion);
    // pour se connecter au serveur

    // EMIT SIGNAL
    emit connexion_au_client_tcp(IP_Serveur,Port_Serveur);
    // etablissement du flux de la camera
    camera_start();
}


// Slot du QLineEdit Resultat connexion et activation FRAME CONTROLE MOTEUR
void MainWindow::retour_client_tcp_etat_serveur(QString message_etat_connexion,bool etat_reseau)
{
    // mise à jour de l'état
    ui->leEtat_reseau->setText(message_etat_connexion);
    // mise à jour balise
    ui->checkreseau->setChecked(etat_reseau);
    // Reseau pas OK desactiver les boites et slider
    if(!etat_reseau)
    {
        ui->chkActif1->setChecked(etat_reseau);
        ui->chkActif2->setChecked(etat_reseau);
        ui->chkActif3->setChecked(etat_reseau);
        ui->chkActif4->setChecked(etat_reseau);
    }
    // Sinon Activer toutes les boites
    ui->chkActif1->setEnabled(etat_reseau);
    ui->chkActif2->setEnabled(etat_reseau);
    ui->chkActif3->setEnabled(etat_reseau);
    ui->chkActif4->setEnabled(etat_reseau);

}

// SIGNAL
// ! Fin du bloc boite a cocher ! //

void MainWindow::calculMessage()
{
    // Rénitialisation du message
    message.clear();

    /* -- Bloc moteur 1
     *
     */
    // IDM moteur 1
    message.append('1');
    message.append(',');
    // Sens moteur 1
    if(sens1==0) message.append('0');
    else if (sens1==1) message.append('1');
    message.append(',');
    // Brake moteur 1
    if (actif1 == 0) message.append('1');
    else if (actif1 == 1) message.append('0');
    message.append(',');
    // PWM moteur 1
    // Affiche information sur la PWM 1 du moteur 1
    if (dist1 == 0) message.append('0');
    else message.append(QString::number(dist1));
    message.append(','); // separation

    /* -- Bloc moteur 2
     *
     */
    message.append('2');
    message.append(',');
    // Sens moteur 2
    if(sens2 == 0) message.append('0');
    else if (sens2 == 1) message.append('1');
    message.append(',');
    // Brake moteur 2
    if (actif2 == 0) message.append('1');
    else if (actif2 == 1) message.append('0');
    message.append(',');
    // PWM moteur 2
    // Affiche information sur la PWM 1 du moteur 2
    if (dist2 == 0) message.append('0');
    else message.append(QString::number(dist2));
    message.append(','); // separation

    /* -- Bloc moteur 3
     *
     */
    message.append('3');
    message.append(',');
    // Sens moteur 3
    if(sens3 == 0) message.append('0');
    else if (sens3 == 1) message.append('1');
    message.append(',');
    // Brake moteur 3
    if (actif3 == 0) message.append('1');
    else if (actif2 == 1) message.append('0');
    message.append(',');
    // PWM moteur 3
    // Affiche information sur la PWM 1 du moteur 2
    if (dist3 == 0) message.append('0');
    else message.append(QString::number(dist3));
    message.append(','); // separation

    /* -- Bloc moteur 4
     *
     */
    message.append('4');
    message.append(',');
    // Sens moteur 4
    if(sens4 == 0) message.append('0');
    else if (sens4 == 1) message.append('1');
    message.append(',');
    // Brake moteur 4
    if (actif4 == 0) message.append('1');
    else if (actif4 == 1) message.append('0');
    message.append(',');
    // PWM moteur 4
    // Affiche information sur la PWM 1 du moteur 4
    if (dist4 == 0) message.append('0');
    else message.append(QString::number(dist4));
    message.append(',');

    // bloc pour arreter a distance l'écoute du robot (bouton arret)
    // if(arret_robot==0) message.append('0');
    // else if (arret_robot==1) message.append('1');

    ui->leMessage->setText(message); // Affiche le message
    message.append(',');
    // Envois d'un signal tcp_client pour se connecter au serveur et envois le message construit
    // CORRECTION A APPORTER ICI
    emit envois_trame_au_client_tcp(message);
}


/* Bloc gestion de la camera
 *
 *
 */
void MainWindow::camera_start()
{
    ui->label_camera_logo->setHidden(true);
    ui->checkcamera->setChecked(true);
    url.clear();
    url.append(prefix);
    url.append(IP_Serveur);
    url.append(':');
    url.append(Port_Camera);
    url.append(suffix);
    // si rien dans l'url definie dans la boite connexion camera
    if (url.isEmpty())
        // erreur
        return;
    vlc_media = new VlcMedia(url, vlc_instance);
    vlc_player->open(vlc_media);

}

void MainWindow::camera_stop()
{
    ui->label_camera_logo->setHidden(false);
    ui->checkcamera->setChecked(false);
    vlc_player->VlcMediaPlayer::stop();
}

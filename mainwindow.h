#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTimer>
#include "tcpclient.h"

namespace Ui {
class MainWindow;
}

class VlcInstance;
class VlcMedia;
class VlcMediaPlayer;

// Classe MainWindows, celle-ci correspond a notre IHM elle herite de QMainWindow
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    // Destructeur (CF dans le mainwindow)
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    // ! Debut du bloc d'attribut ! //
    // BLOC CONTROLE MOTEUR de l'interface
    int dist1, dist2, dist3, dist4,i,n;       // La variable dist est comprise entre 0 et 999
    bool actif1, actif2, actif3, actif4;    // Variable vrai/faux permettant de definir si un moteur est actif
    bool sens1, sens2, sens3, sens4;      // Variable vrai/faux permettant de definir le sens d'un moteur

    // BLOC CONNEXION de l'interface
    QString trame,message_connexion,message;
    QString IP_Serveur ="127.0.0.1";      // Chaine contenant l'adresse IP du serveur
    QString Port_Serveur ="8888";    // Chaine contenant le port du serveur
    TcpClient tcp_client;

    // BLOC CONTROLE CAMERA de l'interface
    // Declaration des objets necessaire pour utiliser VLC pour la lecture du flux
    VlcInstance *vlc_instance;
    VlcMedia *vlc_media;
    VlcMediaPlayer *vlc_player;
    QString prefix ="http://";
    QString suffix ="/?action=stream";
    QString url;
    QString Port_Camera = "8888";


private slots :
    // ! Debut du bloc de slot ! //
    /*
     * Bloc des SLOTS de l'IHM
     */
    // Slots créant chaque slider pour le choix de la vitesse des moteurs
    void on_slDist1_valueChanged(int value);
    void on_slDist2_valueChanged(int value);
    void on_slDist3_valueChanged(int value);
    void on_slDist4_valueChanged(int value);
    // Slots créant deux boutons correspondant au moteur n°1
    void chkSens1Changed();         // Bouton definissant le sens du moteur 1
    void chkActif1Changed();        // Bouton definissant si le moteur 1 est activé
    // Slots créant deux boutons correspondant au moteur n°2
    void chkSens2Changed();
    void chkActif2Changed();
    // Slots créant deux boutons correspondant au moteur n°3
    void chkSens3Changed();
    void chkActif3Changed();
    // Slots créant deux boutons correspondant au moteur n°4
    void chkSens4Changed();
    void chkActif4Changed();
    // Slot pour le boutton connexion
    void on_Button_connexion_clicked();

    // Interaction avec les objets
    void retour_client_tcp_etat_serveur(QString message_etat_connexion,bool etat_reseau);
    // methode d'affichage de la camera
    void camera_start();
    void camera_stop();

    // méthode affichant un résumé sous forme de message de la configuration actuelle des moteurs
    void calculMessage();

signals :
    void connexion_au_client_tcp(QString IP_Serveur,QString Port_Serveur);
    void envois_trame_au_client_tcp(QString);
};

#endif // MAINWINDOW_H


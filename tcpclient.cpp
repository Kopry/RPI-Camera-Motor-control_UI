#include "tcpclient.h"
#include "mainwindow.h"

/* Constructeur de la classe TcpClient
 *
 */

TcpClient::TcpClient()
{

}

/* PARAMETRAGE ET ETABLISSEMENT DE LA CONNEXION AU SERVEUR */

/* -- tcp_client(QString t)
 * Methode etablissant une connexion au serveur distant
 * -- QString t : Celle ci envois la trame construite par l'IHM et enregistré dans la variable QString t
 * Le socket est ouvert dans la methode calculMessageConnexion();
 */

void TcpClient::recois_trame_ihm(QString trame)
{
    etatConnexion(); // verifie avant mise en place d'une connexion qu'une connexion n'est pas déjà etablie
    // si l'état de connexion du socket le permet alors
    if (etat_reseau)
    {
        // on associe un flux à la socket
        QTextStream texte(&soc);
        // on écrit dans le flux le texte saisi dans l'IHM
        texte << trame <<endl;
    }
}


/* -- etatConnexion()
 * Méthode de diagnostic, celle-ci permet de verifier chaque etat de connexion du socket et de renvoyer une erreur dans le cas
 * ou celle-ci n'est pas prete a communiquer
 *
 * etat_reseau=false/true; variable utilisée pour bloquer le programme (voir tcp_client())
 */
void TcpClient::etatConnexion()
{
    //etat_reseau = soc.state();
    switch (soc.state()){
    case 0 :
    {
        message_etat_connexion.clear();
        message_etat_connexion.append("Déconnecté");
        etat_reseau=false;
        break;
    }
    case 1 :
    {
        message_etat_connexion.clear();
        message_etat_connexion.append("Resolution d'hote");
        etat_reseau=false;
        break;
    }
    case 2 :
    {
        message_etat_connexion.clear();
        message_etat_connexion.append("Connexion en cours");
        etat_reseau=false;
        break;
    }
    case 3 :
    {
        message_etat_connexion.clear();
        message_etat_connexion.append("Connexion etablie");
        etat_reseau=true;
        break;
    }
    case 4 :
    {
        message_etat_connexion.clear();
        message_etat_connexion.append("Port ou Adresse IP necessaire");
        etat_reseau=false;
        break;
    }
    default :
    {
        message_etat_connexion.clear();
        message_etat_connexion.append("Erreur inconnue");
        etat_reseau=false;
        break;
    }
    }
    emit retour_client_tcp_etat_serveur(message_etat_connexion,etat_reseau);
}

/* -- tcp_client_connexion_to_tcpclient()
 * initialise la connexion au serveur et affiche son etat sur l'IHM
 */
void TcpClient::client_tcp_connexion_au_serveur(QString IPServeur,QString PortServeur)
{
    // pour se connecter au serveur
    // verification de l'état du socket
    etat_socket = soc.state();
    // si l'état n'est pas "connecté" alors initialiser une connexion et mettre a jour le message
    if (etat_socket!=3)
    {
        soc.connectToHost(IPServeur,PortServeur.toInt());
    }
    etatConnexion();
}

/* -- deconnexionServeur()
 * ...
 */
void TcpClient::deconnexion()
{
    // pour se deconnecter du serveur
    soc.close();
    etatConnexion();
}

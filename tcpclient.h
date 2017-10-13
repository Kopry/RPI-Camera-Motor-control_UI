#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>
#include <QtNetwork/QTcpSocket>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QNetworkAccessManager>

class TcpClient : public QObject
{
Q_OBJECT
public:
    explicit TcpClient();

private slots:
    /*
     * Bloc des méthodes pour le support des communictation avec TCP
     */
    // méthode permettant de se deconnecter du serveur
    void deconnexion();
    // méthode verifiant l'état de la connexion et l'affiche sur l'IHM
    void etatConnexion();

    // Interaction avec l'interface
    // Slot permettant de se connecter au serveur
    void client_tcp_connexion_au_serveur(QString IPServeur,QString PortServeur);
    // en provenance de l'IHM et écrit sur la socket
    void recois_trame_ihm(QString trame);

private:

    int etat_socket;
    QString message, message_etat_connexion; // Messages pour l'IHM
    bool etat_reseau;       // Etat du reseau false : connexion non disponible, true : connexion disponible
    QTcpSocket soc;         // Socket
    QString IPServeur;      // Chaine contenant l'adresse IP du serveur
    QString PortServeur;    // Chaine contenant le port du serveur

signals:
    // Signal permettant d'afficher l'adresse IP ainsi que le port du serveur distant sur l'IHM
    void retour_client_tcp_etat_serveur(QString message_etat_connexion,bool eetat_reseau);

};

#endif // TCPCLIENT_H

/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[454];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "connexion_au_client_tcp"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "IP_Serveur"
QT_MOC_LITERAL(4, 47, 12), // "Port_Serveur"
QT_MOC_LITERAL(5, 60, 26), // "envois_trame_au_client_tcp"
QT_MOC_LITERAL(6, 87, 23), // "on_slDist1_valueChanged"
QT_MOC_LITERAL(7, 111, 5), // "value"
QT_MOC_LITERAL(8, 117, 23), // "on_slDist2_valueChanged"
QT_MOC_LITERAL(9, 141, 23), // "on_slDist3_valueChanged"
QT_MOC_LITERAL(10, 165, 23), // "on_slDist4_valueChanged"
QT_MOC_LITERAL(11, 189, 15), // "chkSens1Changed"
QT_MOC_LITERAL(12, 205, 16), // "chkActif1Changed"
QT_MOC_LITERAL(13, 222, 15), // "chkSens2Changed"
QT_MOC_LITERAL(14, 238, 16), // "chkActif2Changed"
QT_MOC_LITERAL(15, 255, 15), // "chkSens3Changed"
QT_MOC_LITERAL(16, 271, 16), // "chkActif3Changed"
QT_MOC_LITERAL(17, 288, 15), // "chkSens4Changed"
QT_MOC_LITERAL(18, 304, 16), // "chkActif4Changed"
QT_MOC_LITERAL(19, 321, 27), // "on_Button_connexion_clicked"
QT_MOC_LITERAL(20, 349, 30), // "retour_client_tcp_etat_serveur"
QT_MOC_LITERAL(21, 380, 22), // "message_etat_connexion"
QT_MOC_LITERAL(22, 403, 11), // "etat_reseau"
QT_MOC_LITERAL(23, 415, 12), // "camera_start"
QT_MOC_LITERAL(24, 428, 11), // "camera_stop"
QT_MOC_LITERAL(25, 440, 13) // "calculMessage"

    },
    "MainWindow\0connexion_au_client_tcp\0\0"
    "IP_Serveur\0Port_Serveur\0"
    "envois_trame_au_client_tcp\0"
    "on_slDist1_valueChanged\0value\0"
    "on_slDist2_valueChanged\0on_slDist3_valueChanged\0"
    "on_slDist4_valueChanged\0chkSens1Changed\0"
    "chkActif1Changed\0chkSens2Changed\0"
    "chkActif2Changed\0chkSens3Changed\0"
    "chkActif3Changed\0chkSens4Changed\0"
    "chkActif4Changed\0on_Button_connexion_clicked\0"
    "retour_client_tcp_etat_serveur\0"
    "message_etat_connexion\0etat_reseau\0"
    "camera_start\0camera_stop\0calculMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  109,    2, 0x06 /* Public */,
       5,    1,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  117,    2, 0x08 /* Private */,
       8,    1,  120,    2, 0x08 /* Private */,
       9,    1,  123,    2, 0x08 /* Private */,
      10,    1,  126,    2, 0x08 /* Private */,
      11,    0,  129,    2, 0x08 /* Private */,
      12,    0,  130,    2, 0x08 /* Private */,
      13,    0,  131,    2, 0x08 /* Private */,
      14,    0,  132,    2, 0x08 /* Private */,
      15,    0,  133,    2, 0x08 /* Private */,
      16,    0,  134,    2, 0x08 /* Private */,
      17,    0,  135,    2, 0x08 /* Private */,
      18,    0,  136,    2, 0x08 /* Private */,
      19,    0,  137,    2, 0x08 /* Private */,
      20,    2,  138,    2, 0x08 /* Private */,
      23,    0,  143,    2, 0x08 /* Private */,
      24,    0,  144,    2, 0x08 /* Private */,
      25,    0,  145,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connexion_au_client_tcp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->envois_trame_au_client_tcp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_slDist1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_slDist2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_slDist3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_slDist4_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->chkSens1Changed(); break;
        case 7: _t->chkActif1Changed(); break;
        case 8: _t->chkSens2Changed(); break;
        case 9: _t->chkActif2Changed(); break;
        case 10: _t->chkSens3Changed(); break;
        case 11: _t->chkActif3Changed(); break;
        case 12: _t->chkSens4Changed(); break;
        case 13: _t->chkActif4Changed(); break;
        case 14: _t->on_Button_connexion_clicked(); break;
        case 15: _t->retour_client_tcp_etat_serveur((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->camera_start(); break;
        case 17: _t->camera_stop(); break;
        case 18: _t->calculMessage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::connexion_au_client_tcp)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::envois_trame_au_client_tcp)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::connexion_au_client_tcp(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::envois_trame_au_client_tcp(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

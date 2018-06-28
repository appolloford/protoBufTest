/****************************************************************************
** Meta object code from reading C++ file 'rpc-server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rpc-server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpc-server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RpcServer_t {
    QByteArrayData data[11];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RpcServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RpcServer_t qt_meta_stringdata_RpcServer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RpcServer"
QT_MOC_LITERAL(1, 10, 6), // "closed"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 15), // "onTcpConnection"
QT_MOC_LITERAL(4, 34, 12), // "onTcpMessage"
QT_MOC_LITERAL(5, 47, 15), // "onTcpDisconnect"
QT_MOC_LITERAL(6, 63, 9), // "onTcpTask"
QT_MOC_LITERAL(7, 73, 14), // "onWsConnection"
QT_MOC_LITERAL(8, 88, 11), // "onWsMessage"
QT_MOC_LITERAL(9, 100, 14), // "onWsDisconnect"
QT_MOC_LITERAL(10, 115, 8) // "onWsTask"

    },
    "RpcServer\0closed\0\0onTcpConnection\0"
    "onTcpMessage\0onTcpDisconnect\0onTcpTask\0"
    "onWsConnection\0onWsMessage\0onWsDisconnect\0"
    "onWsTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RpcServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    2,   63,    2, 0x08 /* Private */,
       7,    0,   68,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    2,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::VoidStar,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::VoidStar,    2,    2,

       0        // eod
};

void RpcServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RpcServer *_t = static_cast<RpcServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->onTcpConnection(); break;
        case 2: _t->onTcpMessage(); break;
        case 3: _t->onTcpDisconnect(); break;
        case 4: _t->onTcpTask((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 5: _t->onWsConnection(); break;
        case 6: _t->onWsMessage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->onWsDisconnect(); break;
        case 8: _t->onWsTask((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RpcServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RpcServer::closed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RpcServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RpcServer.data,
      qt_meta_data_RpcServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RpcServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RpcServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RpcServer.stringdata0))
        return static_cast<void*>(const_cast< RpcServer*>(this));
    return QObject::qt_metacast(_clname);
}

int RpcServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void RpcServer::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

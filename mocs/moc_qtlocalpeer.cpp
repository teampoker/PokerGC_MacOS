/****************************************************************************
** Meta object code from reading C++ file 'qtlocalpeer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/third_party/qtsingleapplication/qtlocalpeer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtlocalpeer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SharedTools__QtLocalPeer_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SharedTools__QtLocalPeer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SharedTools__QtLocalPeer_t qt_meta_stringdata_SharedTools__QtLocalPeer = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SharedTools::QtLocalPeer"
QT_MOC_LITERAL(1, 25, 15), // "messageReceived"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "message"
QT_MOC_LITERAL(4, 50, 6), // "socket"
QT_MOC_LITERAL(5, 57, 17) // "receiveConnection"

    },
    "SharedTools::QtLocalPeer\0messageReceived\0"
    "\0message\0socket\0receiveConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SharedTools__QtLocalPeer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   29,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QObjectStar,    3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SharedTools::QtLocalPeer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtLocalPeer *_t = static_cast<QtLocalPeer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 1: _t->receiveConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtLocalPeer::*_t)(const QString & , QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtLocalPeer::messageReceived)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SharedTools::QtLocalPeer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SharedTools__QtLocalPeer.data,
      qt_meta_data_SharedTools__QtLocalPeer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SharedTools::QtLocalPeer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SharedTools::QtLocalPeer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SharedTools__QtLocalPeer.stringdata0))
        return static_cast<void*>(const_cast< QtLocalPeer*>(this));
    return QObject::qt_metacast(_clname);
}

int SharedTools::QtLocalPeer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SharedTools::QtLocalPeer::messageReceived(const QString & _t1, QObject * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

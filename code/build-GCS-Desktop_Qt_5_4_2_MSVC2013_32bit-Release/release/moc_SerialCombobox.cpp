/****************************************************************************
** Meta object code from reading C++ file 'SerialCombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gcs/src/SerialCombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialCombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialComboBox_t {
    QByteArrayData data[7];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialComboBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialComboBox_t qt_meta_stringdata_SerialComboBox = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SerialComboBox"
QT_MOC_LITERAL(1, 15, 9), // "activated"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "index"
QT_MOC_LITERAL(4, 32, 19), // "currentIndexChanged"
QT_MOC_LITERAL(5, 52, 11), // "highlighted"
QT_MOC_LITERAL(6, 64, 10) // "updateList"

    },
    "SerialComboBox\0activated\0\0index\0"
    "currentIndexChanged\0highlighted\0"
    "updateList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SerialComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialComboBox *_t = static_cast<SerialComboBox *>(_o);
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->highlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialComboBox::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialComboBox::activated)) {
                *result = 0;
            }
        }
        {
            typedef void (SerialComboBox::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialComboBox::currentIndexChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (SerialComboBox::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialComboBox::highlighted)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject SerialComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_SerialComboBox.data,
      qt_meta_data_SerialComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SerialComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SerialComboBox.stringdata))
        return static_cast<void*>(const_cast< SerialComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int SerialComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SerialComboBox::activated(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialComboBox::currentIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SerialComboBox::highlighted(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'waypointgui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gcs/src/waypointgui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waypointgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WaypointGUI_t {
    QByteArrayData data[9];
    char stringdata[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WaypointGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WaypointGUI_t qt_meta_stringdata_WaypointGUI = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WaypointGUI"
QT_MOC_LITERAL(1, 12, 8), // "waypoint"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "Waypoint22*"
QT_MOC_LITERAL(4, 34, 11), // "addWaypoint"
QT_MOC_LITERAL(5, 46, 13), // "send_waypoint"
QT_MOC_LITERAL(6, 60, 15), // "coordDesignated"
QT_MOC_LITERAL(7, 76, 3), // "lat"
QT_MOC_LITERAL(8, 80, 3) // "lon"

    },
    "WaypointGUI\0waypoint\0\0Waypoint22*\0"
    "addWaypoint\0send_waypoint\0coordDesignated\0"
    "lat\0lon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WaypointGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       4,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   44,    2, 0x0a /* Public */,
       6,    2,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    7,    8,

       0        // eod
};

void WaypointGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WaypointGUI *_t = static_cast<WaypointGUI *>(_o);
        switch (_id) {
        case 0: _t->waypoint((*reinterpret_cast< Waypoint22*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->addWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint22*(*)>(_a[2]))); break;
        case 2: _t->send_waypoint(); break;
        case 3: _t->coordDesignated((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint22* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint22* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WaypointGUI::*_t)(Waypoint22 * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaypointGUI::waypoint)) {
                *result = 0;
            }
        }
        {
            typedef void (WaypointGUI::*_t)(int , Waypoint22 * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaypointGUI::addWaypoint)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject WaypointGUI::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WaypointGUI.data,
      qt_meta_data_WaypointGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WaypointGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaypointGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WaypointGUI.stringdata))
        return static_cast<void*>(const_cast< WaypointGUI*>(this));
    return QWidget::qt_metacast(_clname);
}

int WaypointGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void WaypointGUI::waypoint(Waypoint22 * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WaypointGUI::addWaypoint(int _t1, Waypoint22 * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

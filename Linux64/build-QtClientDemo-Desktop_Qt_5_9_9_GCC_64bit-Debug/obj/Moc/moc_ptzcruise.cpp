/****************************************************************************
** Meta object code from reading C++ file 'ptzcruise.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/RealPlay/PTZ/PtzCruise/ptzcruise.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ptzcruise.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PtzCruise_t {
    QByteArrayData data[11];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PtzCruise_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PtzCruise_t qt_meta_stringdata_PtzCruise = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PtzCruise"
QT_MOC_LITERAL(1, 10, 36), // "on_pushButton_addcruisepoint_..."
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 39), // "on_pushButton_deletecruisepoi..."
QT_MOC_LITERAL(4, 88, 26), // "on_pushButton_exit_clicked"
QT_MOC_LITERAL(5, 115, 45), // "on_comboBox_ptzcruisepath_cur..."
QT_MOC_LITERAL(6, 161, 5), // "index"
QT_MOC_LITERAL(7, 167, 46), // "on_comboBox_ptzcruisepoint_cu..."
QT_MOC_LITERAL(8, 214, 52), // "on_comboBox_ptzcruisepresetpo..."
QT_MOC_LITERAL(9, 267, 45), // "on_comboBox_ptzcruisetime_cur..."
QT_MOC_LITERAL(10, 313, 46) // "on_comboBox_ptzcruisespeed_cu..."

    },
    "PtzCruise\0on_pushButton_addcruisepoint_clicked\0"
    "\0on_pushButton_deletecruisepoint_clicked\0"
    "on_pushButton_exit_clicked\0"
    "on_comboBox_ptzcruisepath_currentIndexChanged\0"
    "index\0on_comboBox_ptzcruisepoint_currentIndexChanged\0"
    "on_comboBox_ptzcruisepresetpoint_currentIndexChanged\0"
    "on_comboBox_ptzcruisetime_currentIndexChanged\0"
    "on_comboBox_ptzcruisespeed_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PtzCruise[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    1,   57,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void PtzCruise::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PtzCruise *_t = static_cast<PtzCruise *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_addcruisepoint_clicked(); break;
        case 1: _t->on_pushButton_deletecruisepoint_clicked(); break;
        case 2: _t->on_pushButton_exit_clicked(); break;
        case 3: _t->on_comboBox_ptzcruisepath_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_comboBox_ptzcruisepoint_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_comboBox_ptzcruisepresetpoint_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_comboBox_ptzcruisetime_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_comboBox_ptzcruisespeed_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PtzCruise::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PtzCruise.data,
      qt_meta_data_PtzCruise,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PtzCruise::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PtzCruise::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PtzCruise.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PtzCruise::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'cadvancednetparams.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ParaConfig/configure_params/RemoteParams/NetParams/cadvancednetparams.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cadvancednetparams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CAdvancedNetParams_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CAdvancedNetParams_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CAdvancedNetParams_t qt_meta_stringdata_CAdvancedNetParams = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CAdvancedNetParams"
QT_MOC_LITERAL(1, 19, 10), // "clickPPPoE"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "clickNTP"
QT_MOC_LITERAL(4, 40, 9), // "clickDDNS"
QT_MOC_LITERAL(5, 50, 10), // "saveParams"
QT_MOC_LITERAL(6, 61, 13), // "refreshParams"
QT_MOC_LITERAL(7, 75, 18) // "on_btnExit_clicked"

    },
    "CAdvancedNetParams\0clickPPPoE\0\0clickNTP\0"
    "clickDDNS\0saveParams\0refreshParams\0"
    "on_btnExit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CAdvancedNetParams[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CAdvancedNetParams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CAdvancedNetParams *_t = static_cast<CAdvancedNetParams *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clickPPPoE(); break;
        case 1: _t->clickNTP(); break;
        case 2: _t->clickDDNS(); break;
        case 3: _t->saveParams(); break;
        case 4: _t->refreshParams(); break;
        case 5: _t->on_btnExit_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CAdvancedNetParams::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CAdvancedNetParams.data,
      qt_meta_data_CAdvancedNetParams,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CAdvancedNetParams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CAdvancedNetParams::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CAdvancedNetParams.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CAdvancedNetParams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

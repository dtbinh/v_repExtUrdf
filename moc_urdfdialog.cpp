/****************************************************************************
** Meta object code from reading C++ file 'urdfdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "urdfdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'urdfdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CUrdfDialog_t {
    QByteArrayData data[12];
    char stringdata[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CUrdfDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CUrdfDialog_t qt_meta_stringdata_CUrdfDialog = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 19),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 33),
QT_MOC_LITERAL(4, 67, 25),
QT_MOC_LITERAL(5, 93, 28),
QT_MOC_LITERAL(6, 122, 31),
QT_MOC_LITERAL(7, 154, 30),
QT_MOC_LITERAL(8, 185, 24),
QT_MOC_LITERAL(9, 210, 28),
QT_MOC_LITERAL(10, 239, 27),
QT_MOC_LITERAL(11, 267, 25)
    },
    "CUrdfDialog\0on_qqImport_clicked\0\0"
    "on_qqCollisionLinksHidden_clicked\0"
    "on_qqJointsHidden_clicked\0"
    "on_qqConvexDecompose_clicked\0"
    "on_qqConvexDecomposeDlg_clicked\0"
    "on_qqCreateVisualLinks_clicked\0"
    "on_qqCenterModel_clicked\0"
    "on_qqModelDefinition_clicked\0"
    "on_qqAlternateMasks_clicked\0"
    "on_qqPositionCtrl_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CUrdfDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08,
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    0,   67,    2, 0x08,
       6,    0,   68,    2, 0x08,
       7,    0,   69,    2, 0x08,
       8,    0,   70,    2, 0x08,
       9,    0,   71,    2, 0x08,
      10,    0,   72,    2, 0x08,
      11,    0,   73,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CUrdfDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CUrdfDialog *_t = static_cast<CUrdfDialog *>(_o);
        switch (_id) {
        case 0: _t->on_qqImport_clicked(); break;
        case 1: _t->on_qqCollisionLinksHidden_clicked(); break;
        case 2: _t->on_qqJointsHidden_clicked(); break;
        case 3: _t->on_qqConvexDecompose_clicked(); break;
        case 4: _t->on_qqConvexDecomposeDlg_clicked(); break;
        case 5: _t->on_qqCreateVisualLinks_clicked(); break;
        case 6: _t->on_qqCenterModel_clicked(); break;
        case 7: _t->on_qqModelDefinition_clicked(); break;
        case 8: _t->on_qqAlternateMasks_clicked(); break;
        case 9: _t->on_qqPositionCtrl_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CUrdfDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CUrdfDialog.data,
      qt_meta_data_CUrdfDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *CUrdfDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CUrdfDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CUrdfDialog.stringdata))
        return static_cast<void*>(const_cast< CUrdfDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CUrdfDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

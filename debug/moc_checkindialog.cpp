/****************************************************************************
** Meta object code from reading C++ file 'checkindialog.h'
**
** Created: Sat May 17 16:18:21 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../checkindialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CheckInDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      44,   14,   14,   14, 0x08,
      75,   14,   14,   14, 0x08,
      99,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CheckInDialog[] = {
    "CheckInDialog\0\0on_pushButton_save_clicked()\0"
    "on_pushButton_cancel_clicked()\0"
    "on_toolButton_clicked()\0"
    "doubleClickRecord(QString)\0"
};

void CheckInDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CheckInDialog *_t = static_cast<CheckInDialog *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_save_clicked(); break;
        case 1: _t->on_pushButton_cancel_clicked(); break;
        case 2: _t->on_toolButton_clicked(); break;
        case 3: _t->doubleClickRecord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CheckInDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CheckInDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CheckInDialog,
      qt_meta_data_CheckInDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CheckInDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CheckInDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CheckInDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CheckInDialog))
        return static_cast<void*>(const_cast< CheckInDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CheckInDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

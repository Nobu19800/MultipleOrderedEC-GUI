/****************************************************************************
** Meta object code from reading C++ file 'AddButton2.h'
**
** Created: Tue Aug 19 08:25:54 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AddButton2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddButton2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddButton2[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddButton2[] = {
    "AddButton2\0\0cl\0clicked(CompLayout*)\0"
    "clickedSlot()\0"
};

const QMetaObject AddButton2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddButton2,
      qt_meta_data_AddButton2, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddButton2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddButton2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddButton2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddButton2))
        return static_cast<void*>(const_cast< AddButton2*>(this));
    return QWidget::qt_metacast(_clname);
}

int AddButton2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clicked((*reinterpret_cast< CompLayout*(*)>(_a[1]))); break;
        case 1: clickedSlot(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AddButton2::clicked(CompLayout * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

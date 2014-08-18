/****************************************************************************
** Meta object code from reading C++ file 'AddButton3.h'
**
** Created: Tue Aug 19 08:25:52 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AddButton3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddButton3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddButton3[] = {

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
      18,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddButton3[] = {
    "AddButton3\0\0Vl,cl\0clicked(QWidget*,CompLayout*)\0"
    "clickedSlot()\0"
};

const QMetaObject AddButton3::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddButton3,
      qt_meta_data_AddButton3, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddButton3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddButton3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddButton3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddButton3))
        return static_cast<void*>(const_cast< AddButton3*>(this));
    return QWidget::qt_metacast(_clname);
}

int AddButton3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clicked((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< CompLayout*(*)>(_a[2]))); break;
        case 1: clickedSlot(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AddButton3::clicked(QWidget * _t1, CompLayout * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'SetComp.h'
**
** Created: Tue Aug 19 08:25:48 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SetComp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SetComp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetComp[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    9,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,    8,    8,    8, 0x0a,
      66,   61,   56,    8, 0x0a,
      84,   61,   56,    8, 0x0a,
     102,    8,    8,    8, 0x0a,
     115,    8,    8,    8, 0x0a,
     126,    8,    8,    8, 0x0a,
     140,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SetComp[] = {
    "SetComp\0\0w,h\0UpdateSizeSignal(int,int)\0"
    "UpdateSizeSlot()\0bool\0Name\0save(const char*)\0"
    "open(const char*)\0CreateComp()\0"
    "UpdateEC()\0UpdateComps()\0UpdateComp2()\0"
};

const QMetaObject SetComp::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_SetComp,
      qt_meta_data_SetComp, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SetComp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SetComp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SetComp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetComp))
        return static_cast<void*>(const_cast< SetComp*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int SetComp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: UpdateSizeSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: UpdateSizeSlot(); break;
        case 2: { bool _r = save((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = open((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: CreateComp(); break;
        case 5: UpdateEC(); break;
        case 6: UpdateComps(); break;
        case 7: UpdateComp2(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SetComp::UpdateSizeSignal(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

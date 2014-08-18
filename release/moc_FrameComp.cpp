/****************************************************************************
** Meta object code from reading C++ file 'FrameComp.h'
**
** Created: Tue Aug 19 08:25:50 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FrameComp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrameComp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FrameComp[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   30,   10,   10, 0x0a,
      68,   65,   10,   10, 0x0a,
      92,   90,   10,   10, 0x0a,
     118,   90,   10,   10, 0x0a,
     144,   10,   10,   10, 0x0a,
     160,  156,   10,   10, 0x0a,
     178,   10,   10,   10, 0x0a,
     190,   90,   10,   10, 0x0a,
     218,  213,   10,   10, 0x0a,
     254,  251,   10,   10, 0x0a,
     283,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FrameComp[] = {
    "FrameComp\0\0UpdateSizeSignal()\0ec,fc\0"
    "AddCompSlot(ExComp*,FEComp*)\0fc\0"
    "AddCompSlot1(FEComp*)\0c\0"
    "AddCompSlot2(CompLayout*)\0"
    "AddCompSlot3(CompLayout*)\0AddComps2()\0"
    "num\0InsertComps2(int)\0AddCompsT()\0"
    "AddCompsU(CompLayout*)\0Vl,c\0"
    "DeleteComp(QWidget*,CompLayout*)\0rs\0"
    "UpdateEC(std::vector<Rule>&)\0DeleteFrame()\0"
};

const QMetaObject FrameComp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FrameComp,
      qt_meta_data_FrameComp, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FrameComp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FrameComp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FrameComp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrameComp))
        return static_cast<void*>(const_cast< FrameComp*>(this));
    return QWidget::qt_metacast(_clname);
}

int FrameComp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: UpdateSizeSignal(); break;
        case 1: AddCompSlot((*reinterpret_cast< ExComp*(*)>(_a[1])),(*reinterpret_cast< FEComp*(*)>(_a[2]))); break;
        case 2: AddCompSlot1((*reinterpret_cast< FEComp*(*)>(_a[1]))); break;
        case 3: AddCompSlot2((*reinterpret_cast< CompLayout*(*)>(_a[1]))); break;
        case 4: AddCompSlot3((*reinterpret_cast< CompLayout*(*)>(_a[1]))); break;
        case 5: AddComps2(); break;
        case 6: InsertComps2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: AddCompsT(); break;
        case 8: AddCompsU((*reinterpret_cast< CompLayout*(*)>(_a[1]))); break;
        case 9: DeleteComp((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< CompLayout*(*)>(_a[2]))); break;
        case 10: UpdateEC((*reinterpret_cast< std::vector<Rule>(*)>(_a[1]))); break;
        case 11: DeleteFrame(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void FrameComp::UpdateSizeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE

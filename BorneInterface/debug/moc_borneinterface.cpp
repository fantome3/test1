/****************************************************************************
** Meta object code from reading C++ file 'borneinterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../borneinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'borneinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BorneInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      49,   15,   15,   15, 0x0a,
      77,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BorneInterface[] = {
    "BorneInterface\0\0slotLanceDialogueStationnement()\0"
    "slotLanceDialogueFontaine()\0"
    "slotLanceDialogueSupprimer()\0"
};

void BorneInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BorneInterface *_t = static_cast<BorneInterface *>(_o);
        switch (_id) {
        case 0: _t->slotLanceDialogueStationnement(); break;
        case 1: _t->slotLanceDialogueFontaine(); break;
        case 2: _t->slotLanceDialogueSupprimer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BorneInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BorneInterface::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BorneInterface,
      qt_meta_data_BorneInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BorneInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BorneInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BorneInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BorneInterface))
        return static_cast<void*>(const_cast< BorneInterface*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BorneInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'sg_mainwidget.h'
**
** Created: Fri Aug 3 18:21:13 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sg_mainwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sg_mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SG3DViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x09,
      48,   11,   11,   11, 0x09,
      77,   11,   11,   11, 0x09,
     104,   11,   11,   11, 0x09,
     137,   11,   11,   11, 0x09,
     170,   11,   11,   11, 0x09,
     197,   11,   11,   11, 0x09,
     223,   11,   11,   11, 0x09,
     250,   11,   11,   11, 0x09,
     282,   11,   11,   11, 0x09,
     310,   11,   11,   11, 0x09,
     340,   11,   11,   11, 0x09,
     374,   11,   11,   11, 0x09,
     409,   11,   11,   11, 0x09,
     437,   11,   11,   11, 0x09,
     465,   11,   11,   11, 0x09,
     492,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SG3DViewer[] = {
    "SG3DViewer\0\0mode\0setScreenMode(ScreenModeEnumH)\0"
    "on_mAtnImageOpen_triggered()\0"
    "on_mAtnDEMOpen_triggered()\0"
    "on_mAtnViewPointGrid_triggered()\0"
    "on_mAtnViewAnimation_triggered()\0"
    "on_mAtnSetting_triggered()\0"
    "on_mAtn3DOpen_triggered()\0"
    "on_mAtnViewPan_triggered()\0"
    "on_mAtnViewDistance_triggered()\0"
    "on_mAtnViewArea_triggered()\0"
    "on_mAtnViewVolume_triggered()\0"
    "on_mAtnTerrainProfile_triggered()\0"
    "on_mAtnViewSightRadial_triggered()\0"
    "on_mAtnZoomPrev_triggered()\0"
    "on_mAtnZoomNext_triggered()\0"
    "on_mAtnRefresh_triggered()\0onTimer()\0"
};

void SG3DViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SG3DViewer *_t = static_cast<SG3DViewer *>(_o);
        switch (_id) {
        case 0: _t->setScreenMode((*reinterpret_cast< ScreenModeEnumH(*)>(_a[1]))); break;
        case 1: _t->on_mAtnImageOpen_triggered(); break;
        case 2: _t->on_mAtnDEMOpen_triggered(); break;
        case 3: _t->on_mAtnViewPointGrid_triggered(); break;
        case 4: _t->on_mAtnViewAnimation_triggered(); break;
        case 5: _t->on_mAtnSetting_triggered(); break;
        case 6: _t->on_mAtn3DOpen_triggered(); break;
        case 7: _t->on_mAtnViewPan_triggered(); break;
        case 8: _t->on_mAtnViewDistance_triggered(); break;
        case 9: _t->on_mAtnViewArea_triggered(); break;
        case 10: _t->on_mAtnViewVolume_triggered(); break;
        case 11: _t->on_mAtnTerrainProfile_triggered(); break;
        case 12: _t->on_mAtnViewSightRadial_triggered(); break;
        case 13: _t->on_mAtnZoomPrev_triggered(); break;
        case 14: _t->on_mAtnZoomNext_triggered(); break;
        case 15: _t->on_mAtnRefresh_triggered(); break;
        case 16: _t->onTimer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SG3DViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SG3DViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SG3DViewer,
      qt_meta_data_SG3DViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SG3DViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SG3DViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SG3DViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SG3DViewer))
        return static_cast<void*>(const_cast< SG3DViewer*>(this));
    if (!strcmp(_clname, "Ui::GQManagerWidget"))
        return static_cast< Ui::GQManagerWidget*>(const_cast< SG3DViewer*>(this));
    if (!strcmp(_clname, "FeatureCanvasEvent"))
        return static_cast< FeatureCanvasEvent*>(const_cast< SG3DViewer*>(this));
    if (!strcmp(_clname, "MapEvent"))
        return static_cast< MapEvent*>(const_cast< SG3DViewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SG3DViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'taskscheduler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../taskscheduler.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taskscheduler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_TaskScheduler_t {
    uint offsetsAndSizes[12];
    char stringdata0[14];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[19];
    char stringdata5[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TaskScheduler_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TaskScheduler_t qt_meta_stringdata_TaskScheduler = {
    {
        QT_MOC_LITERAL(0, 13),  // "TaskScheduler"
        QT_MOC_LITERAL(14, 7),  // "addTask"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 10),  // "deleteTask"
        QT_MOC_LITERAL(34, 18),  // "updateCalendarDate"
        QT_MOC_LITERAL(53, 4)   // "date"
    },
    "TaskScheduler",
    "addTask",
    "",
    "deleteTask",
    "updateCalendarDate",
    "date"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TaskScheduler[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    1,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject TaskScheduler::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TaskScheduler.offsetsAndSizes,
    qt_meta_data_TaskScheduler,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TaskScheduler_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskScheduler, std::true_type>,
        // method 'addTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateCalendarDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>
    >,
    nullptr
} };

void TaskScheduler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskScheduler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addTask(); break;
        case 1: _t->deleteTask(); break;
        case 2: _t->updateCalendarDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *TaskScheduler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaskScheduler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TaskScheduler.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TaskScheduler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

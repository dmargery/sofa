/****************************************************************************
** Meta object code from reading C++ file 'myWindow.h'
**
** Created: Fri 9. May 13:41:33 2014
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../myWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_myWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

       0        // eod
};

static const char qt_meta_stringdata_myWindow[] = {
    "myWindow\0"
};

const QMetaObject myWindow::staticMetaObject = {
    { &myGLWidget::staticMetaObject, qt_meta_stringdata_myWindow,
      qt_meta_data_myWindow, 0 }
};

const QMetaObject *myWindow::metaObject() const
{
    return &staticMetaObject;
}

void *myWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_myWindow))
        return static_cast<void*>(const_cast< myWindow*>(this));
    return myGLWidget::qt_metacast(_clname);
}

int myWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = myGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
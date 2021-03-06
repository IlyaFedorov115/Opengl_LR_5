/****************************************************************************
** Meta object code from reading C++ file 'myglwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LR_1_Fedorov/myglwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myglwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyGlWidget_t {
    QByteArrayData data[20];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyGlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyGlWidget_t qt_meta_stringdata_MyGlWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MyGlWidget"
QT_MOC_LITERAL(1, 11, 12), // "setXRotation"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "angle"
QT_MOC_LITERAL(4, 31, 12), // "setYRotation"
QT_MOC_LITERAL(5, 44, 12), // "setZRotation"
QT_MOC_LITERAL(6, 57, 15), // "selectPrimitive"
QT_MOC_LITERAL(7, 73, 9), // "primitive"
QT_MOC_LITERAL(8, 83, 6), // "upView"
QT_MOC_LITERAL(9, 90, 8), // "downView"
QT_MOC_LITERAL(10, 99, 8), // "leftView"
QT_MOC_LITERAL(11, 108, 9), // "rightView"
QT_MOC_LITERAL(12, 118, 12), // "moveDistance"
QT_MOC_LITERAL(13, 131, 10), // "moveCloser"
QT_MOC_LITERAL(14, 142, 14), // "loadShaderFile"
QT_MOC_LITERAL(15, 157, 11), // "const char*"
QT_MOC_LITERAL(16, 169, 8), // "filePath"
QT_MOC_LITERAL(17, 178, 10), // "initShader"
QT_MOC_LITERAL(18, 189, 6), // "GLuint"
QT_MOC_LITERAL(19, 196, 4) // "type"

    },
    "MyGlWidget\0setXRotation\0\0angle\0"
    "setYRotation\0setZRotation\0selectPrimitive\0"
    "primitive\0upView\0downView\0leftView\0"
    "rightView\0moveDistance\0moveCloser\0"
    "loadShaderFile\0const char*\0filePath\0"
    "initShader\0GLuint\0type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyGlWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       5,    1,   80,    2, 0x0a /* Public */,
       6,    1,   83,    2, 0x0a /* Public */,
       8,    0,   86,    2, 0x0a /* Public */,
       9,    0,   87,    2, 0x0a /* Public */,
      10,    0,   88,    2, 0x0a /* Public */,
      11,    0,   89,    2, 0x0a /* Public */,
      12,    0,   90,    2, 0x0a /* Public */,
      13,    0,   91,    2, 0x0a /* Public */,
      14,    1,   92,    2, 0x0a /* Public */,
      17,    2,   95,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 15, 0x80000000 | 15,   16,
    0x80000000 | 18, 0x80000000 | 15, 0x80000000 | 18,   16,   19,

       0        // eod
};

void MyGlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyGlWidget *_t = static_cast<MyGlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setXRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setYRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setZRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->selectPrimitive((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->upView(); break;
        case 5: _t->downView(); break;
        case 6: _t->leftView(); break;
        case 7: _t->rightView(); break;
        case 8: _t->moveDistance(); break;
        case 9: _t->moveCloser(); break;
        case 10: { const char* _r = _t->loadShaderFile((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = std::move(_r); }  break;
        case 11: { GLuint _r = _t->initShader((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject MyGlWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_MyGlWidget.data,
      qt_meta_data_MyGlWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyGlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyGlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyGlWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(this);
    return QGLWidget::qt_metacast(_clname);
}

int MyGlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

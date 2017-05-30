/****************************************************************************
** Meta object code from reading C++ file 'gameloop.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RouteRunnerProject/gameloop.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameloop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameLoop_t {
    QByteArrayData data[21];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameLoop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameLoop_t qt_meta_stringdata_GameLoop = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GameLoop"
QT_MOC_LITERAL(1, 9, 14), // "SIG_UserUpdate"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "userName"
QT_MOC_LITERAL(4, 34, 5), // "score"
QT_MOC_LITERAL(5, 40, 27), // "SIG_RunnerMovementInitiated"
QT_MOC_LITERAL(6, 68, 11), // "std::string"
QT_MOC_LITERAL(7, 80, 8), // "movement"
QT_MOC_LITERAL(8, 89, 19), // "SIG_NextGameReached"
QT_MOC_LITERAL(9, 109, 12), // "scoredPoints"
QT_MOC_LITERAL(10, 122, 11), // "SIG_EndGame"
QT_MOC_LITERAL(11, 134, 8), // "username"
QT_MOC_LITERAL(12, 143, 8), // "endScore"
QT_MOC_LITERAL(13, 152, 19), // "SIG_ClosingGraphics"
QT_MOC_LITERAL(14, 172, 6), // "SetKey"
QT_MOC_LITERAL(15, 179, 8), // "keyValue"
QT_MOC_LITERAL(16, 188, 9), // "StartLoop"
QT_MOC_LITERAL(17, 198, 6), // "update"
QT_MOC_LITERAL(18, 205, 16), // "updateAfterInput"
QT_MOC_LITERAL(19, 222, 8), // "makeUser"
QT_MOC_LITERAL(20, 231, 10) // "updateUser"

    },
    "GameLoop\0SIG_UserUpdate\0\0userName\0"
    "score\0SIG_RunnerMovementInitiated\0"
    "std::string\0movement\0SIG_NextGameReached\0"
    "scoredPoints\0SIG_EndGame\0username\0"
    "endScore\0SIG_ClosingGraphics\0SetKey\0"
    "keyValue\0StartLoop\0update\0updateAfterInput\0"
    "makeUser\0updateUser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameLoop[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    1,   74,    2, 0x06 /* Public */,
       8,    1,   77,    2, 0x06 /* Public */,
      10,    2,   80,    2, 0x06 /* Public */,
      13,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   86,    2, 0x0a /* Public */,
      16,    0,   89,    2, 0x0a /* Public */,
      17,    0,   90,    2, 0x0a /* Public */,
      18,    1,   91,    2, 0x0a /* Public */,
      19,    2,   94,    2, 0x0a /* Public */,
      20,    1,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   11,   12,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void GameLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameLoop *_t = static_cast<GameLoop *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SIG_UserUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SIG_RunnerMovementInitiated((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->SIG_NextGameReached((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SIG_EndGame((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->SIG_ClosingGraphics(); break;
        case 5: _t->SetKey((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 6: _t->StartLoop(); break;
        case 7: _t->update(); break;
        case 8: _t->updateAfterInput((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 9: _t->makeUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->updateUser((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameLoop::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameLoop::SIG_UserUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GameLoop::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameLoop::SIG_RunnerMovementInitiated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GameLoop::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameLoop::SIG_NextGameReached)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GameLoop::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameLoop::SIG_EndGame)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (GameLoop::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameLoop::SIG_ClosingGraphics)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject GameLoop::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GameLoop.data,
      qt_meta_data_GameLoop,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GameLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GameLoop.stringdata0))
        return static_cast<void*>(const_cast< GameLoop*>(this));
    return QObject::qt_metacast(_clname);
}

int GameLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GameLoop::SIG_UserUpdate(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameLoop::SIG_RunnerMovementInitiated(std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GameLoop::SIG_NextGameReached(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GameLoop::SIG_EndGame(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GameLoop::SIG_ClosingGraphics()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

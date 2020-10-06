QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# 应用程序名称
TARGET = cute

# 版本号
VERSION = 1.0.0

# 语言
# 0x0004 表示 简体中文
# 详见 https://msdn.microsoft.com/en-us/library/dd318693%28vs.85%29.aspx
# RC_LANG = 0x0004

# 公司名
QMAKE_TARGET_COMPANY = Cute
# 产品名称
QMAKE_TARGET_PRODUCT = CuteEditor
# 详细描述
QMAKE_TARGET_DESCRIPTION = Cute Editor
# 版权
QMAKE_TARGET_COPYRIGHT = Copyright(C) 2020 Cute
# 程序图标
RC_ICONS = app.ico

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    src/editor/cute_window.cpp \
    src/utility/utility.cpp \

HEADERS += \
    src/editor/cute_window.h \
    src/utility/utility.h \

FORMS += \
    src/editor/cute_window.ui \

TRANSLATIONS += \
    config/language/cute_editor_zh_CN.ts  \

INCLUDEPATH += \
    ./src/editor \
    ./src/utility \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources/res.qrc \


DEFINES += \
    APP_VERSION=\\\"$$VERSION\\\" \
    APP_QMAKE_TARGET_COMPANY=\\\"$$QMAKE_TARGET_COMPANY\\\" \
    APP_QMAKE_TARGET_PRODUCT=\\\"$$QMAKE_TARGET_PRODUCT\\\" \



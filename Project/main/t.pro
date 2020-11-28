QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog.cpp \
    dialog_deposit.cpp \
    dialog_details.cpp \
    dialog_email_change.cpp \
    dialog_mobile_change.cpp \
    dialog_pin_change.cpp \
    dialog_pre_trans.cpp \
    dialog_transfer.cpp \
    dialog_withdraw.cpp \
    main.cpp \
    mainwindow.cpp \
    libmysql.lib

HEADERS += \
    dialog.h \
    dialog_deposit.h \
    dialog_details.h \
    dialog_email_change.h \
    dialog_mobile_change.h \
    dialog_pin_change.h \
    dialog_pre_trans.h \
    dialog_transfer.h \
    dialog_withdraw.h \
    mainwindow.h \
    my_alloc.h \
    my_list.h \
    mysql_com.h \
    mysql_time.h \
    mysql_version.h \
    mysql.h \
    typelib.h \
    Customer.h \
    database_funs.h

FORMS += \
    dialog.ui \
    dialog_deposit.ui \
    dialog_details.ui \
    dialog_email_change.ui \
    dialog_mobile_change.ui \
    dialog_pin_change.ui \
    dialog_pre_trans.ui \
    dialog_transfer.ui \
    dialog_withdraw.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

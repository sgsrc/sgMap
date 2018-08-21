/********************************************************************************
** Form generated from reading UI file 'sg_menubasewidget.ui'
**
** Created: Sat Aug 18 10:05:33 2018
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SG_MENUBASEWIDGET_H
#define UI_SG_MENUBASEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_mDlgMenubase
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *mDlgMenubase)
    {
        if (mDlgMenubase->objectName().isEmpty())
            mDlgMenubase->setObjectName(QString::fromUtf8("mDlgMenubase"));
        mDlgMenubase->resize(446, 337);
        gridLayout = new QGridLayout(mDlgMenubase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        okButton = new QPushButton(mDlgMenubase);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        vboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(mDlgMenubase);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        vboxLayout->addWidget(cancelButton);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);


        retranslateUi(mDlgMenubase);
        QObject::connect(okButton, SIGNAL(clicked()), mDlgMenubase, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), mDlgMenubase, SLOT(reject()));

        QMetaObject::connectSlotsByName(mDlgMenubase);
    } // setupUi

    void retranslateUi(QDialog *mDlgMenubase)
    {
        mDlgMenubase->setWindowTitle(QApplication::translate("mDlgMenubase", "Menubase dialog", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("mDlgMenubase", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("mDlgMenubase", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mDlgMenubase: public Ui_mDlgMenubase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SG_MENUBASEWIDGET_H

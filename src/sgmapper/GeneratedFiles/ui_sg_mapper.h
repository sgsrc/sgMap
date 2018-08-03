/********************************************************************************
** Form generated from reading UI file 'sg_mapper.ui'
**
** Created: Sat Jun 30 01:30:17 2018
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SG_MAPPER_H
#define UI_SG_MAPPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>
#include "sg_canvaswidget.h"

QT_BEGIN_NAMESPACE

class Ui_GQManagerWidget
{
public:
    QAction *mActOpen;
    QAction *mActPrint;
    QAction *mActUpload;
    QAction *mActSetting;
    QAction *mAtnRasterAnalyBuildTMS;
    QAction *mActDownload;
    QAction *mAtnRasterAnalyBuildOverview;
    QAction *actionAbout_AAIS;
    QAction *actionPan;
    QAction *mAtnViewPan;
    QAction *mAtnViewDistance;
    QAction *mAtnViewArea;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    SGCanvasWidget *mWgtApp;

    void setupUi(QMainWindow *GQManagerWidget)
    {
        if (GQManagerWidget->objectName().isEmpty())
            GQManagerWidget->setObjectName(QString::fromUtf8("GQManagerWidget"));
        GQManagerWidget->resize(1010, 753);
        GQManagerWidget->setIconSize(QSize(32, 32));
        mActOpen = new QAction(GQManagerWidget);
        mActOpen->setObjectName(QString::fromUtf8("mActOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/File/4-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActOpen->setIcon(icon);
        mActPrint = new QAction(GQManagerWidget);
        mActPrint->setObjectName(QString::fromUtf8("mActPrint"));
        mActPrint->setCheckable(false);
        mActPrint->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/File/mAtnFilePrint_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActPrint->setIcon(icon1);
        mActPrint->setIconVisibleInMenu(true);
        mActUpload = new QAction(GQManagerWidget);
        mActUpload->setObjectName(QString::fromUtf8("mActUpload"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/File/upload48.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActUpload->setIcon(icon2);
        mActSetting = new QAction(GQManagerWidget);
        mActSetting->setObjectName(QString::fromUtf8("mActSetting"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/File/3-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActSetting->setIcon(icon3);
        mAtnRasterAnalyBuildTMS = new QAction(GQManagerWidget);
        mAtnRasterAnalyBuildTMS->setObjectName(QString::fromUtf8("mAtnRasterAnalyBuildTMS"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/File/mAtnViewTiling.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnRasterAnalyBuildTMS->setIcon(icon4);
        mActDownload = new QAction(GQManagerWidget);
        mActDownload->setObjectName(QString::fromUtf8("mActDownload"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/File/download48.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActDownload->setIcon(icon5);
        mAtnRasterAnalyBuildOverview = new QAction(GQManagerWidget);
        mAtnRasterAnalyBuildOverview->setObjectName(QString::fromUtf8("mAtnRasterAnalyBuildOverview"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/File/mAtnViewOverView.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnRasterAnalyBuildOverview->setIcon(icon6);
        actionAbout_AAIS = new QAction(GQManagerWidget);
        actionAbout_AAIS->setObjectName(QString::fromUtf8("actionAbout_AAIS"));
        actionPan = new QAction(GQManagerWidget);
        actionPan->setObjectName(QString::fromUtf8("actionPan"));
        mAtnViewPan = new QAction(GQManagerWidget);
        mAtnViewPan->setObjectName(QString::fromUtf8("mAtnViewPan"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/File/mAtnViewPan.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnViewPan->setIcon(icon7);
        mAtnViewDistance = new QAction(GQManagerWidget);
        mAtnViewDistance->setObjectName(QString::fromUtf8("mAtnViewDistance"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/File/mAtnViewDistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnViewDistance->setIcon(icon8);
        mAtnViewArea = new QAction(GQManagerWidget);
        mAtnViewArea->setObjectName(QString::fromUtf8("mAtnViewArea"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/File/mAtnViewArea.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnViewArea->setIcon(icon9);
        centralwidget = new QWidget(GQManagerWidget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mWgtApp = new SGCanvasWidget(centralwidget);
        mWgtApp->setObjectName(QString::fromUtf8("mWgtApp"));

        gridLayout->addWidget(mWgtApp, 0, 0, 1, 1);

        GQManagerWidget->setCentralWidget(centralwidget);

        retranslateUi(GQManagerWidget);

        QMetaObject::connectSlotsByName(GQManagerWidget);
    } // setupUi

    void retranslateUi(QMainWindow *GQManagerWidget)
    {
        GQManagerWidget->setWindowTitle(QApplication::translate("GQManagerWidget", "sgMapper", 0, QApplication::UnicodeUTF8));
        mActOpen->setText(QApplication::translate("GQManagerWidget", "Open...", 0, QApplication::UnicodeUTF8));
        mActPrint->setText(QApplication::translate("GQManagerWidget", "Print...", 0, QApplication::UnicodeUTF8));
        mActUpload->setText(QApplication::translate("GQManagerWidget", "Upload...", 0, QApplication::UnicodeUTF8));
        mActSetting->setText(QApplication::translate("GQManagerWidget", "Setting...", 0, QApplication::UnicodeUTF8));
        mAtnRasterAnalyBuildTMS->setText(QApplication::translate("GQManagerWidget", "Tiling map...", 0, QApplication::UnicodeUTF8));
        mAtnRasterAnalyBuildTMS->setIconText(QApplication::translate("GQManagerWidget", "Tiling", 0, QApplication::UnicodeUTF8));
        mActDownload->setText(QApplication::translate("GQManagerWidget", "Download...", 0, QApplication::UnicodeUTF8));
        mAtnRasterAnalyBuildOverview->setText(QApplication::translate("GQManagerWidget", "Build pyramids overviews...", 0, QApplication::UnicodeUTF8));
        mAtnRasterAnalyBuildOverview->setIconText(QApplication::translate("GQManagerWidget", "Overviews", 0, QApplication::UnicodeUTF8));
        actionAbout_AAIS->setText(QApplication::translate("GQManagerWidget", "About AAIIS", 0, QApplication::UnicodeUTF8));
        actionPan->setText(QApplication::translate("GQManagerWidget", "pan...", 0, QApplication::UnicodeUTF8));
        mAtnViewPan->setText(QApplication::translate("GQManagerWidget", "Pan...", 0, QApplication::UnicodeUTF8));
        mAtnViewDistance->setText(QApplication::translate("GQManagerWidget", "Distance...", 0, QApplication::UnicodeUTF8));
        mAtnViewArea->setText(QApplication::translate("GQManagerWidget", "Area...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GQManagerWidget: public Ui_GQManagerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SG_MAPPER_H

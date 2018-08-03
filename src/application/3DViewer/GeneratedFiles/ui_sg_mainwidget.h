/********************************************************************************
** Form generated from reading UI file 'sg_mainwidget.ui'
**
** Created: Fri Aug 3 18:21:13 2018
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SG_MAINWIDGET_H
#define UI_SG_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include <sg_canvaswidget.h>

QT_BEGIN_NAMESPACE

class Ui_GQManagerWidget
{
public:
    QAction *mAtnImageOpen;
    QAction *mAtnSearch;
    QAction *mAtnUpload;
    QAction *mAtnSetting;
    QAction *mActExtractBoundary;
    QAction *mAtnDownload;
    QAction *mActLocMatch;
    QAction *mAtnSave;
    QAction *mAtnViewPan;
    QAction *mAtnZoomIn;
    QAction *mAtnZoomOut;
    QAction *mAtnZoomToLayer;
    QAction *mAtnZoomPrev;
    QAction *mAtnZoomNext;
    QAction *mAtnRefresh;
    QAction *mAtnViewDistance;
    QAction *mAtnViewArea;
    QAction *mAtnViewVolumn;
    QAction *mAtnTerrainProfile;
    QAction *mAtnViewSightLinear;
    QAction *mAtnViewSightRadial;
    QAction *mAtnViewSightPolyhedral;
    QAction *mAtnImport;
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *mAtnDEMOpen;
    QAction *mAtn3DOpen;
    QAction *mAtnViewPointGrid;
    QAction *mAtnViewAnimation;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    SGCanvasWidget *mWgtApp;
    QMenuBar *mMnbMain;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuView;
    QMenu *menuZoom;
    QMenu *menuMeasurement;
    QMenu *menu3D_Sight;
    QToolBar *mTlbFile;
    QToolBar *mTlbView;
    QToolBar *toolBar;

    void setupUi(QMainWindow *GQManagerWidget)
    {
        if (GQManagerWidget->objectName().isEmpty())
            GQManagerWidget->setObjectName(QString::fromUtf8("GQManagerWidget"));
        GQManagerWidget->resize(837, 637);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/File/application.ico"), QSize(), QIcon::Normal, QIcon::Off);
        GQManagerWidget->setWindowIcon(icon);
        GQManagerWidget->setIconSize(QSize(32, 32));
        mAtnImageOpen = new QAction(GQManagerWidget);
        mAtnImageOpen->setObjectName(QString::fromUtf8("mAtnImageOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/File/open_image.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnImageOpen->setIcon(icon1);
        mAtnSearch = new QAction(GQManagerWidget);
        mAtnSearch->setObjectName(QString::fromUtf8("mAtnSearch"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/File/1-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnSearch->setIcon(icon2);
        mAtnUpload = new QAction(GQManagerWidget);
        mAtnUpload->setObjectName(QString::fromUtf8("mAtnUpload"));
        mAtnUpload->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/File/upload.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnUpload->setIcon(icon3);
        mAtnSetting = new QAction(GQManagerWidget);
        mAtnSetting->setObjectName(QString::fromUtf8("mAtnSetting"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/File/3-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnSetting->setIcon(icon4);
        mActExtractBoundary = new QAction(GQManagerWidget);
        mActExtractBoundary->setObjectName(QString::fromUtf8("mActExtractBoundary"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/File/boundary.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActExtractBoundary->setIcon(icon5);
        mAtnDownload = new QAction(GQManagerWidget);
        mAtnDownload->setObjectName(QString::fromUtf8("mAtnDownload"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/File/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnDownload->setIcon(icon6);
        mActLocMatch = new QAction(GQManagerWidget);
        mActLocMatch->setObjectName(QString::fromUtf8("mActLocMatch"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/File/locationmatch.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActLocMatch->setIcon(icon7);
        mAtnSave = new QAction(GQManagerWidget);
        mAtnSave->setObjectName(QString::fromUtf8("mAtnSave"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/File/48_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnSave->setIcon(icon8);
        mAtnViewPan = new QAction(GQManagerWidget);
        mAtnViewPan->setObjectName(QString::fromUtf8("mAtnViewPan"));
        mAtnViewPan->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/View/mAtnViewPan.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnViewPan->setIcon(icon9);
        mAtnZoomIn = new QAction(GQManagerWidget);
        mAtnZoomIn->setObjectName(QString::fromUtf8("mAtnZoomIn"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/View/mAtnViewZoomInRect_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnZoomIn->setIcon(icon10);
        mAtnZoomOut = new QAction(GQManagerWidget);
        mAtnZoomOut->setObjectName(QString::fromUtf8("mAtnZoomOut"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/View/mAtnViewZoomOutRect_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnZoomOut->setIcon(icon11);
        mAtnZoomToLayer = new QAction(GQManagerWidget);
        mAtnZoomToLayer->setObjectName(QString::fromUtf8("mAtnZoomToLayer"));
        mAtnZoomPrev = new QAction(GQManagerWidget);
        mAtnZoomPrev->setObjectName(QString::fromUtf8("mAtnZoomPrev"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/View/mAtnViewZoomPrev_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnZoomPrev->setIcon(icon12);
        mAtnZoomNext = new QAction(GQManagerWidget);
        mAtnZoomNext->setObjectName(QString::fromUtf8("mAtnZoomNext"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/View/mAtnViewZoomNext_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnZoomNext->setIcon(icon13);
        mAtnRefresh = new QAction(GQManagerWidget);
        mAtnRefresh->setObjectName(QString::fromUtf8("mAtnRefresh"));
        mAtnViewDistance = new QAction(GQManagerWidget);
        mAtnViewDistance->setObjectName(QString::fromUtf8("mAtnViewDistance"));
        mAtnViewDistance->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/View/mAtnViewDistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnViewDistance->setIcon(icon14);
        mAtnViewArea = new QAction(GQManagerWidget);
        mAtnViewArea->setObjectName(QString::fromUtf8("mAtnViewArea"));
        mAtnViewArea->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/View/mAtnViewArea.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnViewArea->setIcon(icon15);
        mAtnViewVolumn = new QAction(GQManagerWidget);
        mAtnViewVolumn->setObjectName(QString::fromUtf8("mAtnViewVolumn"));
        mAtnViewVolumn->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/View/mAtnViewVolume.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnViewVolumn->setIcon(icon16);
        mAtnTerrainProfile = new QAction(GQManagerWidget);
        mAtnTerrainProfile->setObjectName(QString::fromUtf8("mAtnTerrainProfile"));
        mAtnTerrainProfile->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/View/mAtnViewSectionalPlan.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnTerrainProfile->setIcon(icon17);
        mAtnViewSightLinear = new QAction(GQManagerWidget);
        mAtnViewSightLinear->setObjectName(QString::fromUtf8("mAtnViewSightLinear"));
        mAtnViewSightLinear->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/View/mAtnViewSightLinear.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnViewSightLinear->setIcon(icon18);
        mAtnViewSightRadial = new QAction(GQManagerWidget);
        mAtnViewSightRadial->setObjectName(QString::fromUtf8("mAtnViewSightRadial"));
        mAtnViewSightRadial->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/View/mAtnViewSightCircle.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnViewSightRadial->setIcon(icon19);
        mAtnViewSightPolyhedral = new QAction(GQManagerWidget);
        mAtnViewSightPolyhedral->setObjectName(QString::fromUtf8("mAtnViewSightPolyhedral"));
        mAtnViewSightPolyhedral->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/View/mAtnViewSightPoly.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnViewSightPolyhedral->setIcon(icon20);
        mAtnImport = new QAction(GQManagerWidget);
        mAtnImport->setObjectName(QString::fromUtf8("mAtnImport"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/File/48.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnImport->setIcon(icon21);
        action = new QAction(GQManagerWidget);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(GQManagerWidget);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(GQManagerWidget);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(GQManagerWidget);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(GQManagerWidget);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(GQManagerWidget);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        mAtnDEMOpen = new QAction(GQManagerWidget);
        mAtnDEMOpen->setObjectName(QString::fromUtf8("mAtnDEMOpen"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/File/open_dem.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnDEMOpen->setIcon(icon22);
        mAtn3DOpen = new QAction(GQManagerWidget);
        mAtn3DOpen->setObjectName(QString::fromUtf8("mAtn3DOpen"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/File/open_3d.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtn3DOpen->setIcon(icon23);
        mAtnViewPointGrid = new QAction(GQManagerWidget);
        mAtnViewPointGrid->setObjectName(QString::fromUtf8("mAtnViewPointGrid"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/View/mAtnViewPointGrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnViewPointGrid->setIcon(icon24);
        mAtnViewAnimation = new QAction(GQManagerWidget);
        mAtnViewAnimation->setObjectName(QString::fromUtf8("mAtnViewAnimation"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/View/mAtnViewAnimation.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAtnViewAnimation->setIcon(icon25);
        centralwidget = new QWidget(GQManagerWidget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mWgtApp = new SGCanvasWidget(centralwidget);
        mWgtApp->setObjectName(QString::fromUtf8("mWgtApp"));

        gridLayout->addWidget(mWgtApp, 0, 0, 1, 1);

        GQManagerWidget->setCentralWidget(centralwidget);
        mMnbMain = new QMenuBar(GQManagerWidget);
        mMnbMain->setObjectName(QString::fromUtf8("mMnbMain"));
        mMnbMain->setGeometry(QRect(0, 0, 837, 36));
        menuFile = new QMenu(mMnbMain);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(mMnbMain);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuView = new QMenu(mMnbMain);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuZoom = new QMenu(menuView);
        menuZoom->setObjectName(QString::fromUtf8("menuZoom"));
        menuMeasurement = new QMenu(menuView);
        menuMeasurement->setObjectName(QString::fromUtf8("menuMeasurement"));
        menu3D_Sight = new QMenu(menuView);
        menu3D_Sight->setObjectName(QString::fromUtf8("menu3D_Sight"));
        GQManagerWidget->setMenuBar(mMnbMain);
        mTlbFile = new QToolBar(GQManagerWidget);
        mTlbFile->setObjectName(QString::fromUtf8("mTlbFile"));
        mTlbFile->setIconSize(QSize(48, 48));
        mTlbFile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GQManagerWidget->addToolBar(Qt::TopToolBarArea, mTlbFile);
        mTlbView = new QToolBar(GQManagerWidget);
        mTlbView->setObjectName(QString::fromUtf8("mTlbView"));
        mTlbView->setIconSize(QSize(48, 48));
        mTlbView->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GQManagerWidget->addToolBar(Qt::TopToolBarArea, mTlbView);
        toolBar = new QToolBar(GQManagerWidget);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(48, 48));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GQManagerWidget->addToolBar(Qt::TopToolBarArea, toolBar);

        mMnbMain->addAction(menuFile->menuAction());
        mMnbMain->addAction(menuView->menuAction());
        mMnbMain->addAction(menuHelp->menuAction());
        menuFile->addAction(mAtnImageOpen);
        menuFile->addAction(mAtnSetting);
        menuView->addAction(mAtnViewPan);
        menuView->addAction(menuZoom->menuAction());
        menuView->addAction(menuMeasurement->menuAction());
        menuView->addAction(menu3D_Sight->menuAction());
        menuView->addAction(mAtnTerrainProfile);
        menuView->addAction(mAtnViewPointGrid);
        menuView->addAction(mAtnViewAnimation);
        menuZoom->addAction(mAtnZoomPrev);
        menuZoom->addAction(mAtnZoomNext);
        menuZoom->addAction(mAtnRefresh);
        menuZoom->addSeparator();
        menuZoom->addAction(mAtnZoomIn);
        menuZoom->addAction(mAtnZoomOut);
        menuZoom->addAction(mAtnZoomToLayer);
        menuMeasurement->addAction(mAtnViewDistance);
        menuMeasurement->addAction(mAtnViewArea);
        menuMeasurement->addAction(mAtnViewVolumn);
        menu3D_Sight->addAction(mAtnViewSightLinear);
        menu3D_Sight->addAction(mAtnViewSightPolyhedral);
        mTlbFile->addAction(mAtnImageOpen);
        mTlbFile->addAction(mAtnDEMOpen);
        mTlbFile->addAction(mAtn3DOpen);
        mTlbView->addAction(mAtnViewPan);
        mTlbView->addAction(mAtnViewDistance);
        mTlbView->addAction(mAtnViewArea);
        mTlbView->addAction(mAtnViewVolumn);
        mTlbView->addAction(mAtnTerrainProfile);
        mTlbView->addSeparator();
        mTlbView->addAction(mAtnViewSightRadial);
        mTlbView->addAction(mAtnViewPointGrid);
        mTlbView->addAction(mAtnViewAnimation);
        toolBar->addAction(mAtnSetting);

        retranslateUi(GQManagerWidget);

        QMetaObject::connectSlotsByName(GQManagerWidget);
    } // setupUi

    void retranslateUi(QMainWindow *GQManagerWidget)
    {
        GQManagerWidget->setWindowTitle(QApplication::translate("GQManagerWidget", "Field 3D Viewer", 0, QApplication::UnicodeUTF8));
        mAtnImageOpen->setText(QApplication::translate("GQManagerWidget", "Image Open...", 0, QApplication::UnicodeUTF8));
        mAtnSearch->setText(QApplication::translate("GQManagerWidget", "Search...", 0, QApplication::UnicodeUTF8));
        mAtnUpload->setText(QApplication::translate("GQManagerWidget", "Upload...", 0, QApplication::UnicodeUTF8));
        mAtnSetting->setText(QApplication::translate("GQManagerWidget", "Setting", 0, QApplication::UnicodeUTF8));
        mActExtractBoundary->setText(QApplication::translate("GQManagerWidget", "Extract boundary...", 0, QApplication::UnicodeUTF8));
        mActExtractBoundary->setIconText(QApplication::translate("GQManagerWidget", "Extract", 0, QApplication::UnicodeUTF8));
        mAtnDownload->setText(QApplication::translate("GQManagerWidget", "Download...", 0, QApplication::UnicodeUTF8));
        mActLocMatch->setText(QApplication::translate("GQManagerWidget", "Location match...", 0, QApplication::UnicodeUTF8));
        mActLocMatch->setIconText(QApplication::translate("GQManagerWidget", "Match", 0, QApplication::UnicodeUTF8));
        mAtnSave->setText(QApplication::translate("GQManagerWidget", "Save", 0, QApplication::UnicodeUTF8));
        mAtnViewPan->setText(QApplication::translate("GQManagerWidget", "Pan", 0, QApplication::UnicodeUTF8));
        mAtnZoomIn->setText(QApplication::translate("GQManagerWidget", "Zoom In", 0, QApplication::UnicodeUTF8));
        mAtnZoomOut->setText(QApplication::translate("GQManagerWidget", "Zoom Out", 0, QApplication::UnicodeUTF8));
        mAtnZoomToLayer->setText(QApplication::translate("GQManagerWidget", "Zoom to Selected Layer", 0, QApplication::UnicodeUTF8));
        mAtnZoomPrev->setText(QApplication::translate("GQManagerWidget", "Zoom Previous", 0, QApplication::UnicodeUTF8));
        mAtnZoomNext->setText(QApplication::translate("GQManagerWidget", "Zoom Next", 0, QApplication::UnicodeUTF8));
        mAtnRefresh->setText(QApplication::translate("GQManagerWidget", "Refresh", 0, QApplication::UnicodeUTF8));
        mAtnViewDistance->setText(QApplication::translate("GQManagerWidget", "Distance", 0, QApplication::UnicodeUTF8));
        mAtnViewArea->setText(QApplication::translate("GQManagerWidget", "Area", 0, QApplication::UnicodeUTF8));
        mAtnViewVolumn->setText(QApplication::translate("GQManagerWidget", "Volumn", 0, QApplication::UnicodeUTF8));
        mAtnTerrainProfile->setText(QApplication::translate("GQManagerWidget", "Terrain Profile", 0, QApplication::UnicodeUTF8));
        mAtnViewSightLinear->setText(QApplication::translate("GQManagerWidget", "Linear", 0, QApplication::UnicodeUTF8));
        mAtnViewSightRadial->setText(QApplication::translate("GQManagerWidget", "Radial", 0, QApplication::UnicodeUTF8));
        mAtnViewSightPolyhedral->setText(QApplication::translate("GQManagerWidget", "Polyhedral", 0, QApplication::UnicodeUTF8));
        mAtnImport->setText(QApplication::translate("GQManagerWidget", "Import...", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("GQManagerWidget", "\354\202\254\354\232\251\354\236\220\352\264\200\353\246\254", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("GQManagerWidget", "\354\202\254\354\232\251\354\236\220 \352\264\200\353\246\254", 0, QApplication::UnicodeUTF8));
        action_3->setText(QApplication::translate("GQManagerWidget", "\354\230\201\354\203\201 \352\264\200\353\246\254", 0, QApplication::UnicodeUTF8));
        action_4->setText(QApplication::translate("GQManagerWidget", "\354\230\201\354\203\201 \354\235\264\353\240\245 \352\264\200\353\246\254", 0, QApplication::UnicodeUTF8));
        action_5->setText(QApplication::translate("GQManagerWidget", "\354\236\254\355\225\264 \353\266\204\354\204\235", 0, QApplication::UnicodeUTF8));
        action_6->setText(QApplication::translate("GQManagerWidget", "\354\205\213\355\214\205", 0, QApplication::UnicodeUTF8));
        mAtnDEMOpen->setText(QApplication::translate("GQManagerWidget", "DEM Open...", 0, QApplication::UnicodeUTF8));
        mAtn3DOpen->setText(QApplication::translate("GQManagerWidget", "3D Open...", 0, QApplication::UnicodeUTF8));
        mAtnViewPointGrid->setText(QApplication::translate("GQManagerWidget", "Z Point Grid", 0, QApplication::UnicodeUTF8));
        mAtnViewPointGrid->setIconText(QApplication::translate("GQManagerWidget", "Point Grid", 0, QApplication::UnicodeUTF8));
        mAtnViewAnimation->setText(QApplication::translate("GQManagerWidget", "Animation", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("GQManagerWidget", "File(&F)", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("GQManagerWidget", "Help(&H)", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("GQManagerWidget", "View(&V)", 0, QApplication::UnicodeUTF8));
        menuZoom->setTitle(QApplication::translate("GQManagerWidget", "Zoom", 0, QApplication::UnicodeUTF8));
        menuMeasurement->setTitle(QApplication::translate("GQManagerWidget", "Measurement", 0, QApplication::UnicodeUTF8));
        menu3D_Sight->setTitle(QApplication::translate("GQManagerWidget", "3D Sight", 0, QApplication::UnicodeUTF8));
        mTlbFile->setWindowTitle(QApplication::translate("GQManagerWidget", "File Toolbar", 0, QApplication::UnicodeUTF8));
        mTlbView->setWindowTitle(QApplication::translate("GQManagerWidget", "View Toolbar", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("GQManagerWidget", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GQManagerWidget: public Ui_GQManagerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SG_MAINWIDGET_H

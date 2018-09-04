/********************************************************************************
** Form generated from reading UI file 'imagProv2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGPROV2_H
#define UI_IMAGPROV2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imagProv2Class
{
public:
    QAction *actionExit;
    QAction *actionProject1;
    QAction *actionProject2;
    QAction *actionProject3;
    QAction *actionProject4;
    QAction *actionProject5;
    QAction *actionOpen;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *hist;
    QPushButton *otsu;
    QPushButton *entropy;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QSplitter *splitter_3;
    QSplitter *splitter_2;
    QSpinBox *spinBox;
    QSlider *thresSlider;
    QSplitter *splitter;
    QLabel *inImage;
    QLabel *outImage;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QSplitter *splitter_4;
    QLabel *outImage_2;
    QLabel *outImage_3;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *page_2;
    QSplitter *splitter_5;
    QLabel *inImage_2;
    QLabel *convOutLabel;
    QSplitter *splitter_6;
    QLabel *gaussOutLabel;
    QLabel *normalOutLabel;
    QLabel *inText_2;
    QLabel *convText;
    QLabel *convText_2;
    QLabel *convText_3;
    QGroupBox *groupBox_3;
    QPushButton *robButton;
    QPushButton *preButton;
    QPushButton *sobelButton;
    QPushButton *gaussButton;
    QPushButton *medianButton;
    QGroupBox *groupBox_4;
    QPushButton *filterButton;
    QLineEdit *tableR;
    QLineEdit *tableC;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *generateTable;
    QGroupBox *groupBox_10;
    QTableWidget *optWidget;
    QWidget *page_3;
    QWidget *layoutWidget_3;
    QGridLayout *displayLayout_31;
    QSplitter *splitter_8;
    QLabel *inImage_3;
    QLabel *biOpOut;
    QLabel *inText_3;
    QLabel *biOperatorText;
    QWidget *layoutWidget_4;
    QGridLayout *displayLayout_32;
    QSplitter *splitter_9;
    QLabel *DSOut;
    QLabel *skeleOut;
    QLabel *DSText;
    QLabel *skeleText;
    QGroupBox *groupBox;
    QPushButton *bwDilate;
    QPushButton *bwErode;
    QPushButton *bwOpen;
    QPushButton *bwClose;
    QLineEdit *SEtableC;
    QLabel *label_7;
    QLineEdit *SEtableR;
    QLabel *label_8;
    QPushButton *seButton;
    QLabel *label_9;
    QLineEdit *anchorX;
    QLineEdit *anchorY;
    QLabel *label_10;
    QLabel *label_11;
    QGroupBox *groupBox_2;
    QPushButton *DSButton;
    QPushButton *skeleButton;
    QPushButton *skeleRestorButton;
    QGroupBox *groupBox_9;
    QTableWidget *SEWidget;
    QWidget *page_4;
    QWidget *layoutWidget_5;
    QGridLayout *displayLayout_33;
    QSplitter *splitter_10;
    QLabel *inImage_4;
    QLabel *grayOpOut;
    QLabel *inText_4;
    QLabel *biOperatorText_2;
    QWidget *layoutWidget_6;
    QGridLayout *displayLayout_34;
    QSplitter *splitter_11;
    QLabel *grayOpenShow;
    QLabel *grayCloseShow;
    QLabel *inText_5;
    QLabel *biOperatorText_3;
    QGroupBox *groupBox_5;
    QPushButton *grayDilate;
    QPushButton *grayErode;
    QPushButton *grayOpen;
    QPushButton *grayClose;
    QLineEdit *SEtableC_2;
    QLabel *label_12;
    QLineEdit *SEtableR_2;
    QLabel *label_13;
    QPushButton *seButton_2;
    QLabel *label_14;
    QLineEdit *anchorX_2;
    QLineEdit *anchorY_2;
    QLabel *label_15;
    QLabel *label_16;
    QGroupBox *groupBox_8;
    QTableWidget *SEWidget_2;
    QWidget *page_5;
    QWidget *layoutWidget_7;
    QGridLayout *displayLayout_35;
    QSplitter *splitter_12;
    QLabel *inImage_5;
    QLabel *EDShow;
    QLabel *inText_6;
    QLabel *biOperatorText_4;
    QWidget *layoutWidget_8;
    QGridLayout *displayLayout_36;
    QSplitter *splitter_13;
    QLabel *reconstructionShow;
    QLabel *gradientShow;
    QLabel *inText_7;
    QLabel *inText_8;
    QGroupBox *groupBox_6;
    QPushButton *edgeDetectButton;
    QPushButton *gradientButton;
    QGroupBox *groupBox_7;
    QPushButton *conDilationButton;
    QPushButton *reconstructionButton;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuProject;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *imagProv2Class)
    {
        if (imagProv2Class->objectName().isEmpty())
            imagProv2Class->setObjectName(QStringLiteral("imagProv2Class"));
        imagProv2Class->resize(1097, 747);
        imagProv2Class->setAutoFillBackground(false);
        actionExit = new QAction(imagProv2Class);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionProject1 = new QAction(imagProv2Class);
        actionProject1->setObjectName(QStringLiteral("actionProject1"));
        actionProject2 = new QAction(imagProv2Class);
        actionProject2->setObjectName(QStringLiteral("actionProject2"));
        actionProject3 = new QAction(imagProv2Class);
        actionProject3->setObjectName(QStringLiteral("actionProject3"));
        actionProject4 = new QAction(imagProv2Class);
        actionProject4->setObjectName(QStringLiteral("actionProject4"));
        actionProject5 = new QAction(imagProv2Class);
        actionProject5->setObjectName(QStringLiteral("actionProject5"));
        actionOpen = new QAction(imagProv2Class);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        centralWidget = new QWidget(imagProv2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1091, 701));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 50, 111, 551));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        hist = new QPushButton(layoutWidget);
        hist->setObjectName(QStringLiteral("hist"));
        hist->setMinimumSize(QSize(93, 28));
        hist->setMaximumSize(QSize(93, 28));

        verticalLayout->addWidget(hist);

        otsu = new QPushButton(layoutWidget);
        otsu->setObjectName(QStringLiteral("otsu"));
        otsu->setMinimumSize(QSize(93, 28));
        otsu->setMaximumSize(QSize(93, 28));

        verticalLayout->addWidget(otsu);

        entropy = new QPushButton(layoutWidget);
        entropy->setObjectName(QStringLiteral("entropy"));
        entropy->setMinimumSize(QSize(93, 28));
        entropy->setMaximumSize(QSize(93, 28));

        verticalLayout->addWidget(entropy);

        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(231, 21, 664, 333));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        splitter_3 = new QSplitter(layoutWidget1);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        spinBox = new QSpinBox(splitter_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimumSize(QSize(54, 21));
        spinBox->setMaximumSize(QSize(54, 21));
        spinBox->setMaximum(255);
        splitter_2->addWidget(spinBox);
        thresSlider = new QSlider(splitter_2);
        thresSlider->setObjectName(QStringLiteral("thresSlider"));
        thresSlider->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(thresSlider->sizePolicy().hasHeightForWidth());
        thresSlider->setSizePolicy(sizePolicy);
        thresSlider->setMinimumSize(QSize(601, 22));
        thresSlider->setMaximumSize(QSize(601, 22));
        thresSlider->setMaximum(255);
        thresSlider->setOrientation(Qt::Horizontal);
        splitter_2->addWidget(thresSlider);
        splitter_3->addWidget(splitter_2);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        inImage = new QLabel(splitter);
        inImage->setObjectName(QStringLiteral("inImage"));
        inImage->setMinimumSize(QSize(328, 281));
        inImage->setMaximumSize(QSize(328, 281));
        inImage->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter->addWidget(inImage);
        outImage = new QLabel(splitter);
        outImage->setObjectName(QStringLiteral("outImage"));
        outImage->setMinimumSize(QSize(328, 281));
        outImage->setMaximumSize(QSize(328, 281));
        outImage->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter->addWidget(outImage);
        splitter_3->addWidget(splitter);

        gridLayout->addWidget(splitter_3, 0, 0, 1, 2);

        layoutWidget2 = new QWidget(page);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(230, 360, 664, 305));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(layoutWidget2);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        outImage_2 = new QLabel(splitter_4);
        outImage_2->setObjectName(QStringLiteral("outImage_2"));
        outImage_2->setMinimumSize(QSize(328, 281));
        outImage_2->setMaximumSize(QSize(328, 281));
        outImage_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_4->addWidget(outImage_2);
        outImage_3 = new QLabel(splitter_4);
        outImage_3->setObjectName(QStringLiteral("outImage_3"));
        outImage_3->setMinimumSize(QSize(328, 281));
        outImage_3->setMaximumSize(QSize(328, 281));
        outImage_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_4->addWidget(outImage_3);

        gridLayout_2->addWidget(splitter_4, 0, 0, 1, 2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 1, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        splitter_5 = new QSplitter(page_2);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setGeometry(QRect(410, 40, 661, 281));
        splitter_5->setOrientation(Qt::Horizontal);
        inImage_2 = new QLabel(splitter_5);
        inImage_2->setObjectName(QStringLiteral("inImage_2"));
        inImage_2->setMinimumSize(QSize(328, 281));
        inImage_2->setMaximumSize(QSize(328, 281));
        inImage_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_5->addWidget(inImage_2);
        convOutLabel = new QLabel(splitter_5);
        convOutLabel->setObjectName(QStringLiteral("convOutLabel"));
        convOutLabel->setMinimumSize(QSize(328, 281));
        convOutLabel->setMaximumSize(QSize(328, 281));
        convOutLabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_5->addWidget(convOutLabel);
        splitter_6 = new QSplitter(page_2);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setGeometry(QRect(410, 370, 661, 281));
        splitter_6->setOrientation(Qt::Horizontal);
        gaussOutLabel = new QLabel(splitter_6);
        gaussOutLabel->setObjectName(QStringLiteral("gaussOutLabel"));
        gaussOutLabel->setMinimumSize(QSize(328, 281));
        gaussOutLabel->setMaximumSize(QSize(328, 281));
        gaussOutLabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_6->addWidget(gaussOutLabel);
        normalOutLabel = new QLabel(splitter_6);
        normalOutLabel->setObjectName(QStringLiteral("normalOutLabel"));
        normalOutLabel->setMinimumSize(QSize(328, 281));
        normalOutLabel->setMaximumSize(QSize(328, 281));
        normalOutLabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_6->addWidget(normalOutLabel);
        inText_2 = new QLabel(page_2);
        inText_2->setObjectName(QStringLiteral("inText_2"));
        inText_2->setGeometry(QRect(540, 330, 91, 20));
        convText = new QLabel(page_2);
        convText->setObjectName(QStringLiteral("convText"));
        convText->setGeometry(QRect(830, 330, 171, 20));
        convText->setAlignment(Qt::AlignCenter);
        convText_2 = new QLabel(page_2);
        convText_2->setObjectName(QStringLiteral("convText_2"));
        convText_2->setGeometry(QRect(510, 660, 131, 20));
        convText_3 = new QLabel(page_2);
        convText_3->setObjectName(QStringLiteral("convText_3"));
        convText_3->setGeometry(QRect(840, 660, 181, 20));
        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 50, 311, 191));
        robButton = new QPushButton(groupBox_3);
        robButton->setObjectName(QStringLiteral("robButton"));
        robButton->setGeometry(QRect(30, 40, 93, 28));
        preButton = new QPushButton(groupBox_3);
        preButton->setObjectName(QStringLiteral("preButton"));
        preButton->setGeometry(QRect(150, 40, 141, 28));
        sobelButton = new QPushButton(groupBox_3);
        sobelButton->setObjectName(QStringLiteral("sobelButton"));
        sobelButton->setGeometry(QRect(30, 100, 93, 28));
        gaussButton = new QPushButton(groupBox_3);
        gaussButton->setObjectName(QStringLiteral("gaussButton"));
        gaussButton->setGeometry(QRect(150, 100, 141, 28));
        medianButton = new QPushButton(groupBox_3);
        medianButton->setObjectName(QStringLiteral("medianButton"));
        medianButton->setGeometry(QRect(150, 150, 141, 28));
        groupBox_4 = new QGroupBox(page_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(40, 260, 341, 101));
        filterButton = new QPushButton(groupBox_4);
        filterButton->setObjectName(QStringLiteral("filterButton"));
        filterButton->setGeometry(QRect(150, 60, 93, 28));
        tableR = new QLineEdit(groupBox_4);
        tableR->setObjectName(QStringLiteral("tableR"));
        tableR->setGeometry(QRect(50, 20, 113, 21));
        tableC = new QLineEdit(groupBox_4);
        tableC->setObjectName(QStringLiteral("tableC"));
        tableC->setGeometry(QRect(210, 20, 113, 21));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 20, 72, 15));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 20, 72, 15));
        generateTable = new QPushButton(groupBox_4);
        generateTable->setObjectName(QStringLiteral("generateTable"));
        generateTable->setGeometry(QRect(30, 60, 93, 28));
        groupBox_10 = new QGroupBox(page_2);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(30, 360, 371, 331));
        optWidget = new QTableWidget(groupBox_10);
        if (optWidget->columnCount() < 3)
            optWidget->setColumnCount(3);
        QFont font;
        font.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        optWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        optWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        optWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (optWidget->rowCount() < 3)
            optWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        optWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        optWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        optWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        optWidget->setObjectName(QStringLiteral("optWidget"));
        optWidget->setGeometry(QRect(10, 20, 300, 300));
        QFont font1;
        font1.setPointSize(9);
        optWidget->setFont(font1);
        optWidget->setAutoFillBackground(false);
        optWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        optWidget->setLineWidth(1);
        optWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        optWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        optWidget->setAutoScroll(true);
        optWidget->setTabKeyNavigation(true);
        optWidget->setAlternatingRowColors(false);
        optWidget->setGridStyle(Qt::SolidLine);
        optWidget->setSortingEnabled(false);
        optWidget->setRowCount(3);
        optWidget->horizontalHeader()->setVisible(false);
        optWidget->horizontalHeader()->setDefaultSectionSize(40);
        optWidget->horizontalHeader()->setMinimumSectionSize(10);
        optWidget->verticalHeader()->setVisible(false);
        optWidget->verticalHeader()->setDefaultSectionSize(40);
        optWidget->verticalHeader()->setHighlightSections(true);
        optWidget->verticalHeader()->setMinimumSectionSize(10);
        stackedWidget->addWidget(page_2);
        groupBox_10->raise();
        splitter_5->raise();
        splitter_6->raise();
        inText_2->raise();
        convText->raise();
        convText_2->raise();
        convText_3->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        layoutWidget_3 = new QWidget(page_3);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(390, 30, 664, 305));
        displayLayout_31 = new QGridLayout(layoutWidget_3);
        displayLayout_31->setSpacing(6);
        displayLayout_31->setContentsMargins(11, 11, 11, 11);
        displayLayout_31->setObjectName(QStringLiteral("displayLayout_31"));
        displayLayout_31->setContentsMargins(0, 0, 0, 0);
        splitter_8 = new QSplitter(layoutWidget_3);
        splitter_8->setObjectName(QStringLiteral("splitter_8"));
        splitter_8->setOrientation(Qt::Horizontal);
        inImage_3 = new QLabel(splitter_8);
        inImage_3->setObjectName(QStringLiteral("inImage_3"));
        inImage_3->setMinimumSize(QSize(328, 281));
        inImage_3->setMaximumSize(QSize(328, 281));
        inImage_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_8->addWidget(inImage_3);
        biOpOut = new QLabel(splitter_8);
        biOpOut->setObjectName(QStringLiteral("biOpOut"));
        biOpOut->setMinimumSize(QSize(328, 281));
        biOpOut->setMaximumSize(QSize(328, 281));
        biOpOut->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_8->addWidget(biOpOut);

        displayLayout_31->addWidget(splitter_8, 0, 0, 1, 2);

        inText_3 = new QLabel(layoutWidget_3);
        inText_3->setObjectName(QStringLiteral("inText_3"));

        displayLayout_31->addWidget(inText_3, 1, 0, 1, 1);

        biOperatorText = new QLabel(layoutWidget_3);
        biOperatorText->setObjectName(QStringLiteral("biOperatorText"));

        displayLayout_31->addWidget(biOperatorText, 1, 1, 1, 1);

        layoutWidget_4 = new QWidget(page_3);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(390, 350, 664, 305));
        displayLayout_32 = new QGridLayout(layoutWidget_4);
        displayLayout_32->setSpacing(6);
        displayLayout_32->setContentsMargins(11, 11, 11, 11);
        displayLayout_32->setObjectName(QStringLiteral("displayLayout_32"));
        displayLayout_32->setContentsMargins(0, 0, 0, 0);
        splitter_9 = new QSplitter(layoutWidget_4);
        splitter_9->setObjectName(QStringLiteral("splitter_9"));
        splitter_9->setOrientation(Qt::Horizontal);
        DSOut = new QLabel(splitter_9);
        DSOut->setObjectName(QStringLiteral("DSOut"));
        DSOut->setMinimumSize(QSize(328, 281));
        DSOut->setMaximumSize(QSize(328, 281));
        DSOut->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_9->addWidget(DSOut);
        skeleOut = new QLabel(splitter_9);
        skeleOut->setObjectName(QStringLiteral("skeleOut"));
        skeleOut->setMinimumSize(QSize(328, 281));
        skeleOut->setMaximumSize(QSize(328, 281));
        skeleOut->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_9->addWidget(skeleOut);

        displayLayout_32->addWidget(splitter_9, 0, 0, 1, 2);

        DSText = new QLabel(layoutWidget_4);
        DSText->setObjectName(QStringLiteral("DSText"));

        displayLayout_32->addWidget(DSText, 1, 0, 1, 1);

        skeleText = new QLabel(layoutWidget_4);
        skeleText->setObjectName(QStringLiteral("skeleText"));

        displayLayout_32->addWidget(skeleText, 1, 1, 1, 1);

        groupBox = new QGroupBox(page_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 341, 181));
        bwDilate = new QPushButton(groupBox);
        bwDilate->setObjectName(QStringLiteral("bwDilate"));
        bwDilate->setGeometry(QRect(70, 100, 93, 28));
        bwErode = new QPushButton(groupBox);
        bwErode->setObjectName(QStringLiteral("bwErode"));
        bwErode->setGeometry(QRect(210, 100, 93, 28));
        bwOpen = new QPushButton(groupBox);
        bwOpen->setObjectName(QStringLiteral("bwOpen"));
        bwOpen->setGeometry(QRect(70, 140, 93, 28));
        bwClose = new QPushButton(groupBox);
        bwClose->setObjectName(QStringLiteral("bwClose"));
        bwClose->setGeometry(QRect(210, 140, 93, 28));
        SEtableC = new QLineEdit(groupBox);
        SEtableC->setObjectName(QStringLiteral("SEtableC"));
        SEtableC->setGeometry(QRect(210, 20, 113, 21));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 20, 72, 15));
        SEtableR = new QLineEdit(groupBox);
        SEtableR->setObjectName(QStringLiteral("SEtableR"));
        SEtableR->setGeometry(QRect(50, 20, 113, 21));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(170, 20, 72, 15));
        seButton = new QPushButton(groupBox);
        seButton->setObjectName(QStringLiteral("seButton"));
        seButton->setGeometry(QRect(210, 60, 93, 28));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 60, 72, 15));
        anchorX = new QLineEdit(groupBox);
        anchorX->setObjectName(QStringLiteral("anchorX"));
        anchorX->setGeometry(QRect(90, 60, 21, 21));
        anchorY = new QLineEdit(groupBox);
        anchorY->setObjectName(QStringLiteral("anchorY"));
        anchorY->setGeometry(QRect(140, 60, 21, 21));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 60, 31, 16));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(110, 60, 31, 16));
        groupBox_2 = new QGroupBox(page_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 200, 341, 151));
        DSButton = new QPushButton(groupBox_2);
        DSButton->setObjectName(QStringLiteral("DSButton"));
        DSButton->setGeometry(QRect(40, 30, 211, 28));
        skeleButton = new QPushButton(groupBox_2);
        skeleButton->setObjectName(QStringLiteral("skeleButton"));
        skeleButton->setGeometry(QRect(40, 70, 211, 28));
        skeleRestorButton = new QPushButton(groupBox_2);
        skeleRestorButton->setObjectName(QStringLiteral("skeleRestorButton"));
        skeleRestorButton->setGeometry(QRect(40, 110, 211, 28));
        groupBox_9 = new QGroupBox(page_3);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(20, 350, 361, 351));
        SEWidget = new QTableWidget(groupBox_9);
        if (SEWidget->columnCount() < 3)
            SEWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        SEWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        SEWidget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        SEWidget->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        if (SEWidget->rowCount() < 3)
            SEWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        SEWidget->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        SEWidget->setVerticalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        SEWidget->setVerticalHeaderItem(2, __qtablewidgetitem11);
        SEWidget->setObjectName(QStringLiteral("SEWidget"));
        SEWidget->setGeometry(QRect(20, 20, 320, 320));
        SEWidget->setFont(font1);
        SEWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        SEWidget->setLineWidth(1);
        SEWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SEWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SEWidget->setAutoScroll(true);
        SEWidget->setTabKeyNavigation(true);
        SEWidget->setGridStyle(Qt::SolidLine);
        SEWidget->setRowCount(3);
        SEWidget->horizontalHeader()->setVisible(false);
        SEWidget->horizontalHeader()->setDefaultSectionSize(40);
        SEWidget->horizontalHeader()->setMinimumSectionSize(10);
        SEWidget->verticalHeader()->setVisible(false);
        SEWidget->verticalHeader()->setDefaultSectionSize(40);
        SEWidget->verticalHeader()->setHighlightSections(true);
        SEWidget->verticalHeader()->setMinimumSectionSize(10);
        stackedWidget->addWidget(page_3);
        groupBox_9->raise();
        layoutWidget_3->raise();
        layoutWidget_4->raise();
        groupBox->raise();
        groupBox_2->raise();
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        layoutWidget_5 = new QWidget(page_4);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(420, 40, 664, 305));
        displayLayout_33 = new QGridLayout(layoutWidget_5);
        displayLayout_33->setSpacing(6);
        displayLayout_33->setContentsMargins(11, 11, 11, 11);
        displayLayout_33->setObjectName(QStringLiteral("displayLayout_33"));
        displayLayout_33->setContentsMargins(0, 0, 0, 0);
        splitter_10 = new QSplitter(layoutWidget_5);
        splitter_10->setObjectName(QStringLiteral("splitter_10"));
        splitter_10->setOrientation(Qt::Horizontal);
        inImage_4 = new QLabel(splitter_10);
        inImage_4->setObjectName(QStringLiteral("inImage_4"));
        inImage_4->setMinimumSize(QSize(328, 281));
        inImage_4->setMaximumSize(QSize(328, 281));
        inImage_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_10->addWidget(inImage_4);
        grayOpOut = new QLabel(splitter_10);
        grayOpOut->setObjectName(QStringLiteral("grayOpOut"));
        grayOpOut->setMinimumSize(QSize(328, 281));
        grayOpOut->setMaximumSize(QSize(328, 281));
        grayOpOut->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_10->addWidget(grayOpOut);

        displayLayout_33->addWidget(splitter_10, 0, 0, 1, 2);

        inText_4 = new QLabel(layoutWidget_5);
        inText_4->setObjectName(QStringLiteral("inText_4"));

        displayLayout_33->addWidget(inText_4, 1, 0, 1, 1);

        biOperatorText_2 = new QLabel(layoutWidget_5);
        biOperatorText_2->setObjectName(QStringLiteral("biOperatorText_2"));

        displayLayout_33->addWidget(biOperatorText_2, 1, 1, 1, 1);

        layoutWidget_6 = new QWidget(page_4);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(420, 360, 664, 305));
        displayLayout_34 = new QGridLayout(layoutWidget_6);
        displayLayout_34->setSpacing(6);
        displayLayout_34->setContentsMargins(11, 11, 11, 11);
        displayLayout_34->setObjectName(QStringLiteral("displayLayout_34"));
        displayLayout_34->setContentsMargins(0, 0, 0, 0);
        splitter_11 = new QSplitter(layoutWidget_6);
        splitter_11->setObjectName(QStringLiteral("splitter_11"));
        splitter_11->setOrientation(Qt::Horizontal);
        grayOpenShow = new QLabel(splitter_11);
        grayOpenShow->setObjectName(QStringLiteral("grayOpenShow"));
        grayOpenShow->setMinimumSize(QSize(328, 281));
        grayOpenShow->setMaximumSize(QSize(328, 281));
        grayOpenShow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_11->addWidget(grayOpenShow);
        grayCloseShow = new QLabel(splitter_11);
        grayCloseShow->setObjectName(QStringLiteral("grayCloseShow"));
        grayCloseShow->setMinimumSize(QSize(328, 281));
        grayCloseShow->setMaximumSize(QSize(328, 281));
        grayCloseShow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_11->addWidget(grayCloseShow);

        displayLayout_34->addWidget(splitter_11, 0, 0, 1, 2);

        inText_5 = new QLabel(layoutWidget_6);
        inText_5->setObjectName(QStringLiteral("inText_5"));

        displayLayout_34->addWidget(inText_5, 1, 0, 1, 1);

        biOperatorText_3 = new QLabel(layoutWidget_6);
        biOperatorText_3->setObjectName(QStringLiteral("biOperatorText_3"));

        displayLayout_34->addWidget(biOperatorText_3, 1, 1, 1, 1);

        groupBox_5 = new QGroupBox(page_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(40, 40, 341, 181));
        grayDilate = new QPushButton(groupBox_5);
        grayDilate->setObjectName(QStringLiteral("grayDilate"));
        grayDilate->setGeometry(QRect(70, 100, 93, 28));
        grayErode = new QPushButton(groupBox_5);
        grayErode->setObjectName(QStringLiteral("grayErode"));
        grayErode->setGeometry(QRect(210, 100, 93, 28));
        grayOpen = new QPushButton(groupBox_5);
        grayOpen->setObjectName(QStringLiteral("grayOpen"));
        grayOpen->setGeometry(QRect(70, 140, 93, 28));
        grayClose = new QPushButton(groupBox_5);
        grayClose->setObjectName(QStringLiteral("grayClose"));
        grayClose->setGeometry(QRect(210, 140, 93, 28));
        SEtableC_2 = new QLineEdit(groupBox_5);
        SEtableC_2->setObjectName(QStringLiteral("SEtableC_2"));
        SEtableC_2->setGeometry(QRect(210, 20, 113, 21));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 20, 72, 15));
        SEtableR_2 = new QLineEdit(groupBox_5);
        SEtableR_2->setObjectName(QStringLiteral("SEtableR_2"));
        SEtableR_2->setGeometry(QRect(50, 20, 113, 21));
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(170, 20, 72, 15));
        seButton_2 = new QPushButton(groupBox_5);
        seButton_2->setObjectName(QStringLiteral("seButton_2"));
        seButton_2->setGeometry(QRect(210, 60, 93, 28));
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 60, 72, 15));
        anchorX_2 = new QLineEdit(groupBox_5);
        anchorX_2->setObjectName(QStringLiteral("anchorX_2"));
        anchorX_2->setGeometry(QRect(90, 60, 21, 21));
        anchorY_2 = new QLineEdit(groupBox_5);
        anchorY_2->setObjectName(QStringLiteral("anchorY_2"));
        anchorY_2->setGeometry(QRect(140, 60, 21, 21));
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(60, 60, 31, 16));
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(110, 60, 31, 16));
        groupBox_8 = new QGroupBox(page_4);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 230, 411, 431));
        SEWidget_2 = new QTableWidget(groupBox_8);
        if (SEWidget_2->columnCount() < 3)
            SEWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font);
        SEWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        SEWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        SEWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        if (SEWidget_2->rowCount() < 3)
            SEWidget_2->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        SEWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        SEWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        SEWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem17);
        SEWidget_2->setObjectName(QStringLiteral("SEWidget_2"));
        SEWidget_2->setGeometry(QRect(0, 20, 400, 400));
        SEWidget_2->setFont(font1);
        SEWidget_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        SEWidget_2->setLineWidth(1);
        SEWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SEWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SEWidget_2->setAutoScroll(true);
        SEWidget_2->setTabKeyNavigation(true);
        SEWidget_2->setGridStyle(Qt::SolidLine);
        SEWidget_2->setRowCount(3);
        SEWidget_2->horizontalHeader()->setVisible(false);
        SEWidget_2->horizontalHeader()->setDefaultSectionSize(40);
        SEWidget_2->horizontalHeader()->setMinimumSectionSize(10);
        SEWidget_2->verticalHeader()->setVisible(false);
        SEWidget_2->verticalHeader()->setDefaultSectionSize(40);
        SEWidget_2->verticalHeader()->setHighlightSections(true);
        SEWidget_2->verticalHeader()->setMinimumSectionSize(10);
        stackedWidget->addWidget(page_4);
        groupBox_8->raise();
        layoutWidget_5->raise();
        layoutWidget_6->raise();
        groupBox_5->raise();
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        layoutWidget_7 = new QWidget(page_5);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(410, 30, 664, 305));
        displayLayout_35 = new QGridLayout(layoutWidget_7);
        displayLayout_35->setSpacing(6);
        displayLayout_35->setContentsMargins(11, 11, 11, 11);
        displayLayout_35->setObjectName(QStringLiteral("displayLayout_35"));
        displayLayout_35->setContentsMargins(0, 0, 0, 0);
        splitter_12 = new QSplitter(layoutWidget_7);
        splitter_12->setObjectName(QStringLiteral("splitter_12"));
        splitter_12->setOrientation(Qt::Horizontal);
        inImage_5 = new QLabel(splitter_12);
        inImage_5->setObjectName(QStringLiteral("inImage_5"));
        inImage_5->setMinimumSize(QSize(328, 281));
        inImage_5->setMaximumSize(QSize(328, 281));
        inImage_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_12->addWidget(inImage_5);
        EDShow = new QLabel(splitter_12);
        EDShow->setObjectName(QStringLiteral("EDShow"));
        EDShow->setMinimumSize(QSize(328, 281));
        EDShow->setMaximumSize(QSize(328, 281));
        EDShow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_12->addWidget(EDShow);

        displayLayout_35->addWidget(splitter_12, 0, 0, 1, 2);

        inText_6 = new QLabel(layoutWidget_7);
        inText_6->setObjectName(QStringLiteral("inText_6"));

        displayLayout_35->addWidget(inText_6, 1, 0, 1, 1);

        biOperatorText_4 = new QLabel(layoutWidget_7);
        biOperatorText_4->setObjectName(QStringLiteral("biOperatorText_4"));

        displayLayout_35->addWidget(biOperatorText_4, 1, 1, 1, 1);

        layoutWidget_8 = new QWidget(page_5);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(410, 350, 664, 305));
        displayLayout_36 = new QGridLayout(layoutWidget_8);
        displayLayout_36->setSpacing(6);
        displayLayout_36->setContentsMargins(11, 11, 11, 11);
        displayLayout_36->setObjectName(QStringLiteral("displayLayout_36"));
        displayLayout_36->setContentsMargins(0, 0, 0, 0);
        splitter_13 = new QSplitter(layoutWidget_8);
        splitter_13->setObjectName(QStringLiteral("splitter_13"));
        splitter_13->setOrientation(Qt::Horizontal);
        reconstructionShow = new QLabel(splitter_13);
        reconstructionShow->setObjectName(QStringLiteral("reconstructionShow"));
        reconstructionShow->setMinimumSize(QSize(328, 281));
        reconstructionShow->setMaximumSize(QSize(328, 281));
        reconstructionShow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_13->addWidget(reconstructionShow);
        gradientShow = new QLabel(splitter_13);
        gradientShow->setObjectName(QStringLiteral("gradientShow"));
        gradientShow->setMinimumSize(QSize(328, 281));
        gradientShow->setMaximumSize(QSize(328, 281));
        gradientShow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        splitter_13->addWidget(gradientShow);

        displayLayout_36->addWidget(splitter_13, 0, 0, 1, 2);

        inText_7 = new QLabel(layoutWidget_8);
        inText_7->setObjectName(QStringLiteral("inText_7"));

        displayLayout_36->addWidget(inText_7, 1, 0, 1, 1);

        inText_8 = new QLabel(layoutWidget_8);
        inText_8->setObjectName(QStringLiteral("inText_8"));

        displayLayout_36->addWidget(inText_8, 1, 1, 1, 1);

        groupBox_6 = new QGroupBox(page_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 40, 311, 131));
        edgeDetectButton = new QPushButton(groupBox_6);
        edgeDetectButton->setObjectName(QStringLiteral("edgeDetectButton"));
        edgeDetectButton->setGeometry(QRect(40, 30, 251, 28));
        gradientButton = new QPushButton(groupBox_6);
        gradientButton->setObjectName(QStringLiteral("gradientButton"));
        gradientButton->setGeometry(QRect(40, 80, 251, 28));
        groupBox_7 = new QGroupBox(page_5);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(20, 190, 311, 131));
        conDilationButton = new QPushButton(groupBox_7);
        conDilationButton->setObjectName(QStringLiteral("conDilationButton"));
        conDilationButton->setGeometry(QRect(40, 30, 231, 28));
        reconstructionButton = new QPushButton(groupBox_7);
        reconstructionButton->setObjectName(QStringLiteral("reconstructionButton"));
        reconstructionButton->setGeometry(QRect(40, 80, 231, 28));
        stackedWidget->addWidget(page_5);
        imagProv2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(imagProv2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1097, 23));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuProject = new QMenu(menuBar);
        menuProject->setObjectName(QStringLiteral("menuProject"));
        imagProv2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(imagProv2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        imagProv2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(imagProv2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        imagProv2Class->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuProject->menuAction());
        menuMenu->addAction(actionOpen);
        menuMenu->addAction(actionExit);
        menuProject->addAction(actionProject1);
        menuProject->addAction(actionProject2);
        menuProject->addAction(actionProject3);
        menuProject->addAction(actionProject4);
        menuProject->addAction(actionProject5);

        retranslateUi(imagProv2Class);
        QObject::connect(actionExit, SIGNAL(triggered()), imagProv2Class, SLOT(close()));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(imagProv2Class);
    } // setupUi

    void retranslateUi(QMainWindow *imagProv2Class)
    {
        imagProv2Class->setWindowTitle(QApplication::translate("imagProv2Class", "imagProv2", Q_NULLPTR));
        actionExit->setText(QApplication::translate("imagProv2Class", "Exit", Q_NULLPTR));
        actionProject1->setText(QApplication::translate("imagProv2Class", "Project1", Q_NULLPTR));
        actionProject2->setText(QApplication::translate("imagProv2Class", "Project2", Q_NULLPTR));
        actionProject3->setText(QApplication::translate("imagProv2Class", "Project3", Q_NULLPTR));
        actionProject4->setText(QApplication::translate("imagProv2Class", "Project4", Q_NULLPTR));
        actionProject5->setText(QApplication::translate("imagProv2Class", "Project5", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("imagProv2Class", "Open", Q_NULLPTR));
        hist->setText(QApplication::translate("imagProv2Class", "histgram", Q_NULLPTR));
        otsu->setText(QApplication::translate("imagProv2Class", "OTSU", Q_NULLPTR));
        entropy->setText(QApplication::translate("imagProv2Class", "Entropy", Q_NULLPTR));
        label->setText(QApplication::translate("imagProv2Class", "\345\216\237\345\233\276", Q_NULLPTR));
        label_2->setText(QApplication::translate("imagProv2Class", "\347\233\264\346\226\271\345\233\276", Q_NULLPTR));
        inImage->setText(QString());
        outImage->setText(QString());
        outImage_2->setText(QString());
        outImage_3->setText(QString());
        label_3->setText(QApplication::translate("imagProv2Class", "OTSU\344\272\214\345\200\274\345\233\276", Q_NULLPTR));
        label_4->setText(QApplication::translate("imagProv2Class", "Entropy\344\272\214\345\200\274\345\233\276", Q_NULLPTR));
        inImage_2->setText(QString());
        convOutLabel->setText(QString());
        gaussOutLabel->setText(QString());
        normalOutLabel->setText(QString());
        inText_2->setText(QApplication::translate("imagProv2Class", "Input Image", Q_NULLPTR));
        convText->setText(QApplication::translate("imagProv2Class", "Input Image", Q_NULLPTR));
        convText_2->setText(QApplication::translate("imagProv2Class", "Gaussian Filted Image", Q_NULLPTR));
        convText_3->setText(QApplication::translate("imagProv2Class", "Normalized Filtering", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("imagProv2Class", "Detection Operator", Q_NULLPTR));
        robButton->setText(QApplication::translate("imagProv2Class", "Roberts", Q_NULLPTR));
        preButton->setText(QApplication::translate("imagProv2Class", "Prewitt", Q_NULLPTR));
        sobelButton->setText(QApplication::translate("imagProv2Class", "Sobel", Q_NULLPTR));
        gaussButton->setText(QApplication::translate("imagProv2Class", "Gaussian Filter", Q_NULLPTR));
        medianButton->setText(QApplication::translate("imagProv2Class", "Median Filter", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("imagProv2Class", "GroupBox", Q_NULLPTR));
        filterButton->setText(QApplication::translate("imagProv2Class", "Filter", Q_NULLPTR));
        tableR->setText(QString());
        label_5->setText(QApplication::translate("imagProv2Class", "Rows", Q_NULLPTR));
        label_6->setText(QApplication::translate("imagProv2Class", "Cols", Q_NULLPTR));
        generateTable->setText(QApplication::translate("imagProv2Class", "Generate", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("imagProv2Class", "Kernel", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = optWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("imagProv2Class", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = optWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("imagProv2Class", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = optWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("imagProv2Class", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = optWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("imagProv2Class", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = optWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("imagProv2Class", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = optWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("imagProv2Class", "3", Q_NULLPTR));
        inImage_3->setText(QString());
        biOpOut->setText(QString());
        inText_3->setText(QApplication::translate("imagProv2Class", "\350\276\223\345\205\245\345\233\276\345\203\217", Q_NULLPTR));
        biOperatorText->setText(QApplication::translate("imagProv2Class", "Binary Operator Output", Q_NULLPTR));
        DSOut->setText(QString());
        skeleOut->setText(QString());
        DSText->setText(QApplication::translate("imagProv2Class", "Morphological distance transform", Q_NULLPTR));
        skeleText->setText(QApplication::translate("imagProv2Class", "Skeleton", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("imagProv2Class", "Binary Operator", Q_NULLPTR));
        bwDilate->setText(QApplication::translate("imagProv2Class", "Dilate", Q_NULLPTR));
        bwErode->setText(QApplication::translate("imagProv2Class", "Erode", Q_NULLPTR));
        bwOpen->setText(QApplication::translate("imagProv2Class", "Open", Q_NULLPTR));
        bwClose->setText(QApplication::translate("imagProv2Class", "Close", Q_NULLPTR));
        label_7->setText(QApplication::translate("imagProv2Class", "Rows", Q_NULLPTR));
        SEtableR->setText(QString());
        label_8->setText(QApplication::translate("imagProv2Class", "Cols", Q_NULLPTR));
        seButton->setText(QApplication::translate("imagProv2Class", "Generate", Q_NULLPTR));
        label_9->setText(QApplication::translate("imagProv2Class", "anchor", Q_NULLPTR));
        anchorX->setText(QString());
        label_10->setText(QApplication::translate("imagProv2Class", " (x)", Q_NULLPTR));
        label_11->setText(QApplication::translate("imagProv2Class", " (y)", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("imagProv2Class", "Morphological Methods", Q_NULLPTR));
        DSButton->setText(QApplication::translate("imagProv2Class", "Distance Transform", Q_NULLPTR));
        skeleButton->setText(QApplication::translate("imagProv2Class", "Skeleton", Q_NULLPTR));
        skeleRestorButton->setText(QApplication::translate("imagProv2Class", "Skeleton Restoration", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("imagProv2Class", "Structure Element", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = SEWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("imagProv2Class", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = SEWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("imagProv2Class", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = SEWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("imagProv2Class", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = SEWidget->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("imagProv2Class", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = SEWidget->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("imagProv2Class", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = SEWidget->verticalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("imagProv2Class", "3", Q_NULLPTR));
        inImage_4->setText(QString());
        grayOpOut->setText(QString());
        inText_4->setText(QApplication::translate("imagProv2Class", "\350\276\223\345\205\245\345\233\276\345\203\217", Q_NULLPTR));
        biOperatorText_2->setText(QApplication::translate("imagProv2Class", "Gray dilation or erotion", Q_NULLPTR));
        grayOpenShow->setText(QString());
        grayCloseShow->setText(QString());
        inText_5->setText(QApplication::translate("imagProv2Class", "Gray Opening", Q_NULLPTR));
        biOperatorText_3->setText(QApplication::translate("imagProv2Class", "Gray Closing", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("imagProv2Class", "Gray Operator", Q_NULLPTR));
        grayDilate->setText(QApplication::translate("imagProv2Class", "Dilate", Q_NULLPTR));
        grayErode->setText(QApplication::translate("imagProv2Class", "Erode", Q_NULLPTR));
        grayOpen->setText(QApplication::translate("imagProv2Class", "Open", Q_NULLPTR));
        grayClose->setText(QApplication::translate("imagProv2Class", "Close", Q_NULLPTR));
        label_12->setText(QApplication::translate("imagProv2Class", "Rows", Q_NULLPTR));
        SEtableR_2->setText(QString());
        label_13->setText(QApplication::translate("imagProv2Class", "Cols", Q_NULLPTR));
        seButton_2->setText(QApplication::translate("imagProv2Class", "Generate", Q_NULLPTR));
        label_14->setText(QApplication::translate("imagProv2Class", "anchor", Q_NULLPTR));
        anchorX_2->setText(QString());
        label_15->setText(QApplication::translate("imagProv2Class", " (x)", Q_NULLPTR));
        label_16->setText(QApplication::translate("imagProv2Class", " (y)", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("imagProv2Class", "Structure Element", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = SEWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("imagProv2Class", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = SEWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("imagProv2Class", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = SEWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("imagProv2Class", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = SEWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("imagProv2Class", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = SEWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("imagProv2Class", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = SEWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("imagProv2Class", "3", Q_NULLPTR));
        inImage_5->setText(QString());
        EDShow->setText(QString());
        inText_6->setText(QApplication::translate("imagProv2Class", "\350\276\223\345\205\245\345\233\276\345\203\217", Q_NULLPTR));
        biOperatorText_4->setText(QApplication::translate("imagProv2Class", "Edge Detection", Q_NULLPTR));
        reconstructionShow->setText(QString());
        gradientShow->setText(QString());
        inText_7->setText(QApplication::translate("imagProv2Class", "Morphological Reconstruction", Q_NULLPTR));
        inText_8->setText(QApplication::translate("imagProv2Class", "Morphological Gradient", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("imagProv2Class", "Morphological Methods", Q_NULLPTR));
        edgeDetectButton->setText(QApplication::translate("imagProv2Class", "Morphological edge detection", Q_NULLPTR));
        gradientButton->setText(QApplication::translate("imagProv2Class", "Morphological Gradient", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("imagProv2Class", "Morphological Reconstruction", Q_NULLPTR));
        conDilationButton->setText(QApplication::translate("imagProv2Class", "Conditional dilation ", Q_NULLPTR));
        reconstructionButton->setText(QApplication::translate("imagProv2Class", "Gray scale Reconstruction", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("imagProv2Class", "Menu", Q_NULLPTR));
        menuProject->setTitle(QApplication::translate("imagProv2Class", "Project", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class imagProv2Class: public Ui_imagProv2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGPROV2_H

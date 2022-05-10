/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QWidget *leftwidget;
    QVBoxLayout *verticalLayout;
    QWidget *connectwidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLineEdit *hostname_txt;
    QLabel *label_2;
    QLineEdit *masteruri_txt;
    QPushButton *pushButton;
    QWidget *temperatureWidget;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_15;
    QWidget *horizontalWidget_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *TemperatureLabel;
    QLabel *celsius;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QWidget *leftBotWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *carBPwidget;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *wheel1_label;
    QLabel *label_12;
    QLabel *wheel4_label;
    QLabel *wheel3_label;
    QLabel *label_11;
    QLabel *wheel2_label;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_10;
    QWidget *cameraWidget;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *camera_layout;
    QLabel *stream_label;
    QWidget *controllerWidget;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *verticalSliderUpBtn;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *verticalSliderZeroBtn;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *verticalSliderDownBtn;
    QSlider *verticalSlider;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *controll_speed;
    QSpacerItem *horizontalSpacer_22;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_15;
    QSpacerItem *verticalSpacer_3;
    QPushButton *horizontalLslider;
    QSpacerItem *horizontalSpacer_17;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_13;
    QSpacerItem *verticalSpacer_7;
    QLabel *controll_steer;
    QPushButton *horizontalZslider;
    QSpacerItem *horizontalSpacer_18;
    QVBoxLayout *verticalLayout_16;
    QSpacerItem *verticalSpacer_6;
    QPushButton *horizontalRslider;
    QSlider *horizontalSlider;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *rviz_widget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *rviz_layout;
    QPushButton *setGoalButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1480, 720);
        MainWindow->setMinimumSize(QSize(1480, 720));
        MainWindow->setStyleSheet(QLatin1String("#MainWindow{background-color: qlineargradient(spread:pad, x1:0.145, y1:0.169727, x2:1, y2:1, stop:0 rgba(0, 28, 69, 255), stop:0.238806 rgba(28, 68, 121, 255), stop:0.567164 rgba(52, 101, 164, 255), stop:0.885572 rgba(182, 210, 153, 255), stop:1 rgba(252, 237, 110, 255));}\n"
"\n"
"\n"
""));
        verticalLayout_7 = new QVBoxLayout(MainWindow);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leftwidget = new QWidget(MainWindow);
        leftwidget->setObjectName(QStringLiteral("leftwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftwidget->sizePolicy().hasHeightForWidth());
        leftwidget->setSizePolicy(sizePolicy);
        leftwidget->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(leftwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        connectwidget = new QWidget(leftwidget);
        connectwidget->setObjectName(QStringLiteral("connectwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(connectwidget->sizePolicy().hasHeightForWidth());
        connectwidget->setSizePolicy(sizePolicy1);
        connectwidget->setStyleSheet(QStringLiteral("#connectwidget{border: 1px solid white; padding: 5px;}"));
        verticalLayout_4 = new QVBoxLayout(connectwidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(connectwidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label);

        hostname_txt = new QLineEdit(connectwidget);
        hostname_txt->setObjectName(QStringLiteral("hostname_txt"));

        verticalLayout_4->addWidget(hostname_txt);

        label_2 = new QLabel(connectwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_2);

        masteruri_txt = new QLineEdit(connectwidget);
        masteruri_txt->setObjectName(QStringLiteral("masteruri_txt"));

        verticalLayout_4->addWidget(masteruri_txt);

        pushButton = new QPushButton(connectwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);


        verticalLayout->addWidget(connectwidget);

        temperatureWidget = new QWidget(leftwidget);
        temperatureWidget->setObjectName(QStringLiteral("temperatureWidget"));
        temperatureWidget->setMaximumSize(QSize(16777215, 80));
        temperatureWidget->setStyleSheet(QStringLiteral("#temperatureWidget{border: 1px solid white;}"));
        verticalLayout_8 = new QVBoxLayout(temperatureWidget);
        verticalLayout_8->setSpacing(1);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_8->addItem(verticalSpacer_2);

        label_15 = new QLabel(temperatureWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        label_15->setMinimumSize(QSize(160, 30));
        label_15->setMaximumSize(QSize(1000, 30));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_15->setFont(font1);
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_15->setScaledContents(false);
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_15);

        horizontalWidget_5 = new QWidget(temperatureWidget);
        horizontalWidget_5->setObjectName(QStringLiteral("horizontalWidget_5"));
        horizontalWidget_5->setMinimumSize(QSize(0, 40));
        horizontalWidget_5->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget_5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_3 = new QSpacerItem(50, 1, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        TemperatureLabel = new QLabel(horizontalWidget_5);
        TemperatureLabel->setObjectName(QStringLiteral("TemperatureLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(TemperatureLabel->sizePolicy().hasHeightForWidth());
        TemperatureLabel->setSizePolicy(sizePolicy3);
        TemperatureLabel->setMaximumSize(QSize(16777215, 40));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        TemperatureLabel->setFont(font2);
        TemperatureLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        TemperatureLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(TemperatureLabel);

        celsius = new QLabel(horizontalWidget_5);
        celsius->setObjectName(QStringLiteral("celsius"));
        sizePolicy3.setHeightForWidth(celsius->sizePolicy().hasHeightForWidth());
        celsius->setSizePolicy(sizePolicy3);
        celsius->setMaximumSize(QSize(16777215, 40));
        QFont font3;
        font3.setPointSize(16);
        celsius->setFont(font3);
        celsius->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(celsius);

        horizontalSpacer_4 = new QSpacerItem(50, 1, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_8->addWidget(horizontalWidget_5);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_8->addItem(verticalSpacer);


        verticalLayout->addWidget(temperatureWidget);

        leftBotWidget = new QWidget(leftwidget);
        leftBotWidget->setObjectName(QStringLiteral("leftBotWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(leftBotWidget->sizePolicy().hasHeightForWidth());
        leftBotWidget->setSizePolicy(sizePolicy4);
        leftBotWidget->setMinimumSize(QSize(0, 300));
        leftBotWidget->setMaximumSize(QSize(16777215, 300));
        leftBotWidget->setStyleSheet(QStringLiteral("#leftBotWidget{border: 1px solid white; padding: 5px; }"));
        verticalLayout_3 = new QVBoxLayout(leftBotWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        carBPwidget = new QWidget(leftBotWidget);
        carBPwidget->setObjectName(QStringLiteral("carBPwidget"));
        carBPwidget->setStyleSheet(QStringLiteral("#carBPwidget{border-image: url(:/resources/images/carbp.png) 0 0 0 0 stretch stretch; margin-top: 30px; margin-left: 10px; margin-right: 10px;}"));
        horizontalLayout_3 = new QHBoxLayout(carBPwidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_13 = new QLabel(carBPwidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy5);
        label_13->setMaximumSize(QSize(100, 40));

        gridLayout->addWidget(label_13, 5, 1, 1, 1);

        label_14 = new QLabel(carBPwidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy4.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(label_14, 1, 1, 1, 1);

        wheel1_label = new QLabel(carBPwidget);
        wheel1_label->setObjectName(QStringLiteral("wheel1_label"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(wheel1_label->sizePolicy().hasHeightForWidth());
        wheel1_label->setSizePolicy(sizePolicy6);
        wheel1_label->setMinimumSize(QSize(40, 0));
        wheel1_label->setMaximumSize(QSize(40, 50));
        wheel1_label->setFont(font);
        wheel1_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        wheel1_label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(wheel1_label, 2, 0, 1, 1);

        label_12 = new QLabel(carBPwidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 3, 1, 1, 1);

        wheel4_label = new QLabel(carBPwidget);
        wheel4_label->setObjectName(QStringLiteral("wheel4_label"));
        wheel4_label->setEnabled(true);
        sizePolicy6.setHeightForWidth(wheel4_label->sizePolicy().hasHeightForWidth());
        wheel4_label->setSizePolicy(sizePolicy6);
        wheel4_label->setMinimumSize(QSize(40, 0));
        wheel4_label->setMaximumSize(QSize(40, 40));
        wheel4_label->setFont(font);
        wheel4_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        wheel4_label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(wheel4_label, 4, 2, 1, 1);

        wheel3_label = new QLabel(carBPwidget);
        wheel3_label->setObjectName(QStringLiteral("wheel3_label"));
        sizePolicy6.setHeightForWidth(wheel3_label->sizePolicy().hasHeightForWidth());
        wheel3_label->setSizePolicy(sizePolicy6);
        wheel3_label->setMinimumSize(QSize(40, 0));
        wheel3_label->setMaximumSize(QSize(40, 40));
        wheel3_label->setFont(font);
        wheel3_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        wheel3_label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(wheel3_label, 4, 0, 1, 1);

        label_11 = new QLabel(carBPwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy5.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy5);
        label_11->setMaximumSize(QSize(16777215, 25));
        label_11->setFont(font1);
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_11, 0, 1, 1, 1);

        wheel2_label = new QLabel(carBPwidget);
        wheel2_label->setObjectName(QStringLiteral("wheel2_label"));
        sizePolicy6.setHeightForWidth(wheel2_label->sizePolicy().hasHeightForWidth());
        wheel2_label->setSizePolicy(sizePolicy6);
        wheel2_label->setMinimumSize(QSize(40, 0));
        wheel2_label->setMaximumSize(QSize(40, 50));
        wheel2_label->setFont(font);
        wheel2_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        wheel2_label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(wheel2_label, 2, 2, 1, 1);

        label_16 = new QLabel(carBPwidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        label_16->setFont(font4);
        label_16->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_16->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_16, 3, 0, 1, 1);

        label_17 = new QLabel(carBPwidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font4);
        label_17->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_17->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_17, 3, 2, 1, 1);

        label_18 = new QLabel(carBPwidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font4);
        label_18->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_18->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_18, 5, 0, 1, 1);

        label_19 = new QLabel(carBPwidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font4);
        label_19->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_19->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_19, 5, 2, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);


        verticalLayout_3->addWidget(carBPwidget);


        verticalLayout->addWidget(leftBotWidget);


        horizontalLayout->addWidget(leftwidget);

        verticalWidget = new QWidget(MainWindow);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalLayout_10 = new QVBoxLayout(verticalWidget);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        cameraWidget = new QWidget(verticalWidget);
        cameraWidget->setObjectName(QStringLiteral("cameraWidget"));
        cameraWidget->setMaximumSize(QSize(1000, 1000));
        cameraWidget->setStyleSheet(QStringLiteral("#cameraWidget{border:1px solid white;}"));
        verticalLayout_11 = new QVBoxLayout(cameraWidget);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(1, 1, 1, 1);
        camera_layout = new QVBoxLayout();
        camera_layout->setObjectName(QStringLiteral("camera_layout"));
        stream_label = new QLabel(cameraWidget);
        stream_label->setObjectName(QStringLiteral("stream_label"));
        stream_label->setStyleSheet(QStringLiteral("background-color: rgb(46, 52, 54);"));

        camera_layout->addWidget(stream_label);


        verticalLayout_11->addLayout(camera_layout);


        verticalLayout_10->addWidget(cameraWidget);

        controllerWidget = new QWidget(verticalWidget);
        controllerWidget->setObjectName(QStringLiteral("controllerWidget"));
        controllerWidget->setMaximumSize(QSize(16777215, 400));
        controllerWidget->setStyleSheet(QLatin1String("#controllerWidget{border: 1px solid white;\n"
"background-color: rgb(114, 159, 207);}"));
        verticalLayout_12 = new QVBoxLayout(controllerWidget);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        checkBox = new QCheckBox(controllerWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        checkBox->setFont(font5);
        checkBox->setIconSize(QSize(25, 25));

        verticalLayout_12->addWidget(checkBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        widget = new QWidget(controllerWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_14 = new QVBoxLayout(widget);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer_19 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_19);

        verticalSliderUpBtn = new QPushButton(widget);
        verticalSliderUpBtn->setObjectName(QStringLiteral("verticalSliderUpBtn"));
        verticalSliderUpBtn->setEnabled(false);
        verticalSliderUpBtn->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_13->addWidget(verticalSliderUpBtn);


        verticalLayout_14->addLayout(horizontalLayout_13);

        verticalSpacer_4 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_4);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalSpacer_21 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_21);

        verticalSliderZeroBtn = new QPushButton(widget);
        verticalSliderZeroBtn->setObjectName(QStringLiteral("verticalSliderZeroBtn"));
        verticalSliderZeroBtn->setEnabled(false);
        verticalSliderZeroBtn->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_14->addWidget(verticalSliderZeroBtn);


        verticalLayout_14->addLayout(horizontalLayout_14);

        verticalSpacer_5 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_5);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalSpacer_20 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_20);

        verticalSliderDownBtn = new QPushButton(widget);
        verticalSliderDownBtn->setObjectName(QStringLiteral("verticalSliderDownBtn"));
        verticalSliderDownBtn->setEnabled(false);
        verticalSliderDownBtn->setMaximumSize(QSize(30, 16777215));
        QFont font6;
        font6.setPointSize(9);
        verticalSliderDownBtn->setFont(font6);

        horizontalLayout_15->addWidget(verticalSliderDownBtn);


        verticalLayout_14->addLayout(horizontalLayout_15);


        horizontalLayout_4->addWidget(widget);

        verticalSlider = new QSlider(controllerWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setEnabled(false);
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Ignored);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy7);
        QFont font7;
        font7.setKerning(false);
        font7.setStyleStrategy(QFont::NoAntialias);
        verticalSlider->setFont(font7);
        verticalSlider->setFocusPolicy(Qt::NoFocus);
        verticalSlider->setLayoutDirection(Qt::LeftToRight);
        verticalSlider->setAutoFillBackground(false);
        verticalSlider->setStyleSheet(QStringLiteral(""));
        verticalSlider->setMinimum(-10);
        verticalSlider->setMaximum(10);
        verticalSlider->setPageStep(1);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setInvertedControls(false);
        verticalSlider->setTickPosition(QSlider::TicksBothSides);
        verticalSlider->setTickInterval(1);

        horizontalLayout_4->addWidget(verticalSlider);

        widget_2 = new QWidget(controllerWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_5 = new QHBoxLayout(widget_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        controll_speed = new QLabel(widget_2);
        controll_speed->setObjectName(QStringLiteral("controll_speed"));
        controll_speed->setFont(font5);

        horizontalLayout_5->addWidget(controll_speed);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_22);


        horizontalLayout_4->addWidget(widget_2);


        verticalLayout_12->addLayout(horizontalLayout_4);

        widget_3 = new QWidget(controllerWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_12 = new QHBoxLayout(widget_3);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_3);

        horizontalLslider = new QPushButton(widget_3);
        horizontalLslider->setObjectName(QStringLiteral("horizontalLslider"));
        horizontalLslider->setEnabled(false);
        horizontalLslider->setMaximumSize(QSize(30, 16777215));

        verticalLayout_15->addWidget(horizontalLslider);


        horizontalLayout_12->addLayout(verticalLayout_15);

        horizontalSpacer_17 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_17);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout_13 = new QVBoxLayout(widget_4);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_7);

        controll_steer = new QLabel(widget_4);
        controll_steer->setObjectName(QStringLiteral("controll_steer"));
        controll_steer->setFont(font5);
        controll_steer->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(controll_steer);

        horizontalZslider = new QPushButton(widget_4);
        horizontalZslider->setObjectName(QStringLiteral("horizontalZslider"));
        horizontalZslider->setEnabled(false);

        verticalLayout_13->addWidget(horizontalZslider);


        horizontalLayout_12->addWidget(widget_4);

        horizontalSpacer_18 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_18);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_6);

        horizontalRslider = new QPushButton(widget_3);
        horizontalRslider->setObjectName(QStringLiteral("horizontalRslider"));
        horizontalRslider->setEnabled(false);
        horizontalRslider->setMaximumSize(QSize(30, 16777215));

        verticalLayout_16->addWidget(horizontalRslider);


        horizontalLayout_12->addLayout(verticalLayout_16);


        verticalLayout_12->addWidget(widget_3);

        horizontalSlider = new QSlider(controllerWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setFont(font7);
        horizontalSlider->setFocusPolicy(Qt::NoFocus);
        horizontalSlider->setAutoFillBackground(false);
        horizontalSlider->setMinimum(-30);
        horizontalSlider->setMaximum(30);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setValue(0);
        horizontalSlider->setSliderPosition(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::TicksBothSides);
        horizontalSlider->setTickInterval(1);

        verticalLayout_12->addWidget(horizontalSlider);


        verticalLayout_10->addWidget(controllerWidget);


        horizontalLayout->addWidget(verticalWidget);

        verticalWidget_2 = new QWidget(MainWindow);
        verticalWidget_2->setObjectName(QStringLiteral("verticalWidget_2"));
        verticalLayout_2 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        rviz_widget = new QWidget(verticalWidget_2);
        rviz_widget->setObjectName(QStringLiteral("rviz_widget"));
        rviz_widget->setStyleSheet(QStringLiteral("#rviz_widget{border:1px solid white;}"));
        verticalLayout_5 = new QVBoxLayout(rviz_widget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(1, 1, 1, 1);
        rviz_layout = new QVBoxLayout();
        rviz_layout->setSpacing(0);
        rviz_layout->setObjectName(QStringLiteral("rviz_layout"));
        setGoalButton = new QPushButton(rviz_widget);
        setGoalButton->setObjectName(QStringLiteral("setGoalButton"));
        sizePolicy6.setHeightForWidth(setGoalButton->sizePolicy().hasHeightForWidth());
        setGoalButton->setSizePolicy(sizePolicy6);
        setGoalButton->setFlat(false);

        rviz_layout->addWidget(setGoalButton);

        horizontalSpacer = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        rviz_layout->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(rviz_layout);


        verticalLayout_2->addWidget(rviz_widget);


        horizontalLayout->addWidget(verticalWidget_2);


        verticalLayout_7->addLayout(horizontalLayout);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ROS Hostname or IP :", Q_NULLPTR));
        hostname_txt->setPlaceholderText(QApplication::translate("MainWindow", "localhost", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "ROS Master URI :", Q_NULLPTR));
        masteruri_txt->setPlaceholderText(QApplication::translate("MainWindow", "http://localhost:11311", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "IMU Temperature:", Q_NULLPTR));
        TemperatureLabel->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        celsius->setText(QApplication::translate("MainWindow", "\302\260C", Q_NULLPTR));
        label_13->setText(QString());
        label_14->setText(QString());
        wheel1_label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0</p></body></html>", Q_NULLPTR));
        label_12->setText(QString());
        wheel4_label->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        wheel3_label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0</p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Wheel Speeds", Q_NULLPTR));
        wheel2_label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0</p></body></html>", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "m/s", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "m/s", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "m/s", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "m/s", Q_NULLPTR));
        stream_label->setText(QString());
        checkBox->setText(QApplication::translate("MainWindow", "Manual controll", Q_NULLPTR));
        verticalSliderUpBtn->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        verticalSliderZeroBtn->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        verticalSliderDownBtn->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        controll_speed->setText(QApplication::translate("MainWindow", "0 m/s", Q_NULLPTR));
        horizontalLslider->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        controll_steer->setText(QApplication::translate("MainWindow", "0 rad/s", Q_NULLPTR));
        horizontalZslider->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        horizontalRslider->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        setGoalButton->setText(QApplication::translate("MainWindow", "Set Goal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H

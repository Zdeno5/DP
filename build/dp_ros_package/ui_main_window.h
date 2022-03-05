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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
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
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
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
    QLabel *wheel1_label;
    QLabel *label_12;
    QLabel *wheel4_label;
    QLabel *wheel3_label;
    QLabel *label_11;
    QLabel *wheel2_label;
    QLabel *label_14;
    QWidget *middlewidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *angular_linear_speed_widget;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QLabel *a_x;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_7;
    QLabel *a_y;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_8;
    QLabel *a_z;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_9;
    QLabel *l_x;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_10;
    QLabel *l_y;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_3;
    QLabel *l_z;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_2;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *rviz_widget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *rviz_layout;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 720);
        MainWindow->setMinimumSize(QSize(1280, 720));
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
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(connectwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_4->addWidget(lineEdit);

        label_2 = new QLabel(connectwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_2);

        lineEdit_2 = new QLineEdit(connectwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_4->addWidget(lineEdit_2);

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
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_15->setFont(font);
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
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        TemperatureLabel->setFont(font1);
        TemperatureLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        TemperatureLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(TemperatureLabel);

        celsius = new QLabel(horizontalWidget_5);
        celsius->setObjectName(QStringLiteral("celsius"));
        sizePolicy3.setHeightForWidth(celsius->sizePolicy().hasHeightForWidth());
        celsius->setSizePolicy(sizePolicy3);
        celsius->setMaximumSize(QSize(16777215, 40));
        QFont font2;
        font2.setPointSize(16);
        celsius->setFont(font2);
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

        wheel1_label = new QLabel(carBPwidget);
        wheel1_label->setObjectName(QStringLiteral("wheel1_label"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(wheel1_label->sizePolicy().hasHeightForWidth());
        wheel1_label->setSizePolicy(sizePolicy6);
        wheel1_label->setMinimumSize(QSize(40, 0));
        wheel1_label->setMaximumSize(QSize(40, 50));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        wheel1_label->setFont(font3);
        wheel1_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        wheel1_label->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

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
        wheel4_label->setFont(font3);
        wheel4_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(wheel4_label, 4, 2, 1, 1);

        wheel3_label = new QLabel(carBPwidget);
        wheel3_label->setObjectName(QStringLiteral("wheel3_label"));
        sizePolicy6.setHeightForWidth(wheel3_label->sizePolicy().hasHeightForWidth());
        wheel3_label->setSizePolicy(sizePolicy6);
        wheel3_label->setMinimumSize(QSize(40, 0));
        wheel3_label->setMaximumSize(QSize(40, 40));
        wheel3_label->setFont(font3);
        wheel3_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        wheel3_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(wheel3_label, 4, 0, 1, 1);

        label_11 = new QLabel(carBPwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy5.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy5);
        label_11->setMaximumSize(QSize(16777215, 25));
        label_11->setFont(font);
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_11, 0, 1, 1, 1);

        wheel2_label = new QLabel(carBPwidget);
        wheel2_label->setObjectName(QStringLiteral("wheel2_label"));
        sizePolicy6.setHeightForWidth(wheel2_label->sizePolicy().hasHeightForWidth());
        wheel2_label->setSizePolicy(sizePolicy6);
        wheel2_label->setMinimumSize(QSize(40, 0));
        wheel2_label->setMaximumSize(QSize(40, 50));
        wheel2_label->setFont(font3);
        wheel2_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        wheel2_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(wheel2_label, 2, 2, 1, 1);

        label_14 = new QLabel(carBPwidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy4.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(label_14, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);


        verticalLayout_3->addWidget(carBPwidget);


        verticalLayout->addWidget(leftBotWidget);


        horizontalLayout->addWidget(leftwidget);

        middlewidget = new QWidget(MainWindow);
        middlewidget->setObjectName(QStringLiteral("middlewidget"));
        middlewidget->setStyleSheet(QStringLiteral(""));
        verticalLayout_6 = new QVBoxLayout(middlewidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        angular_linear_speed_widget = new QWidget(middlewidget);
        angular_linear_speed_widget->setObjectName(QStringLiteral("angular_linear_speed_widget"));
        angular_linear_speed_widget->setStyleSheet(QStringLiteral("#angular_linear_speed_widget{border: 1px solid white;}"));
        verticalLayout_9 = new QVBoxLayout(angular_linear_speed_widget);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_5 = new QLabel(angular_linear_speed_widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(true);

        verticalLayout_9->addWidget(label_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        label_4 = new QLabel(angular_linear_speed_widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font3);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_4);

        a_x = new QLabel(angular_linear_speed_widget);
        a_x->setObjectName(QStringLiteral("a_x"));
        a_x->setFont(font3);
        a_x->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(a_x);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_9->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        label_7 = new QLabel(angular_linear_speed_widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_7);

        a_y = new QLabel(angular_linear_speed_widget);
        a_y->setObjectName(QStringLiteral("a_y"));
        a_y->setFont(font3);
        a_y->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(a_y);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        verticalLayout_9->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        label_8 = new QLabel(angular_linear_speed_widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_8);

        a_z = new QLabel(angular_linear_speed_widget);
        a_z->setObjectName(QStringLiteral("a_z"));
        a_z->setFont(font3);
        a_z->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(a_z);

        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);


        verticalLayout_9->addLayout(horizontalLayout_8);

        label_6 = new QLabel(angular_linear_speed_widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font3);
        label_6->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);

        verticalLayout_9->addWidget(label_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        label_9 = new QLabel(angular_linear_speed_widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font3);
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_9);

        l_x = new QLabel(angular_linear_speed_widget);
        l_x->setObjectName(QStringLiteral("l_x"));
        l_x->setFont(font3);
        l_x->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(l_x);

        horizontalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);


        verticalLayout_9->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_12);

        label_10 = new QLabel(angular_linear_speed_widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font3);
        label_10->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_10);

        l_y = new QLabel(angular_linear_speed_widget);
        l_y->setObjectName(QStringLiteral("l_y"));
        l_y->setFont(font3);
        l_y->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(l_y);

        horizontalSpacer_15 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_15);


        verticalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_13);

        label_3 = new QLabel(angular_linear_speed_widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font3);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_3);

        l_z = new QLabel(angular_linear_speed_widget);
        l_z->setObjectName(QStringLiteral("l_z"));
        l_z->setFont(font3);
        l_z->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(l_z);

        horizontalSpacer_16 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_16);


        verticalLayout_9->addLayout(horizontalLayout_11);

        horizontalSpacer_2 = new QSpacerItem(160, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout_6->addWidget(angular_linear_speed_widget);


        horizontalLayout->addWidget(middlewidget);

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
        rviz_layout->setSpacing(6);
        rviz_layout->setObjectName(QStringLiteral("rviz_layout"));
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
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Temperature:", Q_NULLPTR));
        TemperatureLabel->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        celsius->setText(QApplication::translate("MainWindow", "\302\260C", Q_NULLPTR));
        label_13->setText(QString());
        wheel1_label->setText(QApplication::translate("MainWindow", "1000", Q_NULLPTR));
        label_12->setText(QString());
        wheel4_label->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        wheel3_label->setText(QApplication::translate("MainWindow", "500", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Wheel Speeds", Q_NULLPTR));
        wheel2_label->setText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
        label_14->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Required angular speed", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "x : ", Q_NULLPTR));
        a_x->setText(QApplication::translate("MainWindow", "0.000", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "y : ", Q_NULLPTR));
        a_y->setText(QApplication::translate("MainWindow", "0.000", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "z : ", Q_NULLPTR));
        a_z->setText(QApplication::translate("MainWindow", "0.000", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Required linear <br/>speed</p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "x : ", Q_NULLPTR));
        l_x->setText(QApplication::translate("MainWindow", "0.000", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "y : ", Q_NULLPTR));
        l_y->setText(QApplication::translate("MainWindow", "0.000", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "z : ", Q_NULLPTR));
        l_z->setText(QApplication::translate("MainWindow", "0.000", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H

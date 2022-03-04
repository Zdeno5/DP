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
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *wheel1_label;
    QLabel *wheel2_label;
    QLabel *wheel3_label;
    QLabel *wheel4_label;
    QLabel *car_img;
    QWidget *middlewidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *horizontalWidget_3;
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
    QVBoxLayout *verticalLayout_2;
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
        connectwidget->setStyleSheet(QStringLiteral("#connectwidget{border: 1px solid white; padding: 5px;}"));
        verticalLayout_4 = new QVBoxLayout(connectwidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(connectwidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(connectwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_4->addWidget(lineEdit);

        label_2 = new QLabel(connectwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_2);

        lineEdit_2 = new QLineEdit(connectwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_4->addWidget(lineEdit_2);

        pushButton = new QPushButton(connectwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);


        verticalLayout->addWidget(connectwidget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        wheel1_label = new QLabel(leftwidget);
        wheel1_label->setObjectName(QStringLiteral("wheel1_label"));

        horizontalLayout_3->addWidget(wheel1_label);

        wheel2_label = new QLabel(leftwidget);
        wheel2_label->setObjectName(QStringLiteral("wheel2_label"));

        horizontalLayout_3->addWidget(wheel2_label);

        wheel3_label = new QLabel(leftwidget);
        wheel3_label->setObjectName(QStringLiteral("wheel3_label"));

        horizontalLayout_3->addWidget(wheel3_label);

        wheel4_label = new QLabel(leftwidget);
        wheel4_label->setObjectName(QStringLiteral("wheel4_label"));
        wheel4_label->setEnabled(true);

        horizontalLayout_3->addWidget(wheel4_label);

        car_img = new QLabel(leftwidget);
        car_img->setObjectName(QStringLiteral("car_img"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(car_img->sizePolicy().hasHeightForWidth());
        car_img->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(car_img);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_3);


        horizontalLayout->addWidget(leftwidget);

        middlewidget = new QWidget(MainWindow);
        middlewidget->setObjectName(QStringLiteral("middlewidget"));
        middlewidget->setStyleSheet(QStringLiteral("#middlewidget{border: 1px solid white;}"));
        verticalLayout_6 = new QVBoxLayout(middlewidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalWidget_3 = new QWidget(middlewidget);
        horizontalWidget_3->setObjectName(QStringLiteral("horizontalWidget_3"));
        horizontalWidget_3->setMaximumSize(QSize(16777215, 150));
        verticalLayout_8 = new QVBoxLayout(horizontalWidget_3);
        verticalLayout_8->setSpacing(1);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_8->addItem(verticalSpacer_2);

        label_15 = new QLabel(horizontalWidget_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy2.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy2);
        label_15->setMinimumSize(QSize(160, 30));
        label_15->setMaximumSize(QSize(160, 30));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_15->setFont(font);
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_15->setScaledContents(false);
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_15);

        horizontalWidget_5 = new QWidget(horizontalWidget_3);
        horizontalWidget_5->setObjectName(QStringLiteral("horizontalWidget_5"));
        horizontalWidget_5->setMinimumSize(QSize(0, 40));
        horizontalWidget_5->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget_5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_3 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Minimum);

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

        horizontalSpacer_4 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_8->addWidget(horizontalWidget_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_8->addItem(verticalSpacer);


        verticalLayout_6->addWidget(horizontalWidget_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_5 = new QLabel(middlewidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(true);

        verticalLayout_9->addWidget(label_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        label_4 = new QLabel(middlewidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font3);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_4);

        a_x = new QLabel(middlewidget);
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

        label_7 = new QLabel(middlewidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_7);

        a_y = new QLabel(middlewidget);
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

        label_8 = new QLabel(middlewidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_8);

        a_z = new QLabel(middlewidget);
        a_z->setObjectName(QStringLiteral("a_z"));
        a_z->setFont(font3);
        a_z->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(a_z);

        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);


        verticalLayout_9->addLayout(horizontalLayout_8);

        label_6 = new QLabel(middlewidget);
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

        label_9 = new QLabel(middlewidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font3);
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_9);

        l_x = new QLabel(middlewidget);
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

        label_10 = new QLabel(middlewidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font3);
        label_10->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_10);

        l_y = new QLabel(middlewidget);
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

        label_3 = new QLabel(middlewidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font3);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_3);

        l_z = new QLabel(middlewidget);
        l_z->setObjectName(QStringLiteral("l_z"));
        l_z->setFont(font3);
        l_z->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(l_z);

        horizontalSpacer_16 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_16);


        verticalLayout_9->addLayout(horizontalLayout_11);

        horizontalSpacer_2 = new QSpacerItem(160, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(verticalLayout_9);


        horizontalLayout->addWidget(middlewidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        rviz_layout = new QVBoxLayout();
        rviz_layout->setObjectName(QStringLiteral("rviz_layout"));
        horizontalSpacer = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        rviz_layout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(rviz_layout);


        horizontalLayout->addLayout(verticalLayout_2);


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
        wheel1_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        wheel2_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        wheel3_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        wheel4_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        car_img->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Temperature:", Q_NULLPTR));
        TemperatureLabel->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        celsius->setText(QApplication::translate("MainWindow", "\302\260C", Q_NULLPTR));
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

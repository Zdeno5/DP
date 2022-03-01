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
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *TemperatureLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *wheel1_label;
    QLabel *wheel2_label;
    QLabel *wheel3_label;
    QLabel *wheel4_label;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(912, 532);
        horizontalLayout_2 = new QHBoxLayout(MainWindow);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(MainWindow);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(MainWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_4->addWidget(lineEdit);

        label_2 = new QLabel(MainWindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_4->addWidget(label_2);

        lineEdit_2 = new QLineEdit(MainWindow);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_4->addWidget(lineEdit_2);

        pushButton = new QPushButton(MainWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);


        verticalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        TemperatureLabel = new QLabel(MainWindow);
        TemperatureLabel->setObjectName(QStringLiteral("TemperatureLabel"));

        verticalLayout_3->addWidget(TemperatureLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        wheel1_label = new QLabel(MainWindow);
        wheel1_label->setObjectName(QStringLiteral("wheel1_label"));

        horizontalLayout_3->addWidget(wheel1_label);

        wheel2_label = new QLabel(MainWindow);
        wheel2_label->setObjectName(QStringLiteral("wheel2_label"));

        horizontalLayout_3->addWidget(wheel2_label);

        wheel3_label = new QLabel(MainWindow);
        wheel3_label->setObjectName(QStringLiteral("wheel3_label"));

        horizontalLayout_3->addWidget(wheel3_label);

        wheel4_label = new QLabel(MainWindow);
        wheel4_label->setObjectName(QStringLiteral("wheel4_label"));

        horizontalLayout_3->addWidget(wheel4_label);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        TemperatureLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        wheel1_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        wheel2_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        wheel3_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        wheel4_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H

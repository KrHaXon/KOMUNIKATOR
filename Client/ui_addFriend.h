/********************************************************************************
** Form generated from reading UI file 'addFriend.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFRIEND_H
#define UI_ADDFRIEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addFriend
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textFriend;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOk;
    QPushButton *btnDeleteFriend;
    QPushButton *btnCancel;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *addFriend)
    {
        if (addFriend->objectName().isEmpty())
            addFriend->setObjectName(QString::fromUtf8("addFriend"));
        addFriend->resize(789, 576);
        horizontalLayout_2 = new QHBoxLayout(addFriend);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox = new QGroupBox(addFriend);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textFriend = new QTextEdit(groupBox);
        textFriend->setObjectName(QString::fromUtf8("textFriend"));

        verticalLayout_2->addWidget(textFriend);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnOk = new QPushButton(addFriend);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout->addWidget(btnOk);

        btnDeleteFriend = new QPushButton(addFriend);
        btnDeleteFriend->setObjectName(QString::fromUtf8("btnDeleteFriend"));

        horizontalLayout->addWidget(btnDeleteFriend);

        btnCancel = new QPushButton(addFriend);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        retranslateUi(addFriend);

        QMetaObject::connectSlotsByName(addFriend);
    } // setupUi

    void retranslateUi(QWidget *addFriend)
    {
        addFriend->setWindowTitle(QCoreApplication::translate("addFriend", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("addFriend", "Enter friend name", nullptr));
        btnOk->setText(QCoreApplication::translate("addFriend", "Add Friend", nullptr));
        btnDeleteFriend->setText(QCoreApplication::translate("addFriend", "Delete Friend", nullptr));
        btnCancel->setText(QCoreApplication::translate("addFriend", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addFriend: public Ui_addFriend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFRIEND_H

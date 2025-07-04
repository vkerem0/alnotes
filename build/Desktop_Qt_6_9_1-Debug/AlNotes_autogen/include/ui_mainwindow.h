/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QTreeView *treeView;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEdit;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModality::NonModal);
        MainWindow->resize(977, 657);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/icoo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_2->addItem(verticalSpacer);

        treeView = new QTreeView(centralwidget);
        treeView->setObjectName("treeView");
        treeView->setStyleSheet(QString::fromUtf8(""));
        treeView->setIndentation(20);

        verticalLayout_2->addWidget(treeView);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(16, 16));
        pushButton->setCheckable(false);
        pushButton->setFlat(true);

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(500, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName("toolButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);
        toolButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(toolButton);

        toolButton_4 = new QToolButton(centralwidget);
        toolButton_4->setObjectName("toolButton_4");
        sizePolicy.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy);
        toolButton_4->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        toolButton_4->setIcon(icon3);
        toolButton_4->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(toolButton_4);

        toolButton_5 = new QToolButton(centralwidget);
        toolButton_5->setObjectName("toolButton_5");
        sizePolicy.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy);
        toolButton_5->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::SystemSearch));
        toolButton_5->setIcon(icon4);
        toolButton_5->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(toolButton_5);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica")});
        font.setPointSize(14);
        font.setUnderline(false);
        font.setKerning(true);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(textEdit);

        verticalLayout->setStretch(1, 4);
        verticalLayout->setStretch(2, 33);

        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 25);
        horizontalLayout_2->setStretch(1, 80);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 977, 20));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AlNotes", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_4->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_5->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "TS PMO GNG \360\237\245\200\360\237\245\200\360\237\245\200\360\237\245\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

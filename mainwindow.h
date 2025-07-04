#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QInputDialog>
#include <QPushButton>
#include <QStyle>
#include <QToolButton>
#include <QVBoxLayout>
#include <QObject>
#include <QCoreApplication>
#include <QDebug>
#include <QFileSystemModel>
#include "saveman.h"
#include <QDialog>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString appDirPath = QDir::homePath() + "/.alnotes";
    QFileSystemModel *model = new QFileSystemModel(this);
    Saveman *sman = new Saveman(this);

private slots:

    void initTView();
    void on_toolButton_clicked();
    //void on_save_triggered();


    void on_treeView_clicked(const QModelIndex &index);

    void on_toolButton_4_clicked();

    void on_pushButton_clicked();

    void on_toolButton_5_clicked();

private:
    Ui::MainWindow *ui;
    QString currentFPath;
    void saveFile();
    void searchWord();

};
#endif // MAINWINDOW_H

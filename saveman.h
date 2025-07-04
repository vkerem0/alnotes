#ifndef SAVEMAN_H
#define SAVEMAN_H

#include <QObject>
#include <QFileSystemModel>
#include <QTextEdit>
#include <QDebug>


class Saveman : public QObject
{
    Q_OBJECT
public:
    explicit Saveman(QObject *parent = nullptr);
    QString appDirPath = QDir::homePath() + "/.pipinotes";
    QFileSystemModel *model = new QFileSystemModel(this);
    QString cpth;

    //void on_savea_triggered();


signals:



public slots:

    void on_savea_triggered(QString p, QTextEdit *edit);




};

#endif // SAVEMAN_H

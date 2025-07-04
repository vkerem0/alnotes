#include "saveman.h"
#include <QtWidgets/qtextedit.h>

Saveman::Saveman(QObject *parent)
    : QObject{parent}
{}

void Saveman::on_savea_triggered(QString p, QTextEdit *edit)
{
    QFile file(p);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);
        out << edit->toPlainText();
        file.close();
        qInfo() << " wrote data ";
    }else{
        qInfo() << "error";
    }
}

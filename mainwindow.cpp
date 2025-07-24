#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    QDir dir(appDirPath);
    if(!dir.exists())
    {
        dir.mkpath(".");
    }

    initTView();

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_toolButton_clicked()
{
    QString fileName;
    QString *txtFolder = &appDirPath;

    fileName = QInputDialog::getText(this, "Note Name", "Enter name of the new note");
    QString txtPath = *txtFolder + "/" + fileName + ".txt";

    QFile file(txtPath);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream stream(&file);
        stream << "This is the note you created";
        file.close();
    }else{
        qInfo() << "you messed up";
    }

}

void MainWindow::initTView()
{

    model->setRootPath(appDirPath);
    model->setFilter(QDir::NoDotAndDotDot | QDir::Files);

    ui->treeView->setModel(model);
    ui->treeView->setRootIndex(model->index(appDirPath));

    ui->treeView->setColumnWidth(0, 220);
}



void MainWindow::on_treeView_clicked(const QModelIndex &index)
{

    currentFPath = model->filePath(index);
    QString _filePath = model->filePath(index);

    QFile file(_filePath);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString contents = file.readAll();
        ui->textEdit->setPlainText(contents);
    }


}




void MainWindow::on_toolButton_4_clicked()
{
    Saveman *man = new Saveman(this);
    man->on_savea_triggered(currentFPath, ui->textEdit);
}


void MainWindow::on_pushButton_clicked()
{
    QFile file(currentFPath);

    if(file.exists())
    {
        file.remove();
    }

}




void MainWindow::searchWord(){

    bool howsitgoin;
    QString searchText = QInputDialog::getText(this, "Search Word", "Wanted word:", QLineEdit::Normal, "", &howsitgoin);
    if (!howsitgoin || searchText.isEmpty())
        return;

    QTextDocument *document = ui->textEdit->document();


    QTextCharFormat normalFormat;
    QTextCharFormat highlightFormat;
    highlightFormat.setBackground(QColor("#DAA520")); //nice color ngl
    //QColor("#DAA520") mustard yellow
    //QColor("#FFD700") gold yellow

    QTextCursor cCursor = ui->textEdit->textCursor();
    cCursor.select(QTextCursor::Document);
    cCursor.setCharFormat(normalFormat);
    cCursor.clearSelection();


    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.setPosition(0);

    bool ihateqt = false;
    while (!cursor.isNull() && !cursor.atEnd()) {
        cursor = document->find(searchText, cursor, QTextDocument::FindFlag());
        if (!cursor.isNull()) {
            cursor.mergeCharFormat(highlightFormat);
            ihateqt = true;
        }
    }

    if (!ihateqt) {
        qInfo() << " not found ";
    }

}


void MainWindow::on_toolButton_5_clicked()
{
    searchWord();
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->codeButton, &QPushButton::clicked,
            [this]{ui->textEdit_2->setText(ui->textEdit->toPlainText().toUtf8().toBase64());});
    connect(ui->decodeButton, &QPushButton::clicked,
            [this]{ui->textEdit_3->setText(QByteArray::fromBase64(ui->textEdit_2->toPlainText().toUtf8()));});
}

MainWindow::~MainWindow()
{
    delete ui;
}


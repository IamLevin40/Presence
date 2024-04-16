#include "select_profession.h"
#include "ui_select_profession.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_studentButton_clicked()
{

    // Hide the previous ui.
    hide();

    // Show the ui of Student_Login_Form
    student_login_form = new Student_Login_Form(this);
    student_login_form->show();

}


void MainWindow::on_lecturerButton_clicked()
{

    // Hide the previous ui.
    hide();

    // Show the ui of Lecturer_Login_Form
    lecturer_login_form = new Lecturer_Login_Form(this);
    lecturer_login_form->show();

}

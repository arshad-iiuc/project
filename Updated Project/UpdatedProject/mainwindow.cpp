#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui -> stackedWidget -> setCurrentIndex(0);
    db = QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/Desktop/Qt/Updated Project/database/db.db");
    db.open();

    QSqlQuery query;

    // Execute a SQL statement
    query.exec("SELECT * FROM 'main'.'Price'");


    while (query.next()) {
        // Get the values from each column
        price_ticket = query.value("ticket").toString();
        price_RollerCoaster = query.value("RollerCoaster").toString();
        price_TrainRide = query.value("TrainRide").toString();
        price_bumpercar = query.value("BumperCar").toString();
        qDebug() << price_ticket << price_RollerCoaster << price_TrainRide << price_bumpercar;
    }
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}


void MainWindow::on_SignUp_pb_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(1);
}


void MainWindow::on_AdminLogIn_pb_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(2);
}


void MainWindow::on_UserLogIn_pb_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(3);

}


void MainWindow::on_UserLogin_pb_clicked()
{
        //qDebug() << "price " << price_ticket << price_RollerCoaster << price_TrainRide << price_bumpercar;
        login_mail = ui -> Login_UserMail_input -> text();
        login_pass = ui -> Login_UserPass_input -> text();
        QSqlQuery query;
        query.exec("SELECT  * FROM user WHERE mail = '"+login_mail+"' AND password = '"+login_pass+"'");

        //if(query.next())
        if(query.next())
        {
            ui -> stackedWidget -> setCurrentIndex(4);
        }
        else
        {
            QMessageBox::warning (this, "login", "wrong email password");
        }
        ui -> Login_UserMail_input -> clear();
        ui -> Login_UserPass_input -> clear();
}


void MainWindow::on_Exit1_pb_clicked()
{
    this -> close();
}


void MainWindow::on_Booking_pb_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(5);
}


void MainWindow::on_continue_pb_clicked()
{
    date_int = ui -> Booking_DayInput -> text().toInt();
    month_int = ui -> Booking_MonthInput -> text().toInt();
    year_int = ui -> Booking_YearInput -> text().toInt();
    int_quantity = ui -> Booking_QuantityInput -> text().toInt();
    //qDebug() << " " << int_quantity;
    int_BumperCar = ui -> BumperCar -> text().toInt();
    int_RollerCoaster = ui -> Roller_Coaster -> text().toInt();
    int_TrainRide = ui -> Train_Ride -> text().toInt();
    int_Pcar = price_bumpercar.toInt();
    int_Proller = price_RollerCoaster.toInt();
    int_Ptrain =  price_TrainRide.toInt();
    int_Pticket = price_ticket.toInt();
    //qDebug() << "Ride" << int_BumperCar << int_RollerCoaster << int_TrainRide;
    //qDebug() << "Prices " << int_Pticket << int_Proller << int_Pcar << int_Ptrain;
    if(date_int <= 31 )
    {
        ui -> stackedWidget -> setCurrentIndex(6);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Invalid date");
        msgBox.exec();
    }
    ui -> Booking_DayInput -> clear();
    ui -> Booking_MonthInput -> clear();
    ui -> Booking_YearInput -> clear();
    ui -> Booking_QuantityInput -> clear();
    ui -> BumperCar -> clear();
    ui -> Train_Ride -> clear();
    ui -> Roller_Coaster -> clear();

    //price = (int_quantity * 100);
    total_price = (int_Pcar * int_BumperCar) + (int_Proller * int_RollerCoaster) + (int_Pticket * int_quantity) + (int_Ptrain*int_TrainRide);
    price = QString::number(total_price);
    qDebug() << "price " << price;
    ui->continue_total_price->setText(price);


}


void MainWindow::on_AdminLogin_pb_clicked()
{
    admin_mail = ui -> LogIn_AdminMail_input -> text();
    admin_pass = ui -> LogIn_AdminPass_input -> text();
    if(admin_mail == "Admin" && admin_pass == "123")
    {
        ui -> stackedWidget -> setCurrentIndex(7);
    }
}


void MainWindow::on_SignUp_pb_2_clicked()
{
    s_name = ui->SignUpName_Input->text();
    s_mail = ui->SignUpMail_input->text();
    s_password = ui->SignUp_pass->text();
    s_mobile = ui->SignUp_Mobile->text();

    //qDebug() << s_name << s_mail << s_password << s_mobile;

    QSqlQuery query1;
    query1.exec("SELECT * FROM user ORDER BY id DESC LIMIT 1");
    if(query1.next()){
        id = query1.value(0).toInt() + 1;
        id_text = QString::number(id);
    }


    QSqlQuery query;
    query.exec("INSERT INTO user (id, name, mail, password, contact) ""VALUES ('"+id_text+"', '"+s_name+"', '"+s_mail+"', '"+s_password+"', '"+s_mobile+"')");
    //qDebug() << s_name << s_mail << s_password << s_mobile;
    //qDebug() <<"qdbg "<< query.next();
    QMessageBox msgBox;
    msgBox.setText("SignUp completed!");
    msgBox.exec();
    ui -> stackedWidget -> setCurrentIndex(0);

}


void MainWindow::on_A_Enter_pb_2_clicked()
{
    remove_mail = ui-> A_removeMail_input->text();
    //qDebug() << remove_mail;
    QSqlQuery query;
    //query.prepare("DELETE * FROM user WHERE mail = '"+remove_mail+"'");
    query.exec("DELETE FROM user WHERE mail = '"+remove_mail+"'");
    QMessageBox msgBox;
    msgBox.setText("User Removed!");
    msgBox.exec();
    ui -> stackedWidget -> setCurrentIndex(7);
}


void MainWindow::on_A_remove_pb_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}


void MainWindow::on_back1_pb_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(4);
}


void MainWindow::on_confirm_pb_clicked()
{
    date = QString::number(date_int);
    month = QString::number(month_int);
    year = QString::number(year_int);
    quantity = QString::number(int_quantity);
    RollerCoaster = QString::number(int_RollerCoaster);
    BumperCar = QString::number(int_BumperCar);
    TrainRide = QString::number(int_TrainRide);
    //qDebug() << date << month << year << quantity;
    //qDebug() << "Rides" << RollerCoaster << BumperCar << TrainRide ;
    QSqlQuery query;
    query.exec("INSERT INTO 'main'.'history' (mail, day, month, year, tickets, Bumpercar, Rollercoaster, TrainRide) "
               "VALUES ('"+login_mail+"', '"+date+"', '"+month+"', '"+year+"', '"+quantity+"', '"+BumperCar+"', '"+RollerCoaster+"', '"+TrainRide+"')");
    //qDebug() << query.next();
    QMessageBox msgBox;
    msgBox.setText("Booking done!");
    msgBox.exec();
    //qDebug() << login_mail << date << month << year << quantity;
    //qDebug() << BumperCar << RollerCoaster << TrainRide;
    ui -> stackedWidget -> setCurrentIndex(4);

}


void MainWindow::on_A_UpdatePrice_pb_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(11);
}


void MainWindow::on_A_Enter_pb_3_clicked()
{
    price = ui -> A_UpdatePrice_input -> text().toInt();
    QMessageBox msgBox;
    msgBox.setText("Price Updated");
    msgBox.exec();
    ui -> stackedWidget -> setCurrentIndex(7);
}


void MainWindow::on_A_Home_pb_2_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(7);
}


void MainWindow::on_A_ShowAllUser_pb_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(8);
    QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * query = new QSqlQuery(db);

        query->prepare("SELECT * FROM user");
        query->exec();
        modal->setQuery(*query);
        ui->tableView->setModel(modal);
        qDebug() << (modal->rowCount());
}


void MainWindow::on_A_Histroy_pb_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(8);
    QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * query = new QSqlQuery(db);

        query->prepare("SELECT * FROM 'main'.'history'");
        query->exec();
        modal->setQuery(*query);
        ui->tableView->setModel(modal);
        qDebug() << (modal->rowCount());

}


void MainWindow::on_A_Home_pb_3_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(7);
}






void MainWindow::on_pushButton_clicked()
{
    ui ->stackedWidget -> setCurrentIndex(9);
}


void MainWindow::on_Nightstay_pb_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(13);
}


//void MainWindow::on_pushButton_2_clicked()
//{
//    people = ui -> people -> text();
//    stay = ui -> stay -> text();
//    qDebug() << "Night Stay " << people << stay;
//    QSqlQuery query;
//    query.exec("INSERT INTO 'main'.'NightStay' (people, day, mail) "
//               "VALUES ('"+people+"', '"+stay+"', '"+login_mail+"')");
//    //qDebug() << query.next();
//    QMessageBox msgBox;
//    msgBox.setText("Booking done!");
//    msgBox.exec();

//}


void MainWindow::on_confirmpb_clicked()
{
    people = ui -> people -> text();
    stay = ui -> stay -> text();
    qDebug() << "Night Stay " << people << stay;
    QSqlQuery query;
    query.exec("INSERT INTO 'main'.'NightStay' (people, day, mail) "
               "VALUES ('"+people+"', '"+stay+"', '"+login_mail+"')");
    //qDebug() << query.next();
    QMessageBox msgBox;
    msgBox.setText("Booking done!");
    msgBox.exec();
}


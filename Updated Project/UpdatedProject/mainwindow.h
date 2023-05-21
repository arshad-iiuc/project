#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMessageBox>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_SignUp_pb_clicked();

    void on_AdminLogIn_pb_clicked();

    void on_UserLogIn_pb_clicked();

    void on_UserLogin_pb_clicked();

    void on_Exit1_pb_clicked();

    void on_Booking_pb_clicked();

    void on_continue_pb_clicked();

    void on_AdminLogin_pb_clicked();

    void on_SignUp_pb_2_clicked();

    void on_A_Enter_pb_2_clicked();

    void on_A_remove_pb_clicked();

    void on_back1_pb_clicked();

    void on_confirm_pb_clicked();

    void on_A_UpdatePrice_pb_clicked();

    void on_A_Enter_pb_3_clicked();

    void on_A_Home_pb_2_clicked();

    void on_A_ShowAllUser_pb_clicked();

    void on_A_Histroy_pb_clicked();

    void on_A_Home_pb_3_clicked();

    //void on_continue_total_price_linkActivated(const QString &link);



    void on_pushButton_clicked();

    void on_Nightstay_pb_clicked();



    void on_confirmpb_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QString login_mail, login_pass, date, month, year, price, quantity, admin_mail, admin_pass, search_mail;
    QString s_name, s_mail, s_mobile, s_password, id_text, remove_mail, BumperCar, TrainRide, RollerCoaster;
    qint32 id, int_quantity, date_int, month_int, year_int, int_BumperCar, int_TrainRide, int_RollerCoaster;
    QString price_bumpercar, price_RollerCoaster, price_TrainRide, price_ticket;
    qint32 int_Pcar, int_Proller, int_Ptrain, int_Pticket, total_price;
    QString people, stay;
//    qDebug() << price_bumpercar << price_rollercoaster << price_trainride << price_ticket;
};
#endif // MAINWINDOW_H

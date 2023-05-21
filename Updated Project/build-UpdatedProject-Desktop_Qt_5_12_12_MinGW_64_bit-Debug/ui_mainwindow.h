/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Login_page;
    QPushButton *SignUp_pb;
    QPushButton *AdminLogIn_pb;
    QPushButton *UserLogIn_pb;
    QWidget *SignUp_page;
    QLineEdit *SignUpName_Input;
    QLineEdit *SignUpMail_input;
    QLineEdit *SignUp_Mobile;
    QLineEdit *SignUp_pass;
    QPushButton *SignUp_pb_2;
    QWidget *LoginAsAdmin_page;
    QLineEdit *LogIn_AdminMail_input;
    QLineEdit *LogIn_AdminPass_input;
    QPushButton *AdminLogin_pb;
    QWidget *LoginAsUser_Page;
    QLineEdit *Login_UserMail_input;
    QLineEdit *Login_UserPass_input;
    QPushButton *UserLogin_pb;
    QWidget *UserHomePage;
    QPushButton *Booking_pb;
    QPushButton *Exit1_pb;
    QPushButton *Nightstay_pb;
    QWidget *BookTicketPage;
    QLineEdit *Booking_DayInput;
    QLineEdit *Booking_MonthInput;
    QLineEdit *Booking_YearInput;
    QLineEdit *Booking_QuantityInput;
    QPushButton *back1_pb;
    QPushButton *continue_pb;
    QLineEdit *BumperCar;
    QLineEdit *Train_Ride;
    QLineEdit *Roller_Coaster;
    QLabel *label;
    QLabel *label_2;
    QWidget *continuePage;
    QPushButton *confirm_pb;
    QPlainTextEdit *plainTextEdit;
    QLabel *continue_total_price;
    QWidget *AdminHomePage;
    QPushButton *A_ShowAllUser_pb;
    QPushButton *A_remove_pb;
    QPushButton *A_UpdatePrice_pb;
    QPushButton *A_Histroy_pb;
    QPushButton *pushButton;
    QWidget *ShowAllUserPage;
    QTableView *tableView;
    QWidget *SearchUserPage;
    QPushButton *A_Enter_pb;
    QLineEdit *A_searchMail_input;
    QPushButton *A_Home_pb;
    QWidget *RemoveUserPage;
    QLineEdit *A_removeMail_input;
    QPushButton *A_Enter_pb_2;
    QPushButton *A_Home_pb_2;
    QWidget *UpdatePricePage;
    QLineEdit *A_UpdatePrice_input;
    QPushButton *A_Enter_pb_3;
    QPushButton *A_Home_pb_3;
    QLineEdit *A_UpdateBumper;
    QLineEdit *A_UpdateTrain;
    QLineEdit *A_UpdateRollerCoaster;
    QWidget *BookingHistoryPage;
    QTableView *tableView_2;
    QWidget *StayPage;
    QLineEdit *people;
    QLineEdit *stay;
    QPushButton *confirmpb;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -30, 800, 600));
        stackedWidget->setStyleSheet(QString::fromUtf8("font: 14pt \"MV Boli\";"));
        Login_page = new QWidget();
        Login_page->setObjectName(QString::fromUtf8("Login_page"));
        SignUp_pb = new QPushButton(Login_page);
        SignUp_pb->setObjectName(QString::fromUtf8("SignUp_pb"));
        SignUp_pb->setGeometry(QRect(310, 250, 101, 25));
        AdminLogIn_pb = new QPushButton(Login_page);
        AdminLogIn_pb->setObjectName(QString::fromUtf8("AdminLogIn_pb"));
        AdminLogIn_pb->setGeometry(QRect(310, 150, 101, 25));
        UserLogIn_pb = new QPushButton(Login_page);
        UserLogIn_pb->setObjectName(QString::fromUtf8("UserLogIn_pb"));
        UserLogIn_pb->setGeometry(QRect(310, 200, 101, 25));
        stackedWidget->addWidget(Login_page);
        SignUp_page = new QWidget();
        SignUp_page->setObjectName(QString::fromUtf8("SignUp_page"));
        SignUpName_Input = new QLineEdit(SignUp_page);
        SignUpName_Input->setObjectName(QString::fromUtf8("SignUpName_Input"));
        SignUpName_Input->setGeometry(QRect(310, 90, 113, 24));
        SignUpMail_input = new QLineEdit(SignUp_page);
        SignUpMail_input->setObjectName(QString::fromUtf8("SignUpMail_input"));
        SignUpMail_input->setGeometry(QRect(310, 150, 113, 24));
        SignUp_Mobile = new QLineEdit(SignUp_page);
        SignUp_Mobile->setObjectName(QString::fromUtf8("SignUp_Mobile"));
        SignUp_Mobile->setGeometry(QRect(310, 200, 181, 24));
        SignUp_pass = new QLineEdit(SignUp_page);
        SignUp_pass->setObjectName(QString::fromUtf8("SignUp_pass"));
        SignUp_pass->setGeometry(QRect(310, 260, 113, 24));
        SignUp_pb_2 = new QPushButton(SignUp_page);
        SignUp_pb_2->setObjectName(QString::fromUtf8("SignUp_pb_2"));
        SignUp_pb_2->setGeometry(QRect(320, 330, 101, 31));
        stackedWidget->addWidget(SignUp_page);
        LoginAsAdmin_page = new QWidget();
        LoginAsAdmin_page->setObjectName(QString::fromUtf8("LoginAsAdmin_page"));
        LogIn_AdminMail_input = new QLineEdit(LoginAsAdmin_page);
        LogIn_AdminMail_input->setObjectName(QString::fromUtf8("LogIn_AdminMail_input"));
        LogIn_AdminMail_input->setGeometry(QRect(310, 190, 151, 24));
        LogIn_AdminPass_input = new QLineEdit(LoginAsAdmin_page);
        LogIn_AdminPass_input->setObjectName(QString::fromUtf8("LogIn_AdminPass_input"));
        LogIn_AdminPass_input->setGeometry(QRect(310, 240, 181, 24));
        LogIn_AdminPass_input->setEchoMode(QLineEdit::Password);
        AdminLogin_pb = new QPushButton(LoginAsAdmin_page);
        AdminLogin_pb->setObjectName(QString::fromUtf8("AdminLogin_pb"));
        AdminLogin_pb->setGeometry(QRect(630, 500, 101, 31));
        stackedWidget->addWidget(LoginAsAdmin_page);
        LoginAsUser_Page = new QWidget();
        LoginAsUser_Page->setObjectName(QString::fromUtf8("LoginAsUser_Page"));
        Login_UserMail_input = new QLineEdit(LoginAsUser_Page);
        Login_UserMail_input->setObjectName(QString::fromUtf8("Login_UserMail_input"));
        Login_UserMail_input->setGeometry(QRect(310, 100, 181, 24));
        Login_UserPass_input = new QLineEdit(LoginAsUser_Page);
        Login_UserPass_input->setObjectName(QString::fromUtf8("Login_UserPass_input"));
        Login_UserPass_input->setGeometry(QRect(310, 160, 171, 24));
        Login_UserPass_input->setEchoMode(QLineEdit::Password);
        UserLogin_pb = new QPushButton(LoginAsUser_Page);
        UserLogin_pb->setObjectName(QString::fromUtf8("UserLogin_pb"));
        UserLogin_pb->setGeometry(QRect(340, 220, 101, 41));
        stackedWidget->addWidget(LoginAsUser_Page);
        UserHomePage = new QWidget();
        UserHomePage->setObjectName(QString::fromUtf8("UserHomePage"));
        Booking_pb = new QPushButton(UserHomePage);
        Booking_pb->setObjectName(QString::fromUtf8("Booking_pb"));
        Booking_pb->setGeometry(QRect(270, 150, 301, 91));
        Exit1_pb = new QPushButton(UserHomePage);
        Exit1_pb->setObjectName(QString::fromUtf8("Exit1_pb"));
        Exit1_pb->setGeometry(QRect(680, 440, 80, 25));
        Nightstay_pb = new QPushButton(UserHomePage);
        Nightstay_pb->setObjectName(QString::fromUtf8("Nightstay_pb"));
        Nightstay_pb->setGeometry(QRect(320, 300, 181, 41));
        stackedWidget->addWidget(UserHomePage);
        BookTicketPage = new QWidget();
        BookTicketPage->setObjectName(QString::fromUtf8("BookTicketPage"));
        Booking_DayInput = new QLineEdit(BookTicketPage);
        Booking_DayInput->setObjectName(QString::fromUtf8("Booking_DayInput"));
        Booking_DayInput->setGeometry(QRect(110, 190, 113, 24));
        Booking_MonthInput = new QLineEdit(BookTicketPage);
        Booking_MonthInput->setObjectName(QString::fromUtf8("Booking_MonthInput"));
        Booking_MonthInput->setGeometry(QRect(120, 230, 113, 24));
        Booking_YearInput = new QLineEdit(BookTicketPage);
        Booking_YearInput->setObjectName(QString::fromUtf8("Booking_YearInput"));
        Booking_YearInput->setGeometry(QRect(130, 270, 113, 24));
        Booking_QuantityInput = new QLineEdit(BookTicketPage);
        Booking_QuantityInput->setObjectName(QString::fromUtf8("Booking_QuantityInput"));
        Booking_QuantityInput->setGeometry(QRect(140, 310, 113, 24));
        back1_pb = new QPushButton(BookTicketPage);
        back1_pb->setObjectName(QString::fromUtf8("back1_pb"));
        back1_pb->setGeometry(QRect(30, 520, 80, 25));
        continue_pb = new QPushButton(BookTicketPage);
        continue_pb->setObjectName(QString::fromUtf8("continue_pb"));
        continue_pb->setGeometry(QRect(630, 510, 101, 25));
        BumperCar = new QLineEdit(BookTicketPage);
        BumperCar->setObjectName(QString::fromUtf8("BumperCar"));
        BumperCar->setGeometry(QRect(480, 330, 151, 24));
        Train_Ride = new QLineEdit(BookTicketPage);
        Train_Ride->setObjectName(QString::fromUtf8("Train_Ride"));
        Train_Ride->setGeometry(QRect(530, 370, 131, 24));
        Roller_Coaster = new QLineEdit(BookTicketPage);
        Roller_Coaster->setObjectName(QString::fromUtf8("Roller_Coaster"));
        Roller_Coaster->setGeometry(QRect(550, 410, 161, 24));
        label = new QLabel(BookTicketPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 140, 341, 31));
        label_2 = new QLabel(BookTicketPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 270, 351, 31));
        stackedWidget->addWidget(BookTicketPage);
        continuePage = new QWidget();
        continuePage->setObjectName(QString::fromUtf8("continuePage"));
        confirm_pb = new QPushButton(continuePage);
        confirm_pb->setObjectName(QString::fromUtf8("confirm_pb"));
        confirm_pb->setGeometry(QRect(320, 320, 101, 51));
        plainTextEdit = new QPlainTextEdit(continuePage);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(250, 190, 241, 41));
        continue_total_price = new QLabel(continuePage);
        continue_total_price->setObjectName(QString::fromUtf8("continue_total_price"));
        continue_total_price->setGeometry(QRect(402, 189, 51, 31));
        stackedWidget->addWidget(continuePage);
        AdminHomePage = new QWidget();
        AdminHomePage->setObjectName(QString::fromUtf8("AdminHomePage"));
        A_ShowAllUser_pb = new QPushButton(AdminHomePage);
        A_ShowAllUser_pb->setObjectName(QString::fromUtf8("A_ShowAllUser_pb"));
        A_ShowAllUser_pb->setGeometry(QRect(360, 120, 171, 25));
        A_remove_pb = new QPushButton(AdminHomePage);
        A_remove_pb->setObjectName(QString::fromUtf8("A_remove_pb"));
        A_remove_pb->setGeometry(QRect(360, 170, 171, 25));
        A_UpdatePrice_pb = new QPushButton(AdminHomePage);
        A_UpdatePrice_pb->setObjectName(QString::fromUtf8("A_UpdatePrice_pb"));
        A_UpdatePrice_pb->setGeometry(QRect(360, 220, 171, 25));
        A_Histroy_pb = new QPushButton(AdminHomePage);
        A_Histroy_pb->setObjectName(QString::fromUtf8("A_Histroy_pb"));
        A_Histroy_pb->setGeometry(QRect(360, 330, 181, 31));
        pushButton = new QPushButton(AdminHomePage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 270, 161, 25));
        stackedWidget->addWidget(AdminHomePage);
        ShowAllUserPage = new QWidget();
        ShowAllUserPage->setObjectName(QString::fromUtf8("ShowAllUserPage"));
        tableView = new QTableView(ShowAllUserPage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 20, 761, 561));
        stackedWidget->addWidget(ShowAllUserPage);
        SearchUserPage = new QWidget();
        SearchUserPage->setObjectName(QString::fromUtf8("SearchUserPage"));
        A_Enter_pb = new QPushButton(SearchUserPage);
        A_Enter_pb->setObjectName(QString::fromUtf8("A_Enter_pb"));
        A_Enter_pb->setGeometry(QRect(340, 240, 101, 31));
        A_searchMail_input = new QLineEdit(SearchUserPage);
        A_searchMail_input->setObjectName(QString::fromUtf8("A_searchMail_input"));
        A_searchMail_input->setGeometry(QRect(300, 160, 171, 41));
        A_Home_pb = new QPushButton(SearchUserPage);
        A_Home_pb->setObjectName(QString::fromUtf8("A_Home_pb"));
        A_Home_pb->setGeometry(QRect(650, 510, 101, 41));
        stackedWidget->addWidget(SearchUserPage);
        RemoveUserPage = new QWidget();
        RemoveUserPage->setObjectName(QString::fromUtf8("RemoveUserPage"));
        A_removeMail_input = new QLineEdit(RemoveUserPage);
        A_removeMail_input->setObjectName(QString::fromUtf8("A_removeMail_input"));
        A_removeMail_input->setGeometry(QRect(320, 110, 171, 24));
        A_Enter_pb_2 = new QPushButton(RemoveUserPage);
        A_Enter_pb_2->setObjectName(QString::fromUtf8("A_Enter_pb_2"));
        A_Enter_pb_2->setGeometry(QRect(360, 180, 101, 41));
        A_Home_pb_2 = new QPushButton(RemoveUserPage);
        A_Home_pb_2->setObjectName(QString::fromUtf8("A_Home_pb_2"));
        A_Home_pb_2->setGeometry(QRect(650, 490, 101, 41));
        stackedWidget->addWidget(RemoveUserPage);
        UpdatePricePage = new QWidget();
        UpdatePricePage->setObjectName(QString::fromUtf8("UpdatePricePage"));
        A_UpdatePrice_input = new QLineEdit(UpdatePricePage);
        A_UpdatePrice_input->setObjectName(QString::fromUtf8("A_UpdatePrice_input"));
        A_UpdatePrice_input->setGeometry(QRect(330, 110, 251, 24));
        A_Enter_pb_3 = new QPushButton(UpdatePricePage);
        A_Enter_pb_3->setObjectName(QString::fromUtf8("A_Enter_pb_3"));
        A_Enter_pb_3->setGeometry(QRect(410, 330, 80, 25));
        A_Home_pb_3 = new QPushButton(UpdatePricePage);
        A_Home_pb_3->setObjectName(QString::fromUtf8("A_Home_pb_3"));
        A_Home_pb_3->setGeometry(QRect(670, 490, 80, 25));
        A_UpdateBumper = new QLineEdit(UpdatePricePage);
        A_UpdateBumper->setObjectName(QString::fromUtf8("A_UpdateBumper"));
        A_UpdateBumper->setGeometry(QRect(330, 160, 251, 24));
        A_UpdateTrain = new QLineEdit(UpdatePricePage);
        A_UpdateTrain->setObjectName(QString::fromUtf8("A_UpdateTrain"));
        A_UpdateTrain->setGeometry(QRect(330, 210, 251, 24));
        A_UpdateRollerCoaster = new QLineEdit(UpdatePricePage);
        A_UpdateRollerCoaster->setObjectName(QString::fromUtf8("A_UpdateRollerCoaster"));
        A_UpdateRollerCoaster->setGeometry(QRect(330, 260, 251, 31));
        stackedWidget->addWidget(UpdatePricePage);
        BookingHistoryPage = new QWidget();
        BookingHistoryPage->setObjectName(QString::fromUtf8("BookingHistoryPage"));
        tableView_2 = new QTableView(BookingHistoryPage);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(30, 20, 771, 571));
        stackedWidget->addWidget(BookingHistoryPage);
        StayPage = new QWidget();
        StayPage->setObjectName(QString::fromUtf8("StayPage"));
        people = new QLineEdit(StayPage);
        people->setObjectName(QString::fromUtf8("people"));
        people->setGeometry(QRect(280, 170, 181, 51));
        stay = new QLineEdit(StayPage);
        stay->setObjectName(QString::fromUtf8("stay"));
        stay->setGeometry(QRect(280, 270, 181, 41));
        confirmpb = new QPushButton(StayPage);
        confirmpb->setObjectName(QString::fromUtf8("confirmpb"));
        confirmpb->setGeometry(QRect(310, 370, 151, 51));
        stackedWidget->addWidget(StayPage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        SignUp_pb->setText(QApplication::translate("MainWindow", "Sign Up", nullptr));
        AdminLogIn_pb->setText(QApplication::translate("MainWindow", "Admin", nullptr));
        UserLogIn_pb->setText(QApplication::translate("MainWindow", "User", nullptr));
        SignUpName_Input->setPlaceholderText(QApplication::translate("MainWindow", "Name", nullptr));
        SignUpMail_input->setPlaceholderText(QApplication::translate("MainWindow", "Mail", nullptr));
        SignUp_Mobile->setPlaceholderText(QApplication::translate("MainWindow", "Mobile Number", nullptr));
        SignUp_pass->setPlaceholderText(QApplication::translate("MainWindow", "Password", nullptr));
        SignUp_pb_2->setText(QApplication::translate("MainWindow", "Sign Up", nullptr));
        LogIn_AdminMail_input->setText(QString());
        LogIn_AdminMail_input->setPlaceholderText(QApplication::translate("MainWindow", "Enter mail", nullptr));
        LogIn_AdminPass_input->setText(QString());
        LogIn_AdminPass_input->setPlaceholderText(QApplication::translate("MainWindow", "Enter password", nullptr));
        AdminLogin_pb->setText(QApplication::translate("MainWindow", "Log In", nullptr));
        Login_UserMail_input->setPlaceholderText(QApplication::translate("MainWindow", "Mail", nullptr));
        Login_UserPass_input->setPlaceholderText(QApplication::translate("MainWindow", "Password", nullptr));
        UserLogin_pb->setText(QApplication::translate("MainWindow", "log in", nullptr));
        Booking_pb->setText(QApplication::translate("MainWindow", "Book ticket and Add Ride", nullptr));
        Exit1_pb->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        Nightstay_pb->setText(QApplication::translate("MainWindow", "Night stay", nullptr));
        Booking_DayInput->setText(QString());
        Booking_DayInput->setPlaceholderText(QApplication::translate("MainWindow", "Day", nullptr));
        Booking_MonthInput->setText(QString());
        Booking_MonthInput->setPlaceholderText(QApplication::translate("MainWindow", "Month", nullptr));
        Booking_YearInput->setText(QString());
        Booking_YearInput->setPlaceholderText(QApplication::translate("MainWindow", "Year", nullptr));
        Booking_QuantityInput->setText(QString());
        Booking_QuantityInput->setPlaceholderText(QApplication::translate("MainWindow", "Quantity", nullptr));
        back1_pb->setText(QApplication::translate("MainWindow", "back", nullptr));
        continue_pb->setText(QApplication::translate("MainWindow", "continue", nullptr));
        BumperCar->setText(QString());
        BumperCar->setPlaceholderText(QApplication::translate("MainWindow", "Bumper Car", nullptr));
        Train_Ride->setPlaceholderText(QApplication::translate("MainWindow", "Train Ride", nullptr));
        Roller_Coaster->setText(QString());
        Roller_Coaster->setPlaceholderText(QApplication::translate("MainWindow", "Roller coaster", nullptr));
        label->setText(QApplication::translate("MainWindow", "Enter date & ticket quantity*", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Add ride quantity as you want", nullptr));
        confirm_pb->setText(QApplication::translate("MainWindow", "confirm", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("MainWindow", "Total payable ammont is \n"
"", nullptr));
        continue_total_price->setText(QApplication::translate("MainWindow", "100", nullptr));
        A_ShowAllUser_pb->setText(QApplication::translate("MainWindow", "Show all user", nullptr));
        A_remove_pb->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        A_UpdatePrice_pb->setText(QApplication::translate("MainWindow", "Update price", nullptr));
        A_Histroy_pb->setText(QApplication::translate("MainWindow", "Booking History", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Search User", nullptr));
        A_Enter_pb->setText(QApplication::translate("MainWindow", "Enter", nullptr));
        A_searchMail_input->setText(QString());
        A_searchMail_input->setPlaceholderText(QApplication::translate("MainWindow", "Enter mail", nullptr));
        A_Home_pb->setText(QApplication::translate("MainWindow", "Home", nullptr));
        A_removeMail_input->setText(QString());
        A_removeMail_input->setPlaceholderText(QApplication::translate("MainWindow", "Enter mail", nullptr));
        A_Enter_pb_2->setText(QApplication::translate("MainWindow", "Enter", nullptr));
        A_Home_pb_2->setText(QApplication::translate("MainWindow", "Home", nullptr));
        A_UpdatePrice_input->setText(QString());
        A_UpdatePrice_input->setPlaceholderText(QApplication::translate("MainWindow", "Updated Ticket Price", nullptr));
        A_Enter_pb_3->setText(QApplication::translate("MainWindow", "Enter", nullptr));
        A_Home_pb_3->setText(QApplication::translate("MainWindow", "Home", nullptr));
        A_UpdateBumper->setPlaceholderText(QApplication::translate("MainWindow", "Update BumperCar", nullptr));
        A_UpdateTrain->setPlaceholderText(QApplication::translate("MainWindow", "Update TrainRide", nullptr));
        A_UpdateRollerCoaster->setPlaceholderText(QApplication::translate("MainWindow", "Update RollerCoaster", nullptr));
        people->setText(QString());
        people->setPlaceholderText(QApplication::translate("MainWindow", "People", nullptr));
        stay->setText(QString());
        stay->setPlaceholderText(QApplication::translate("MainWindow", "Days", nullptr));
        confirmpb->setText(QApplication::translate("MainWindow", "confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

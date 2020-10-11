
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include "database_funs.h"

using namespace std;

class Customer
{
    //map for storing user data
    map<string, string> user_data;

public:
    Customer();
    //function to validate user when user logs in
    void validate_user();
    void get_balance();
    void deposit();
    void withdraw();
    void pin_change();
    void email_change();
    void mobile_number_change();
    void show_user_infomation();
    ~Customer();
};

Customer::Customer()
{

    cout << "\n\t\t\t\t    =========================================" << endl;
    cout << "\t\t\t\t    =========================================" << endl;
    cout << "\t\t\t\t          ||   WELCOME TO SBI ATM   ||" << endl;
    cout << "\t\t\t\t    =========================================" << endl;
    cout << "\t\t\t\t    =========================================\n\n"
         << endl;

    validate_user();
}

void Customer::validate_user()
{
    string account_no, pin;
    while (true)
    {
        cout << "Enter your correct account_no (make sure you have active internet connection)"<< endl;
        cin >> account_no;
        user_data = search(account_no);// searches the database for that account number..the function is defined in database_funs.h
        if (user_data.size() == 7)// as there are 7 columns in database
        {
            if((user_data["status"] == "blocked") || (user_data["status"] == "Blocked"))
            {
                cout<<"Your account is blocked"<<endl;
                exit(-1);
            }

            else
                break;
        }
    }
    int flag = 5;
    // Validating PIN
    cout << "Enter PIN" << endl;
    cin >> pin;
    flag--;

    while (user_data["PIN"] != pin)
    {
        if(flag==0)
        {
            cout<<"Too many wrong attempts"<<endl;
            cout<<"Your account has been blocked"<<endl;
            user_data["status"] = "Blocked";
            updaterecord(user_data);
            exit(-1);
        }
        cout << "Enter correct PIN "<<flag <<" attempts remaining" << endl;
        cin >> pin;
        flag--;
    }
}

void Customer::get_balance()
{
    cout << user_data["balance"] << endl;
}

void Customer::show_user_infomation()
{
    cout << "Account Number : " << user_data["acc_no"] << endl;
    cout << "Name : " << user_data["name"] << endl;
    cout << "Balance : " << user_data["balance"] << endl;
    cout << "Mobile_Number : " << user_data["mobile_number"] << endl;
    cout << "Email : " << user_data["email"] << endl;
}

void Customer::deposit()
{
    float amt;
    cout << "Enter amount to be deposited : " << endl;
    cin >> amt;
    while (amt <= 0 && amt > 20000)
    {
        cout << "You can only deposit amout between Rs. 1 and Rs. 20000" << endl;
        cout << "Enter correct amount" << endl;
        cin >> amt;
    }
    //used stoi function to convert string to int
    int curr = stoi(user_data["balance"]);
    curr += amt;
    user_data["balance"] = to_string(curr);
    cout << "Success!!" << endl;
}

void Customer::withdraw()
{
    float amt;
    cout << "Enter amount to be withdrawn : " << endl;
    cin >> amt;
    while (stof(user_data["balance"]) < amt)
    {
        cout << "You don't have sufficient funds " << endl;
        cout << "Enter correct amount" << endl;
        cin >> amt;
    }
    int curr = stoi(user_data["balance"]);
    curr -= amt;
    user_data["balance"] = to_string(curr);
    cout << "Success!!" << endl;
}

void Customer::pin_change()
{
    string pin;
    cout << "Enter your previous pin : " << endl;
    cin >> pin;
    while (user_data["PIN"] != pin)
    {
        cout << "Incorrect PIN " << endl;
        cout << "Enter correct PIN" << endl;
        cin >> pin;
    }
    cout << "Enter new PIN" << endl;
    cin >> pin;

    user_data["PIN"] = pin;
    cout << "PIN changed Successfully!!" << endl;
}

void Customer::email_change()
{
    string email;
    cout << "Enter new email : " << endl;
    cin >> email;

    user_data["email"] = email;
    cout << "email changed Successfully!!" << endl;
}

void Customer::mobile_number_change()
{
    string mn;
    cout << "Enter new mobile number : " << endl;
    cin >> mn;
    while (mn.length() != 10)
    {
        cout << "Incorrect Number (must be of 10 digits) " << endl;
        cout << "Enter correct mobile number" << endl;
        cin >> mn;
    }
    user_data["mobile_number"] = mn;
    cout << "Mobile Number changed Successfully!!" << endl;
}

Customer ::~Customer()
{
    updaterecord(user_data);
}

#endif

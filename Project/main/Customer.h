
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <ctime>
#include "database_funs.h"

using namespace std;

class Customer
{
    //map for storing user data
    map<string, string> user_data;
    map<string , string> details;

public:
    //function to validate user when user logs in
    int validate_user(string account_no , string pin);
    string get_balance();
    string get_acc_num();
    int deposit(int amt);
    int withdraw(int amt);
    void pin_change(string);
    void email_change(string);
    void mobile_number_change(string);
    int transfer_bal(string acc_no , int amt);
    map<string , string> show_user_infomation();
    ~Customer();
};



int Customer::validate_user(string account_no , string pin)
{
        user_data = search(account_no);// searches the database for that account number..the function is defined in database_funs.h
        if (user_data.size() == 7)// as there are 7 columns in database
        {
            if((user_data["status"] == "blocked") || (user_data["status"] == "Blocked"))
            {
                cout<<"Your account is blocked"<<endl;
                return 1;
            }
            else if(pin!= user_data["PIN"] )
                return 2;
            else
                return 4;
        }
        else
            return 0;


}

string Customer::get_balance()
{
    return user_data["balance"];
}

string Customer::get_acc_num()
{
    return user_data["acc_no"];
}
map<string , string> Customer::show_user_infomation()
{

    details["acc_no"] = user_data["acc_no"];
    details["name"] = user_data["name"];
    details["balance"] = user_data["balance"];
    details["mobile_number"] = user_data["mobile_number"];
    details["email"] = user_data["email"];
    return details;
}

int Customer::deposit(int amt)
{
    //used stoi function to convert string to int
    int curr = stoi(user_data["balance"]);
    curr += amt;
    string c = to_string(amt);
    user_data["balance"] = to_string(curr) ;
    time_t now = time(0);

    // convert now to string form
    char* date_time = ctime(&now);
    add_trans_stat(user_data["acc_no"] , "Deposit" , c , date_time );
    return 0;
}

int Customer::withdraw(int amt)
{
    if (stof(user_data["balance"]) < amt)
        return 1;

    int curr = stoi(user_data["balance"]);
    curr -= amt;
    user_data["balance"] = to_string(curr);

    time_t now = time(0);
    char* date_time = ctime(&now);
    add_trans_stat(user_data["acc_no"] , "Withdraw" ,  to_string(amt) , date_time );
    return 0;
}

void Customer::pin_change(string pin)
{

    user_data["PIN"] = pin;
    time_t now = time(0);
    char* date_time = ctime(&now);
    add_trans_stat(user_data["acc_no"] , "PIN Change" ,  "" , date_time );
}

void Customer::email_change(string email)
{

    user_data["email"] = email;
    time_t now = time(0);
    char* date_time = ctime(&now);
    add_trans_stat(user_data["acc_no"] , "Email Change" ,  "" , date_time );
}

void Customer::mobile_number_change(string new_)
{
    user_data["mobile_number"] = new_;
    time_t now = time(0);
    char* date_time = ctime(&now);
    add_trans_stat(user_data["acc_no"] , "Mobile Number Change" ,  "" , date_time );
}
int Customer::transfer_bal(string acc_no , int amt)
{
    int bal = stoi(user_data["balance"]);
    if(bal<amt)
        return 1;
    int x = balance_transfer(acc_no , amt);
    if(x==0)
    {
        string a = to_string(amt);
        bal-=amt;
        user_data["balance"] = to_string(bal);
        time_t now = time(0);
        char* date_time = ctime(&now);
        add_trans_stat(user_data["acc_no"] , "Balance_Transfer" , a , date_time );
    }
    return x;
}

Customer ::~Customer()
{
    updaterecord(user_data);
}

#endif

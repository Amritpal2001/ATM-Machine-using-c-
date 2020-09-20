#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

class Customer;
class Welcome
{
public:
    void main_menu(Customer &c);
};

class Customer : public Welcome
{
    string ACCOUNT_NO;
    string PIN;

public:
    // This vector contains the information of the logged in customer
    vector<string> CUSTOMER_DATA;
    //These two functions validate the user from Account Number and PIN
    void validate_user(fstream &file);
    bool validate(fstream &file, string account_no);
    Customer();
};

Customer::Customer()
{

    cout << "\n\t\t\t\t    =========================================" << endl;
    cout << "\t\t\t\t    =========================================" << endl;
    cout << "\t\t\t\t          ||   WELCOME TO SBI ATM   ||" << endl;
    cout << "\t\t\t\t    =========================================" << endl;
    cout << "\t\t\t\t    =========================================\n\n"
         << endl;
    fstream file;
    file.open("database.csv");
    validate_user(file);
    file.close();
}

void Customer::validate_user(fstream &file)
{
    string account_no, pin;
    cout << "Enter your Account Number : " << endl;
    cin >> account_no;
    //Validating Account Number
    while (!validate(file, account_no))
    {
        cout << "Enter correct account_no" << endl;
        cin >> account_no;
        file.clear();
        file.seekg(0);
    }
    cout << "Enter PIN" << endl;
    cin >> pin;
    // Validating PIN
    while (Customer::PIN != pin)
    {
        cout << "Enter correct PIN" << endl;
        cin >> pin;
    }
}
bool Customer::validate(fstream &file, string account_no)
{

    string line, pass, acc;
    while (getline(file, line))
    {
        stringstream s(line);
        getline(s, acc, ',');
        if (acc == account_no)
        {
            Customer::ACCOUNT_NO = account_no;
            getline(s, pass, ',');
            Customer::PIN = pass;
            // Taking customer information in CUSTOMER_DATA vector
            while (getline(s, pass, ','))
                CUSTOMER_DATA.push_back(pass);
        }
    }
    if (Customer::ACCOUNT_NO.length() > 0)
        return true;
    else
        return false;
}

void Welcome::main_menu(Customer &c)
{
    cout << setw(20) << "\n\nWELCOME " << c.CUSTOMER_DATA[0] << "\n\n";
    cout << setw(43) << "**Please choose the operation**" << endl
         << endl;
    cout << "      **************  Press 1 for Withdrawl          **************\n";
    cout << "      **************  Press 2 for Account Balance    ************** \n";
    cout << "      **************  Press 3 for Deposit            ************** \n";
    cout << "      **************  Press 4 to Transfer Balance    ************** \n";
    cout << "      **************  Press 5 for PIN Change         ************** \n";
    cout << "      **************  Press 6 to EXIT                ************** \n\n\n";
}

int main()
{
    Customer c;
    c.main_menu(c);
    return 0;
}
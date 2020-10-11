#include "Customer.h"
#include "database_funs.h"
#include <cstdlib>

void main_menu();
void add_new_user();


int main()
{
    //add_new_user();
    main_menu();
    getchar();
    return 0;
}


void main_menu()
{
    Customer c;
    int q;
    while (true)
    {
        system("CLS");
        cout << setw(20) << "\n\nWELCOME "
             << "\n\n";
        cout << setw(43) << "**Please choose the operation**" << endl
             << endl;
        cout << "      **************  Press 1 for Withdrawl                **************\n";
        cout << "      **************  Press 2 for Account Balance          ************** \n";
        cout << "      **************  Press 3 for Deposit                  ************** \n";
        cout << "      **************  Press 4 to show user information     ************** \n";
        cout << "      **************  Press 5 for PIN Change               ************** \n";
        cout << "      **************  Press 6 for Email Change             ************** \n";
        cout << "      **************  Press 7 for Mobile Number Change     ************** \n";
        cout << "      **************  Press 8 to EXIT                      ************** \n\n\n";

        cout << "Enter your choice" << endl;
        cin >> q;
        switch (q)
        {
        case 1:
            c.withdraw();
            cout << "Press Enter to return to home screen" << endl;
            getchar();
            getchar();
            break;

        case 2:
            c.get_balance();
            cout << "Press Enter to return to home screen" << endl;
            getchar();
            getchar();
            break;
        case 3:
            c.deposit();
            cout << "Press Enter to return to home screen" << endl;
            getchar();
            getchar();
            break;

        case 4:
            c.show_user_infomation();
            cout << "Press Enter to return to home screen" << endl;
            getchar();
            getchar();
            break;

        case 5:
            c.pin_change();
            cout << "Press Enter to return to home screen" << endl;
            getchar();
            getchar();
            break;
        case 6:
            c.email_change();
            cout << "Press Enter to return to home screen" << endl;
            getchar();
            getchar();
            break;
        case 7:
            c.mobile_number_change();
            cout << "Press Enter to return to home screen" << endl;
            getchar();
            getchar();
            break;
        case 8:
            return ;
            break;

        default:
            cout << "Enter correct choice" << endl;
            cout << "Press Enter to return to home screen" << endl;
            getchar();
            getchar();
            break;
        }
    }


}

void add_new_user()
{

    string a,b,c,d,e,f,g;
    cout<<"Enter Account number"<<endl;
    cin>>a;
    cout<<"Enter PIN"<<endl;
    cin>>b;
    cout<<"Enter name"<<endl;
    cin>>c;
    cout<<"Enter balance"<<endl;
    cin>>d;
    cout<<"Enter mobile number"<<endl;
    cin>>e;
    cout<<"Enter email"<<endl;
    cin>>f;
    cout<<"Enter status"<<endl;
    cin>>g;
    addrecord(a,b,c,d,e,f,g);


}

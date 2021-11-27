#include <iostream>
using namespace std;
void show_menu()
{
    cout << "**********MENU**********"<<endl;
    cout << "1.Check balance" << endl;
    cout << "2.Deposit" << endl;
    cout << "3.Withdraw" << endl;
    cout << "4.EXIT" << endl;
    cout << "************************" << endl;
}
int main()
{
    //check balance, deposit, withdraw, show menu.
    int option;
    double balance = 500;
    do {
        show_menu();
        cout << "Option :";
        cin >> option;
        system("cls");

        switch (option) {
            case 1 :
                cout << "Balance is:" << balance << "$" << endl;
                break;
            case 2 :
                cout << "Deposit amount:";
                double DepositAmount;
                cin >> DepositAmount;
                balance += DepositAmount;
                break;
            case 3 :
                cout << "WithdrawAmount";
                double WithdrawAmount;
                cin >> WithdrawAmount;
                if (WithdrawAmount <= balance)
                    balance -= WithdrawAmount;
                else
                    cout << "YOU ARE BROKE" << endl;
                break;
        }
    } while (option != 4);

    return 0;
}

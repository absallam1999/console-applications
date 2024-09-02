/*
 ** Name:        Banking System Application
 ** Version:     1.0.0
 ** Description: Simple Simulation for Banking System in Console
 ** Author:      Absallam
 ** Tools:       C++
*/

#include <iostream>
using namespace std;

class Bank
{
private:
    char name[100], address[100], type;
    float balance;

public:
    void openAccount();
    void depositeMoney();
    void withdrawMoney();
    void displayAccount();
};

void Bank::openAccount()
{
    cout << "Enter Full Name: \n";
    cin.ignore();
    cin.getline(name, 100);

    cout << "Enter Your Address: \n";
    cin.ignore();
    cin.getline(address, 100);

    cout << "Choose Account Type s => (saving), c => (current): \n";
    cin >> type;

    cout << "Enter Amount to Deposite: \n";
    cin >> balance;

    cout << "Congrats, Your Account Created Successfully.\n";
}

void Bank::depositeMoney()
{
    int a;
    cout << "Enter Amount to Deposite: \n";
    cin >> a;
    balance += a;
    cout << "Total Balance is: " << balance << '\n';
}

void Bank::displayAccount()
{
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Acciunt Type: " << type << endl;
    cout << "Balance Amount: " << balance << endl;
}

void Bank::withdrawMoney()
{
    float a;
    cout << "Enter Withdraw Amount: " << endl;
    cin >> a;
    if (balance >= a)
    {
        balance -= a;
        cout << "Successfully, Total Balance: " << balance << '\n';
    }
    else
    {
        cout << "Sorry, No Enough Balance\n";
    }
}

int main()
{
    int choise;
    Bank obj;

    do
    {
        cout << "1) Open Account. \n";
        cout << "2) Deposite Money. \n";
        cout << "3) Withdraw Money. \n";
        cout << "4) Display Account. \n";
        cout << "5) Exit.\n";
        cout << ":: Select Option from above ::\n";
        cin >> choise;

        switch (choise)
        {
        case 1:
            cout << "**************\n";
            cout << "Open Account. \n";
            obj.openAccount();
            cout << "**************\n";
            break;
        case 2:
            cout << "**************\n";
            cout << "Deposite Money. \n";
            obj.depositeMoney();
            cout << "**************\n";
            break;
        case 3:
            cout << "**************\n";
            cout << "Withdraw Money. \n";
            obj.withdrawMoney();
            cout << "**************\n";
            break;
        case 4:
            cout << "**************\n";
            cout << "Display Account. \n";
            obj.displayAccount();
            cout << "**************\n";
            break;
        case 5:
            break;
        default:
            cout << "**************\n";
            cout << "Invalid Choise..\n";
            cout << "**************\n";
        }
    } while (choise != 5);
    return 0;
}
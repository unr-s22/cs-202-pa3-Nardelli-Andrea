//
//  main.cpp
//  
//
//  Created by Andrea Nardelli on 3/30/22.
//

#include <iostream>
#include <iomanip>
#include "money.h"
#include "account.h"

using namespace std;

int main(int argc, char* argv[])
{
    //declare variables
    double balance,    deposit, withdraw;
    int option;

    balance = 300.23; //default amount

    do
    {
        cout <<"\n\t*************MENU****************";
        cout <<"\n\t*                               *";
        cout <<"\n\t*        1. Check Balance       *";
        cout <<"\n\t*        2. Deposit             *";
        cout <<"\n\t*        3. Withdraw            *";
        cout <<"\n\t*        4. Exit                *";
        cout <<"\n\t*                               *";
        cout <<"\n\t*********************************";
        cout <<"\n\t  Please choose an option: ";
        cin>> option;

        switch (option){
        
        case 1: cout << "\n\tYour Balance is: $"<<balance <<endl;
                 break;

        case 2: cout << "\n\tAmount you want to deposit: $";
                cin>>deposit;
                balance += deposit;
                cout<<"\n\t Current Balance: $" << balance <<endl;
                break;

        case 3: cout << "\n\tHow much do you want to withdraw?: $";
            cin>> withdraw;

            if(balance < withdraw)
                cout << "\n\tYou do not have enough money in your account to withdraw"<<endl;
            else
                balance -= withdraw;
            
            cout<<"\n\t Current Balance: $" << balance <<endl;
            break;

        default: if(option != 4)
                cout<< "\n\tThank you for banking with us; Have a nice day!" <<endl;;
            break;
        };

    } while (option != 4);

    return 0;
};

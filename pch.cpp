
#include "pch.h"

#include<iostream>
using namespace std;


/*int main()
{
	BankAccount acc1;
	long userAccountNumber;
	int userChoice;
	int depositAmount;
	int withdrawnAmount;
	int balance;
	char contChoice;

	cout << "\nWelcome!!\n\n";
	cout << "Enter your account number: ";
	cin >> acc1.accountNo;
	cout<< "Enter your pin: ";
	cin >> acc1.pin;
	if(acc1.checkPinSize(acc1.pin)){
    	    cout << "Your current balance is: " << acc1.returnBalance() << endl;
    	do {
    
    		cout << "\nENTER\n1. Deposit\n2. Withdraw\n3. View Balance\n\n";
    		cin >> userChoice;
    		switch (userChoice) {
    		case 1:
    			cout << "Enter the amount to be deposited: ";
    			cin >> depositAmount;
    			acc1.deposit(depositAmount);
    			break;
    		case 2:
    			cout << "Enter the amount to be withdrawn: ";
    			cin >> withdrawnAmount;
    			acc1.withdraw(withdrawnAmount);
    			break;
    
    		case 3:
    			balance = acc1.returnBalance();
    			cout<<"Account Holder: "<<acc1.accountNo<<endl;
    			cout << "Your current Balance is: " << balance << endl;
    			break;
    		default:
    			cout << "Invalid Choice\n";
    			break;
    		}
    		cout << "Do you want to continue ?? If yes enter y: ";
    		cin >> contChoice;
    	} while (contChoice == 'y');
    	cout << "\nThank You!! Have a nice day:)\n";
	}else
	{
	    cout<<"Invalid Pin:(\n";
	}

	return 0;
}*/

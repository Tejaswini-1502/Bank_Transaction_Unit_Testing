class BankAccount {
public:
	int balance;
	long accountNo;
	int pin;
public:
	BankAccount() {
		balance = 500;
	}
	bool checkPinSize(int pin) {
		int count = 0;
		while (pin > 0) {
			count++;
			pin /= 10;
		}
		if (count == 4) {
			return true;
		}
		return false;
	}
	int deposit(int dep_amt) {
		if (dep_amt < 0) {
			return balance;
		}
		balance += dep_amt;
		return balance;
	}

	int withdraw(int withdraw_amt) {
		if (withdraw_amt > 500 || withdraw_amt<0) {
			return balance;
		}
		balance -= withdraw_amt;
		return balance;
	}

	int returnBalance() {
		return balance;
	}

	long validAccount(long acct_number) {
		accountNo = acct_number;
		return accountNo;
	}
};

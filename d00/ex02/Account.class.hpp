#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <ctime>
#include <iostream>

# define SIZE  30

class Account {

private:

	Account(void);
	static int 		_nbAccounts;
	static int 		_totalAmount;
	static int 		_totalNbDeposits;
	static int 		_totalNbWithdrawals;
	static void 	_displayTimestamp( void );
	int    			_accountIndex;
	int    			_amount;
	int    			_nbDeposits;
	int    			_nbWithdrawals;

public:

	typedef Account  t;

	Account(int initial_deposit);
	~Account(void);
	static int 		getNbAccounts(void);
	static int 		getTotalAmount(void);
	static int 		getNbDeposits(void);
	static int 		getNbWithdrawals(void);
	static void 	displayAccountsInfos(void);

	void 			makeDeposit(int deposit);
	bool 			makeWithdrawal(int withdrawal);
	int  			checkAmount(void) const;
	void 			displayStatus(void) const;

};

#endif
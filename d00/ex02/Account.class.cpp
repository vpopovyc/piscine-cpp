/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 22:23:24 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/19 22:23:25 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.class.hpp>

int 		Account::_nbAccounts = 0;
int 		Account::_totalAmount = 0;
int 		Account::_totalNbDeposits = 0;
int 		Account::_totalNbWithdrawals = 0;

Account::Account(void) {

}

Account::Account(int initial_deposit) {

	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;  
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += _amount;
	_totalNbDeposits += _nbDeposits;
	_totalNbWithdrawals += _nbWithdrawals;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl; 
}

Account::~Account(void) {

	_displayTimestamp();
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::_displayTimestamp(void) {

    std::time_t     time_var;
    char            time_buffer[SIZE];

    time_var = std::time(NULL);
    std::strftime(time_buffer, sizeof(time_buffer), "[%Y%m%d-%H%M%S] " , std::localtime(&time_var));
    std::cout << time_buffer;
}

int 	Account::getNbAccounts(void) {

 	return (_nbAccounts);
 }
 
int 	Account::getTotalAmount(void) {

 	return (_totalAmount);
 }
 
int 	Account::getNbDeposits(void) {

 	return (_totalNbDeposits);
 }
 
int 	Account::getNbWithdrawals(void) {

 	return (_totalNbWithdrawals);
 }

void	Account::makeDeposit(int deposit) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "nb_deposits:" << _nbDeposits << ";" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:" ;
	if (withdrawal > _amount) {
		std::cout << "refused;" << std::endl;
		return (false);
	}
	else {

		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << withdrawal << ";"; 
		std::cout << "amount:" << _amount << ";";
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}

void	Account::displayStatus(void) const {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << ";" << std::endl;
}

void 	Account::displayAccountsInfos(void) {

	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << ";" << std::endl;
 }


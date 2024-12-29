/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 10:42:12 by erijania          #+#    #+#             */
/*   Updated: 2024/12/29 11:52:34 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int amount): _amount(amount)
{
	_accountIndex = _nbAccounts++;
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex << ';'
	<< "amount:" << amount << ';'
	<< "created" << std::endl;
	_totalAmount += amount;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout
	<< "accounts:" << _nbAccounts << ';'
	<< "total:" << _totalAmount << ';'
	<< "deposit:" << _totalNbDeposits << ';'
	<< "withdrawals:" << _totalNbWithdrawals
	<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex << ';'
	<< "p_amount:" << _amount << ';'
	<< "deposit:" << deposit << ';'
	<< "amount:" << _amount + deposit << ';'
	<< "nb_deposit:" << (++_nbDeposits)
	<< std::endl;
	_amount += deposit;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex << ';' << std::ends;
	if (_amount - withdrawal < 0)
	{
		std::cout
		<< "amount:" << _amount << ';'
		<< "withdrawal:refused"
		<< std::endl;
		return (false);
	}
	std::cout
	<< "p_amount:" << _amount << ';'
	<< "withdrawal:" << withdrawal << ';'
	<< "amount:" << _amount - withdrawal << ';'
	<< "nb_withdrawals:" << (++_nbWithdrawals)
	<< std::endl;
	_amount -= withdrawal;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex << ';'
	<< "amount:" << _amount << ';'
	<< "deposit:" << _nbDeposits << ';'
	<< "withdrawals:" << _nbWithdrawals
	<< std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t		now;
	struct tm	*timeInfo;

	now = time(NULL);
	timeInfo = localtime(&now);
	std::cout
	<< '[' << (1900 + timeInfo->tm_year)
	<< std::setfill('0') << std::setw(2) << (timeInfo->tm_mon + 1)
	<< std::setfill('0') << std::setw(2) << timeInfo->tm_mday
	<< '_'
	<< std::setfill('0') << std::setw(2) << timeInfo->tm_hour
	<< std::setfill('0') << std::setw(2) << timeInfo->tm_min
	<< std::setfill('0') << std::setw(2) << timeInfo->tm_sec
	<< "] " << std::ends;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex << ';'
	<< "amount:" << _amount << ';'
	<< "closed"
	<< std::endl;
}

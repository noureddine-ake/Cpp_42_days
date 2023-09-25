/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:27:03 by nakebli           #+#    #+#             */
/*   Updated: 2023/09/25 04:46:44 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <chrono>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout   << " accounts:" << getNbAccounts() 
                << ";total:" << getTotalAmount() 
                << ";deposits:" << getNbDeposits() 
                << ";withdrawals:" << getNbWithdrawals() 
                << std::endl;
}

Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    Account::_displayTimestamp();
    std::cout   << " index:" << _accountIndex 
                << ";amount:" << initial_deposit 
                << ";created" << std::endl;
    _nbAccounts = _nbAccounts + 1;
    _totalAmount = _totalAmount + initial_deposit;
    _amount += initial_deposit;
}

Account::~Account( void )
{
    return ;
}

void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std :: cout << " index" << _accountIndex
                << ";p_amount:" << _amount
                << ";deposit:" << deposit
                << ";amount:" << _amount + deposit
                << ";nb_deposits:" << _nbDeposits + 1
                << std::endl;
    _totalAmount = _totalAmount + deposit;
    _nbDeposits = _nbDeposits + 1;
    _totalNbDeposits = _totalNbDeposits + 1;
    _amount = _amount + deposit;
    return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal <= _amount)
    {
        Account::_displayTimestamp();
        std :: cout << " index" << _accountIndex
                    << ";p_amount:" << _amount
                    << ";withdrawal:" << withdrawal
                    << ";amount:" << _amount - withdrawal
                    << ";nb_withdrawals:" << _nbWithdrawals + 1
                    << std::endl;
        _totalAmount = _totalAmount - withdrawal;
        _nbWithdrawals = _nbWithdrawals + 1;
        _totalNbWithdrawals = _totalNbWithdrawals + 1;
        _amount = _amount - withdrawal;
        return (true);
    }
    Account::_displayTimestamp();
    std :: cout << " index" << _accountIndex
                << ";p_amount:" << _amount
                << ";withdrawal:refused"
                << std::endl;
    return (false);
}

int		Account::checkAmount( void ) const
{
    return (0);
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout   << " index:" << _accountIndex 
                << ";amount:" << _amount
                << ";deposits:" << _nbDeposits
                << ";withdrawals:" << _nbWithdrawals
                << std::endl;
}

void	Account::_displayTimestamp( void )
{
    std::time_t rawTime;
    std::time(&rawTime);
    struct std::tm* timeInfo = std::localtime(&rawTime);
    char buffer[80];

    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", timeInfo);
    std::cout << "[" << std::string(buffer) << "]";
}

Account::Account( void )
{
    return ;
}

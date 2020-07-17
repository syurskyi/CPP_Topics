#ifndef _ACCOUNT_UTIL_H_
_de.. _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

// Utility helper functions for Account class

v.. display(const std::vector<Account> &accounts);
v.. deposit(std::vector<Account> &accounts, double amount);
v.. withdraw(std::vector<Account> &accounts, double amount);

// Utility helper functions for Savings Account class

v.. display(const std::vector<Savings_Account> &accounts);
v.. deposit(std::vector<Savings_Account> &accounts, double amount);
v.. withdraw(std::vector<Savings_Account> &accounts, double amount);

// Utility helper functions for Checking Account class
v.. display(const std::vector<Checking_Account> &accounts);
v.. deposit(std::vector<Checking_Account> &accounts, double amount);
v.. withdraw(std::vector<Checking_Account> &accounts, double amount);

// Utility helper functions for Trust Account class
v.. display(const std::vector<Trust_Account> &accounts);
v.. deposit(std::vector<Trust_Account> &accounts, double amount);
v.. withdraw(std::vector<Trust_Account> &accounts, double amount);

#endif
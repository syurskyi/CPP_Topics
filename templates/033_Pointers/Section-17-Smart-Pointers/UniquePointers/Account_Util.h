#ifndef _ACCOUNT_UTIL_H_
_de.. _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"

// Utility helper functions for Account * class

v.. display(const std::vector<Account *> &accounts);
v.. deposit(std::vector<Account *> &accounts, double amount);
v.. withdraw(std::vector<Account *> &accounts, double amount);

#endif
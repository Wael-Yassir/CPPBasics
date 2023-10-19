/*
	#pragma once
	Prevents a file from being included multiple times.
*/

#include "Account.h";

// #inlcude<vector> #include<string>, .. etc is already on Account.h
// and they will be copied along with all the file content on build.

using std::vector;
using std::string;
using std::to_string;


// { class_name } 
// { :: => scope operator to access class memeber } 
// { : => happens only on constructor to initialize member variable }
Account::Account() : balance(0) 
{
};

vector<string> Account::Report() const
{
	vector<string> report;

	report.emplace_back("Balance is " + to_string(Account::balance));
	report.emplace_back("Transactions: ");

	for (Transaction t : log)
	{
		report.emplace_back(t.Report());
	}

	report.emplace_back("---------------------------------------");
	return report;
}

bool Account::Deposite(int amount)
{
	if (amount <= 0) return false;

	balance += amount;
	log.push_back(Transaction(amount, "Deposite"));

	return true;
}

bool Account::Withdraw(int amount)
{
	if (amount <= 0 || balance < amount) return false;

	balance -= amount;
	log.push_back(Transaction(amount, "Withdraw"));

	return true;
}
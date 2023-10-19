#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;

#include "Account.h";


// In c++ if you are calling a method from another file, you need to declare it here if you
// want to avoid this, you can use header file which will contain all the delared methods.
//  int add(int x, int y);
//  double add(double x, double y);
int main()
{
	vector<string> words;

	words.emplace_back("WAEL");
	words.emplace_back("ALI");
	words.emplace_back("LOKA");

	for (auto i = begin(words); i != end(words); i++)
	{
		cout << *i << '\n';
	}

	cout << *begin(words) << '\n' << '\n';

	Account acc1;
	acc1.Deposite(100);
	cout << acc1.GetBalance() << '\n';
	acc1.Withdraw(30);
	cout << acc1.GetBalance() << '\n';


	for (string s : acc1.Report())
	{
		cout << s << '\n';
	}

	double i = 4.5;
    auto j = static_cast<int>(i);

}

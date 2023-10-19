
#include "Transaction.h";

using std::string;
using std::to_string;


Transaction::Transaction(int amt, string operationType)
	: amount(amt), type(operationType)
{

}

string Transaction::Report() const
{
	string report;
	
	report += "\t";
	report += type;
	report += "\t";
	report += to_string(amount);

	return report;
}

void Transaction::Update(Transaction trans)
{

}

void Transaction::Update(Transaction& trans)
{

}

void Transaction::Update(Transaction const& trans)
{
	
}
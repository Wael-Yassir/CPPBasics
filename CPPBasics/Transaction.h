#include <string>;

class Transaction
{
private:
	int amount;
	std::string type;

public:
	Transaction(int amount, std::string operationType);

	// using const in a class member means this member does n't 
	// change any class member in it (i.e. amount or type).
	std::string Report() const;	

	// call by value
	void Update(Transaction trans);

	// call by reference
	void Update(Transaction& trans);

	// call by refrence but make sure the value is const and can't be modified.
	void Update(Transaction const& trans);
};
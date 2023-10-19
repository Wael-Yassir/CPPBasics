#include<string>

using std::string;

string toLower(string str)
{
	string lowerString;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			lowerString += str[i] + 32;
	}

	return lowerString;
}

string toUpper(string str)
{
	string upperString;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			upperString += str[i] - 32;
	}

	return upperString;
}
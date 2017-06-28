#include "InvalidMonth.h"

InvalidMonth::InvalidMonth()
{
	message = "Not a valid Month";
}

InvalidMonth::InvalidMonth(string str)
{
	message = str + " is not a valid month";
}

string InvalidMonth::what()
{
	return message;
}

InvalidMonth::~InvalidMonth()
{}

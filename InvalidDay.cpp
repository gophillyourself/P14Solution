#include "InvalidDay.h"

InvalidDay::InvalidDay()
{
	message = "Not a valid day";
}

InvalidDay::InvalidDay(string str)
{
	message = str + " is not a valid day for that month";
}

string InvalidDay::what()
{
	return message;
}

InvalidDay::~InvalidDay()
{}

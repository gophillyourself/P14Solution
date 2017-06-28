#include "InvalidDay.h"

InvalidDay::InvalidDay()
{
	message = "Not a valid day";
}

InvalidDay::InvalidDay(int str)
{
	message = " is not a valid day for that month";
}

string InvalidDay::what()
{
	return message;
}

InvalidDay::~InvalidDay()
{}

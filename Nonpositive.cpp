#include "Nonpositive.h"

Nonpositive::Nonpositive()
{
	message = "Any part of the date cannot be negative";
}

Nonpositive::Nonpositive(string str)
{
	message = str + " cannot be negative";
}

string Nonpositive::what()
{
	return message;
}

Nonpositive::~Nonpositive()
{}

#include "Nonpositive.h"

Nonpositive::Nonpositive()
{
	message = "Number cannot be negative";
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

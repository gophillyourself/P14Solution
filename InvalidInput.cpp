#include "InvalidInput.h"

InvalidInput::InvalidInput()
{
	message = "Input Invalid";
}

InvalidInput::InvalidInput(string str)
{
	message = str;
}

string InvalidInput::what()
{
	return message;
}

InvalidInput::~InvalidInput()
{}

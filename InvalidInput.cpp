#include "InvalidInput.h"

InvalidInput::InvalidInput()
{
	message = "Something is wrong";
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

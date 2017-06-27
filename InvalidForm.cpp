#include "InvalidForm.h"

InvalidForm::InvalidForm()
{
	message = "Not a valid form";
}

InvalidForm::InvalidForm(string str)
{
	message = str;
}

string InvalidForm::what()
{
	return message;
}

InvalidForm::~InvalidForm()
{}

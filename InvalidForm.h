#ifndef INVALIDFORM_H_
#define INVALIDFORM_H_

#include <iostream>
#include <string>

using namespace std;

class InvalidForm
{
private:
  string message;


public:
  InvalidForm();
  InvalidForm(string str);
  string what();
  virtual ~InvalidForm();

};

#endif

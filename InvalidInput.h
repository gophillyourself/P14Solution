#ifndef INVALIDMONTH_H_
#define INVALIDMONTH_H_

#include <iostream>
#include <string>

using namespace std;

class InvalidInput
{
private:
  string message;


public:
  InvalidInput();
  InvalidInput(string str);
  string what();
  virtual ~InvalidInput();

};

#endif

#ifndef INVALIDMONTH_H_
#define INVALIDMONTH_H_

#include <iostream>
#include <string>

using namespace std;

class InvalidMonth
{
private:
  string message;


public:
  InvalidMonth();
  InvalidMonth(string str);
  string what();
  virtual ~InvalidInput();

};

#endif

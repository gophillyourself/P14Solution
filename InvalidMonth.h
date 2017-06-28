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
  InvalidMonth(int str);
  string what();
  virtual ~InvalidMonth();

};

#endif

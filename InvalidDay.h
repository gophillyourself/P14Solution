#ifndef INVALIDDAY_H_
#define INVALIDDAY_H_

#include <iostream>
#include <string>

using namespace std;

class InvalidDay
{
private:
  string message;


public:
  InvalidDay();
  InvalidDay(string str);
  string what();
  virtual ~InvalidDay();

};

#endif

#ifndef INVALIDINPUT_H_
#define INVALIDINPUT_H_

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

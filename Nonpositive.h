#ifndef NONPOSITIVE_H_
#define NONPOSITIVE_H_

#include <iostream>
#include <string>

using namespace std;

class Nonpositive
{
private:
  string message;


public:
  Nonpositive();
  Nonpositive(string str);
  string what();
  virtual ~Nonpositive();

};

#endif

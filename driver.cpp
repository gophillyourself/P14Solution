#include <iostream>
#include <string>
#include <iomanip>

#include "InvalidDay.h"
#include "InvalidMonth.h"
#include "InvalidForm.h"
#include "InvalidInput.h"
#include "Nonpositive.h"

using namespace std;

int main()
{
  char slash_l, dash1,dash2, slash_r;
  int month, day, year;
  bool done;


  do {
    try
    {
      cout<<"Enter a month in the form of mm-dd-yyyy: ";
      cin>>month>>dash1>>day>>dash2>>year;
      //cout<<"you entered :"<<month<<" "<<day<<" "<<year<<endl;
      if(!cin) throw InvalidInput();
      if(day < 1 || month < 1 || year < 1) throw Nonpositive();
      if(day > 31) throw InvalidDay();
      if(month > 12) throw InvalidMonth(month);
      if(month == 4 || month == 6 || month == 9 || month == 11)
         if(day >= 31) throw InvalidDay(day);
      if(month == 2 && day == 29 && year%4 !=0) throw InvalidDay(day);
      if(dash1 != '-' || dash2 != '-') throw InvalidInput();
      done = true;
    }
    catch(InvalidDay id)
    {
      cout<<id.what()<<endl;
      cin.clear();
      cin.ignore(100, '\n');
    }
    catch(InvalidMonth im)
    {
      cout<<im.what()<<endl;
      cin.clear();
      cin.ignore(100, '\n');
    }
    catch(InvalidForm fi)
    {
      cout<<fi.what()<<endl;
      cin.clear();
      cin.ignore(100, '\n');
    }
    catch(InvalidInput ii)
    {
      cout<<ii.what()<<endl;
      cin.clear();
      cin.ignore(100, '\n');
    }
    catch(Nonpositive np)
    {
      cout<<np.what()<<endl;
      cin.clear();
      cin.ignore(100, '\n');
    }

  } while(!done);


  return 0;
}

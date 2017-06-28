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
      cout<<"you entered :"<<month<<" "<<day<<" "<<year<<endl;
      if(!cin) throw InvalidInput();
      if(day < 1 || month < 1 || year < 1) throw Nonpositive();
      if(day > 31) throw InvalidDay(day);
      if(month > 12) throw InvalidMonth();
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
    swith(month)
    {
      case 1 : cout <<"Jan "<<day<<", "<<year<<endl;
      case 2 : cout <<"Feb "<<day<<", "<<year<<endl;
      case 3 : cout <<"Mar "<<day<<", "<<year<<endl;
      case 4 : cout <<"Apr "<<day<<", "<<year<<endl;
      case 5 : cout <<"May "<<day<<", "<<year<<endl;
      case 6 : cout <<"Jun "<<day<<", "<<year<<endl;
      case 7 : cout <<"Jul "<<day<<", "<<year<<endl;
      case 8 : cout <<"Aug "<<day<<", "<<year<<endl;
      case 9 : cout <<"Sep "<<day<<", "<<year<<endl;
      case 10 : cout <<"Oct "<<day<<", "<<year<<endl;
      case 11 : cout <<"Nov "<<day<<", "<<year<<endl;
      case 12 : cout <<"Dec "<<day<<", "<<year<<endl;

    }
  } while(!done);


  return 0;
}

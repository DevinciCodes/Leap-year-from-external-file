#include <iostream>
using namespace std;
//****leap year = year % 4 = 0 and leap year % 400 = 0 
//****if not, no leap year

//function to call, calculating if leap year or not and returning true or false
bool isLeapYear(int year){
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0)
                return true;
            else
                return false;
        } else{
            return true;
        }
    } else{
        return false;
    }
}
//main function
int main()
{
    int year;//declare var
  
    //whle loop that takes says while year exist, we get and store into year var.
    //If year is leap year, output yes or no.
    while (cin>>year)
    {
        if (isLeapYear(year)){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}
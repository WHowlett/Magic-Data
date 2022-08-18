#include <iostream>
#include <iomanip> 
using namespace std;

/*
Write a program that asks the user to enter any date in the format specified above (month/day/2-digit-year). (It is very important that the input is in the correct format, typed all at once, all on one line, by the user. See the hints below.) The program should then determine whether the month times the day is equal to the year. If so, it should display a message saying the date is magic. Otherwise it should display a message saying the date is not magic.
  */





int main() {
  int inputMonth;
  int inputDay; 
  int inputYear; 
  char slashes; //Design to allows slashs in input


  cout << "Enter a date in the format ";
  cout <<  "month/day/2-digit-year: ";

  cin >> inputMonth >> slashes >> inputDay;
  cin >> slashes >> inputYear;

  if (inputMonth * inputDay == inputYear) {
    cout << "That is a magic date!";
  }
  else {
    cout << "This is not a magic date!";
  }
  return 0;



  

  



  
}
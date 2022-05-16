#include <iostream>
using namespace std;

int getValueFromUser() // defines function no value return void
{
  int newv;
  cout << "enter an interger: ";
  cin >> newv;
  return newv;
}

int main()
{
int number {getValueFromUser()}; //calls the function
cout << "The value you entered was : " <<number;
return 0;
}
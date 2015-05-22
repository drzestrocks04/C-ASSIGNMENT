/*
* Question1.cpp
*
*	Name:			[KINGSLEY EDIDIONG SONIA]
*	Department:		[STATISTICS]
*	Reg No:			[PDS/2013/0953]
*
* 	Program that reads an integer and determines
*	and print whether it's odd 	or even.
*
*	Stub file to enable me complete assignment #1 - question #1
*/
//
#include <iostream>
using namespace std;

void odd (int a);
void even (int a);

int main()
{
    int i;
    do {
        cout << "Type a number (0 to exit): ";
        cin >> i;
        odd (i);
  } while (i!=0);
  return 0;
}

void odd (int a)
{
     if ((a%2) !=0) cout << "Number is odd. \n";
     else even (a);
}

void even (int a)
{ 
     if ((a%2)==0) cout << "Number is even. \n";
     else odd (a);
}

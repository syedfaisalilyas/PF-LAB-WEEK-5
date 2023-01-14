#include <iostream>
using namespace std;
int func(int);

main()
{
  int num;
  cout<<"Enter a number:";
  cin>>num;
  int total = func(num);
  cout<<"Your number after multiplying by 5 is "<<total;
}

int func(int num)
{
  int total = 5*num;
  return total;
 
}
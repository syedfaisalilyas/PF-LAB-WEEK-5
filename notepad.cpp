#include <iostream>
using namespace std;
int add(int,int);
float divide(int,int);
int isGreater(int,int);

main()
{
  int num1,num2;
  cout<<"Enter Number1:";
  cin>>num1;
  cout<<"Enter Number2:";
  cin>>num2;
  int sum = add(num1,num2);
  cout<<"Sum:"<<sum<<endl;
  int division = divide(num1,num2);
  cout<<"Division:"<<division<<endl;  
  int TOTAL = isGreater(num1,num2);
  cout<< TOTAL <<"is greater";
}

int add(int n1,int n2)
{
 int sum = n1 + n2;
 return sum;
}

float divide(int n1,int n2)
{
 int divide = n1/n2;
 return divide;
}



int isGreater(int n1,int n2)
{
  if(n1>n2){  return n1;}
  if(n2>n1){  return n2;}
  return 0;  
}

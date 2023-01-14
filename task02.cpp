#include <iostream>
using namespace std;
#include <cmath>
float CalculateQuadratic1(int,int,int);
float CalculateQuadratic2(int,int,int);



main()`
{
  int a,b,c;
  cout<<"Enter a:";
  cin>>a;
  cout<<"Enter b:";
  cin>>b;
  cout<<"Enter c:";
  cin>>c;
  float fexp = CalculateQuadratic1(a, b, c);
  float fexp1 = CalculateQuadratic2( a, b, c);
  cout<<"The value of x are "<< fexp <<" or "<<fexp1;  
}

float CalculateQuadratic1(int a,int b,int c)
{  
  int power = pow(b,2);
  int exp1 = power - (4*a*c);
  float exp2 = sqrt(exp1);
  float fexp = (-b+exp2)/(2*a);
  return fexp;

}

float CalculateQuadratic2(int a,int b,int c)
{
  int power = pow(b,2);
  int exp1 = power - (4*a*c);
  float exp2 = sqrt(exp1);
  float fexp1 = (-b-exp2)/(2*a);  
  return fexp1;
}


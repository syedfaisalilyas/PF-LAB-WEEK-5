#include <iostream>
#include <cmath>
using namespace std;


main()
{
  int number1,number2,Greater,minimum,total;
  float squareRoot;
  cout<<"Enter Number1:";
  cin>>number1;
  cout<<"Enter Number2:";
  cin>>number2;
  Greater = max(number1,number2);
  minimum = min(number1,number2);
  squareRoot = sqrt(number1);
  int power = pow(number1,number2);
  float cuberoot = cbrt(number2);
  cout<<Greater<<" is greater number!!!"<<endl;
  cout<<minimum<<" is minimum number!!!"<<endl; 
  cout<<squareRoot<<" is the square root of"<< number1<<endl;
  cout<<power<<endl;
  cout<<cuberoot<<" is the cube root of"<< number2;
  
  total = ceil(3.9);
  cout<< total<<endl;
  
  total = floor(3.9);
  cout<< total<<endl;  

}

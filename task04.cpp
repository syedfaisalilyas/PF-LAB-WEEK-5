#include <iostream>
using namespace std;
bool eo(int);

main()
{bool isTrue;
 int num;
 cout<<"Enter a five  digit number:";
 cin>>num;
 int num5 = num%10;
 int numa = num/10;
 int num4 = numa%10;
 int numb = numa/10;
 int num3 = numb%10;
 int numc = numb/10;
 int num2 = numc%10;
 int num1= numc/10;
 //cout<<num1<<num2<<num3<<num4<<num5;
 int total = num1+num2+num3+num4+num5; 
 isTrue = eo(total);
   if(isTrue == true)
  {cout<<"It is even";}
   if(isTrue == false)
  {cout<<"It is odd";}
 
}



bool eo(int total)
{
  if(total%2 == 0)
  {return true;}
  if(total%2 != 0)
  {return false;}
  return 0;

}
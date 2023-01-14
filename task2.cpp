#include <iostream>
using namespace std;
bool func(char);

main()
{
  char c;
  cout<<"Enter any Alphabet:";
  cin>>c;
  bool l = func(c);
  if(l == true)
  {
    cout<<"You have entered a capital Alphabet "<< c;
  }
    if(l == false)
  {
    cout<<"You have entered a small Alphabet "<< c;
  }
}
bool func(char c)
{
  if(c>=65 && c<=90)
    {
     return true;
    }
   if(c>=97 && c<=122)
    {
     return false;
    }
}
#include <iostream>
using namespace std;
bool symmetrical(int,int);

main()
{bool isTrue;
 int num;
 cout<<"Enter a three digit number:";
 cin>>num;
 int numl = num%10;
 int num1 = num/10;
 int numf = num1/10;
 isTrue = symmetrical(numf,numl);
 if(isTrue == true)
 {
  	cout<<"It is symmetrical!";
  }
 if(isTrue == false)
 {
  	cout<<"It is not symmetrical!";
  } 
}


bool symmetrical(int numl,int numf)
{

 if(numl == numf)
 {
    return true;
  }
 if(numl != numf)
 {
    return false;
  }
}
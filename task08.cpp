#include <iostream>
using namespace std;
#include <cmath>
float theta();
int base();

//Do it again

main()
{
 int Base = base();
 float Theta = theta();
 float theta1 = tan(Theta);
 float height = theta1*Base;
 cout<<"The height of the tree is:"<<height;
}

int base()
{ float b;
 cout<<"Enter base:";
 cin>>b;
 return b;
}
float theta()
{ float angle;
 cout<<"Enter angle:";
 cin>>angle;
 float theta = angle*(3.14/180);
 return theta;
 
}
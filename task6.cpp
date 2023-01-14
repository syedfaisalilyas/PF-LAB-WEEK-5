#include <iostream>
using namespace std;
void Calculate(int min,int hour);

main()
{
  int hour,min;
  cout<<"Enter hours:";
  cin>>hour;
  cout<<"Enter minutes:";
  cin>>min;
  if(hour == 23 && min >45 )
     {
      hour = -1;
     }
   if(hour == 23 && min == 45)
     {
      hour = 0; 
      min = -15;
     }
    Calculate(min,hour);
}

void Calculate(int min,int hour)
{
  int total_min = min + (hour*60) + 15;
  int hour1 = total_min/60;
  int min1 = total_min%60;
  cout << hour1 << ":" <<min1;
}
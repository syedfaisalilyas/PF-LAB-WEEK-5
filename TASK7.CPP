#include <iostream>
using namespace std;


main()
{
  float V, P1, P2, H;
  cout << "Enter the volume of pool in litres:";
  cin >> V;
  cout << "Enter the flow rate of first pipe per hour:";
  cin >> P1;
  cout << "Enter the flow rate of second pipe per hour:";
  cin >> P2;
  cout << "Enter the hour that the worker is absent:";
  cin >> H;

  float v1 = P1 * H;
  float v2 = P2 * H;
  float TV = v1 + v2;
  float full_p = (TV * 100) / V;
  float p1_per = (v1 * 100) / TV;
  float p2_per = (v2 * 100) / TV;
  float extra_v = TV - V;
 
  if (TV > V)
  {
    cout << "For " << H << " hours the pool overflows with " << extra_v << " litres.";
  }
  if (TV < V)
  {
    cout << "The pool is " << full_p << "% full. Pipe 1 : " << p1_per << "%. Pipe2 : " << p2_per << "%";
  }
}












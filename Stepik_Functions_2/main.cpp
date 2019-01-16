#include <iostream>
#include <cmath>
using namespace std;
double length(int x1,int y1, int x2, int y2)
{
    return sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
}
int main()
{
  int x1,x2,y1,y2, d;

   cin>>x1>>y1>>x2>>y2;

   cout<<length( x1, y1, x2, y2);

  return 0;
}

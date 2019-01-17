#include <iostream>
#include <cmath>
using namespace std;
bool IsPointHere(double x, double y)
{

    return (sqrt(pow(x,2)+pow(y,2))<=sqrt(2) || x+y==1);
}
int main()
{
  double x,y;
    cin>>x>>y;
    IsPointHere(x,y)? cout<<"YES":cout<<"NO";
  return 0;
}

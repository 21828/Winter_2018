#include <iostream>
using namespace std;
int IsPointThere(double x, double y)
{

        while (x>=-1 && x<=1 && y>=-1 && y<=1)
        {
            return 1;
        }
         return 0;


 }
int main()
{
  double x, y;
    cin>>x>>y;
    switch(IsPointThere(x,y))
    {
    case 1:cout<<"true";
    break;
    case 2:cout<<"false";
    break;
    }
  return 0;
}

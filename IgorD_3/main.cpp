#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,max,min,x,y;
    cin>>n;
    vector <int> v(n);
    cin>>v[0];
    min = v[0];
    max = v[0];
    for(int i = 1; i < n; i++)
    {
        cin>>v[i];
        if(v[i] >= max)
        {
            max = v[i];
            x = i;
        }
        if(v[i]<=min)
        {
            min = v[i];
            y = i;
        }
    }
    swap(v[x] , v[y]);

    for(int i = 0; i < n; i++)
    {
        cout<<v[i]<<' ';
    }
    return 0;
}


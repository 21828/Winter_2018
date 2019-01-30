#include <iostream>
using namespace std;
int main()
{
    int l(0),n,s;
    cin>>n;

    for(int i(0); i<n ;i++)
    {
        cin>>s;
        if((s - 8)%10 == 0)
        {
            l++;
        }

    }
    cout<<l;

}

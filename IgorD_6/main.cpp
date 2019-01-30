#include <iostream>

using namespace std;
void sqare(int n, char s)
{
    char a[n][n];

    for(int i = 0; i < n ;i++)
    {
        for(int j = 0; j < n;j++)
        {
            a[i][j]= s;

        }
    }

    for(int i = 0;i < n ;i++)
    {
        for(int j = 0; j < n;j++)
        {

            cout<<a[i][j];

        }
        cout<<endl;
    }
    cout<<endl;


}

int main()
{    
  l:
    int n;
    char s,c;
    cin>>n>>s;
    sqare(n,s);
    cout<<"Press ""C"" to continue\n";
    cin>>c;
    if(c == 'C' || c == 'c')
    {
        goto l;
    }
    return 0;

}

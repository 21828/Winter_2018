#include <iostream>
#include <string>
using namespace std;
char cnpk(char a,char b)
{
    cout<<a;
}
int main()
{
    string s;
    int k(0),n(0);
    char a,b;
    getline(cin,s);
    a = s[k];
    b = s[n];
    for(int i = s.length();i!=0;i--)
    {

        cnpk(a,b);
        k++;
    }
    return 0;
}

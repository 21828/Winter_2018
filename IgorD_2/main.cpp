#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a(0), b(0);
    string s;
    getline(cin , s);

    for(int l = s.length(); l != 0; l--)
    {
        if (s[l - 1] == 'a')
        {
            a++;
        }
        else if(s[l - 1] == 'b')
        {
            b++;
        }
    }
        cout<<a<<' '<<b;
}

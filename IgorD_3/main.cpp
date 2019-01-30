#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int i(0),l,max,min;
    getline(cin, s);
    l = s.length();

    for(auto c : s)
    {
        min = s[i];
        max = s[++i];
        for(;l != -1;l--)
        {
            if(max <= s[i])
            {
                 max = s[i];
            }

            else if(min > s[i])
            {
                min = s[i];
            }
            i++;
        }
    }

    cout<<min<<' '<<max;
    return 0;
}


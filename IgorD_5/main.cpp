#include <iostream>
#include <string>
#include <vector>
using namespace std;
 void foo(string s)
{


   for (int i = 0; i < 4; i++)
   {
        for(int j = 0; j < 4; j++)
        {
            for(int k = 0; k < 4; k++ )
            {
                for(int l = 0; l < 4; l++)
                {
                    cout<<s[i]<<s[j]<<s[k]<<s[l]<<endl;

                }
            }
        }
     }
  }

int main()
{
    int min;
    string s;
    vector <int> v(4);

    getline(cin,s);

    for(int i = 0; i < 4; i++)
    {
        v[i] = s[i];
    }

    int n,p = 4;
    for(int i = 0; i < 4; i++) //Проблемний цикл!!!
    {
        min = i;
        for(int k = i; k < 4 ; k++)
        {
            if(v[k] < v[min])
             min = k;
        }

        n = v[i];
        v[i] = v[min];
        v[min] = n;

    }



     for(int i = 0; i < 4; i++)
    {
        s[i] = v[i];
    }
     foo(s);

    return 0;
}

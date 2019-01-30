#include <iostream>

using namespace std;
void CharInt(char a)
{
    int n;
    cout<<"Vvedit Litery \n";
    cin>>a;
    n = a;
    cout<<n<<endl;
}
void IntChar(int b)
{
    char n;
    cout<<"Vvedit Chuslo \n";
    cin>>b;
    n = b;
    cout<<n<<endl;

}
int main()
{
    int n,k,b;
    char a,c;
    q:
    cout<<"Chose converter \n";
    cout<<"1:Char -> Int \n";
    cout<<"2:Int  -> Char \n";
    cout<<"\n";
    cin>>k;
    switch(k) {
    case 1:cout<<"Char -> Int \n";
        CharInt(a);
    break;
    case 2: cout<<"Int  -> Char \n";
    IntChar(b);
       break;
    }
    cout<<"Vvedit ""c"" to continue\n";

    cout<<"\n";
    cin>>c;
    if(c == 'c' || c =='C')
    {
        cout<<"\n";
        goto q;
    }
    return 0;
}

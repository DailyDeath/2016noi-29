#include <iostream>
using namespace std;
int main()
{
    int a,b,c=0,d,e[1000];
    cin>>a;
    if(a>100)
        return 0;
    for(b=0;b<a;b++)
    {
        cin>>e[b];
        if((e[b]%10)-(e[b]/1000%10)-(e[b]/100%10)-(e[b]/10%10)>0)
        c++;
    }
    cout<<c<<endl;
    return 0;
}

#include<iostream>
#include<math.h>

using namespace std;

int main(){

int a,b,c;
cin>>a>>b>>c;

if(a>b && a>c)
{
    cout<<a<<" is greatest"<<endl;
}

if(b>c && b>a)
{
    cout<<b<<" is greatest."<<endl;
}


if(c>b && c>a)
{
    cout<<c<<" is greatest."<<endl;
}


return 0;
}

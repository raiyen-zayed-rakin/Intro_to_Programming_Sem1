#include <iostream>

using namespace std;

int main(){
int n,next, pre;
cout<<"Enter a number for Fibonacci :"<<endl;
cin>>n;

int t1=0,t2=1;
cout<<"Fibonacci series is : ";
cout<<t1<<" "<<t2;//0,1
for(int i=3; i<=n; i++){
    next=t1+t2;  //1
    t1=t2; //1
    t2=next; 
//udoy 
    cout<<" "<<next<<" ";
}

return 0;
}

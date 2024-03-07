#include<iostream>
#include<math.h>

using namespace std;
//Write a program that reads in two integers and determines and prints if the first is a multipleof the second. [Hint: Use the modulusoperator.]
int main(){
 int num1, num2;
 cout<<"Enter num1: "<<endl;
 cin>>num1;
 cout<<"Enter num2: "<<endl;
 cin>>num2;

 if(num1%num2==0){cout<<"YES, num1 is a multiple of num2"<<endl;}
 else{cout<<"NO, num1 is not a multiple of num2"<<endl;}
 return 0;
 }


#include <iostream>

using namespace std;
//Write a program that take two integer numbers and display the sum of even numbers between thesetwo input numbers.First Number: 3Second Number: 10Sumof Even numbersbetween3 and 10 is:18
int main(){
int first,sec;
int sum=0;
cout<<"Enter 1st number: "<<endl;
cin>>first;
cout<<"Enter 2nd number: "<<endl;
cin>>sec;
//for(oIni,condition, iteration)
for(int i = first; i<=sec; i++)
{
   if(i%2==0)
        {
            //2 = 2 + 4
            //2 
            sum = sum + i; 
        }
}
cout<<"Sum of even numbers : "<<sum<<endl;

return 0;
}

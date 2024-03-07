#include<iostream>
#include<math.h>
//Create a BMI calculator program that reads the user’s weight in kilogram and height inmeter. Then calculates and displays the user’s body massindex.
using namespace std;

int main(){
 int m;
 float h,BMI;
 cout<<"Enter Mass: "<<endl;
 cin>>m;
 cout<<"Enter Height: "<<endl;
 cin>>h;

 BMI = (float)m/(h*h);

 cout<<"BMI is: "<<BMI<<endl;

 return 0;
 }

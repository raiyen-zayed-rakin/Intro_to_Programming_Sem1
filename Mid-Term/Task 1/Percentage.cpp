/*
Take a character as input through the keyboard. Write a program to find out whether the gender is Male or Female. (Using If-else)

Inputs: take input ‘M’ or ‘m’ for male and take input ‘F’ or ‘f’ for female
*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int no_class,no_student;

cout<<"Enter the number of class: "<<endl;
cin>>no_class;

cout<<"Enter the number of classes attended by students: "<<endl;
cin>>no_student;

float pert=((float)no_student/no_class)*100;

if(pert>=80)

{
    cout<<"Allowed to attend exam."<<endl;
}
else
{
    cout<<"Not allowed to attend exam.";
}


return 0;
}


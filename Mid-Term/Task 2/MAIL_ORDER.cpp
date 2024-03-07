
#include<iostream>
#include<math.h>

using namespace std;
/*
A mail order house sells five different products whose retail prices are: product 1 — BDT200.75, product 2—345.50, product 3— BDT 775.75, product 4— BDT 400.35 and product 5— BDT1200.75. Write a program that reads a series of pairs of numbers as follows:a.product number. (Hint: 1, 2, 3.. etc. are product number) b.quantity sold.
*/
int main(){

  int pro_no, sold;
  cout<<"Enter a product number: "<<endl;
  cin>>pro_no;
  cout<<"Enter sold quantity: "<<endl;
  cin>>sold;

  if(pro_no==1){cout<<"Total retail value: "<<200.75*sold<<endl;}
  else if(pro_no==2){cout<<"Total retail value: "<<345.50*sold<<endl;}
  else if(pro_no==3){cout<<"Total retail value: "<<775.75*sold<<endl;}
  else if(pro_no==4){cout<<"Total retail value: "<<400.35*sold<<endl;}
  else{cout<<"Total retail value: "<<1200.75*sold<<endl;}
 return 0;
 }

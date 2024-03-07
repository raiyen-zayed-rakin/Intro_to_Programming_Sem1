#include<iostream>
#include<math.h>

using namespace std;
/*
.If the buying price and selling price of an item is taken as user input, write a pro-gram  to  determine  whether  the  seller  has  made  a  profit  or  incurred  a  loss.  Also,determine how much profit he made or the loss he incurred. (Using If-else)
*/
int main(){
 int buying, selling;
 cout<<"Enter the buying price: ";
 cin>>buying;
 cout<<"Enter the selling price: ";
 cin>>selling;
 if(selling>buying){
    cout<<"Seller made profit!"<<endl;
    cout<<"Seller made total "<<((selling-buying)*100/buying)<<"% profit."<<endl;
 }
 else{
    cout<<"Seller incurred a loss."<<endl;
    cout<<"Seller incurred total "<<((buying-selling)*100/selling)<<"% loss."<<endl;
 }

 return 0;
 }


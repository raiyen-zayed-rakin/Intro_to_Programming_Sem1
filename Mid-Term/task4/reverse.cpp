#include<iostream>

using namespace std;
//Take N numbers as input from user and print them in reverse order
int main(){
int N;
cout<<"Enter the size of the array: "<<endl;
cin>>N;

int arr[N];
cout<<"Enter the values of the array: "<<endl;
for(int i=0; i<N; i++){
    cin>>arr[i];
}
cout<<"Reverse Order: "<<endl;
for(int i=N-1; i>=0; i--){
    cout<<arr[i]<<" ";
}
cout<<endl;






return 0;
}

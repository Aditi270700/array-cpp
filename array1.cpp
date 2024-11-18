#include<iostream>
using namespace std;
int main (){
int arr[]={4,5,6,1,1,2,3};
int s=sizeof(arr)/sizeof(arr[0]);
cout<<4[arr]<<"\n";
// or
// cout <<arr[4]<<"\n"; 
// cout<<-4[arr];  
// cout<<[arr]-4; output is garbage value
}

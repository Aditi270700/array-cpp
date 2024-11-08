#include<iostream>
using namespace std;
int main (){
int arr[]={19,5,6,2};
int len=sizeof(arr)/sizeof(arr[0]);
cout<<"length of array="<<len<<"\n";
for (int i=0; i<len; i++)
{
cout<<arr[i]<<"\n";
}
}
#include<iostream>
using namespace std;
int main ()
{
int arr[4]={2,3,4,5};
int s=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<s; i++){
cout<<arr[i]<<"\n";
}
}
//     array  traversing are two types
//    1) forward traversing
//    2) Backward traversing
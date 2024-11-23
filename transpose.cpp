#include<iostream>
using namespace std;
int main (){
int arr [2][3];
cout<<"enter 6 values"<<"\n";
for(int r=0; r<2; r++)
{
for(int c=0; c<3; c++)
{
cin>>arr[r][c];
}
}
cout<<"output\n";
for(int r=0; r<2; r++)
{
for(int c=0; c<3; c++)
{
cout<<arr[r][c]<<"\t";
}
cout<<"\n";
}
cout<<"\nafter applying transpose concept\n";
for(int c=0; c<3; c++)
{
for(int r=0; r<2; r++)
{
cout<<arr[r][c]<<"\t";
}
cout<<"\n";
}
}

// tranpose matrix:
// rule: Matrix should be in square formate.
// when we convert any matrix into transpose matrix, 
// the column get converted into vice versa.
// in a one dimension array we can use only one subscript that belongs to a size of
// array.
//  we can create static array as well as dianamic array the syntax is one dimension array.
#include<iostream>
using namespace std;
// datatype arrayname [size];
int main(){
int cybrom [5]={10,20,50,5,6};
cout << sizeof(cybrom)<<"\n";
cout << cybrom[2]<<"\n";
for(int i=0; i<5; i++)
cout<<cybrom[i]<<"\t";
return 0;
}
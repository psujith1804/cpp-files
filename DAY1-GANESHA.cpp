#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
//print certain star pattern
//first row. 1 star followed by (n-3)/2 spaces and (n+1)/2 stars

cout<<"*";
for(int i=1;i<=(n-3)/2;i++)
{
cout<<" ";
}
for(int i=1;i<=(n+1)/2;i++)
{
    cout<<"*";

}
cout<<endl;

//second row and third row

cout<<"*";
for(int i=1; i<=(n-3)/2; i++)
cout<<" ";

cout<<"*";
cout<<endl;

cout<<"*";
for(int i=1; i<=(n-3)/2; i++)
cout<<" ";

cout<<"*";
cout<<endl;

// forth row

for(int i=0;i<n;i++)
cout<<"*";
cout<<endl;

//fifth
for(int i=1;i<=(n-3)/2 +1 ;i++)
cout<<" ";

cout<<"*";
for(int i=1;i<=(n-3)/2;i++)
cout<<" ";
cout<<"*";




cout<<endl;
for(int i=1;i<=(n-3)/2 +1 ;i++)
cout<<" ";

cout<<"*";
for(int i=1;i<=(n-3)/2;i++)
cout<<" ";
cout<<"*";
cout<<endl;

for(int i=1;i<=(n+1)/2;i++)
cout<<"*";

for(int i=1; i<=(n-3)/2;i++)
cout<<" ";

cout<<"*";
cout<<endl;




return 0;
}
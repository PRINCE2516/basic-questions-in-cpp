#include<iostream>
using namespace std;
int main()
{
int i,k,l,m;
cin>>l;
    
    
for(i=1;i<=l;i++) 
{   
for(k=l-1;k>=i;k--)
{    
cout<<" ";
}
for(m=1;m<=i;m++)
{
cout<<"*";
}

cout<<endl;
    
}

}

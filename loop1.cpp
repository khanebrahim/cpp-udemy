#include<iostream>
using namespace std;
int main(){
    int r ,n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0)
{
    r=n%10;
    n=n/10;
    // cout<<r<<endl;
    sum=sum+r;
}
cout<<sum<<endl;
return 0;
}
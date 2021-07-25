#include<iostream>
using namespace std;
int main(){
    int r ,n;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0)
{
    r=n%10;
    n=n/10;
    cout<<r<<endl;
}
cout<<endl;
return 0;
}
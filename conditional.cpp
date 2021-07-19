#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two number:"<<endl;
    cin>>a>>b ;
     c=a/b;
    if(b==0){
        cout<<"Division by zero"<<endl;
        
    }
    else{
       
        cout<<c<<endl;
    }
    return 0;
    
}
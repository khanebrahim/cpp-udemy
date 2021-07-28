#include<iostream>
using namespace std;
int main (){
    int sum=0;
    int A[10]={12,13,14,49,18,25,28,35,65,20};
    for(int i=0;i<10;i++){
        sum+=A[i];
        cout<<"Sum of all elements is "<<sum<<endl;
        
        
    }
    return 0;
}
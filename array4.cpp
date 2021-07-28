#include<iostream>
using namespace std;
int main (){
    int A[10]={12,13,14,49,18,25,28,35,65,20};
    int max=INT_MIN;
    for(auto x:A)
    {
        if (x>max){
            max=x;
        }

    }
    cout<<"Maximum number is "<<max<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main (){
    int A[10]={12,13,14,49,18,25,28,35,65,20};
    int min=INT_MAX;
    for(auto x:A)
    {
        if (x<min){
            min=x;
        }

    }
    cout<<"Maximum number is "<<min<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main (){
    int A[10]={12,13,14,49,18,25,28,35,65,20};
    int key;
    cin>>key;
    for (int i=0;i<10;i++) {
        if(key==A[i])
        {
            cout<<"Key element found at: "<<i;
            exit (0);
        }
    }
    cout<<"key Element not found";
    return 0;
}
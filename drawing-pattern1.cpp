#include<iostream>
using namespace std;
int main (){
    for(int i=1; i<=7; i++){
        for(int j=1; j<=7; j++){
            if(i+j>7){
                cout<<" *  ";
            }
            else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }
    return 0;
}
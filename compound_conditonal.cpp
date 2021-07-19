#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age:";
    cin >> age;
    if(age>=13&&age<=50){
        cout<<"He is a young boy"<<endl;
    }
    else{
        cout<<"He is a old man";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter day number"<<endl;
    cin >> day;
    switch(day){
        case 0: cout<<"Saturday\n";
        break;
        case 1: cout<<"Sunday\n";
        break;
        case 2: cout<<"Monday\n";
        break;
        case 3: cout<<"Tuesday\n";
        break;
        case 4: cout<<"Wednesday\n";
        break;
        case 5: cout<<"Thursday\n";
        break;
        case 6: cout<<"Friday\n";
        break;
        default: cout<<"Invalid\n";
    
    }
    return 0;
}
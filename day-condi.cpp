#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter day no:";
    cin >> day;
    if (day==0){
        cout<<"Saturday"<<endl; 
    }
    else if (day==1){
        cout<<"Sunday"<<endl; 
    }
    else if (day==2)
    {
        cout<<"Monday"<<endl; 
    }
    else if (day==3)
{
    cout<<"Tuesday"<<endl; 
}
    
    else if (day==4)
{
    cout<<"Wednesday"<<endl; 
}
    else if (day==5)
{
    cout<<"Thursday"<<endl; 
}
else if (day==6)
{
    cout<<"Friday"<<endl; 
}
else if (day==7)
{
    cout<<"OOF-Day"<<endl; 
}
else{
    cout<<"special-day"<<endl;
}
return 0;
}
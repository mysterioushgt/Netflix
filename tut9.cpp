#include<iostream>
using namespace std;
int main(){
    // if -else ladder
    int age;
    cout<<"enter your age";
    cin>>age;
    // if((age<18)&&(age>0)){
    //     cout<<"you can not come to party";

    // }
    // else if(age==18)
    // {
    //     cout<<"you can get pass";
    // }
    // else if(age<1){
    //     cout<<"you are not born"; 
    // }
    // else{
    //     cout<<"you can come";
    // }


    // switch case
    switch (age)
    {
    case 18:
        cout<<"you are 18";
        break;
    case 22:
        cout<<"you are 22";
        break;
    case 2:
        cout<<"you are 2";
        break;

    
    default:
    cout<<"no special cases";
        break;
    }
    return 0;
}
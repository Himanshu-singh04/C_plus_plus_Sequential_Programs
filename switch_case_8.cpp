#include<iostream>
using namespace std;

int main(){
    char button;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"apple"<<endl;
        break;
    
    case 'b':
        cout<<"ball"<<endl;
        break;
    default:
        cout<<"nothing"<<endl;
        break;
    }
}
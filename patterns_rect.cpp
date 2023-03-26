#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    int i = 1;
    for (i;i<=row;i++){
        for (int j = 1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

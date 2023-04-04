#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no. of elements"<<endl;
    cin>>n;
    int array[n];
    cout<<"inputs"<<endl;
    for (int i = 0; i<n;i++){
        cin >>array[i];
    }
    return 0;
}

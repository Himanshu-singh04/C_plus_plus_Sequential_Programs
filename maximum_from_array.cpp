#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"enter the array size"<<endl;
    cin>>n;

    int array[n];
    for (int i = 0;i<n;i++){
        cin>>array[i];
    }
    int maxNo = INT_MAX;
    int minNo = INT_MIN;
    for (int i = 0;i<n;i++){
        maxNo = max(maxNo,array[i]);
        minNo = min(minNo,array[i]);
        
    }
    cout<<"max number "<<maxNo<<endl;
    cout<<"min number "<<minNo<<endl;
    return 0;
}

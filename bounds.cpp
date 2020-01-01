
//Given an array of integers out of order, determine the bounds of the smallest window that must be sorted in order for the entire array to be sorted.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    int start=0,end=0;
    for(int i=0;i<n-1;++i)
        if(a[i]>a[i+1]){
            start=i;
            break;
        }
    for(int i=n;i>=0;--i)
        if(a[i]<a[start]){
            end=i;
            break;
        }
    cout<<start<<" "<<end<<endl;

    return 0;
}

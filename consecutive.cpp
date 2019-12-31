
//Given a number n, return the number of lists of consecutive numbers that sum up to n.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count =0, iter=1;
    int sum=0;
    int prev=1;
    while(iter<n){
        sum+=iter;
        if(sum>n){
            sum=0;
            iter=prev+1;
            ++prev;
        }
        if(sum == n){
            iter = prev+1;
            count++;
            ++prev;
        }
        ++iter;
    }
    cout<<endl<<count<<endl;
    return 0;
}

// This problem was asked by Etsy.

// Given an array of numbers N and an integer k, your task is to split N into k partitions such that the maximum sum of any partition is minimized. Return this sum.

// For example, given N = [5, 1, 2, 7, 3, 4] and k = 3, you should return 8, since the optimal partition is [5, 1, 2], [7], [3, 4].
#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    int N,K;
    cin>>N>>K;
    int a[N];
    for(int i=0;i<N;++i)
        cin>>a[i];
    sort(a,a+N, greater<int>());
    int sum[K];
    for(int i=0;i<K;++i)
        sum[i]=0;
    int largest = 0;
    int i=0;
    while(i<N){
        int e = a[i];
        sort(sum,sum+K);
        sum[0]+=e;
        ++i;
    }
    for(int i=0;i<K;++i){
        if(largest < sum[i])
            largest = sum[i];
    }
    cout<<endl<<largest<<endl;
    return 0;
}

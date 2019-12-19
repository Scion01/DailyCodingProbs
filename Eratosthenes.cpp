// The Sieve of Eratosthenes is an algorithm used to generate all prime numbers smaller than N. The method is to take increasingly larger prime numbers, and mark their multiples as composite.

// For example, to find all primes less than 100, we would first mark [4, 6, 8, ...] (multiples of two), then [6, 9, 12, ...] (multiples of three), and so on. Once we have done this for all primes less than N, the unmarked numbers that remain will be prime.


#include <iostream>

using namespace std;

int main()
{
     int n;
     cin>>n;
     bool isprime[n+1];
     for(int i=1;i<n+1;++i)
        isprime[i]=true;
    
    for(int i=2;i<n+1;++i){
        int j=2;
        while(j*i<n+1){
            isprime[j*i]=false;
            ++j;
        }
    }
    for(int i=2;i<n+1;++i)
        if(isprime[i])
            cout<<i<<endl;

    return 0;
}

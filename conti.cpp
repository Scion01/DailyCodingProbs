//Given a list of integers and a number K, return which contiguous elements of the list sum to K.

//For example, if the list is [1, 2, 3, 4, 5] and K is 9, then it should return //[2, 3, 4], since 2 + 3 + 4 = 9.

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	int k;
	cin>>k;
	int start=0,sum=0,ind=0;
	sum=a[0];
	ind=1;
	while(ind < n){
		cout<<start<<" "<<ind<<" "<<sum<<" "<<k<<endl;
		if(sum == k){
			cout<<start<<" "<<ind-1<<endl;
			return 0;
		}
		else if(sum>k){
			while(sum>k)
				sum-=a[start++];
		}else{
			sum+=a[ind++];
		}
		
	}
	return 0;
}

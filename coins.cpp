/*You are given a 2-d matrix where each cell represents number of coins in that cell. Assuming we start at matrix[0][0], and can only move right or down, find the maximum number of coins you can collect by the bottom right corner.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			cin>>a[i][j];
	int tot[n][m];
	for(int i=0;i<m;++i)
		tot[0][i]=a[0][i];
	for(int i=1;i<n;++i)
		tot[i][0]=a[i][0]+tot[i-1][0]; 
	for(int i=1;i<n;++i)
		for(int j=1;j<m;j++)
			tot[i][j]=max(a[i][j]+tot[i-1][j],a[i][j]+tot[i][j-1]);
	cout<<tot[n-1][m-1]<<endl;
	return 0;
}

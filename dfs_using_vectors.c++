#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int dfs(int node, vector <int> visited, vector <int> neighbour[10]){
	for(auto itr = neighbour[node].begin(); itr!=neighbour[node].end();++itr){
		//cout<<*itr<<endl;
		if(find(visited.begin(),visited.end(),*itr) == visited.end()){
			cout<<*itr<<endl;
			visited.push_back(*itr);
			dfs(*itr,visited,neighbour);			
		}
	}	
	return 0;
}

int main(){
	int n;
	cin>>n;
	vector <int> neighbour[n];
	vector <int> visited;
	int p,q;
	for(int i=0;i<n-1;++i){
		cin>>p>>q;
		neighbour[p].push_back(q);
		neighbour[q].push_back(p);
	}
	cout<<0<<endl;
	visited.push_back(0);
	dfs(0,visited,neighbour);
	return 0;

}

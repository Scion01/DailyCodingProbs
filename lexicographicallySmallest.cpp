#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
	int k;
	string s;
	cin>>s>>k;
	int i = s.length();
	string output;
	while(i){
		--i;
		string r = s.substr(0,k);
		sort(r.begin(),r.end());
		output.append(string(1,r[0]));
		for(int j=0;j<s.length();++j)
			if(s[j] == r[0]){
				s.erase(s.begin()+j);
				break;
			}
	}
	cout<<output<<endl;
	return 0;
}

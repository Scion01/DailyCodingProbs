/*Given a string S consisting of lowercase alphabets. The task is to find the lexicographically smallest string X of the same length only that can be formed using the operation given below:

In a single operation, select any one character among the at most first K characters of string S, remove it from string S and append it to string X. Apply this operation as many times as he wants.*/

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

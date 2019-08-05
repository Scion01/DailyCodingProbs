#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<string.h>
using namespace std;

int main(){
	string str,strs;
	cin>>str;
	set <char> s ;
	for(int i=0;i<str.length();++i)
		s.insert(str[i]);
	int end=3;
	for(int i=0;i<str.length()-4;++i){
		set <char> temps;
		for(int j=i;j<i+4;j++)
			temps.insert(str[i]);
		if(temps == s){
			cout<<"Found @ "<<i<<endl;
		}
	}
	return 0;
}

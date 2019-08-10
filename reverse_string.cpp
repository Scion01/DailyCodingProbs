#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	stack <char *> st;
	char temp [str.length()];
	int counter =0;
	for(int i=0;i<str.length();++i){
		if(str[i]==' '){
			counter=0;
			cout<<"count"<<endl;
			st.push(temp);
			strcpy(temp,"");
		}else{
			temp[counter++] =str[i];
		}
	}
	temp[counter]='\0';
	st.push(temp);
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}

	return 0;
}

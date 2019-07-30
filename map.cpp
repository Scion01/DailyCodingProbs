/*Write a map implementation with a get function that lets you retrieve the value of a key at a particular time.

It should contain the following methods:

    set(key, value, time): sets key to value for t = time.
    get(key, time): gets the key at t = time.

The map should work like this. If we set a key at a particular time, it will maintain that value forever or until it gets set at a later time. In other words, when we get a key at a time, it should return the value that was set for that key set at the most recent time.*/

/*d.set(1, 1, 0) # set key 1 to value 1 at time 0
d.set(1, 2, 2) # set key 1 to value 2 at time 2
d.get(1, 1) # get key 1 at time 1 should be 1
d.get(1, 3) # get key 1 at time 3 should be 2*/

#include<bits/stdc++.h>
#include<iostream>

using namespace std;
map <int,map<int,int>> mp;
void set_val(int k,int v, int t){
	if(mp.find(k) == mp.end()){
		map <int,int> m;
		m.insert({t,v});
		mp.insert({k,m});
	}
	else{
	auto itr = mp.find(k);
	itr->second.insert({t,v});
	}
	
}
int get_val(int k, int t){
	int v=NULL;
	if (mp.find(k) == mp.end())
		return v;
	auto itr = mp.find(k);

	for(auto it = itr->second.begin(); it!=itr->second.end();++it){
		if(it->first > t)
			break;
		v=it->second;
	}
	return v;
}
int main(){
	cout<<get_val(1,0)<<endl;
	set_val(1,1,3);
	set_val(1,2,5);
	cout<<get_val(1,0)<<endl;
	cout<<get_val(1,4)<<endl;
	cout<<get_val(1,7)<<endl;
	cout<<get_val(3,0)<<endl;
	return 0;
}

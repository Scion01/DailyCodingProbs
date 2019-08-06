/*Given an unsigned 8-bit integer, swap its even and odd bits. The 1st and 2nd bit should be swapped, the 3rd and 4th bit should be swapped, and so on.

For example, 10101010 should be 01010101. 11100010 should be 11010001.*/

#include<iostream>
using namespace std;
int main(){
	int n1;
	cin>>n1;
	int out = (n1 & 0b10101010)>>1 | (n1 & 0b01010101)<<1;
	cout<<out<<endl; 
}

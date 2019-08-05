/*Given two strings a and b. The task is to find if a string 'a' can be obtained by rotatinganother string 'b' by 2 places.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. In the next two line are two string a and b.*/


#include <iostream>
#include<string.h>
using namespace std;
int main() {
//code
int t;
cin>>t;
char a[1000],b[1000];
while(t--){
   cin>>a>>b;
   int itr = 2,counter=0;
   char temp[1000],temp2[1000];
   while(counter<strlen(a)){
       temp[counter]=a[itr];
       //cout<<counter<<" "<<itr<<endl;
       itr=(itr+1)%strlen(a);
       ++counter;
   }
   temp[strlen(a)]='\0';
   counter=0;
   itr = strlen(a)-2;
   while(counter<strlen(a)){
       temp2[counter]=a[itr];
       //cout<<counter<<" "<<itr<<endl;
       itr=(itr+1)%strlen(a);
       ++counter;
   }
   temp2[strlen(a)]='\0';
   //cout<<b<<" "<<temp<<endl;
   if(strcmp(b,temp)==0 || strcmp(b,temp2) == 0)
       cout<<1<<endl;
   else
       cout<<0<<endl;
}
return 0;
}



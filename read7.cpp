//Using a read7() method that returns 7 characters from a file, implement readN(n) which reads n characters.

#include <iostream>
using namespace std;

int size read(int n, char[] buffer){
    bool runNext = true;
    char[] temp = new char[7];
    int total = 0;
    while(runNext && total<n){
        const int responeSize = read7(temp);
        if(responeSize<4)
            runNext = false;
        for(int i=0;i<responeSize;++i){
            buffer[total+i] = temp[i];
        }
        total += responeSize;
    }
    
}

int main()
{
    return 0;
}

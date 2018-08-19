#include<iostream>

using namespace std;

int extraNumber(int a, int b, int c) {
    int extra = 0;
    if(a == b)
        extra = c;
    else if(b == c)
        extra = a;
    else
        extra = b;

    return extra;
}

int main(){
    int val1,val2,val3;
    cin>>val1>>val2>>val3;
    cout<<extraNumber(val1,val2,val3);
    return 0;
}
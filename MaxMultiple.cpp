#include<iostream>

using namespace std;

int maxMultiple(int divisor, int bound) {
    int res = bound / divisor;
    return res * divisor;
}

int main(){
    int divi,bou;
    cin>>divi>>bou;
    cout<<maxMultiple(divi,bou);
    return 0;
}
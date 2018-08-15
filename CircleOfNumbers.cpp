#include<iostream>

using namespace std;

int circleOfNumbers(int n, int firstNumber) {
    if(firstNumber >= n/2)
        return firstNumber-n/2;
    else
        return firstNumber+n/2;
}

int main(){
    int num,firstnum;
    cin>>num>>firstnum;
    cout<<circleOfNumbers(num,firstnum);
    return 0;
}
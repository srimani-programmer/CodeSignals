#include<iostream>

using namespace std;

int addTwoDigits(int n) {
    int rem = 0;
    int sum = 0;
    while(n!=0){
        rem = n%10;
        sum = sum+rem;
        n = n / 10;
    }

    return sum;
}

int main(){
    int val;
    cin>>val;
    cout<<addTwoDigits(val);
    return 0;
}
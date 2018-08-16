#include<iostream>
#include<iomanip>
using namespace std;

int lateRide(int n) {
    int sum1 = 0;
    int sum2 = 0;
    int res1 = n/60;
    double res2 = (double)n/(double)60;
    int min = (res2 - res1) * 60;
    int rem1 = 0,rem2 = 0;
    while(res1 != 0){
        rem1 = res1%10;
        sum1 = sum1 + rem1;
        res1 = res1/10;
    }
    while(min != 0){
        rem2 = min%10;
        sum2 = sum2 + rem2;
        min = min/10;
    }

    return sum1+sum2;
}

int main(){
    int val;
    cin>>val;
    cout<<lateRide(val);
    return 0;
}
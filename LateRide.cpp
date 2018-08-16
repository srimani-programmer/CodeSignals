#include<iostream>
#include<iomanip>
using namespace std;

int lateRide(int n) {
    int sum1=0;
    int sum2=0;
    int hour=n/60;
    int minute=n%60;
    do{
        sum1+=hour%10;
        hour=hour/10;
        sum2+=minute%10;
        minute=minute/10;
    } while(hour>0 || minute>0);
return sum1+sum2;
}


int main(){
    int val;
    cin>>val;
    cout<<lateRide(val);
    return 0;
}
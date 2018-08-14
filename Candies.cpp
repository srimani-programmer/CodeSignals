#include<iostream>

using namespace std;

int candies(int n, int m) {
    int childCandyCount = m / n;
    int  totalCandyCount = n * childCandyCount;
    return totalCandyCount;
}

int main(){
    int child,candiescount;
    cin>>child>>candiescount;
    cout<<candies(child,candiescount);
    return 0;
}
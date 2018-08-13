#include<iostream>

using namespace std;

int shapeArea(int n) {
    return (n*n) + ((n-1)*(n-1));
}

int main(){
    int val;
    cin>>val;
    cout<<shapeArea(val);
    return 0;
}
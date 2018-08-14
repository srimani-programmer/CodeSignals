#include<iostream>

using namespace std;

int largestNumber(int n) {
    string s = "";
    for(int i=0;i<n;i++){
        s = s + "9";
    }
    int res = stoi(s);
    return res;
}

int main(){
    int val;
    cin>>val;
    cout<<largestNumber(val);

    return 0;
}
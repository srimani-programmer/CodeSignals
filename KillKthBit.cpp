#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int killKthBit(int n, int k) {
  return  (n&(1<<(k-1)))==(1<<(k-1)) ? n^(1<<(k-1)) : n;
}


int main(){
    int n,k;
    cin>>n>>k;
    cout<<killKthBit(n,k);
    return 0;
}
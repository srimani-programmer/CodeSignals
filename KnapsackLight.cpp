#include<iostream>

using namespace std;

int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
    int profit = 0;
    if(weight1+weight2 <= maxW)
        profit = value1 + value2;
    else if((value1 > value2 && weight1 <= maxW))
            profit = value1;
    else if(value2 > value1 && weight2 <= maxW)
          profit = value2;
    else if(weight1 <= maxW || weight2 <= maxW){
        if(weight1<=maxW)
            profit = value1;
        else
            profit = value2;
    }
        
        
    return profit;
}

int main(){
    int val1,w1,val2,w2,maxw;
    cin>>val1>>w1>>val2>>w2>>maxw;
    cout<<knapsackLight(val1,w1,val2,w2,maxw);
    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

int adjacentElementsProduct(std::vector<int> inputArray) {
    int prod = inputArray[0] * inputArray[1];
    for(int i=1;i<inputArray.size()-1;i++){
        int prod1 = inputArray[i] * inputArray[i+1];
        if(prod1>prod)
            prod = prod1;
    }

    return prod;
}

int main(){
    int size;
    cin>>size;
    vector<int> vec;
    int val;
    for(int i=0;i<size;i++){
        cin>>val;
        vec.push_back(val);
    }

    cout<<adjacentElementsProduct(vec);
    return 0;
}
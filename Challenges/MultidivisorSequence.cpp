#include<iostream>
#include<vector>

using namespace std;

int multiDivisorSequence(vector<int>nums) {
    if((nums[0])%(nums[1]) != 0)
        return nums[1];
    for(int i=2;i<nums.size();i++){
        if((nums[i-1]%nums[i] == 0) || (nums[i]%nums[i-2] == 0))
            continue;
        else
            return nums[i];
    }
    
    return -1;
}

int main(){
    int size;
    cin>>size;
    vector<int>v;

    for(int i=0;i<size;i++){
        int val;
        cin>>val;
        v.push_back(val);
    }

    cout<<multiDivisorSequence(v)<<endl;

    return 0;
}

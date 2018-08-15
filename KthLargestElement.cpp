#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int kthLargestElement(std::vector<int> nums, int k) {
    sort(nums.begin(),nums.end());
    for(int i=0;i<k-1;i++){
        nums.pop_back();
    }

    return nums[nums.size()-1];
}

int main(){
    int size;
    cin>>size;
    vector<int> vec;
    int k,val;
    for(int i=0;i<size;i++){
        cin>>val;
        vec.push_back(val);
    }
    cin>>k;
    cout<<kthLargestElement(vec,k);
    return 0;
}
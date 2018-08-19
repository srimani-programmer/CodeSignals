#include<iostream>
#include<vector>

using namespace std;

bool containsDuplicates(vector<int> a) {
    int count = 0;
    for(int i=0;i<a.size();i++){
        for(int j=i;j<a.size();j++){
            if(a[i] == a[j+1])
                count++;
        }
        if(count > 0)
            break;
    }
    bool flag = 0;
    if(count >= 1)
        flag = true;
    else
        flag = false;

    return flag;
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
    cout<<containsDuplicates(vec);
    return 0;
}
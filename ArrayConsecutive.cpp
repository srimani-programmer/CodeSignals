#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int makeArrayConsecutive2(vector<int> statues) {
    int count = 0;
    int val = 0;
    for(int i=0;i<statues.size()-1;i++){
        if(statues[i+1]-statues[i] == 1){
            
        }   
        else{
            val = (statues[i+1]-statues[i]) - 1;
        }

        count = count + val;
    }

    return count;
}

int main(){
    int size;
    vector<int>vec;
    cin>>size;
    int val;
    for(int i=0;i<size;i++){
        cin>>val;
        vec.push_back(val);
    }
    sort(vec.begin(),vec.end());
    cout<<makeArrayConsecutive2(vec);

    return 0;
}
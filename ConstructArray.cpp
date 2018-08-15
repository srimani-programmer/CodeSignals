#include<iostream>
#include<vector>

using namespace std;

std::vector<int> constructArray(int size) {
    vector<int> vec;
    int val2 = 1;
    int val = 0;
    for(int i=0;i<=size;i++){
        if(i%2 == 0){
            if(i==0){
                vec.push_back(i+1);
                val = i+1;
            }           
            else{
                vec.push_back(val+1);
                val = val+1;
            }
        }else{
            if(val2 == 1){
                vec.push_back(size);
                val2 = size;
            }           
            else{
            int val = val2 - 1;
            vec.push_back(val);
            val2 = val;
            }
           
        }
    }
    cout<<"[";
    for(int i=0;i<size;i++){
        cout<<vec[i];
        if(i != size-1)
            cout<<", ";
    }   
    cout<<"]";
    return vec;
}

int main(){
    int size;
    cin>>size;
    vector<int> res = constructArray(size);
    //cout<<res;
    return 0;
}
#include<iostream>

using namespace std;

bool isInfiniteProcess(int a, int b) {

    bool flag = 0;
    if(a>b)
        flag = true;
    else{
        if((b-a)%2 == 0)
            flag = false;
        else
            flag = true;
    }
    return flag;

}

int main(){
    int val1,val2;
    cin>>val1>>val2;
    cout<<isInfiniteProcess(val1,val2);
    return 0;
}
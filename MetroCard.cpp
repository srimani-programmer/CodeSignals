#include<iostream>
#include<vector>

using namespace std;

std::vector<int> metroCard(int lastNumberOfDays) {
    vector<int> v1={28,30,31};
    vector<int> v2={31};
    if(lastNumberOfDays == 28 || lastNumberOfDays == 30)
        return v2;
    else 
        return v1;
}

int main(){
    int num;
    cin>>num;
    metroCard(num);
    return 0;
}
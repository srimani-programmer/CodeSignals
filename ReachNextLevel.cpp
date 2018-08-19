#include<iostream>

using namespace std;

bool reachNextLevel(int experience, int threshold, int reward) {
    bool flag = false;
    if(experience+reward>=threshold)
        flag = true;

    return flag;
}

int main(){
    int experience,threshold,reward;
    cin>>experience>>threshold>>reward;
    cout<<reachNextLevel(experience,threshold,reward);
    return 0;
}
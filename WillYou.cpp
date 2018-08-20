#include<iostream>

using namespace std;

bool willYou(bool young, bool beautiful, bool loved) {
    bool flag = false;

    if((young == 1 && beautiful == 1) && (loved == 0))
        flag = true;
    else if((loved == 1 &&(young == 1 && beautiful == 0)) || (loved == 1 &&(young == 0 && beautiful == 1)))
        flag = true;
    else if(young == 0 && beautiful == 0 && loved == 1) 
    flag = true;

    return flag;
}

int main(){
    bool a,b,c;
    cin>>a>>b>>c;
    cout<<willYou(a,b,c);
    return 0;
}
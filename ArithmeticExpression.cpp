#include<iostream>

using namespace std;

bool arithmeticExpression(int a, int b, int c) {
    bool flag = 0;
    if(a + b == c)
        flag = true;
    else if(a - b == c)
        flag = true;
    else if(a * b == c)
        flag = true;
    else if(a / (b + 0.0) == c)
        flag = true;
    else flag = false;

    return flag;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<arithmeticExpression(a,b,c);
    return 0;
}
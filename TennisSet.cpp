#include<iostream>

using namespace std;

bool tennisSet(int score1, int score2) {
    bool flag = 0;
    if((score1 == 6 && score2 < 5) || (score2 == 6 && score1 < 5))
        flag = true;
    else if((score1 == 7 && (score2 >=5 && score2 <= 7-1 )) || (score2 == 7 && (score1 >=5 && score1 <= 7-1 )))
        flag= true;
    
    return flag;
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<tennisSet(a,b);
    return 0;
}
#include<iostream>
#include<math.h>

using namespace std;

int centuryFromYear(int year) {
    
    int remain = year % 100;

    if(remain == 0)
        return ceil(year/100);
    else
        return ceil(year/100)+1;
    
}

int main(){
    int year;
    cin>>year;
    int res = centuryFromYear(year);
    cout<<res;
    
    return 0;
}

#include<iostream>

using namespace std;

int centuryFromYear(int year) {
    
    if(year%100 == 0)return year/100;
    else return (year/100) + 1;

}

int main(){
    int year;
    cin>>year;
    cout<<centuryFromYear(year);

    return 0;
}

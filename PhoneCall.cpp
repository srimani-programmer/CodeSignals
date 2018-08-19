#include<iostream>

using namespace std;

int phoneCall(int min1, int min2_10, int min11, int s) {
    int count = 0,count1 = 0;
        if(s-min1>=0){
            count++;
            s = s - min1;
        }
        for(int i=0;i<9;i++){
            count1++;
            if(s - min2_10 >= 0){
                count++;
                s = s - min2_10;
            }     
            else
                break;
        }
        if(count1 == 9){
            while(1){
            if(s-min11>=0){
            count++;
            s = s-min11;
            }else
                break;
            }
        }
        
        
        

        return count;
}

int main(){
    int minu1,minu2_10,min11,total;
    cin>>minu1>>minu2_10>>min11>>total;
    cout<<phoneCall(minu1,minu2_10,min11,total);
    return 0;
}
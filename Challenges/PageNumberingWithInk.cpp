#include<iostream>

using namespace std;

int pagesNumberingWithInk(int current, int numberOfDigits) {
    
    int pageNumber = 0;
    
    while(true){
        
        if(current/10 == 0 && numberOfDigits >= 1){
            pageNumber = current;
            current++;
            numberOfDigits = numberOfDigits - 1;
        }else if(current/10 < 10 && numberOfDigits >= 2){
            pageNumber = current;
            current++;
            numberOfDigits = numberOfDigits - 2;
        }else if((current/10 >= 10 && current/10 < 100) && numberOfDigits >= 3){
            pageNumber = current;
            current++;
            numberOfDigits = numberOfDigits - 3;
        }else if((current/10 >= 100) && numberOfDigits >= 4){
            pageNumber = current;
            current++;
            numberOfDigits = numberOfDigits - 4;
        }
        else{
            break;
        }   
    }
    
    return pageNumber;
}

int main(){
    int currNum, inkCount;
    cin>>currNum>>inkCount;
    cout<<pagesNumberingWithInk(currNum,inkCount);

    return 0;
}
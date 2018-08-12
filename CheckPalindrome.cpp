#include<iostream>
#include<string>

using namespace std;

bool checkPalindrome(std::string inputString) {
bool palindrome;
string rev(inputString);
reverse(rev.begin(), rev.end());
inputString == rev ? palindrome = true : palindrome = false;
return palindrome;
}

int main(){
    string s;
    cin>>s;
    cout<<checkPalindrome(s);
    return 0;
}
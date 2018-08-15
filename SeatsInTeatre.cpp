#include<iostream>

using namespace std;

int seatsInTheater(int nCols, int nRows, int col, int row) {
    int a = 1+nCols - col;
    int b = nRows - row;
    return a*b;
}

int main(){
    int ncols,nrows,col,row;
    cin>>ncols>>nrows>>col>>row;
    cout<<seatsInTheater(ncols,nrows,col,row);
    return 0;
}
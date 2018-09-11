#include<iostream>
#include<vector>

using namespace std;

int matrixElementsSum(std::vector<std::vector<int>> matrix) {
int sum = 0;
for(int i=0; i<matrix.size()-1; i++) {
for(int j=0; j<matrix[i].size();j++) {
if(matrix[i][j]==0) matrix[i+1][j] = 0;
}
}

 for(int i=0; i<matrix.size(); i++) 
      for(int j=0; j<matrix[i].size();j++) {
           sum += matrix[i][j];
      }
 return sum;
}


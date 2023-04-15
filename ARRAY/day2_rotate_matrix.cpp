#include<bits/stdc++.h>
using namespace std;
/*
  0 1 2 0 1 2
0 1 2 3 1 4 7
1 4 5 6 2 5 8
2 7 8 9 3 6 9
*/
// ROTATE MATRIX BY 90 DEGREE
void rotate(vector < vector < int >> & matrix) {
  int n = matrix.size();
  //transposing the matrix
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
  //reversing each row of the matrix
  for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
  }
}
// ROTATE MATRIX BY 90 DEGREE ANTICLOCKWISE
void rotate(vector < vector < int >> & matrix) {
  int n = matrix.size();
  //transposing the matrix
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
  //reversing  the matrix
   reverse(matrix.begin(),matrix.end());
  }
}
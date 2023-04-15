#include<bits/stdc++.h>
using namespace std;
//GFG SOLUTION
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here
            int i=n-1;
            int j=0;
            while(i>=0 and j<m)
            {
                if(arr1[i] > arr2[j])
                {
                    swap(arr1[i], arr2[j]);
                    i--;
                    j++;
                }
                else
                    break;
                    
            }
            
            sort(arr1, arr1+n);
            sort(arr2, arr2+m);
             
        } 
};
//OTHER SOLUTION
void merge(int arr1[], int arr2[], int n, int m) {
  // code here
  int i, k;
  for (i = 0; i < n; i++) {
    // take first element from arr1 
    // compare it with first element of second array
    // if condition match, then swap
    if (arr1[i] > arr2[0]) {
      int temp = arr1[i];
      arr1[i] = arr2[0];
      arr2[0] = temp;
    }

    // then sort the second array
    // put the element in its correct position
    // so that next cycle can swap elements correctly
    int first = arr2[0];
    // insertion sort is used here
    for (k = 1; k < m && arr2[k] < first; k++) {
      arr2[k - 1] = arr2[k];
    }
    arr2[k - 1] = first;
  }
}


#include<bits/stdc++.h>
using namespace std;
//LEETCODE SOLUTION
class Solution {
public:
int findDuplicate(vector<int>& nums) {
  int slow = nums[0];
  int fast = nums[0];
  do {
    slow = nums[slow];
    fast = nums[nums[fast]];
  } while (slow != fast);
  fast = nums[0];
  while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
  }
  return slow;
    }
};
// OTHER SOLUTIONS
// use sorting and then check if two consecutive elements are equal or not
// use map for finding frequency of every element
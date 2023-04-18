#include<bits/stdc++.h>
using namespace std;
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int> v = {1,2,5,10,20,50,100,500,1000};
    int mn = 0;
    reverse(v.begin(),v.end());
    int i=0;
    while(amount&&i<9)
    {
      if(v[i]<=amount)
      {
          mn+= amount/v[i];
          amount-=(amount/v[i])*v[i];
      }
      i++;
    }
    return mn;
}

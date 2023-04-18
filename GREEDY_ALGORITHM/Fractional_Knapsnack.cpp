#include<bits/stdc++.h>
using namespace std;
/*
struct Item{
    int value;
    int weight;
};
*/

bool cmp(Item &a,Item &b)
{
    return (double)a.value/(double)a.weight>(double)b.value/(double)b.weight;
}
class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,cmp);
        double ans = 0;
        for(int i=0;i<n;i++)
        {
            if(W>=arr[i].weight)
            {
                ans+= arr[i].value;
                W-=arr[i].weight;
            }
            else
            {
                ans+= (arr[i].value / (double) arr[i].weight) * (double) W;
                //ans+= (W/(double)arr[i].weight)*(double)arr[i].value;
                W = 0;
            }
        }
        return ans;
    }
        
};
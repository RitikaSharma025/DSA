#include<bits/stdc++.h>
using namespace std;
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

static bool cmp(Job &a,Job &b)
{
    return a.profit>b.profit;
}
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,cmp);
        int pro = 0;
        int no = 0;
        int mx = 0;
        for(int i=0;i<n;i++)
        {
            mx = max(mx,arr[i].dead);
        }
        vector<int> a(mx,-1);
        for(int i=0;i<n;i++)
        {
            int dd = arr[i].dead;
            for(int j=dd-1;j>=0;j--)
            {
                if(a[j]==-1)
                {
                    a[j] = i;
                    pro+=arr[i].profit;
                    no++;
                    break;
                }
            }
        }
        return {no,pro};
        
        
    } 
};
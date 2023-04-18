#include<bits/stdc++.h>
using namespace std;
class meet{
   public:
   int s;int e;
   int pos;
};
bool cmp(meet &a,meet &b)
{
    if(a.e<b.e)
     return a.e<b.e;
    if(a.e==b.e)
     return a.pos<b.pos;
    return 0;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<meet> v;
    for(int i=0;i<start.size();i++)
    {
        meet temp;
        temp.s = start[i],temp.e = end[i];
        temp.pos = i;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),cmp);
    vector<int> ans;
    ans.push_back(v[0].pos+1);
    int en = v[0].e;
    for(int i=1;i<start.size();i++)
    {
        if(en<v[i].s)
        {
            //ans++;
            ans.push_back(v[i].pos+1);
            en = v[i].e;
        }
    }
    //sort(ans.begin(),ans.end());
    return ans;
}
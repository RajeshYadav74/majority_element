#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cand=nums[0];
        int count=1;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]==cand)
            {
                count++;
            }
            else
            {
                count--;
                if(count==0)
                {
                    cand=nums[i];
                    count=1;
                }
            }
        }
        int count1=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==cand)
            {
                count1++;
            }
        }
        if(count1>n/2)
        {
        return cand;
        }
        else
        {
            return -1;
        }
    }
};
int main()
{
     vector<int> v;
  
    int n;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {   int a;
        cin>>a;
        v.push_back(a);
    }
   
   Solution s;
  
  int ans=  s.majorityElement(v);
  cout<<ans;
  
  return 0;
}
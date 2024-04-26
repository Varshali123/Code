#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution
{
  public :
  vector<int> twosum(vector<int> nums, int target)
  {
    unordered_map<int,int>numMap;
    int n = nums.size();
    
    for(int k=0;k<n;k++)
    {
      numMap[nums[k]]=k;
    }
    
    int complement{};
    for(int i=0; i<n-1; i++)
    {
      complement = target-nums[i];
      if(numMap.count(complement) && i !=nums[complemet])
      {
        return {i,umMap[complement]};
      }
    }
    return {0,0};
  }

int main()
{
  vector<int> num{2,7,11,15};
  int target=9;
  Solution sol;
  vector<int> sum=sol.twosum(num,target);
  for(int i=0;i<sum.size();i++)
    {
      cout<sum[i]<<endl;
    }
}

};

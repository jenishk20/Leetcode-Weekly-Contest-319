class Solution {
public:
    int findLcm(long long int a,long long int b)
    {
        return (a*b)/(__gcd(a,b));
    }
    int subarrayLCM(vector<int>& nums, int k) {
        
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            int lcm=nums[i];
            for(int j=i;j<nums.size();j++)
            {
               // cout<<i<<" "<<j<<endl;
                lcm=findLcm(lcm,nums[j]);
                if(lcm==k)
                    cnt++;
            }
        }
        return cnt;
    }
};

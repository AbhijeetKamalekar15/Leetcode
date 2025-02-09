class Solution {
    public:
        static long long countBadPairs(vector<int>& nums) {
            const int n=nums.size();
            long long cnt=n*(n-1LL)/2;
            for(int i=0; i<n; i++)
                nums[i]-=i;
            sort(nums.begin(), nums.end());
            long long f=1;
            for(int r=1; r<n; r++){
                if (nums[r]==nums[r-1]) f++;
                else{
                    cnt-=f*(f-1)/2;
                    f=1;
                }
            }
            return cnt-f*(f-1)/2;
        }
    };
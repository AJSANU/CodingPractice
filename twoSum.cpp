// https://leetcode.com/problems/two-sum/submissions/

vector<int> twoSum(vector<int>& arr, int k) {
        vector<int> res;
        int n=arr.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            auto it=m.find(k-arr[i]);
            if(it==m.end())
            {
                m[arr[i]]=i;
            }
            else
            {
                res.push_back(it->second);
                res.push_back(i);
            }
        }
        return res;
   }

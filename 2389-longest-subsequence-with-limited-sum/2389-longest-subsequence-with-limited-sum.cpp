class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        // sorting 
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m=queries.size();
        vector<int>ans(m);
        // prefix sum 
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
    // methode-1

    // for(int i=0;i<m;i++){
    //     int len=0;
    //     for(int j=0;j<n;j++){
    //         if(nums[j]>queries[i]) break;
    //         len++;
    //     }
    //     ans[i]=len;
    // }

    // methode-2 binry search
    for(int i=0;i<m;i++){
        int maxlen=0;
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]>queries[i]) hi=mid-1;
        else {// nums[mid]<=queries[i]
        maxlen=mid+1;
        lo=mid+1;
        }
    }
    ans[i]=maxlen;
    }
    return ans;
    }
};
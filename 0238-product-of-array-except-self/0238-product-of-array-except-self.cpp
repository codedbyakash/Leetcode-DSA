class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        //  prefix product 
        int p=nums[0];
        prefix[0]=1;
        for(int i=1;i<n;i++){
            prefix[i]=p;
            p*=nums[i];
        }
        p=nums[n-1];
        suffix[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suffix[i]=p;
            p*=nums[i];
        }
        vector<int >ans(n);
        for(int i=0;i<n;i++){
            ans[i]=prefix[i]*suffix[i];
        }
        // int p=1;
        // prefix[0]=1;
        // for(int i=1;i<n;i++){
        //     p*=nums[i];
        //     prefix[i]=p;
        // }
        // p=1;
        // prefix[n-2]=prefix[n-2]*p;
        // for(int i=n-1;i>=0;i--){
        //     prefix[i]*=p;
        //     p*=nums[i];
        // }
        //  suffix product 
    //     vector<int>suffix;
    //     for(int i=n-1;i>=0;i--){
    //         if(i==n-1){
    //             suffix[i]=p;
    //             p=nums[i];
    //         }
    //         suffix[i]=p;
    //         p*=nums[i];
    //     }
    //     for(int i=0;i<n;i++){
    //         prefix[i]=prefix[i]*suffix[i];
    //     }
    return ans;
    }
    
};
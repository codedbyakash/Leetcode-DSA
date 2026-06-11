class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //  methode -1:

        // int n=nums.size();
        // vector<int>prefix(n);
        // vector<int>suffix(n);
        // //  prefix product 
        // int p=nums[0];
        // prefix[0]=1;
        // for(int i=1;i<n;i++){
        //     prefix[i]=p;
        //     p*=nums[i];
        // }
        // p=nums[n-1];
        // suffix[n-1]=1;
        // for(int i=n-2;i>=0;i--){
        //     suffix[i]=p;
        //     p*=nums[i];
        // }
        // vector<int >ans(n);
        // for(int i=0;i<n;i++){
        //     ans[i]=prefix[i]*suffix[i];
        // }

        //  methode --2:

        // int n=nums.size();
        // vector<int>prefix(n);
        // vector<int>suffix(n);
        // //  prefix product 
        // int p=nums[0];
        // prefix[0]=1;
        // for(int i=1;i<n;i++){
        //     prefix[i]=p;
        //     p*=nums[i];
        // }
        // p=nums[n-1];
        // suffix[n-1]=1;
        // for(int i=n-2;i>=0;i--){
        //     suffix[i]=p;
        //     p*=nums[i];
        // }
        // for(int i=0;i<n;i++){
        //     prefix[i]*=suffix[i];
        // }

       
       // methode -3

        int n=nums.size();
        vector<int>prefix(n);
        //  prefix product 
        int p=nums[0];
        prefix[0]=1;
        for(int i=1;i<n;i++){
            prefix[i]=p;
            p*=nums[i];
        }
        p=1;
        // prefix[n-1]=prefix[n-1]*1;
        for(int i=n-2;i>=0;i--){
            p*=nums[i+1];
            prefix[i]*=p;
        }
    return prefix;
    }
    
};
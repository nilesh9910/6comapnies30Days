class Solution{
public:    
    // #define ull unsigned long long
    /* Function to get the nth ugly number*/
    ull getNthUglyNo(int n) {

        vector<ull> dp(n,1);
        
        ull i1=0,i2=0,i3=0;
        
        for(int i=1;i<n;i++){
            
            ull sz=dp[i1]*2;
            ull mz=dp[i2]*3;
            ull lz=dp[i3]*5;
            
            ull min_val=min(sz,min(mz,lz));
            dp[i]=min_val;
            
            if(min_val==sz) i1++;
            
            if(min_val==mz) i2++;
            
            if(min_val==lz) i3++;
        }
        return dp[n-1];
    }
};
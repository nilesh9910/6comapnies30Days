class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0') return 0;
        else if(s.length()==2 && s=="10") return 1; 
        int n=s.length();
        int dp[n+1];
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2; i<=n; i++) {
            dp[i] = dp[i-1];
            if(s[i-1]=='0') dp[i] = 0;
            int di = stoi(s.substr(i-2,2));
            if(di>=10 && di<=26) dp[i] += dp[i-2];
            if((di>26 && di%10==0) || di==0) return 0;
        }
        return dp[n];
    }
};
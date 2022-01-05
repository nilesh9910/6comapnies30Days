// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    string sort_str(string s) {
        vector<int> alpha(26, 0);
        for(int i=0; i<s.length(); i++){
            alpha[s[i]-'a']++;
        }
        string ans;
        for(int i=0; i<26; i++) {
            for(int j=0; j<alpha[i]; j++) {
                ans += (char)('a'+ i);
            }
        }
        return ans;
    }
    vector<vector<string> > Anagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(int i=0; i<strs.size(); i++) {
            string sorted_str = sort_str(strs[i]);
            mp[sorted_str].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto x: mp) {
            ans.push_back(x.second);
        }
        return ans;
        /*
        unordered_map<string, vector<string>> mp;
        int n= string_list.size();
        for(int i=0; i<n; i++) {
            string a = string_list[i];
            sort(a.begin(), a.end());
            mp[a].push_back(string_list[i]);
        }
        vector<vector<string>> ans;
        for(auto x:mp) {
            ans.push_back(x.second);
        }
        return ans;
        */
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Endsf
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        long long sumnum, sqsumnum;
        long long len=n;
        sumnum = len*(len+1)/2;
        sqsumnum = (len*(len+1)*(2*len+1))/6;
        for(int i=0; i<n; i++){
            sumnum-=(long long)arr[i];
            sqsumnum-=(long long)arr[i]*(long long)arr[i];
        }
        arr[1] = (sumnum + sqsumnum/sumnum)/2;
        arr[0] = arr[1]-sumnum;
        return arr;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
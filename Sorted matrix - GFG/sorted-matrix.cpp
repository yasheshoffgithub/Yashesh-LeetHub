// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
    vector<int> ans;
    for(int i=0;i<Mat.size();i++){
        for(int j=0;j<Mat[0].size();j++){
            ans.push_back(Mat[i][j]);
        }
    }
    int k=0;
    sort(ans.begin(),ans.end());
    for(int i=0;i<Mat.size();i++){
        for(int j=0;j<Mat[0].size();j++){
            Mat[i][j]=ans[k++];
        }
    }
    return Mat;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends
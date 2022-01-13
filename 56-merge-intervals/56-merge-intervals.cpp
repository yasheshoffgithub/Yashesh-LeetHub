class Solution {
public:
    static bool comp(vector<int> v1,vector<int> v2){
        return v1[0]<v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        stack<pair<int,int>>st;
        st.push(make_pair(intervals[0][0],intervals[0][1]));
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>st.top().second){
                st.push(make_pair(intervals[i][0],intervals[i][1]));
            }else{
                st.top().second=max(st.top().second,intervals[i][1]);
            }
        }
        vector<vector<int>>ans;
        while(st.size()>0){
            vector<int> v;v.push_back(st.top().first);
            v.push_back(st.top().second);
            ans.push_back(v);st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
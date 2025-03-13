class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        stack<int> st;
       
        int n= arr.size();
        vector<int> ns(n,n);
        vector<int> ps(n,-1);
        
        for(int i=0;i<n;i++){
                while(!st.empty()&&arr[st.top()]>arr[i]){
                    ns[st.top()]=i;
                    st.pop();
                }
                st.push(i);  
        }
        
        cout<<endl;
        for(int i=n-1;i>=0;i--){
                while(!st.empty()&&arr[st.top()]>arr[i]){
                    ps[st.top()]=i;
                    st.pop();
                }
                st.push(i);  
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            int width=ns[i]-ps[i]-1;
            int area=width*arr[i];
            ans=max(ans, area);
        }
        return ans;
    }
};
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int prev=0;
        int sum=0;
        for(string c:operations){
            if(c=="+"){
                int temp1=st.top();
                st.pop();
                int temp2=st.top();
                st.push(temp1);
                prev=temp1;
                int curr=temp1+temp2;            
                st.push(curr);
            }
            else if(c=="C"){
                st.pop();
                if(!st.empty()) prev = st.top();
            }
            else if(c=="D"){
                int curr=2*st.top();
                prev=st.top();
                st.push(curr);
            }
            else{
                st.push(stoi(c));
            }
        }
        while(!st.empty()){
            sum=sum+st.top();
            st.pop();
        }

        return sum;
    }
};
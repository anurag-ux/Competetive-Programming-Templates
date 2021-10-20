class Solution {
public:
    int clumsy(int n) {
        
        stack<int> st;
        int j=0;
        st.push(n);
        for(int i=n-1;i>=1;i--)
        {
            if(j==0)
            {
                int x=st.top();
                st.pop();
                int y=i;
                st.push(x*y);
                j++;
            }
            else if(j==1)
            {
                int x=st.top();
                st.pop();
                int y=i;
                st.push(x/y);
                j++;
            }
            else if(j==2){
                st.push(i);
                j++;
            }
            else{
                st.push(-1*i);
                j++;
            }
            j=j%4;
        }
        int ans=0;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
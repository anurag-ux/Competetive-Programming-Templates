class Solution {
public:
    bool isChar(char ch)
    {
        if(ch=='*' || ch=='-' || ch=='/' || ch=='+')
        {
            return true;
        }
        return false;
    }
    int calculate(string s) {
        
        stack<int> st;
        int ans=0;
        int val=0;
        char sign='+';
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(isChar(ch))
            {
                if(sign=='*')
                {
                    int x=st.top();
                    st.pop();
                    int y=val;
                    st.push(x*y);
                    val=0;
                }
                else if(sign=='/')
                {
                    int x=st.top();
                    st.pop();
                    int y=val;
                    st.push(x/y);
                    val=0;
                }
                else if(sign=='+')
                {
                    st.push(val);
                    val=0;
                }
                else if(sign=='-'){
                    st.push(-1*val);
                    val=0;
                }
                sign=ch;
            }
            else if(ch>='0' && ch<='9')
            {
                val=val*10+(ch-'0');
            }
        }
        if(sign=='*')
        {
            int x=st.top();
            st.pop();
            int y=val;
            st.push(x*y);
            val=0;
        }
        else if(sign=='/')
        {
            int x=st.top();
            st.pop();
            int y=val;
            st.push(x/y);
            val=0;
        }
        else if(sign=='+')
        {
            st.push(val);
            val=0;
        }
        else{
            st.push(-1*val);
            val=0;
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
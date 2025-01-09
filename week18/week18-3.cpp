class Solution {
public:
    string addBinary(string a, string b) {
        vector<int> ans;
        int N1=a.length(),N2=b.length();
        int carry=0;
        for(int i=N1-1,j=N2-1;i>=0||j>=0;i--,j--)
        {
            if(i<0)
            {
                int now=b[j]-'0'+carry;
                ans.push_back(now%2);
                carry=now/2;
            }
            else if(j<0)
            {
                int now=a[i]-'0'+carry;
                ans.push_back(now%2);
                carry=now/2;
            }
            else
            {
                int now=a[i]-'0'+b[j]-'0'+carry;
                ans.push_back(now%2);
                carry=now/2;
            }
        }
        if(carry>0)
            ans.push_back(carry);
        /*
        for(int now:ans)
            cout<<now;
        return "";
        */
        int N=ans.size(); //答案有N位
        string ans2(N,'0'); //最後的答案用字串，長度N,裡面值放'0'
        for(int i=N-1;i>=0;i--)
        {
            ans2[i]=ans[N-1-i]+'0';
        }
        return ans2;
    }
};

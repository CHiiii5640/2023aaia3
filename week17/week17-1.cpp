//母音開始，母音結束
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        int prefixSum[words.size()+1]; //累積有幾個正確
        prefixSum[0]=0;
        for(int i=0;i<words.size();i++)
        {
            prefixSum[i+1]=prefixSum[i];
            if(words[i][0]=='a'||words[i][0]=='e'||words[i][0]=='i'||words[i][0]=='o'||words[i][0]=='u')
            {
                int N=words[i].length();
                if(words[i][N-1]=='a'||words[i][N-1]=='e'||words[i][N-1]=='i'||words[i][N-1]=='o'||words[i][N-1]=='u')
                {
                    prefixSum[i+1]++;
                }
            }
        }
        for(int i=0;i<queries .size();i++)
        {
            int left=queries[i][0];
            int right=queries[i][1];
            ans.push_back(prefixSum[right+1]-prefixSum[left]);
        }
        return ans;
    }
};

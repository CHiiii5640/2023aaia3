class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0=coordinates[0][0],y0=coordinates[0][1];
        int x1=coordinates[1][0],y1=coordinates[1][1];
        int N=coordinates.size();
        for(int i=2;i<N;i++)
        {
            int x2=coordinates[i][0],y2=coordinates[i][1];
            if((x1-x0)*(y2-y0)!=(y1-y0)*(x2-x0))
                return false;
        }
        return true;
    }
};

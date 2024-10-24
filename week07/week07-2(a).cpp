class Solution {
public:
        void myPrintBoard(int board[3][3])
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<board[i][j]<<" ";
                }
                cout<<"\n";
            }
            cout<<"\n";
        }

    string tictactoe(vector<vector<int>>& moves) {

        int board[3][3]={}; // 裡面都放0
        //for(vector<int> move:moves)  從二維陣列，取出1維陣列
        int now=1; //第一個下的人叫A
        for(auto move :moves)
        {
            int i=move[0],j=move[1];
            board[i][j]=now;
            myPrintBoard(board);
            now=3-now; // 1變2，2變1
        }
        return "A";

    }
};

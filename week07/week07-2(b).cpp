class Solution {
public:
        bool myTest(int board[3][3],int now)
        {
            if(board[0][0]==now && board[0][1]==now && board[0][2]==now)//上面橫
                return true;
            if(board[1][0]==now && board[1][1]==now && board[1][2]==now)//中間橫
                return true;
            if(board[1][0]==now && board[1][1]==now && board[1][2]==now)//下面橫
                return true;

            if(board[0][0]==now && board[1][0]==now && board[2][0]==now)//左直線
                return true;
            if(board[0][1]==now && board[1][1]==now && board[2][1]==now)//中直線
                return true;
            if(board[0][2]==now && board[1][2]==now && board[2][2]==now)//右直線
                return true;

            if(board[0][0]==now && board[1][1]==now && board[2][2]==now)//左上右下
                return true;
            if(board[2][0]==now && board[1][1]==now && board[0][2]==now)//右上左下
                return true;
            return false;
        }
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

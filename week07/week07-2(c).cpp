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
        bool myTest(int board[3][3],int now)
        {
            if(board[0][0]==now && board[0][1]==now && board[0][2]==now)//�W����
                return true;
            if(board[1][0]==now && board[1][1]==now && board[1][2]==now)//������
                return true;
            if(board[2][0]==now && board[2][1]==now && board[2][2]==now)//�U����
                return true;

            if(board[0][0]==now && board[1][0]==now && board[2][0]==now)//�����u
                return true;
            if(board[0][1]==now && board[1][1]==now && board[2][1]==now)//�����u
                return true;
            if(board[0][2]==now && board[1][2]==now && board[2][2]==now)//�k���u
                return true;

            if(board[0][0]==now && board[1][1]==now && board[2][2]==now)//���W�k�U
                return true;
            if(board[2][0]==now && board[1][1]==now && board[0][2]==now)//�k�W���U
                return true;
            return false;
        }


    string tictactoe(vector<vector<int>>& moves) {

        int board[3][3]={}; // �̭�����0
        //for(vector<int> move:moves)  �q�G���}�C�A���X1���}�C
        int now=1; //�Ĥ@�ӤU���H�sA
        for(auto move :moves)
        {
            int i=move[0],j=move[1];
            board[i][j]=now;
            myPrintBoard(board);
            if (myTest(board,now))
            {
                if(now==1)
                    return "A";
                else
                    return "B";
            }
            now=3-now; // 1��2�A2��1
        }
            if(moves.size()==9)
                return "Draw"; //�S�H�ӧQ
            else
                return "Pending"; //�~��U
    }
};

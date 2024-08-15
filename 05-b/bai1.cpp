// Viết chương trình nhận đầu vào từ bàn phím một bản đồ mìn dạng bảng, trong đó ∗
//  có nghĩa là có mìn, .
//  là không có mìn. In ra màn hình bản đồ mìn sao cho giá trị của mỗi ô là một dấu ∗
//  nếu như ô đó có mìn, nếu không thì là một giá trị trong khoảng [0,8]
//  là số mìn nằm trong các ô xung quanh.

#include <iostream>
#include <vector>

using namespace std;

void printBoard(const vector<vector<char>>& board)
{
    int m = board.size();
    int n = board[0].size();
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int countMine( const vector<vector<char>>& board, int x, int y, int m, int n)
{
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int mineCount = 0;

    for (int k = 0; k < 8; ++k)
    {
        int ni = x + dx[k];
        int nj = y + dy[k];
        if (ni >= 0 && ni < m && nj >= 0 && nj < n  && board[ni][nj] == '*')
            mineCount++;
    }
    return mineCount;
}

vector<vector<char>> processBoard(const vector<vector<char>>& board, int m, int n)
{
    vector<vector<char>> result(m, vector<char>(n, '0'));
    
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (board[i][j] == '*') result[i][j] = '*';
            else result[i][j] = countMine(board, i, j, m, n) +'0';
        }
    }
    return result;
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<char>> board(m, vector<char>(n));

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> board[i][j];
        }
    }

    vector<vector<char>> result = processBoard(board, m, n);

    printBoard(result);

    return 0;
}
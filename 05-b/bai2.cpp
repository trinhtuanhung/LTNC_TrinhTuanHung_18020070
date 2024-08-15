// Viết chương trình trò chơi dò mìn (chuẩn). Input từ bàn phím gồm một bộ ba số nguyên dương m,n,k
//   (k≤10)
//  và bản đồ trạng thái mìn của vùng hình chữ nhật kích thước m×n
//  và k
//  lần mở ô. 

// Lặp đi lặp lại cho đến hết: 

// Nhập một tọa độ x,y
//  từ bàn phím. 
// Với mỗi tọa độ đọc được, chương trình kiểm tra xem tọa độ đó có mìn hay không. Nếu có thì báo YOU′REDEAD!
// , in lại bản đồ với tất cả các quả mìn ra màn hình và kết thúc trò chơi. Nếu không có thì coi như người chơi đã mở thành công ô đó, nếu ô đã chọn mà xung quanh không có mìn thì phải loang hết các ô không lân cận với mìn nằm ở gần ô đó (giống như trò chơi dò mìn). 
// Chương trình in ra bản đồ với các ô đã thử và đã được loang mà không có mìn, ghi tại mỗi ô đó số mìn nằm trong 8
//  ô xung quanh, nếu như ô chưa được mở thì ghi −1
// , các số cách nhau một dấu cách.  

#include <iostream>
#include <vector>
#include <queue>

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

int countMines(const vector<vector<char>>& board, int x, int y, int m, int n)
{
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int mineCount = 0;

    for (k = 0; k < 8; ++k)
    {
        int ni = x + dx[k];
        int nj = y + dy[k];
        if (ni >= 0 && ni < m && nj >= 0 && nj < n && board[ni][nj] == 'M')
            mineCount++;
    }
    return mineCount;
}

void floodFill( const vector<vector<char>>& board, vector<vector<int>>& result,int x, int y, int m,, int n)
{
    queue<pair<int, int>> q;
    q.push({x, y});

    while (!q.empty())
    {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        int minesCount = countMines(board, cx, cy, m, n);

        result[cx][cy] = minesCount;

        if (minesCount == 0)
        {
            for (int k = 0; k < 8; ++k)
            {
                int nx = cx + dx[k];
                int ny = cy + dy[k];
                if (nx >= 0 && nx < n && ny >= 0 && ny < n && result[nx][ny] == -1)
                {
                    result[nx][ny] = -2 // Đánh dấu đã đến
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main()
{
    int m, n, k;
    cin >> m >> n >> k;

    vector<vector<<char> board(m, vector<char>(n));

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> board[i][j];
        }
    }

    vector<vector<int>> result(m, vector<int>(n, -1));
    bool dead = false;

    for (int i = 0; i < k, ++i)
    {
        int x, y;
        cin >> x >> y;

        if (board[i][j] == 'M')
        {
            cout << "YOU'RE DEAD!" << endl;
            for (const auto& row : board)
            {
                for (const auto& cell : board)
                {
                    cout << cell;
                }
                cout << endl;
            }
            dead = true;
            break;
        }
        else
        {
            floodFill(board, result, x, y, m, n);
            printBoard(result);
        }
    }
    if (!dead)
    {
        printBoard(result);
    }

    return 0;
}
// Cho số nguyên dương N
//  lẻ. Ma trận kì ảo kích thước N×N
//  là bảng vuông chứa các số từ 1
//  đến N×N
//  có tính chất như sau: mỗi số xuất hiện đúng một lần, tổng các số trên mỗi hàng, cột, đường chéo chính, đường chéo phụ đều bằng nhau.
// Viết chương trình in ra ma trận kỳ ảo kích thước N×N
//  với N
//  cho trước.

#include <iostream>
#include <vector>

using namespace std;

void generateMagicSquare(int n)
{
    vector<vector<int>> magicSquare(n, vector<int>(n, 0));

    int num = 1;
    int i = 0, j = n / 2; // Bắt đầu ở ô giữa hàng 1

    while (num <= n * n)
    {
        magicSquare[i][j] = num++; // Đặt số hiện tại và tăng dần

        int newi = (i - 1 + n) % n; // Tính vị trí hàng mới
        int newj = (j + 1) % n; // Tính vị trí cột mới

        if (magicSquare[newi][newj]) // Kiểm tra xem còn trống không?
            i = (i + 1) % n; // Chuyển xuống 1 hàng
        else
        {
            i = newi; // Chuyển đến ô đã tính
            j = newj;
        }
    }
    // In
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << magicSquare[i][j];
            if (j < n - 1) cout << " "; // Space giữa mỗi số trong hàng, không phải cuối hàng
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cin >> N;

    if (N % 2 == 0) return 1;
    else generateMagicSquare(N);

    return 0;
}
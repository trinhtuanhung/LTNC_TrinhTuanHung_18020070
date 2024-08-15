// Viết chương trình nhận vào từ bàn phím số nguyên n
// , in ra màn hình tam giác Pascal có bậc n
// .

#include <iostream>
#include <vector>

using namespace std;

void printPascalTriangle(int n)
{
    vector<vector<int>> pascal(n + 1, vector<int>(n + 1, 0));

    for (int line = 0; line <= n; line++)
    {
        for(int i = 0; i <= line; i++)
        {
            if (line == i || i == 0)
                pascal[line][i] = 1;
            else
                pascal[line][i] = pascal[line - 1][i - 1] + pascal[line - 1][i];

            cout << pascal[line][i] << " ";
        }
        cout << endl;
    }
}
// Cách 2:
// void printPascalTriangle(int n)
// {
//     vector<vector<int>> pascal(n + 1);

//     for (int i = 0; i < n + 1; i++) {
//         pascal[i].resize(i + 1);
//         pascal[i][0] = pascal[i][i] = 1;
//     }
    
//     for (int i = 2; i < n + 1; i++) {
//         for (int j = 1; j < i; j++) {
//             pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
//         }
//     }
    
//     for (int i = 0; i <= n; i++) {
//         for (int j = 0; j <= i; j++) {
//             cout << pascal[i][j];
//             if (j < i) cout << " ";
//         }
//         cout << endl;
//     }
// }

int main()
{
    int n;
    cin >> n;

    printPascalTriangle(n);

    return 0;
}
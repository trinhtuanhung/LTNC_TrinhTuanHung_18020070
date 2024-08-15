#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int WIDTH = 10;
const int HEIGHT = 10;
const int MINES = 10;


vector<vector<char>> board(HEIGHT, vector<char>(WIDTH, '.'));
vector<vector<int>> mineCount(HEIGHT, vector<int>(WIDTH, 0));
vector<vector<bool>> revealed(HEIGHT, vector<bool>(WIDTH, false));


void initializeBoard() {

    srand(time(0));
    int minesPlaced = 0;
    while (minesPlaced < MINES) {
        int r = rand() % HEIGHT;
        int c = rand() % WIDTH;
        if (board[r][c] != 'M') {
            board[r][c] = 'M';
            minesPlaced++;
        }
    }


    for (int r = 0; r < HEIGHT; ++r) {
        for (int c = 0; c < WIDTH; ++c) {
            if (board[r][c] == 'M') {
                for (int i = -1; i <= 1; ++i) {
                    for (int j = -1; j <= 1; ++j) {
                        int nr = r + i;
                        int nc = c + j;
                        if (nr >= 0 && nr < HEIGHT && nc >= 0 && nc < WIDTH && board[nr][nc] != 'M') {
                            mineCount[nr][nc]++;
                        }
                    }
                }
            }
        }
    }
}


void displayBoard(bool reveal) {
    cout << "  ";
    for (int c = 0; c < WIDTH; ++c) {
        cout << c << " ";
    }
    cout << endl;

    for (int r = 0; r < HEIGHT; ++r) {
        cout << r << " ";
        for (int c = 0; c < WIDTH; ++c) {
            if (reveal && board[r][c] == 'M') {
                cout << "* ";
            } else if (revealed[r][c]) {
                cout << mineCount[r][c] << " ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}


void reveal(int r, int c) {
    if (r < 0 || r >= HEIGHT || c < 0 || c >= WIDTH || revealed[r][c]) {
        return;
    }

    revealed[r][c] = true;

    if (mineCount[r][c] == 0) {
        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                if (i != 0 || j != 0) {
                    reveal(r + i, c + j);
                }
            }
        }
    }
}


void playGame() {
    initializeBoard();
    bool gameOver = false;

    while (!gameOver) {
        displayBoard(false);
        cout << "Nhập tọa độ hàng và cột (ví dụ: 2 3): ";
        int r, c;
        cin >> r >> c;

        if (r < 0 || r >= HEIGHT || c < 0 || c >= WIDTH) {
            cout << "Tọa độ không hợp lệ!" << endl;
            continue;
        }

        if (board[r][c] == 'M') {
            cout << "Bạn đã trúng mìn! Game Over!" << endl;
            gameOver = true;
        } else {
            reveal(r, c);
        }
    }

    displayBoard(true);
}

int main() {
    playGame();
    return 0;
}

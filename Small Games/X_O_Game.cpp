#include <iostream>
using namespace std;

const int MIN_N = 3, MAX_N = 9;

void printBoard(char board[][9], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool checkWinner(char board[][9], int N, char player)
{
    for (int i = 0; i < N; i++)
    {
        bool rowWin = true, colWin = true;
        for (int j = 0; j < N; j++)
        {
            if (board[i][j] != player)
                rowWin = false;
            if (board[j][i] != player)
                colWin = false;
        }
        if (rowWin || colWin)
            return true;
    }

    bool diag1 = true, diag2 = true;
    for (int i = 0; i < N; i++)
    {
        if (board[i][i] != player)
            diag1 = false;
        if (board[i][N - i - 1] != player)
            diag2 = false;
    }
    return diag1 || diag2;
}

bool isFull(char board[][9], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (board[i][j] == '.')
                return false;
        }
    }
    return true;
}

void playGame(int N)
{
    char board[9][9];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            board[i][j] = '.';
        }
    }

    char players[] = {'X', 'O'};
    int turn = 0;
    printBoard(board, N);

    while (true)
    {
        char player = players[turn % 2];
        int row, col;

        while (true)
        {
            cout << "Player " << player << ", enter row and column (0-" << N - 1 << "): ";
            cin >> row >> col;
            if (row >= 0 && row < N && col >= 0 && col < N && board[row][col] == '.')
            {
                board[row][col] = player;
                break;
            }
            cout << "Invalid move. Try again." << endl;
        }

        printBoard(board, N);

        if (checkWinner(board, N, player))
        {
            cout << "Player " << player << " wins!" << endl;
            return;
        }

        if (isFull(board, N))
        {
            cout << "It's a tie!" << endl;
            return;
        }
        turn++;
    }
}

int main()
{
    int N;
    while (true)
    {
        cout << "Enter the board size (3-9): ";
        cin >> N;
        if (N >= MIN_N && N <= MAX_N)
            break;
        cout << "Please enter a number between 3 and 9." << endl;
    }

    playGame(N);
    return 0;
}

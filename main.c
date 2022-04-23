#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define WIDTH 8
#define HEIGHT 8
#define BLANK ' '
#define PLAYER_X 'x'
#define PLAYER_O 'o'

void display_board(char[WIDTH][HEIGHT]);

int main()
{
    char board[WIDTH][HEIGHT] = {
        {' ', 'o', ' ', 'o', ' ', 'o', ' ', 'o'},
        {'o', ' ', 'o', ' ', 'o', ' ', 'o', ' '},
        {' ', 'o', ' ', 'o', ' ', 'o', ' ', 'o'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'x', ' ', 'x', ' ', 'x', ' ', 'x', ' '},
        {' ', 'x', ' ', 'x', ' ', 'x', ' ', 'x'},
        {'x', ' ', 'x', ' ', 'x', ' ', 'x', ' '}};

    display_board(board);

    return 0;
}

void display_board(char board[WIDTH][HEIGHT])
{
    puts("  +--------------------------+");
    for (size_t i = 0; i < HEIGHT; i++)
    {
        printf("%d | ", i + 1);

        for (size_t j = 0; j < WIDTH; j++)
        {
            bool even_row = (i + 1) % 2 == 0;
            bool even_col = (j + 1) % 2 == 0;

            if ((even_row && !even_col) || (!even_row && even_col))
            {
                if (board[i][j] == BLANK)
                    printf(" %c ", '.');
                else
                    printf(" %c ", board[i][j]);
            }
            else
                printf(" %c ", BLANK);
        }
        printf(" |\n");
    }
    puts("  +--------------------------+");
    puts("     a  b  c  d  e  f  g  h");
}
#include <iostream>

using namespace std;

typedef struct
{
    short int row;
    short int col;
} element;

element stack[max_stack_size];

void path()
{
    int i, row, col, next_row, next_col, dir, found = 0;
    element position;

    mask[0][1] = 1;

    top = 0;

    stack[0].row = 1;
    stack[0].col = 1;
    stack[0].dir = 1;

    while (top >= 1 && !found)
    {
        position = pop();

        row = position.row;
        col = position.col;
        dir = position.dir;

        while (dir < 8 && !found)
        {
            next_row = row + move[dir].vert;
            next_col = col + move[dir].horiz;

            if (next_row = exit_row && next_col == exit_col)
                found = 1;

            else if (!maze[next_row][next_col] && !maze[next_row][next_col])
            {
                mask[next_row][next_col] = 1;

                position.row = row;
                position.col = col;
                position.dir = ++dir;

                push(position);

                row = next_row;
                col = next_col;
                dir = 0;
            }

            else
            {
                ++dir;
            }
        }

        if (found)
        {
            cout << '\n The Path Is: ' << endl;
            cout << 'row col' << endl;

            for (i = 0; i <= top; i++)
                cout << stack[i].row << ' ' << stack[i].col << endl;

            cout << exit.col << endl;
        }

        else
            cout << '\n The Maze Does Not Have A Path !' << endl;
    }
}
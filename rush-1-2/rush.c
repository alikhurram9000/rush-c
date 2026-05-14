#include "rush.h"

void rush(int width, int height)
{
    if (width < 1 || height < 1)
    {
        write(2, "Invalid size\n", 13);
        return;
    }

    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            int top_or_bottom = (row == 0 || row == height - 1);
            int left_or_right = (col == 0 || col == width - 1);

            if (width == 1 || height == 1)
                my_putchar('*');
            else if (row == 0 && col == 0)
                my_putchar('/');
            else if (row == 0 && col == width - 1)
                my_putchar('\\');
            else if (row == height - 1 && col == 0)
                my_putchar('\\');
            else if (row == height - 1 && col == width - 1)
                my_putchar('/');
            else if (top_or_bottom || left_or_right)
                my_putchar('*');
            else
                my_putchar(' ');
        }
        my_putchar('\n');
    }
}
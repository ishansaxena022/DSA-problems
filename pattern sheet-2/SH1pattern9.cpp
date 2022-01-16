#include <iostream>
using namespace std;
int main()
{
    int out, in, p;
    cout << "Enter the row size:";
    int row_size;
    cin >> row_size;

    int print_control_x = 1;
    int print_control_y = row_size * 2 - 1;
    for (out = row_size; out >= 1; out--)
    {
        for (in = 1; in <= row_size * 2; in++)
        {
            if (in == print_control_x || in == print_control_y)
            {
                cout << char(out + 64);
            }
            else
            {
                cout << " ";
            }
        }
        print_control_x++;
        print_control_y--;
        cout << "\n";
    }
}
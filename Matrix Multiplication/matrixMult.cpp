#include <bits/stdc++.h>
using namespace std;

void matrixInput(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void matrixPrinter(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int a[2][2], b[2][2], c[2][2], i, j;

    int m1, m2, m3, m4, m5, m6, m7;

    cout << "Enter the 4 elements of first matrix: ";

    matrixInput(a);

    cout << "Enter the 4 elements of second matrix: ";

    matrixInput(b);

    cout << endl
         << "The first Matrix: " << endl;

    matrixPrinter(a);

    cout << endl
         << "The Second Matrix: " << endl;

    matrixPrinter(b);

    m1 = (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);

    m2 = (a[1][0] + a[1][1]) * b[0][0];

    m3 = a[0][0] * (b[0][1] - b[1][1]);

    m4 = a[1][1] * (b[1][0] - b[0][0]);

    m5 = (a[0][0] + a[0][1]) * b[1][1];

    m6 = (a[1][0] - a[0][0]) * (b[0][0] + b[0][1]);

    m7 = (a[0][1] - a[1][1]) * (b[1][0] + b[1][1]);

    c[0][0] = m1 + m4 - m5 + m7;

    c[0][1] = m3 + m5;

    c[1][0] = m2 + m4;

    c[1][1] = m1 - m2 + m3 + m6;

    cout << endl
         << "After multiplication using Strassen's Algorithm"
         << endl;

    matrixPrinter(c);

    return 0;
}
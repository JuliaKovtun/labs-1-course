#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void PrintRow(int** a, const int rowNo, const int colCount, int colNo);
void PrintRows(int** a, const int rowCount, const int colCount, int rowNo);
void InputRow(int** a, const int rowNo, const int colCount, int colNo);
void InputRows(int** a, const int rowCount, const int colCount, int rowNo);
int Count_zeros(int** a, const int rowCount, const int colCount, int i, int j, int zero);
void Count_SimilarElements(int** a, const int rowCount, const int colCount, int i, int j, int& m, int& max);
void Count_SimilarElements_2(int** a, const int colCount, int i, int j, int b, int& m, int l, int& max);

int main()
{
    int rowCount, colCount;
    cout << "rowCount = "; cin >> rowCount;
    cout << "colCount = "; cin >> colCount;

    int** a = new int* [rowCount];
    for (int i = 0; i < rowCount; i++)
        a[i] = new int[colCount];

    InputRows(a, rowCount, colCount, 0);
    PrintRows(a, rowCount, colCount, 0);
    
    cout << "zeros: " << Count_zeros(a, rowCount, colCount, 0, 0, 0) << endl;

    int m = 0, max = 0;
    Count_SimilarElements(a, rowCount, colCount, -1, -1, m, max);
    cout << "The row with the most repetative elements: " << m << endl;



    for (int i = 0; i < rowCount; i++)
        delete[] a[i];
    delete[] a;

    return 0;
}

void PrintRow(int** a, const int rowNo, const int colCount, int colNo)
{
    cout << setw(4) << a[rowNo][colNo];
    if (colNo < colCount - 1)
        PrintRow(a, rowNo, colCount, colNo + 1);
    else
        cout << endl;
}

void PrintRows(int** a, const int rowCount, const int colCount, int rowNo)
{
    PrintRow(a, rowNo, colCount, 0);
    if (rowNo < rowCount - 1)
        PrintRows(a, rowCount, colCount, rowNo + 1);
    else
        cout << endl;
}

void InputRow(int** a, const int rowNo, const int colCount, int colNo)
{
    cout << "a[" << rowNo << "][" << colNo << "] = ";
    cin >> a[rowNo][colNo];
    if (colNo < colCount - 1)
        InputRow(a, rowNo, colCount, colNo + 1);
    else
        cout << endl;
}

void InputRows(int** a, const int rowCount, const int colCount, int rowNo)
{
    InputRow(a, rowNo, colCount, 0);
    if (rowNo < rowCount - 1)
        InputRows(a, rowCount, colCount, rowNo + 1);
    else
        cout << endl;
}

int Count_zeros(int** a, const int rowCount, const int colCount, int i, int j, int zero)
{
    if ((i == (rowCount - 1) && j == (colCount - 1)) || j == colCount)
        return zero;

    if (a[i][j] == 0) {
        zero++;
        return Count_zeros(a, rowCount, colCount, 0, j + 1, zero);
    }

    if(i < (rowCount - 1))
        return Count_zeros(a, rowCount, colCount, i + 1, j, zero);
    else 
        return Count_zeros(a, rowCount, colCount, 0, j + 1, zero);

}

void Count_SimilarElements(int** a, const int rowCount, const int colCount, int i, int j, int& m, int& max)
{
    if (i < (rowCount - 1)) {
        Count_SimilarElements_2(a, colCount, i + 1, j + 1, j + 2, m, 0, max);
        Count_SimilarElements(a, rowCount, colCount, i + 1, -1, m, max);
    }
}

void Count_SimilarElements_2(int** a, const int colCount, int i, int j, int b, int& m, int l , int& max)
{
    if ((a[i][j] == a[i][b]) && b != (colCount - 1)) {
        l++;
        if (max < l)
            max = l;
            m = i + 1;
    }

    if (b < colCount)
        Count_SimilarElements_2(a, colCount, i, j, b + 1, m, l, max);
}
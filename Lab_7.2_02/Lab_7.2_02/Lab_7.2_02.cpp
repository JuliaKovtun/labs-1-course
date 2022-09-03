#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void CreateRow(int** a, const int rowNo, const int N, const int Low, const int High, int colNo);
void CreateRows(int** a, const int N, const int Low, const int High, int rowNo);
void PrintRow(int** a, const int rowNo, const int N, int colNo);
void PrintRows(int** a, const int N, int rowNo);
void SearchMin(int** a, const int N, int i, int j, int& k, int& min);
void SearchMax(int** a, const int N, int i, int j, int& k, int& max);

int main()
{

    srand((unsigned)time(NULL));

    int N;
    cout << "N = "; 
    cin >> N;
    cout << endl;

    int** a = new int* [N];
    for (int i = 0; i < N; i++)
        a[i] = new int[N];

    int Low = 0, High = 100;
    CreateRows(a, N, Low, High, 0);
    PrintRows(a, N, 0);

    int k = 2;
    int j = N - k, i = 0;
    int min = a[0][0];
    SearchMin(a, N, i, j, k, min);
    cout << "Minimum = " << min << endl;

    k = N - 2;
    j = N - 1;
    i = 1;
    int max = a[N - 1][N - 1];
    SearchMax(a, N, i, j, k, max);
    cout << "Maximum = " << max << endl;

    int sum = min + max;
    cout << "Sum = " << sum << endl;


    for (int i = 0; i < N; i++)
        delete[] a[i];
    delete[] a;
    return 0;
    
}

void CreateRow(int** a, const int rowNo, const int N, const int Low, const int High, int colNo)
{
    a[rowNo][colNo] = Low + rand() % (High - Low + 1);
    if (colNo < N - 1)
        CreateRow(a, rowNo, N, Low, High, colNo + 1);
}

void CreateRows(int** a, const int N, const int Low, const int High, int rowNo)
{
    CreateRow(a, rowNo, N, Low, High, 0);
    if (rowNo < N - 1)
        CreateRows(a, N, Low, High, rowNo + 1);
}

void PrintRow(int** a, const int rowNo, const int N, int colNo)
{
    cout << setw(4) << a[rowNo][colNo];
    if (colNo < N - 1)
        PrintRow(a, rowNo, N, colNo + 1);
    else
        cout << endl;
}

void PrintRows(int** a, const int N, int rowNo)
{
    PrintRow(a, rowNo, N, 0);
    if (rowNo < N - 1)
        PrintRows(a, N, rowNo + 1);
    else
        cout << endl;
}

void SearchMin(int** a, const int N, int i, int j, int& k, int& min)
{
    if (a[i][j] < min)
        min = a[i][j];
    if (j > 0)
        SearchMin(a, N, i, j - 1, k,  min);
    if (i < N - 2 && j == 0) 
    {
        k++;
        j = N - k;
        SearchMin(a, N, i + 1, j, k, min);
    }
}

void SearchMax(int** a, const int N, int i, int j, int& k, int& max)
{
    if (a[i][j] > max)
        max = a[i][j];
    if (j > k + 1)
        SearchMax(a, N, i, j - 1, k, max);
    if (i < N - 1 && j == k + 1)
    {
        k--;
        j = N - 1;
        SearchMax(a, N, i + 1, j, k, max);
    }
}
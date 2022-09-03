#include <iostream>
#include <iomanip>

using namespace std;

void Input(int** a, const int rowCount, const int colCount);
void Print(int** a, const int rowCount, const int colCount);
int Count_zeros(int** a, const int rowCount, const int colCount);
void Count_SimilarElements(int** a, const int rowConst, const int colCount, int& m);


int main()
{
    int zero;
    int rowCount, colCount;
    cout << "rowCount = "; cin >> rowCount;
    cout << "colCount = "; cin >> colCount;

    int** a = new int* [rowCount];
    for (int i = 0; i < rowCount; i++)
        a[i] = new int[colCount];

    Input(a, rowCount, colCount);
    Print(a, rowCount, colCount);
    
    zero = Count_zeros(a, rowCount, colCount);
    cout << "count cols with zero: " << zero << endl;

    int m = 0;
    Count_SimilarElements(a, rowCount, colCount, m);
    cout << "The row with the most repetative elements: " <<  m << endl;



    for (int i = 0; i < rowCount; i++)
        delete[] a[i];
    delete[] a;

    return 0;
}

void Input(int** a, const int rowCount, const int colCount)
{
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
        cout << endl;
    }
}

void Print(int** a, const int rowCount, const int colCount)
{
    cout << endl;
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    cout << endl;
}

int Count_zeros(int** a, const int rowCount, const int colCount)
{    
    int k_zero = 0;
    for (int j = 0; j < colCount; j++)
    {       
        for (int i = 0; i < rowCount; i++)
            if (a[i][j] == 0)
            {
                k_zero++;
                break;
            }
    }
    return k_zero;
}

void Count_SimilarElements(int** a, const int rowConst, const int colCount, int& m)
{
    int l = 0;
    m = 0;
    int max = 0;
    int b = 0;
    for (int i = 0; i < rowConst; i++)
    {

        for (int j = 0; j < colCount - 1; j++)
        {
            l = 0;
            b = j + 1;
            for (b; b < colCount; b++)
            {
                if (a[i][j] == a[i][b])
                    l = l + 1;

                if (max < l)
                {
                    max = l;
                    m = i + 1;
                }

            }
        }
    }
}
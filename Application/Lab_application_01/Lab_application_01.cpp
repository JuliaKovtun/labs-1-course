
#include <iostream>
#include <iomanip>

using namespace std;

void Input(int** a, const int rowCount, const int colCount);
void Print(int** a, const int rowCount, const int colCount);
bool Symetry_check(int** a, const int colCount, const int rowCount, int  i, int  j, int b, int c, bool& Symetry);



int main()
{
    
    int rowCount, colCount;

    cout << "rowCount = "; cin >> rowCount;
    cout << "colCount = "; cin >> colCount;

    int** a = new int* [rowCount];
    for (int i = 0; i < rowCount; i++)
        a[i] = new int[colCount];

    Input(a, rowCount, colCount);

    bool symetry = true;

    if (colCount != rowCount)
        cout << "Array can not be symetric" << endl;
    else {
        Symetry_check(a, colCount, rowCount, 0, 0, colCount, rowCount, symetry);

        if (symetry == true)
            cout << "Array is symetric" << endl;
        if (symetry == false)
            cout << "Array is not symetric" << endl;
    }




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


bool Symetry_check(int** a, const int colCount, const int rowCount, int  i, int  j, int b, int c, bool& Symetry) {

    if (Symetry == false)
        return Symetry;

    if (i == (colCount - 2))
        return Symetry;

    if (j == (rowCount - 2))
        return Symetry_check(a, colCount, rowCount, i + 1, 0, b - 1, rowCount, Symetry);

    if (a[i][j] == a[colCount][rowCount]) {
        Symetry = true;
        return Symetry_check(a, colCount, rowCount, i, j + 1, b, c - 1, Symetry);
    }
    else {
        Symetry = false;
    }
        
}
// 2 спосіб з викорстанням рекурсії

#include <iostream>
#include <time.h>

using namespace std;

void Form(int* a, const int size, const int Low, const int High, int i);
void Print(int* a, const int size, int i);
int Copy_Array_Rec(int array[], int size, int arr[], int a);
int Replace_Array_Rec(int array[], int size, int arr[], int a);


int main()
{
    const int SIZE = 10;
    int array[SIZE];
    const int a = 5;
    int arr[a];
    int low = 0, high = 10;


    srand(time(NULL));

    Form(array, SIZE, low, high, 0);
    cout << "Random array: ";
    Print(array, SIZE, 0);

    Copy_Array_Rec(array, SIZE, arr, a);

    Replace_Array_Rec(array, SIZE, arr, a);
    cout << endl << "Replaced with recursion: ";
    Print(array, SIZE, 0);

    return 0;
}

void Form(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Form(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
    cout << "\t" << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

int Copy_Array_Rec(int array[], int size, int arr[], int a)
{
    if (a == 0)
        return 0;

    arr[a - 1] = array[size - 1];
    Copy_Array_Rec(array, size - 1, arr, a - 1);
}

int Replace_Array_Rec(int array[], int size, int arr[], int a)
{
    if (size < 0)
        return 0;
    if ((size - 1) > 4)
    {
        array[size - 1] = array[size - 6];
        return Replace_Array_Rec(array, size - 1, arr, a);
    }
    if ((size - 1) <= 4)
    {
        array[size - 1] = arr[a - 1];
        return Replace_Array_Rec(array, size - 1, arr, a - 1);
    }
}
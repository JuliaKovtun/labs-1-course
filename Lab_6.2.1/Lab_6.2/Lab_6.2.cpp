// 1 спосіб з використанням циклів

#include <iostream>
#include <time.h>

using namespace std;

void Form(int arr[], int size);
void Print(int arr[], int size);
void Copy_Array(int array[], int size, int arr[], int a);
void Replace_Array(int array[], int size, int arr[], int a);

int main()
{
    const int SIZE = 10;
    int array[SIZE];
    const int a = 5;
    int arr[a];


    srand(time(NULL));

    Form(array, SIZE);
    cout << "Random array:\t";
    Print(array, SIZE);

    Copy_Array(array, SIZE, arr, a);

    Replace_Array(array, SIZE, arr, a);
    cout << endl << "Replaced array:\t";
    Print(array, SIZE);

    return 0;
}

void Form(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void Print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void Copy_Array(int array[], int size, int arr[], int a)
{  
    for(int i = 0, j = 0; i < a; i++, j++)
    {
        arr[i] = array[j];
    }   
}

void Replace_Array(int array[], int size, int arr[], int a)
{
    for (int i = 0, j = 5; i < a; i++, j++)
    {
        array[i] = array[j];
    }

    for (int i = 0, j = 5; i < a; i++, j++)
    {
        array[j] = arr[i];
    }
}


// 1 спосіб з використанням циклів

#include <iostream>
#include <time.h>

using namespace std;

void Form(int arr[], int size);
void Print(int arr[], int size);
int Multiple(int* a, const int size);


int main()
{
    const int SIZE = 10;
    int array[SIZE];


    srand(time(NULL));

    Form(array, SIZE);
    cout << "Random array:\t";
    Print(array, SIZE);
    int result = Multiple(array, SIZE);
    cout << endl << "Result: " << result << endl;


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

int Multiple(int* a, const int size)
{
    int c = 0;
    for (int i = 0; i < size; i++)
        c += a[i] * a[i];
    return c;
}
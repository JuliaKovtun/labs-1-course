// 1 спосіб з використанням циклів

#include <iostream>
#include <time.h>
using namespace std;

void Form(int arr[], int size);
void Print(int arr[], int size);
int Count_num(int arr[], int size);
int Count_sum(int arr[], int size);
void Change_array(int arr[], int size);

int main()
{
    const int SIZE = 20;
    int arr[SIZE];
    int num = 0;

    srand(time(NULL));

    Form(arr, SIZE);
    cout << "Random array:\t";
    Print(arr, SIZE);
    cout << endl  << "Quantity: " << Count_num(arr, SIZE) << endl;
    cout << endl << "Sum: " << Count_sum(arr, SIZE) << endl << endl;
    Change_array(arr, SIZE);
    cout << "Changed array: ";
    Print(arr, SIZE);


    return 0;
}

void Form (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 21 - 14;
    }
}

void Print (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int Count_num(int arr[], int size)
{
    int num = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0 && (i % 4) != 0)
            num++;
    }
    return num;
}

int Count_sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0 && (i % 4) != 0)
            sum += arr[i];
    }
    return sum;
}

void Change_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0 && (i % 4) != 0)
            arr[i] = 0;
    }
}


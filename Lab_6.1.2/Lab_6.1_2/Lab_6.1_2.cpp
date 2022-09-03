// 2 спосіб з викорстанням рекурсії

#include <iostream>
#include <time.h>
using namespace std;

void Form(int* a, const int size, const int Low, const int High, int i);
void Print(int* a, const int size, int i);
int Count_num_rec(int arr[], int size);
int Count_sum_rec(int arr[], int size);
int Change_array_rec(int arr[], int size);

int main()
{
    const int SIZE = 20;
    int arr[SIZE];
    int num = 0;
    int low = -14, high = 7;

    srand(time(NULL));

  
   Form(arr, SIZE, low, high,0);
    cout << "Random array: ";
    Print(arr, SIZE, 0);
   
    num = Count_num_rec(arr, SIZE);
    cout << endl << "Quantity: " << num << endl;
    int sum = Count_sum_rec(arr, SIZE);
    cout << endl << "Sum: " << sum << endl << endl;

    Change_array_rec(arr, SIZE);

    cout << "Changed array: ";
    Print(arr, SIZE, 0);

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

int Count_num_rec(int arr[], int size)
{
    if (size == 0)
        return 0;

    if (arr[size - 1] > 0 && ((size - 1) % 4) != 0)
        return (1 + Count_num_rec(arr, (size - 1)));

    return Count_num_rec(arr, (size - 1));
}

int Count_sum_rec(int arr[], int size)
{
    if (size == 0)
        return 0;

    if (arr[size - 1] > 0 && ((size - 1) % 4) != 0)
        return (arr[size - 1] + Count_sum_rec(arr, (size - 1)));

    return Count_sum_rec(arr, (size - 1));
}

int Change_array_rec(int arr[], int size)
{
    if (size == 0)
        return 0;

    if (arr[size - 1] > 0 && ((size - 1) % 4) != 0)
    {
        arr[size - 1] = 0;
        return Change_array_rec(arr, (size - 1));
    }

    return Change_array_rec(arr, (size - 1));

}



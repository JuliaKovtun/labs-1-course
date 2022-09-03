#include <iostream>
#include <time.h>
using namespace std;

void Form(int arr[], int size);
void Print(int arr[], int size);
int Mult(int arr[], int size);
int Sum(int arr[], int size);
void Sort(int* a, const int size);


int main()
{
    int length;
    cout << "Enter the length of array: "; cin >> length;
    int* array = new int[length];
    srand(time(NULL));

    Form(array, length);
    cout << endl << "Array: ";
    Print(array, length);

    int result = Mult(array, length);
    cout << endl << "Multiple result: " << result << endl;

    cout << "Sum:  " << Sum(array, length) << endl;

   
    Sort(array, length);
    cout << "Sorted array:  ";
    Print(array, length);

    delete[] array;
    array = 0;

    return 0;
}

void Form(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20 - 10;
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

int Mult(int arr[], int size)
{
    int res = 1;
    for (int i = 0; i < size; i++)
    {
        if ((i % 2) == 0)
            res *= arr[i];
    }
    return res;
}

int Sum(int arr[], int size)
{
    int sum = 0;
    int first = 0, last = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            first = i;
            break;
        }
    }

    for (int i = size; i > 0; i--)
    {
        if (arr[i] == 0)
        {
            last = i;
            break;
        }
    }

    for (int i = first; i < last; i++)
    {
        sum += arr[i];
    }
    return sum;

}


void Sort(int* a, const int size) 
{
    for (int i = 1; i < size; i++)
    {
        int k = 0; 
        for (int j = 0; j < size - i; j++) 
            if (a[j] < a[j + 1]) 
            { 
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                k = 1;
            }
        if (k == 0) 
            return; 
    }
}
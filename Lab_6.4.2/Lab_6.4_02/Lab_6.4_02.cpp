#include <iostream>
#include <time.h>
using namespace std;

void Form(int* a, const int size, const int Low, const int High, int i);
void Print(int* a, const int size, int i);
int Mult(int arr[], int size, int i);
int Find_Start(int* a, const int size, const int x, int i);
int Find_Finish(int* a, const int size, const int x, int i);
int Sum(int* a, const int size, int start, int finish, int S);
void Sort(int* a, const int size, int i);


int main()
{
    int length;
    cout << "Enter the length of array: "; cin >> length;
    int* array = new int[length];
    int low = -5, high = 5;
    srand(time(NULL));

    Form(array, length, low, high, 0);
    cout << "Random array: ";
    Print(array, length, 0);

    cout << "Multiple result: " << Mult(array, length, 0) << endl;

    int start = Find_Start(array, length, 0, 0);
    cout << "Start: " << start << endl;
    int finish = Find_Finish(array, length, 0, length);
    cout << "Finish: " << finish << endl;

    int Sum1 = Sum(array, length, start, finish, 0);
    cout << "Sum: " << Sum1 << endl;

    Sort(array, length, 0);
    cout << "Sorted array: ";
    Print(array, length, 0);




    delete[] array;
    array = 0;

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

int Mult(int arr[], int size, int i)
{
    if (i == size)
        return 1;
    else if ((i % 2) == 0)
        return arr[i] * Mult(arr, size, i + 1);
    else
        return Mult(arr, size, i + 1);
   
}

int Find_Start(int* a, const int size, const int x, int i)
{
    if (a[i] == x)
        return i;
    if (i < size - 1)
        return Find_Start(a, size, x, i + 1);
    else
        return -1;
}

int Find_Finish(int* a, const int size, const int x, int i)
{
    if (a[i] == x)
        return i;
    if (i >= 0)
        return Find_Finish(a, size, x, i - 1);
    else
        return -1;
}

int Sum(int* a, const int size, int start, int finish, int S)
{
    S += a[start];
    if (start < finish)
        return Sum(a, size, start + 1,finish, S);
    else
        return S;
}


void Sort(int* a, const int size, int i)
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
    if (i < size - 1) 
        Sort(a, size, i + 1); 
}

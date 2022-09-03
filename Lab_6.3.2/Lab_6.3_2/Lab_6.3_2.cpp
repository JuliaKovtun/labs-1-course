// 2 спосіб з викорстанням рекурсії

#include <iostream>
#include <time.h>

using namespace std;

void Form(int* a, const int size, const int Low, const int High, int i);
void Print(int* a, const int size, int i);
int Multiple(int* a, const int size, int i);


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
    int result = Multiple(array, SIZE, 0);
    cout << endl << "Result: " << result << endl;

   
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

int Multiple(int* a, const int size, int i)
{
    if (i < size)
        return a[i] * a[i] + Multiple(a, size, i + 1);
    else
        return 0;
}
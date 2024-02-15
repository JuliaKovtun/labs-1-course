//Source.cpp

#include <iostream>
#include <time.h>
#define TESTING

using namespace std;

template <class T>
class Predicate
{
public:
    virtual int operator()(T x) = 0;
};

template <class T>
class multiply : public Predicate<T>
{
public:
    virtual int operator() (T x)
    {
        return x * 2;
    }
};

template <class T>
class random : public Predicate<T>
{
public:
    virtual int operator() (T x)
    {
        return x + rand() % (50 - -50 + 1);
    }
};

template <class T>
void generate(T* begin, T* end, Predicate<T>& p)
{
    for (T* current = begin; current < end; current++)
    {
        *current = p(1);
    }
}

template <class T>
void for_each(T* begin, T* end, Predicate<T>& p)
{
    for (T* current = begin; current < end; current++)
    {
        *current = p(*current);
    }
}

template<class T>
void print(T* a, size_t t)
{
    for (int j = 0; j < t; j++)
    {
        cout << a[j] << "  ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int b[10] = { 0 };

    Predicate<int>* m = new multiply<int>();
    for_each(&a[0], &a[10], *m);
    cout << "for_each: " << endl;
    print(a, 10);

    Predicate<int>* r = new random<int>();
    generate(&b[0], &b[10], *r);
    cout << "generate: " << endl;
    print(b, 10);

    return 0;
}

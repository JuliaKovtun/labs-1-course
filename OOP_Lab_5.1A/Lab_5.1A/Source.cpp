//Source.cpp

#include "Bill.h"
#include <iostream>
using namespace std;

Bill makeBill(int f, double s)
{
    Bill b(f, s);
    return b;
}

void _unexpected_to_bad()
{
    cerr << "bad_exception" << endl;
    throw; 
}

int main()
{

   set_unexpected(_unexpected_to_bad);
   set_terminate(_unexpected_to_bad);

   try
   {
       Bill b;
       cin >> b;
   }
   catch(invalid_argument a)
   {
       cerr << "Exception b: " << a.what() << endl;
   }

   cout << "========================================================" << "\nBill b2:\n";

   try
   {
       Bill b2 = makeBill(2, 1);
       cout << "b2:\n" << b2;

       try
       {
           b2--;
           --b2;
       }
       catch (MyDeliveredException* m)
       {
           cerr << m->What() << endl;
       }
       catch (MyDeliveredException& m)
       {
           cerr << m.What() << endl;
       }
       
   }
   catch(invalid_argument a)
   {
       cerr << "Exception b2: " << a.what() << endl;
   }

   cout << "========================================================" << "\nBill bill:\n";

   try
   {
       Bill bill;
       int f;
       double s;
       cout << "Enter first: "; cin >> f;
       cout << "Enter second: "; cin >> s;
       bill.SetFirst(f);
       bill.SetSecond(s);
   }
   /*catch (invalid_argument a)
   {
       cerr << "Exception: " << a.what() << endl;
   }*/
   catch (MyException a)
   {
       cerr << a.What() << endl;
   }



    return 0;
}
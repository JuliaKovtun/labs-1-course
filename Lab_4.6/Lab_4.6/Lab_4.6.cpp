

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 int N = 15, i = 1, k;
 double S = 0, P;

 while(i <= N)
 { 
	 P = 1;
	 k = 1;

	 while (k <= i)
	 {
		 P *= sqrt(k);
		 k++;
	 }
	
	 S += (sin(10 * i) + cos(10 * i)) / P;
	 i++;
 }

 cout << S << endl;

 S = 0;
 i = 1;

 do 
 {
	 P = 1;
	 k = 1;

	 do 
	 {
		 P *= sqrt(k);
		 k++;
	 } while (k <= i);

	 S += (sin(10 * i) + cos(10 * i)) / P;
	 i++;

 } while (i <= N);

 cout << S << endl;


 S = 0;
 i = 1;

 for (i; i <= N; i++)
 {
	 P = 1;
	 k = 1;

	 for (k; k <= i; k++)
	 {
		 P *= sqrt(k);
	
	 }

	 S += (sin(10 * i) + cos(10 * i)) / P;
	

 }

 cout << S << endl;

 S = 0;
 i = N;

 for (i; i >= 1; i--)
 {
	 P = 1;

	 for (k = i; k >= 1; k--)
	 {
		 P *= sqrt(k);

	 }
	 S += (sin(10 * i) + cos(10 * i)) / P;


 }

 cout << S << endl;


}


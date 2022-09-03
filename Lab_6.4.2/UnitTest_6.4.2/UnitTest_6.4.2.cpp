#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.4_02/Lab_6.4_02.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest642
{
	TEST_CLASS(UnitTest642)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[7] = { 2, 1, 4, 6, -2, -1, -9 };
			int arr2[10] = { 1, 0, 4, 2, 6, 0, 6, 2, 0, 4 };
			int arr3[8] = { 2, 1, 4, 6, -2, -1, -9, 0 };

			int sum = Sum(arr2, 10, 1, 8, 0);
			int mult = Mult(arr, 7, 0);
			Sort(arr3, 8, 0);

			Assert::AreEqual(144, mult);
			Assert::AreEqual(20, sum);
			Assert::AreEqual(6, arr3[0]);
			Assert::AreEqual(-1, arr3[5]);
		}
	};
}

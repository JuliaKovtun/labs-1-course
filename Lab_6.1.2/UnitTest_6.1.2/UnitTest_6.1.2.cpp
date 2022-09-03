#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1_2/Lab_6.1_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest612
{
	TEST_CLASS(UnitTest612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int num = 0;
			int arr[10] = { -1, 2, 5, -4, 5, -6, 2, -1, 9, -10 };
			num = Count_num_rec(arr, 10);
			Assert::AreEqual(3, num);

			int sum = 0;
			sum = Count_sum_rec(arr, 10);
			Assert::AreEqual(9, sum);


			Change_array_rec(arr, 10);
			Assert::AreEqual(0, arr[1]);
			Assert::AreEqual(0, arr[2]);
			Assert::AreEqual(0, arr[6]);
		}
	};
}

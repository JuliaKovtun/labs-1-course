#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1/Lab_6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int num = 0;
			int arr[10] = { -1, 2, 5, -4, 5, -6, 2, -1, 9, -10 };
			num = Count_num(arr, 10);
			Assert::AreEqual(3, num);

			int sum = 0;
			sum = Count_sum(arr, 10);
			Assert::AreEqual(9, sum);

	
			Change_array(arr, 10);
			Assert::AreEqual(0, arr[1]);
			Assert::AreEqual(0, arr[2]);
			Assert::AreEqual(0, arr[6]);



		}
	};
}

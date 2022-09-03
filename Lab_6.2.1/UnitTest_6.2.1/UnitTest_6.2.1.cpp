#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2/Lab_6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			int arr[5] = { 1, 2, 3, 4, 5 };
			Replace_Array(array, 10, arr, 5);
			Assert::AreEqual(arr[0], array[5]);
		}
	};
}

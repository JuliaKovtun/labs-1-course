#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.2_01/Lab_7.2_01.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab7201
{
	TEST_CLASS(UnitTestLab7201)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[3][3] = { {1, 2, 6}, {7, 8, 5}, {4, 6, 5} };
			int* a[3] = { arr[0], arr[1], arr[2] };
			int min = SearchMin(a, 3);
			Assert::AreEqual(1, min);

			int max = SearchMax(a, 3);
			Assert::AreEqual(6, max);

		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.2_02/Lab_7.2_02.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab7202
{
	TEST_CLASS(UnitTestLab7202)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[3][3] = { {1, 2, 6}, {7, 8, 5}, {4, 6, 5} };
			int* a[3] = { arr[0], arr[1], arr[2] };
			int k = 2;
			int min = a[0][0];
			SearchMin(a, 3, 0, 3 - k, k, min);
			Assert::AreEqual(1, min);

			int max = a[2][2];
			k = 1;
			SearchMax(a, 3, 1, 2, k, max);
			Assert::AreEqual(6, max);
		}
	};
}

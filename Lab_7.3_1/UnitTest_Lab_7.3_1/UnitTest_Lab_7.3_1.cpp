#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.3_1/Lab_7.3_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab731
{
	TEST_CLASS(UnitTestLab731)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[4][3] = { {1, 2, 6}, {5, 8, 5}, {4, 4, 4}, {0, 7, 4} };
			int* a[4] = { arr[0], arr[1], arr[2], arr[3] };
			int m = 0;

			int zeros = Count_zeros(a, 4, 3);
			Count_SimilarElements(a, 4, 3, m);
			Assert::AreEqual(1, zeros);
			Assert::AreEqual(3, m);

		}
	};
}

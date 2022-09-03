#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.3_2/Lab_7.3_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab732
{
	TEST_CLASS(UnitTestLab732)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[4][3] = { {1, 2, 6}, {5, 8, 5}, {4, 4, 4}, {0, 7, 4} };
			int* a[4] = { arr[0], arr[1], arr[2], arr[3] };
			int m = 0, max = 0;

			int zeros = Count_zeros(a, 4, 3, 0, 0, 0);
			Count_SimilarElements(a, 4, 3, -1, -1, m, max);
			Assert::AreEqual(1, zeros);
			Assert::AreEqual(3, m);
		}
	};
}

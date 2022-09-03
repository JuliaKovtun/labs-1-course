#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.1_01/Lab_7.1_01.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab71Test
{
	TEST_CLASS(Lab71Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[2][3] = { {1, 2, 6}, {7, 8, 5} };
			int* a[3] = { arr[0], arr[1], arr[2] };
			int S = 0, k = 0;

			Sort(a, 2, 3);
			Calc(a, 2, 3, S, k);

			Assert::AreEqual(8, arr[1][1]);
			Assert::AreEqual(8, S);
			Assert::AreEqual(2, k);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3_2/Lab_6.3_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest632
{
	TEST_CLASS(UnitTest632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[5] = { 1, 2, 3, 4, 5 };
			int res = Multiple(arr, 5, 0);
			Assert::AreEqual(55, res);
		}
	};
}

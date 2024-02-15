#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.7/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 1, 2, 3, 4, 5};
			Predicate<int>* m = new multiply<int>();
			for_each(&a[0], &a[5], *m);
			Assert::AreEqual(2, a[0]);
		}
	};
}

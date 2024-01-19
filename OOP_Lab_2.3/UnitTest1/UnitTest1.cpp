#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2.3/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point a(2, 3);
			Point b(a);
			bool test = a == b;
			Assert::AreEqual(true, test);
		}
	};
}

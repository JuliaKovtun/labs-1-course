#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2.2/Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex t1(2, 4);
			Complex t2(2, 4);
			bool test = t1 == t2;
			Assert::AreEqual(true, test);
		}
	};
}

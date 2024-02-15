#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1D/Point.cpp"
#include "../Lab_5.1D/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point test(2, 3);
			test++;
			Assert::AreEqual(4, test.GetY());
		}
	};
}

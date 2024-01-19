#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3_B/Point.cpp"
#include "../Lab_3.3_B/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point testPoint1(2, 3);
			Point testPoint2(2, 4);
			bool test = (testPoint1 > testPoint2);
			Assert::AreEqual(false, test);

		}
	};
}

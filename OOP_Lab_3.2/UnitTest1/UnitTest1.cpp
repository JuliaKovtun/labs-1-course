#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.2/ColorPoint.cpp"
#include "../Lab_3.2/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ColorPoint testPoint(2, 4, 12, 43, 5);
			int r = testPoint.GetR();
			Assert::AreEqual(12, r);
		}
	};
}

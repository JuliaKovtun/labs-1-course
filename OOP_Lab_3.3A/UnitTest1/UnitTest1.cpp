#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3/Point_public.cpp"
#include "../Lab_3.3/Point_private.cpp"
#include "../Lab_3.3/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point_public testPoint(3, 4);
			double r = testPoint.Length();
			Assert::AreEqual(5.0, r);

		}
	};
}

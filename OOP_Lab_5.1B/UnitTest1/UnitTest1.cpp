#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1B/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point p(3, 4);
			double test = p.Length();
			Assert::AreEqual(5.0, test);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_4.2/StraightLine.cpp"
#include "../Lab_4.2/Ellipse.cpp"
#include "../Lab_4.2/Hyperbole.cpp"
#include "../Lab_4.2/Curves.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			StraightLine line(1, 4);
			bool test = line.IsBelong(1, 5);
			Assert::AreEqual(true, test);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_4.4/Linear.cpp"
#include "../Lab_4.4/Exponential.cpp"
#include "../Lab_4.4/Series.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Linear test(2, 1);
			double t = test.CountJElem(3);
			Assert::AreEqual(5.0, t);
		}
	};
}

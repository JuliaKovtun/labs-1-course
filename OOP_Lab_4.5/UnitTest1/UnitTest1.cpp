#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_4.5/Linear.cpp"
#include "../Lab_4.5/Exponential.cpp"
#include "../Lab_4.5/Series.cpp"

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

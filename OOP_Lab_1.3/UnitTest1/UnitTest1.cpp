#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_3/Point.h"
#include "../Lab_1_3/Point.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point b;
			b.SetX(2);
			b.SetY(2);
			bool t = b.IsEqual();
			Assert::AreEqual(true, t);
		}
	};
}

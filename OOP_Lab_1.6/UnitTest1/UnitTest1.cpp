#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.6/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time::Triad a;
			a.Init(12, 54, 3);
			Time t;
			t.Init(a);
			int test = t.GetSecond();

			Assert::AreEqual(3, test);
		}
	};
}

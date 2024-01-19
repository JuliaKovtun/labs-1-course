#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.1/Time.cpp"
#include "../Lab_3.1/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time t(23, 45, 6);
			t.IncreaseHour();
			Assert::AreEqual(0, t.GetHour());
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2.5/Time.cpp"
#include "../Lab_2.5/Triad.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time a(2, 14, 56);
			a.IncreaseHour();
			Assert::AreEqual(3, a.GetHour());

		}
	};
}

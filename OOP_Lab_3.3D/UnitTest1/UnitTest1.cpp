#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3_D/Time_private.cpp"
#include "../Lab_3.3_D/Time_public.cpp"
#include "../Lab_3.3_D/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time_private time(2, 23, 1);
			time.IncreaseHour();
			Assert::AreEqual(3, time.GetHour());
		}
	};
}

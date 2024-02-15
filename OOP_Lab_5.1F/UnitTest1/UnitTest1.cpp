#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1F/Time_public.cpp"
#include "../Lab_5.1F/Triad.cpp"
#include "../Lab_5.1F/Time_private.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time_public test(2, 34, 23);
			test++;
			Assert::AreEqual(3, test.GetHour());
		}
	};
}

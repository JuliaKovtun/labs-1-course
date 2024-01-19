#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2.6/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time::Triad a(0, 0, 0);
			Time t(2, 45, 58);
			int count = Time::Triad::getCounter();
			Assert::AreEqual(2, count);
		}
	};
}

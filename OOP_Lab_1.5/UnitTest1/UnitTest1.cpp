#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.5/Triad.h"
#include "../Lab_1.5/Triad.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad a;
			a.SetHour(5);
			int t = a.GetHour();
			Assert::AreEqual(5, t);

		}
	};
}

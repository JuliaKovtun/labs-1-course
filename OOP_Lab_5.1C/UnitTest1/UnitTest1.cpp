#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1C/Point_public.cpp"
#include "../Lab_5.1C/Point.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point_public a(2, 4);
			a++;
			Assert::AreEqual(5, a.GetY());
		}
	};
}

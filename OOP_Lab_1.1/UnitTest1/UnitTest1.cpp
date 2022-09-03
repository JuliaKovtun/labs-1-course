#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_1/Bill.h"
#include "../Lab_1_1/Bill.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Bill p;
			bool t = true;
			t = p.Init(2, 4.2);
			Assert::AreEqual(t, true);

			double c = 0;
			c = p.Cost();
			Assert::AreEqual(c, 8.4);


		}
	};
}

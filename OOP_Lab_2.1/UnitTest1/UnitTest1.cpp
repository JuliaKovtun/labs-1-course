#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2.1/Bill.h"
#include "../Lab_2.1/Bill.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Bill t(2, 3);
			int cost = t.Cost();
			Assert::AreEqual(2, t.GetFirst());
			Assert::AreEqual(6, cost);

		}
	};
}

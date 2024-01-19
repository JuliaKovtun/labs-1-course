#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2.4/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector a(3);
			Vector b(4);
			bool test = a == b;
			Assert::AreEqual(false, test);
		}
	};
}

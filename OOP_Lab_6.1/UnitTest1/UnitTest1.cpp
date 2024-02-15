#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array t(4);
			for (int i = 0; i < 4; i++)
				t[i] = i;
			int s = t.sum();
			Assert::AreEqual(6, s);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include <algorithm>
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> test = { 4, 2, 99,7 };
			auto max = *max_element(test.begin(), test.end());
			Assert::AreEqual(99, max);
		}
	};
}

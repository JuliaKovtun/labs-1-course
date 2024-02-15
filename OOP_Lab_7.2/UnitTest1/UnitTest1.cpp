#include "pch.h"
#include "CppUnitTest.h"
#include <list>
#include "../Lab_7.2/Source.cpp"
using namespace std;


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			list<int> t = { 2, 1, 4, 8, 1 };
			Assert::AreEqual(true, SimilarEl(t));
		}
	};
}

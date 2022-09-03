#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_9.2/Lab_9.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab92
{
	TEST_CLASS(UnitTestlab92)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			

			Student *p = new Student[1];
			p[0].prizv = "Ivanov";
			p[0].spec = ME;
			p[0].math = 5;
			p[0].ped = 5;
			p[0].physics = 5;
			

			Spec spec1 = INF;

			int found = BinSearch(p, 3, "Ivanov", spec1, 5);

			Assert::AreEqual(-1, found);


		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_9.1/Lab_9.1.cpp"
using namespace std;




using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab91
{
	TEST_CLASS(UnitTestlab91)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			enum Spec { ME, MF, FI, INF, KN };

			struct Student
			{
				string prizv;
				unsigned rikNar;
				int kurs;
				Spec spec;
				int physics;
				int math;

				union
				{
					int prog;
					int cMethod;
					int ped;
				};
			};

			Student* p = new Student[2];
			p[0] = { "Ivanov", 2000, 1, ME, 5, 4, 5 };
			p[1] = { "Petrov", 2001, 1, KN, 4, 4, 3 };

			int k = PhysicsSearch(p, 2);


		}
	};
}

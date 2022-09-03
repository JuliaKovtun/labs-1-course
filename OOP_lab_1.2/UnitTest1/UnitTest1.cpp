#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_2/string_of_characters.h"
#include "../Lab_1_2/string_of_characters.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* str = new char;
			str = { "some text" };
			string_of_characters a;
			bool t = a.Init(str);
			Assert::AreEqual(t, true);
		}
	};
}

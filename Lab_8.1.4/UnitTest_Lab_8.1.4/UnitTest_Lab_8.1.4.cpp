#include "pch.h"

#include "CppUnitTest.h"
#include "../Lab_8.1_4/Lab_8.1_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab814
{
	TEST_CLASS(UnitTestLab814)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "fd,kfj,l,vk,nn";
			char cs[] = "**";
			Change(str);
			Assert::AreEqual('*', str[8]);
			Assert::AreEqual('*', str[9]);

		}
	};
}

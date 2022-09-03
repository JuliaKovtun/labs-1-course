#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1_01_2/Lab_8.1_01_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab812
{
	TEST_CLASS(UnitTestlab812)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101] = "fd,kfj,l,vk,nn";
			char cs[] = "**";
			Insert(str, cs, ',');
			Assert::AreEqual('*', str[8]);
			Assert::AreEqual('*', str[9]);
		
		}
	};
}

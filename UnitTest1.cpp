#include "pch.h"
#include "CppUnitTest.h"
#include"../rjgc1/БъЭЗ.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 5;
			int nums[5] = {1,-2,3,-4,5};
			int sum = 5;
			Assert::AreEqual(sum, Maxarry(n, nums));
		}
		TEST_METHOD(TestMethod2)
		{
			int n = 4;
			int nums[4] = {-1,-2,-3,-4};
			int sum = 0;
			Assert::AreEqual(sum, Maxarry(n, nums));
		}
		TEST_METHOD(TestMethod3)
		{
			int n = 8;
			int nums[8] = { -2, -3, 4, -1, -2, 1, 5, -3 };
			int sum = 7;
			Assert::AreEqual(sum, Maxarry(n, nums));
		}
		TEST_METHOD(TestMethod4)
		{
			int n = 3;
			int nums[3] = { 3, -1, 2 };
			int sum = 4;
			Assert::AreEqual(sum, Maxarry(n, nums));
		}
	};
}

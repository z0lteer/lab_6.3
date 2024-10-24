#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.3/6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int arr1[] = { -3, 5, -7, 8, -1, 0, 6 };
			int result1 = countNegativeElements(arr1, 7);
			Assert::AreEqual(3, result1);
		}
	};
}
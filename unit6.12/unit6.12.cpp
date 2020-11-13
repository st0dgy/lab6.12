#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.12/lab6.12.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit612
{
	TEST_CLASS(unit612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 3;
			int a[n] = { 4, 6, 8 };
			int t;
			t = sum(a, n, 0, 0);
			Assert::AreEqual(t, 18);
		}
	};
}

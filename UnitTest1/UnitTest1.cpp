#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Bashmachok\source\repos\Laba_IPZ_3\Laba_IPZ_3\Laba_IPZ_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1_checkParamN)
		{
			int n = -4;

			try
			{
				checkParamN(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	public:
		TEST_METHOD(TestMethod2_checkParamsAB)
		{
			int a = 7;
			int b = 3;

			try
			{
				checkParamAB(a, b);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}

	public:
		TEST_METHOD(TestMethod3_checkParamH)
		{
			int h = -2;

			try
			{
				checkParamH(h);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}

	public:
		TEST_METHOD(TestMethod4_checkParamH)
		{
			int h = -6.899;

			try
			{
				checkParamH(h);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(false);
			}
		}

	public:
		TEST_METHOD(TestMethod4_calculate_n1a_6b2h1)
		{
			int x = -18;
			int n = 3;

			int expected_x = -18;
			int expected_y = -3060;

			int y = calculate(n, x);

			Assert::AreEqual(expected_x, x);
			Assert::AreEqual(expected_y, y);
		}

	public:
		TEST_METHOD(TestMethod5_calculate_n1a_6b2h1)
		{
			int x = -346.4766;
			int n = 0.01;

			int expected_x = -346.4766;
			int expected_y = -567895.766;


			int y = calculate(n, x);

			Assert::AreEqual(expected_x, x);
			Assert::AreEqual(expected_y, y);
		}

	public:
		TEST_METHOD(TestMethod6_calculate_n1a_6b2h1)
		{
			int x = -346.4766;
			int n = 0.01;

			int expected = 1;

			int y = calculate(n, x);

			Assert::AreEqual(expected, y);
		}

	};
}

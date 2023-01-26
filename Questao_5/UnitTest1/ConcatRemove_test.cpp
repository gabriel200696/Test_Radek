#include "pch.h"
#include "CppUnitTest.h"
#include "ConcatRem.h"
#include "../ConcatRem/ConcatRem.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(proposed_tests)
	{
	public:
		
		TEST_METHOD(Exemple)
		{
			char s[] = "abc";
			char t[] = "def";
			int k = 6;

			Assert::IsTrue(ConcatRemove(s, t, k) == "yes");
		}


		TEST_METHOD(Exemple1)
		{
			char s[] = "bla bla bla bla";
			char t[] = "blablabcde";
			int k = 8;

			Assert::IsTrue(ConcatRemove(s, t, k) == "yes");
		}

		TEST_METHOD(Exemple2)
		{
			char s[] = "tab";
			char t[] = "tab";
			int k = 7;

			Assert::IsTrue(ConcatRemove(s, t, k) == "yes");
		}
	};

	TEST_CLASS(tests)
	{
	public:

		TEST_METHOD(Test1)
		{
			char s[] = "abcdeffffffg";
			char t[] = "aecdeffffffg";
			int k = 22;

			Assert::IsTrue(ConcatRemove(s, t, k) == "yes");
		}


		TEST_METHOD(Test2)
		{
			char s[] = "bla bla bla bla";
			char t[] = "blablabcde";
			int k = 9;

			Assert::IsTrue(ConcatRemove(s, t, k) == "no");
		}

		TEST_METHOD(Test3)
		{
			char s[] = "tab";
			char t[] = "tab";
			int k = 10;

			Assert::IsTrue(ConcatRemove(s, t, k) == "yes");
		}
		TEST_METHOD(Test4)
		{
			char s[] = "taba";
			char t[] = "tab";
			int k = 5;

			Assert::IsTrue(ConcatRemove(s, t, k) == "yes");
		}

		TEST_METHOD(Test5)
		{
			char s[] = "taba";
			char t[] = "tab";
			int k = 6;

			Assert::IsTrue(ConcatRemove(s, t, k) == "no");
		}
	};
}

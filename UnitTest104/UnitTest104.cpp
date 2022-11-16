#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab10.4/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest104
{
	TEST_CLASS(UnitTest104)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = main();
			Assert::AreEqual(t, 0);
		}
	};
}

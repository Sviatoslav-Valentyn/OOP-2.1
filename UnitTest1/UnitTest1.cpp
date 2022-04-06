#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 2.1/Bill.h"
#include "../OOP 2.1/Bill.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Bill x(2, 2.5);
			x.Cost();
			Assert::IsTrue(5);
		}
	};
}

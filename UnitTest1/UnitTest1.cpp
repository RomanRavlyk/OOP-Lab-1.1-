#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab 1.1-/OOP Lab 1.1-.cpp"
#include "../OOP Lab 1.1-/Fraction.cpp"
#include "../OOP Lab 1.1-/Fraction.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int  h = 5;
			Fraction N;
			N.setFirst(5);
			int x = N.getFirst();

			Assert::AreEqual(5, x);
		}
	};
}

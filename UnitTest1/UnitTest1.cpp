
#include "pch.h"
#include "CppUnitTest.h"

#define UNIT_TEST
#include "C:\Users\Sasha\Downloads\student\vs\LR9.2.2\LR9.2.2\LR9.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(LR92Part2Tests)
    {
    public:

        TEST_METHOD(TestIntegers)
        {
            double result = SUM("iii", 1, 2, 3);
            Assert::AreEqual(6.0, result, 0.000001);
        }

        TEST_METHOD(TestDoubles)
        {
            double result = SUM("dd", 2.5, 3.5);
            Assert::AreEqual(6.0, result, 0.000001);
        }

        TEST_METHOD(TestFloats)
        {
            double result = SUM("ff", 1.5f, 2.25f);
            Assert::AreEqual(3.75, result, 0.000001);
        }

        TEST_METHOD(TestMixedTypes)
        {
            double result = SUM("idi", 2, 3.5, 4);
            Assert::AreEqual(9.5, result, 0.000001);
        }

        TEST_METHOD(TestNegativeNumbers)
        {
            double result = SUM("id", -2, -1.5);
            Assert::AreEqual(-3.5, result, 0.000001);
        }

        TEST_METHOD(TestEmptyList)
        {
            double result = SUM("");
            Assert::AreEqual(0.0, result, 0.000001);
        }
    };
}

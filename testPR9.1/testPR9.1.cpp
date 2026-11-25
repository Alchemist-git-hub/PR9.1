#include "pch.h"
#include "CppUnitTest.h"

#include <cmath>

#include "../PR9.1/var.cpp"
#include "../PR9.1/dod.cpp"
#include "../PR9.1/sum.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsSum;

namespace UnitTest91
{
    TEST_CLASS(UnitTest91)
    {
    public:
        TEST_METHOD(TestSumX2)
        {
            x = 2;
            e = 0.0001;

            sum();

            Assert::AreEqual(5, n);
            Assert::AreEqual(log(3.0), s, 0.0002);
        }

        TEST_METHOD(TestSumX3)
        {
            x = 3;
            e = 0.0001;

            sum();

            Assert::AreEqual(3, n);
            Assert::AreEqual(log(2.0), s, 0.0002);
        }
    };
}
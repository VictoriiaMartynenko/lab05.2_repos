#include "pch.h"
#include "CppUnitTest.h"
#include "cmath"
#include "../Pr5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double S(const double x, const double eps, int& n, double& s);
double A(const double x, const int n, double& a);


namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		// S, x = 3 (log((3+1)/(3-1))
		TEST_METHOD(TestS_ln)
		{
			int n;
			double eps = 0.1;
			double s = 0;

			double result = S(3, eps, n, s);
			Assert::AreEqual(log((3 + 1) / (3 - 1)), result, 0.1);
		}
		// А, для наступного члена ряду при х=1
		TEST_METHOD(TestA_ln)
		{
			double a = 1.0 ;
			int n = 1 ;

			double result = A(1.0, n, a);
			double expected = 1 / (pow(1.0, 2 * n + 1) * (2 * n + 1));
				Assert::AreEqual(result, expected, 1e-6);
		}
	};

}

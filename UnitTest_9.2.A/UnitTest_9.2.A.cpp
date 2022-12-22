#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_9.2.A/lab_9.2.A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91A
{
	TEST_CLASS(UnitTest91A)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Student* p = new Student;
			p->prizv = "A";
			p->kurs = 2;
			p->spec = KN;

			int t = BinSearch(p, 1, "A", 2, KN  );

			Assert::AreEqual(t, 0);

		}
	};
}

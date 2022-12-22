#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_9.2.B/lab_9.2.B.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest92B
{
	TEST_CLASS(UnitTest92B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student* p = new Student;
			p->prizv = "B";
			p->kurs = 3;
			p->spec = KN;

			int t = BinSearch(p, 1, "B", 3, KN);

			Assert::AreEqual(t, 0);
		}
	};
}

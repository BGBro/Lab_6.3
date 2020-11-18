#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../6.3/6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			vector<int> i;
			vector<int> a(7, 2);
			i = m_sum(a, 0);
			t = i[0];
			Assert::AreEqual(t, 14);
		}
	};
}

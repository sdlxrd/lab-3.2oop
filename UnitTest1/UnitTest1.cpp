#include "pch.h"
#include "CppUnitTest.h"
#include <C:\Users\Misha\source\repos\3.2 oop\3.2 oop\Man.cpp>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Man f, s;
			f.setAge(17);
			change(f);
			s.setAge(18);
			Assert::AreEqual(s.getAge(), f.getAge());
		}
	};
}

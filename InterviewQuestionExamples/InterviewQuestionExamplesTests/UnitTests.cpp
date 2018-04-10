#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\InterviewQuestionExamples\InterviewQuestionExamples.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace InterviewQuestionExamplesTests
{
	TEST_CLASS(UnitTests)
	{
	public:

		TEST_METHOD(FibonnaciTest)
		{
			std::vector<unsigned long long> smallFibonnaciTestSequence = {
				0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 
				987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 
				121393, 196418, 317811
			};

			for (unsigned long long i = 0; i < smallFibonnaciTestSequence.size(); ++i) {
				Assert::AreEqual(smallFibonnaciTestSequence[i], fibonacci(i));
			}
		}

		TEST_METHOD(PoundTest) {
			std::string testString("##########\n"
								   "##      ##\n"
								   "# #    # #\n"
								   "#  #  #  #\n"
								   "#   ##   #\n"
								   "#   ##   #\n"
								   "#  #  #  #\n"
								   "# #    # #\n"
								   "##      ##\n"
								   "##########\n");

			Assert::AreEqual(testString, poundPattern());
		}

	};
}

#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\InterviewQuestionExamples\InterviewQuestionExamples.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace InterviewQuestionExamplesTests {
	TEST_CLASS(UnitTests) {
	public:

		TEST_METHOD(FibonnaciTest) {
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

		TEST_METHOD(ErrorCorrectionTest) {
			const double accuracy = .99;  // (100*accuracy) required to pass the test
			const int noiseRatio = 50;  // 1 out of noiseRatio bits are flipped
			const int numberOfInputs = 50;  // Sets how many tests to run

			// Input vector should equal output vector with (100*X)% accuracy.
			std::vector<bool> input;

			// Initialize random seed
			srand(time(NULL));

			// Generate N random bits (0 or 1) and store in 'inputs' vector
			for (int i = 0; i < numberOfInputs; ++i)
				input.push_back(rand() % 2);

			// Encode all the inputs
			std::vector<std::vector<bool>> encodedInput;
			for (int i = 0; i < numberOfInputs; ++i)
				encodedInput.push_back(encodeBit(input[i]));

			// Randomly alter the encoded sequences with specified noiseRatio
			for (int i = 0; i < numberOfInputs; ++i) {
				for (unsigned int j = 0; j < encodedInput[i].size(); ++j) {
					if (rand() % noiseRatio == 0)
						encodedInput[i][j] = !encodedInput[i][j];
				}
			}

			// Decode the altered encoded input
			std::vector<bool> output;
			for (int i = 0; i < numberOfInputs; ++i)
				output.push_back(decodeBitSequence(encodedInput[i]));

			// Compare input and output to verify accuracy level has been achieved
			int maxErrors = (1 - accuracy) * input.size();
			int actualErrors = numberOfInputs;
			for (int i = 0; i < numberOfInputs; ++i)
				if (input[i] == output[i])
					--actualErrors;

			// Format the error message
			std::ostringstream message;
			message << "Error too large, " << maxErrors;
			message << " was expected but the actual errors were " << actualErrors << ".\n";
			std::string messageAsString = message.str();
			std::wstring widestring = std::wstring(messageAsString.begin(), messageAsString.end());

			Assert::IsTrue(actualErrors <= maxErrors, widestring.c_str());
		}

		TEST_METHOD(PalindomeTest) {
			std::vector<std::string> validInputs = {
				"mom",
				"race car",
				"!r a^c e  ca *(r*&",
				"",
				"w",
				"^",
				" ",
				"^a^"
			};

			std::vector<std::string> invalidInputs = {
				"moma",
				"race carr",
				"!r a^c e  ca *(r*s&",
				" ",
				"www.com",
				"a^^w"
			};

			for (unsigned int i = 0; i < validInputs.size(); ++i)
				Assert::IsTrue(isPalindrome(validInputs[i]), L"False Positive.");
			for (unsigned int i = 0; i < invalidInputs.size(); ++i)
				Assert::IsFalse(isPalindrome(invalidInputs[i]), L"True Negative.");
		}
	};
}

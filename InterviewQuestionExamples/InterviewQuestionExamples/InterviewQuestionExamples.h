// InterviewQuestionExamples.h - Contains functions that solve various interview questions
#pragma once

#ifdef INTERVIEWQUESTIONEXAMPLES_EXPORTS
#define INTERVIEWQUESTIONEXAMPLES_API __declspec(dllexport)
#else
#define INTERVIEWQUESTIONEXAMPLES_API __declspec(dllimport)
#endif

extern "C++" INTERVIEWQUESTIONEXAMPLES_API
unsigned long long fibonacci(const unsigned long long n);

extern "C++" INTERVIEWQUESTIONEXAMPLES_API
std::string poundPattern();

extern "C++" INTERVIEWQUESTIONEXAMPLES_API
std::vector<bool> encodeBit(bool bit);
extern "C++" INTERVIEWQUESTIONEXAMPLES_API
bool decodeBitSequence(std::vector<bool> encodedBitSequence);

extern "C++" INTERVIEWQUESTIONEXAMPLES_API
bool isPalindrome(std::string word);

extern "C++" INTERVIEWQUESTIONEXAMPLES_API
struct Node {
	Node* next = nullptr;
	int value = 0;
};
extern "C++" INTERVIEWQUESTIONEXAMPLES_API
Node* reverseSecondHalfLinkedList(Node* head);

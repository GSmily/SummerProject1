// InterviewQuestionExamples.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "InterviewQuestionExamples.h"

INTERVIEWQUESTIONEXAMPLES_API 
unsigned long long fibonacci(const unsigned long long n)
{
	if (n <= 1)
		return n;

	return fibonacci(n - 2) + fibonacci(n - 1);
}

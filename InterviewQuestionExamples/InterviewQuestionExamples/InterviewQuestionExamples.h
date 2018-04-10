// InterviewQuestionExamples.h - Contains functions that solve various interview questions
#pragma once

#ifdef INTERVIEWQUESTIONEXAMPLES_EXPORTS
#define INTERVIEWQUESTIONEXAMPLES_API __declspec(dllexport)
#else
#define INTERVIEWQUESTIONEXAMPLES_API __declspec(dllimport)
#endif

extern "C++" INTERVIEWQUESTIONEXAMPLES_API unsigned long long fibonacci(
	const unsigned long long n
);

extern "C++" INTERVIEWQUESTIONEXAMPLES_API std::string poundPattern();
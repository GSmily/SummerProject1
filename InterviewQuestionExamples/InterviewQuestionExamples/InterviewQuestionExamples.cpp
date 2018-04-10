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

/*
Exercise (medium):
Create the following pattern using nested for-loops.
Return the result as a string with a newline at the
end; an easy way to do this is just to replace 'cout's
with a stringstream.

##########
##      ##
# #    # #
#  #  #  #
#   ##   #
#   ##   #
#  #  #  #
# #    # #
##      ##
##########

Hint(s): There are two (or more) viable methods to solve this.
Try to come up with both. The first method involves
printing the first and last line outside of the loop,
or adding an if statement for the first and last line
in the loop. The second method involves an if statement
with multiple (~6) conditions seperated with an OR clause,
but with this method, no seperate cout statements are needed
for the first and last line because you can merge them in
with the large if statement inside the loops.
*/
INTERVIEWQUESTIONEXAMPLES_API
std::string poundPattern() {
	//TODO
	return "";
}
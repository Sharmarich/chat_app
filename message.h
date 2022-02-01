#include <iostream>
#include<string.h>

using namespace std;

class Message {
	// A class can have more than one constructers
	public:
	string sender;
	string message;

	Message() {} //

	Message(string uName, string messageBody) {
		sender = uName;
		message = messageBody;
	}
};
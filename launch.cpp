#include <iostream>
#include<string.h>
#include "user.h"

using namespace std;


int main() {
	/*
	Prob	:	Find who send the message
	soln1 	:	You can prevent user from entering username with toxic characters. 100 points
	soln2	: 	Make a new class named "Message". which has all the attributes
	*/

	

	User karan("Ka:ran");
	User richa("Richa");
	User pappu("P:a:ppu");

	//Message myMsg(karan, "Hello");

	// instructions
	 karan.send_message("Hi",richa); 			// 0th index
	 karan.send_message("How are you?",richa);	// 1st index
	 pappu.send_message("wassup",richa);			// 2nd index
	 karan.send_message("my message",richa);		// 3rd index
	karan.send_message("message number 5",richa);

	//for (int i=0; i<6; ++i) {
		// [m1,m2,...] m1?
		//cout<<i<<" message : "<<richa.messages[i].message<<" "<<"sent by "<< richa.messages[i].sender<<endl;
//}	

	return 0;
}
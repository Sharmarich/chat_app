#include<iostream>
#include<string.h>
#include "message.h"
#include "db_manager.h"
using namespace std;


class User{
    public:
        string username;
		DatabaseManager dBm;
		Message messages[100];
		// messages type of Message
		// [MessageObj1,MessageObj2,...]
		int noOfMessages = 0;

		void remove_special_character(string s) {
				for (int i = 0; i < s.size(); i++) {
					
					// Finding the character whose
					// ASCII value fall under this
					// range
					if (s[i] < 'A' || s[i] > 'Z' &&
						s[i] < 'a' || s[i] > 'z')
					{  
						// erase function to erase
						// the character
						s.erase(i, 1);
						i--;
					}
				}
				username = s; // setting in username
			}

		// class name and constructer name will be same
		// automatically called when an object is created
        User(string n){
            remove_special_character(n);				
		}

        void send_message(string message, User &receiver){
			/*
			Saves the message in receiver's message box's recent empty point
			[null,null,...,null,null] => upto 100 messages[] :: Array
			x = y => set y value in x :: left will be assigned 
			y = x => set x value in y :: left will be assigned 
			
			When it is h4 => receiver.messages[3?] = message

			messages :: noOfMessages
            [] :: 0
            [hi] :: 1
            [hi, how are you] :: 2
            [hi, how are you, wassup] :: 3

			when you called this func for the 1st time
				currentUser = karan (obj)
				receiver = richa (obj)
				message = "hi"

				out:
					receiver.messages[0] = message
			*/
			// TODO 

			//string updatedMessage = username + ":" + message;
			Message updatedMessage(username, message);
			receiver.messages[receiver.noOfMessages] = updatedMessage; // receiver.noOfMessage at this line
			receiver.noOfMessages += 1;
            dBm.save_db(receiver.username, username, message );   
        }
};



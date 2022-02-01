/*
This module contains database manager core
- Can create empty txt database if not exist
- read message inbox
- save message
*/

#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class DatabaseManager{
    public:
        string chatDirectory = "./chats/";

        /* Create an empty inbox
        Create only if database does not exists*/
        string create_ib(string username) {
            
            string dbPath = chatDirectory +username+ ".txt";
            cout<< dbPath;

            // If path does not exists, create empty inbox
            fstream MyFile;
            MyFile.open(dbPath, ios::in);
            if (!MyFile) {
                ofstream MyFile(dbPath);

            }
        
            MyFile.close();

            return dbPath;
    
        }

        /*Saves database*/
        void save_db(string username, string sender, string message){
            string dbPath = create_ib(username);

            // out format == ofstream
            // you need a path
            // append
            // close
            ofstream file_out;

            file_out.open(dbPath, std::ios_base::app);
            file_out << sender<<":"<<message << endl;   
        }
};

int main(){

    DatabaseManager MyObj;

   
    MyObj.save_db("Karan", "Richa","Nikal Lawde");
    MyObj.save_db("Karan", "Richa","hi");

    
	
    return 0;
}
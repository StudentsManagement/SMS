#include "bits/stdc++.h"

#include "Windows.h"

using namespace std;

//    ERROR num 
const int contact_builder = 100;
const int system_error = 101;

namespace ERROR{
	void puterror(int ask) {
		switch(ask) {
			case contact_builder :{
				//...
			}
		}
	}
}

namespace Check {
	namespace First_Use {
		bool main() {   //the bool will return this function solve the problem or not
			fstream first_Usefile;
			first_Usefile.open("lib\\firus.sms");
			bool check;
			first_Usefile << check;

			if(check) {
				return true;
			} else {
				if(solve_first_use()) {
					return true;
				} else {
					ERROR::puterror(contact_builder);
					return false;
				}
			}
		}
		bool solve_first_use() {
			system("cd lib");
			system("type nul>firus.sms");    //creat check file

			fstream first_use_file;
			first_use_file.open("first.sms");

			first_use_file << true;
		}
	}	
}
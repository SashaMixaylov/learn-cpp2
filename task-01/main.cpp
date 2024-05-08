#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
	    string name;
	        cout << "Введите ваше имя: ";
		    getline(cin, name);

		        reverse(name.begin(), name.end());

			    cout << "Ваше имя наоборот: " << name << endl;

			        return 0;
}


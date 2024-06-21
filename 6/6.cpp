#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
//typedef struct {
//    string Name;
//    string Last_Name;
//    int mark;
//}Stud;
//bool Sorts(Stud n1, Stud n2) {
//    return n1.mark > n2.mark;
//}
//int main()
//{
//    ifstream file("file.txt");
//    if (!file) {
//        cout << "File not find";
//        return 1;
//    }
//    Stud students[10];
//    int col=0;
//    string line;
//    /*while (getline(file,line)) {
//
//        col++;
//    }*/
//    for (short i = 0; i < 10; i++) {
//        if (file >> students[i].Name >> students[i].Last_Name >> students[i].mark) {
//            col++;
//        }
//        else break;
//
//    }
//    cout << col<<endl;
//    file.close();
//    sort(students,students+ col,Sorts);
//    /*for (Stud &i : students) {
//        if (col-->0) {
//            cout << i.Name << " " << i.Last_Name << " " << i.mark << endl;
//        }
//    }*/
//    for (short i = 0; i < col; i++) {
//        cout << students[i].Name << " " << students[i].Last_Name << " " << students[i].mark << endl;
//    }
//    return 0;
//}
struct Code {
	char symbol;
	const char* encode;
};
Code Morze[] = {
	{'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
  {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
  {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
  {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
  {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
  {'Z', "--.."}
};
int main() {
	string user;
	cout << "Input message: ";
	getline(cin, user);
	string enc = "",message="";
	for (char i : user) enc+=toupper(i);
	for (char i : enc) {
		for (Code c : Morze) {
			if (c.symbol == i) {
				message += c.encode;
			}
		}
	}
	cout << message;
	string filename;
	cout << "File's name: ";
	cin >> filename;
	ofstream file(filename + ".txt");
	file << user << endl;
	file << message << endl;
	cout << "Programm complete";
	file.close();
	return 0;
}



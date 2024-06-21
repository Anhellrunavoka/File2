#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
typedef struct {
    string Name;
    string Last_Name;
    int mark;
}Stud;
bool Sorts(Stud n1, Stud n2) {
    return n1.mark > n2.mark;
}
int main()
{
    ifstream file("file.txt");
    if (!file) {
        cout << "File not find";
        return 1;
    }
    Stud students[10];
    int col=0;
    string line;
    /*while (getline(file,line)) {

        col++;
    }*/
    for (short i = 0; i < 10; i++) {
        if (file >> students[i].Name >> students[i].Last_Name >> students[i].mark) {
            col++;
        }
        else break;

    }
    cout << col<<endl;
    file.close();
    sort(students,students+ col,Sorts);
    /*for (Stud &i : students) {
        if (col-->0) {
            cout << i.Name << " " << i.Last_Name << " " << i.mark << endl;
        }
    }*/
    for (short i = 0; i < col; i++) {
        cout << students[i].Name << " " << students[i].Last_Name << " " << students[i].mark << endl;
    }
    return 0;
}



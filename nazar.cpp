/*My name: Nazar Altayeb Osman Alkhalifa
 Class: second
 Department: Computer */
#include <iostream>//importing iostream for input and output system
#include<string>
#include"windows.h"


using namespace std;

int main()//the main function
{
    string frist_name, second_name, department;//defining string variables
    char depart, dgree;//defining char variables
    int  student_id, mark;
    string loop;
    do {//This is do will 
        cout << "Enter student name: "; cin >> frist_name;//taking an input and store it in name variable
        cout << "Enter student name: "; cin >> second_name;//taking an input and store it in name variable
        cout << "Enter student Id: "; cin >> student_id;
        cout << "(A) control \n(T) Telecommunication: \n(c)Computer: \nChose Department: "; cin >> depart;//taking an input as char and store it in depart variable
        cout << "Enter student dgree: "; cin >> mark;//taking an input as mark and store it in mark variable
        system("cls");
        if (depart == 'A') //if condition to check if that is student Department
            department = "Control";

        else if (depart == 'T') {
            department = "Telecomunication";
        }
        else if (depart == 'C')
            department = "Computer";
        else
            department = "Department out of list";
        switch (mark) { //here switch used for taking deside and specify the dgree of student
        case 50 ... 59:
            dgree = 'F';//if the case above is tree store "F" in dgree variable
            break; //break in switch use to prevent entering in second case
        case 60 ... 69://this case in range from 60 to 69
            dgree = 'D';//if the case above is tree store "D" in dgree variable
            break;
        case 70 ... 79://this case one in range from to
            dgree = 'C';//if the case above is tree store "C" in dgree variable
            break;
        case 80 ... 89://this case in range from 80 to 89
            dgree = 'B';//if the case above is tree store "B" in dgree variable
            break;
        case 90 ... 100://this case in range from 90 to 100
            dgree = 'A';//if the case above is tree store "A" in dgree variable
            break;
        default:
            string dgree = "invalid Selection";


        };
        cout << "Student name: " << frist_name << " " << second_name << endl;//this line to print out student name
        cout << "Student ID: " << student_id << endl;//this line to print out student ID
        cout << "Student degree: " << dgree << endl;//this line to print out student dgree
        cout << "Department: " << department << endl;//this line to print out student Department

        cout << "press any key to ..Continue ----Enter Exit to ...Quit" << loop << endl;

        system("pause");
    } while (loop != "Exit");
    return 0;
}

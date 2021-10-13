// StructureArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Structure definition//
struct Student {
    int id;
    string name;
    float grade1;
    float grade2;
    float total;
    float average;

};

void Myline(int n);

int main()
{
    Student s[2];

    for (int i = 0; i < 2; i++) {
        //s[i].id = 102; //use the dot operator to access the members of the structure
        //s[i].name = "Shirley";
        //s[i].grade1 = 65;
        //s[i].grade2 = 78;
        cout << "\nEnter the id: ";
        cin >> s[i].id;
        cout << "\nEnter the name: ";
        cin >> s[i].name;
        cout << "\nEnter the grade1: ";
        cin >> s[i].grade1;
        cout << "\nEnter the grade2: ";
        cin >> s[i].grade2;
        s[i].total = s[i].grade1 + s[i].grade2;
        s[i].average = s[i].total / 2;
        //  \n is an escape sequence to break a line, similar to endl
        // \t is to give a tab space
        cout << "\nThe id of the student: " << s[i].id;
        cout << "\nThe name of the student: " << s[i].name;
        cout << "\nGrade1 = " << s[i].grade1;
        cout << "\nGrade2 = " << s[i].grade2;
        cout << "\nThe total = " << s[i].total;
        cout << "\nThe average = " << s[i].average;
        Myline(50);
        //Student s, s2, s3;         //'s' si a variable name which is af Student data type// 
       /* s.id = 101;
        s.name = "Luis";
        s.grade1 = 99;
        s.grade2 = 88;
        s.total = s.grade1 + s.grade2;
        s.average = s.total / 2;
        cout << "\nThe id of the Student :" << s.id;
        cout << "\nThe name of the Student:" << s.name;
        cout << "\nGrade1 =" << s.grade1;
        cout << "\nGrade2 =" << s.grade2;
        cout << "\nThe total =" << s.total;
        cout << "\nThe average=" << s.average;
        cout << endl << endl;*/

        /*s2.id = 102;
        s2.name = "Pedro";
        s2.grade1 = 23;
        s2.grade2 = 88;
        s2.total = s2.grade1 + s2.grade2;
        s2.average = s2.total / 2;
        cout << "\nThe id of the Student :" << s2.id;
        cout << "\nThe name of the Student:" << s2.name;
        cout << "\nGrade1 =" << s2.grade1;
        cout << "\nGrade2 =" << s2.grade2;
        cout << "\nThe total =" << s2.total;
        cout << "\nThe average=" << s2.average;
        cout << endl << endl;
        Myline(50);*/

        /* s3.id = 102;
         s3.name = "Pedro";
         s3.grade1 = 23;
         s3.grade2 = 88;
         s3.total = s3.grade1 + s3.grade2;
         s3.average = s3.total / 2;
         cout << "\nThe id of the Student :" << s3.id;
         cout << "\nThe name of the Student:" << s3.name;
         cout << "\nGrade1 =" << s3.grade1;
         cout << "\nGrade2 =" << s3.grade2;
         cout << "\nThe total =" << s3.total;
         cout << "\nThe average=" << s3.average;*/



    }

    }

    void Myline(int n) {

        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << "*";
        }
    
        cout << endl;
    }
    


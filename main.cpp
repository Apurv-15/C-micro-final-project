#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

struct details
{
    char fname[20];
    char lname[20];
    char gen[10];
    int age;
    int roll_no;
    long phno;
    long adhar;
    char fname2[20];
    char lname2[20];
    char fname3[20];
    char lname3[20];

    int oop; // for marks variable
    int cgr;
    int dms;
    int dsu;
    int dte;
    int obt;
} student1[50];

fstream f1("micro.txt", ios::app);

class student
{
public:
    int n1;

    void getsinfo() /// create account
    {
        int i;
        f1 << "**** Students information ****" << endl;
        f1 << endl;

        cout << "Enter nos of students to enter\n";
        cin >> n1; // for looping the below inputs

        for (int i = 1; i <= n1; i++)
        {
            cout << endl;
            cout << "-------------------------------------";
            cout << "\nEnter student's fullname : ";
            cin >> student1[i].fname >> student1[i].lname;
            f1 << "Student's Name : ";
            f1 << student1[i].fname << " " << student1[i].lname << endl;
            cout << endl;
            cout << "Enter father's fullname : ";
            cin >> student1[i].fname2 >> student1[i].lname2;
            f1 << "Father's Name : ";
            cout << endl;

            cout << "Enter roll no\n";
            cin >> student1[i].roll_no;

            cout << "Enter age : ";
            cin >> student1[i].age;

            f1 << "Student's Age : ";
            f1 << student1[i].age << endl;
            cout << endl;

            cout << "Enter gender : ";
            cin >> student1[i].gen;
            f1 << "Student's gender : ";
            f1 << student1[i].gen << endl;
            cout << endl;

            cout << "Enter adhaar card number : ";
            cin >> student1[i].adhar;
            f1 << "Adhaar card number : ";
            f1 << student1[i].adhar << endl;
            cout << endl;

            cout << "Enter parent's phone number : ";
            cin >> student1[i].phno;
            f1 << "Parent's phone no : ";
            f1 << student1[i].phno << endl;
            cout << endl;
        }
        f1.close();
    }
    void display(int i)
    {
        cout << "Students's name : " << student1[i].fname << " " << student1[i].lname;
        cout << endl;
        cout << "Father's name : " << student1[i].fname2 << " " << student1[i].lname2;
        cout << endl;
        cout << "Student's age : " << student1[i].age;
        cout << endl;
        cout << "Student's gender : " << student1[i].gen;
        cout << endl;

        cout << "Adhaar Card Number : ";
        cout << student1[i].adhar;
        cout << endl;

        cout << "Roll no: " << student1[i].roll_no;
        cout << endl;
        cout << "Parent's phone number : ";
        cout << student1[i].phno;
        cout << endl;
    }
    void putsinfo() // all display
    {
        int i;

        for (int i = 0; i < 50; i++)
        {
            if (student1[i].roll_no != 0) // for taking only given values
            {
                cout << "Students's name : " << student1[i].fname << " " << student1[i].lname;
                cout << endl;
                cout << "Father's name : " << student1[i].fname2 << " " << student1[i].lname2;
                cout << endl;
                // cout << "Mother's name : " << student1[i].fname3 << " " << student1[i].lname3;
                // cout << endl;
                cout << "Student's age : " << student1[i].age;
                cout << endl;
                cout << "Student's gender : " << student1[i].gen;
                cout << endl;
                // cout << "Student's caste : " << caste;
                // cout << endl;
                cout << "Adhaar Card Number : ";

                cout << student1[i].adhar;
                cout << endl;
                cout << "Parent's phone number : ";

                cout << student1[i].phno;
                cout << endl;
                cout << endl;
            }
        }
    }
    void tt()
    {
        cout << "**********[ TIME TABLE ]***********" << endl;
        cout << "*   TIME    * 9-10 * 10-11 * 11-12 * 12.30-1.30 * 1.30-2.30 * 2.45-4.45 *" << endl;
        cout << "*************************" << endl;
        cout << "*  MONDAY   * OOP  *  DSU  *  CGR  *    DTE     *    DMS    *  CGR PRAC *" << endl;
        cout << "*************************" << endl;
        cout << "*  TUESDAY  * DMS  *  CGR  *  OOP  *    DSU     *    DMS    *  DMS PRAC *" << endl;
        cout << "*************************" << endl;
        cout << "* WEDNESDAY * DMS  *  DTE  *  DSU  *    OOP     *    DTE    *  DTE PRAC *" << endl;
        cout << "*************************" << endl;
        cout << "* THURSDAY  * DTE  *  OOP  *  CGR  *    DMS     *    CGR    *  DSU PRAC *" << endl;
        cout << "*************************" << endl;
        cout << "*  FRIDAY   * DSU  *  DMS  *  DTE  *    DSU     *    CGR    *  OOP PRAC *" << endl;
        cout << "*************************" << endl;
    }
};
class teacher
{
public:
    char fname4[40];
    char lname4[40];
    void sub_search()
    {
        int n;
        cout << "1. OOP\n2. CGR\n3. DMS\n4. DSU\n5. DTE\n";
        cout << "Enter your choice : ";
        cin >> n;
        if (n == 1)
        {
            cout << "Subject teacher for oop : Mrs.Suhasini Shukla." << endl;
        }
        else if (n == 2)
        {
            cout << "Subject teacher for cgr : Mrs.Sujata Gawade." << endl;
        }
        else if (n == 3)
        {
            cout << "Subject teacher for dms : Mrs.Smita Dashpute." << endl;
        }
        else if (n == 4)
        {
            cout << "Subject teacher for dsu : Mrs.Poonam Kamble." << endl;
        }
        else if (n == 5)
        {
            cout << "Subject teacher for dte : Mrs.Gautami Pujare." << endl;
        }
        else
        {
            cout << "invalid input try again......" << endl;
        }
    }
};

class result
{
public:
    int n2;
    int m1; /// for roll no searched

    void get_marks(int i)
    {
        cout << "Enter marks for OOP (out of 100) : ";
        cin >> student1[i].oop;

        cout << "Enter marks for DMS (out of 100) : ";
        cin >> student1[i].dms;

        cout << "Enter marks for CGR (out of 100) : ";
        cin >> student1[i].cgr;

        cout << "Enter marks for DTE (out of 100) : ";
        cin >> student1[i].dte;

        cout << "Enter marks for DSU (out of 100) : ";
        cin >> student1[i].dsu;
    }
    void put_marks(int i) // for displaying marks for respected student
    {
        student1[i].obt = student1[i].oop + student1[i].cgr + student1[i].dsu + student1[i].dms + student1[i].dte;
        cout << "OOP = " << student1[i].oop << endl;
        cout << "CGR = " << student1[i].cgr << endl;
        cout << "DTE = " << student1[i].dte << endl;
        cout << "DMS = " << student1[i].dms << endl;
        cout << "DSU = " << student1[i].dsu << endl;
        cout << "Obtained marks = " << student1[i].obt << endl;
    }
};
class classroom : public student, public teacher, public result
{
public:
    int search1()
    {
        cout << "\nEnter roll number to searched\n";
        cin >> m1;

        n2 = sizeof(student1) / sizeof(student1[0]); // 100/2=50

        for (int i = 0; i < n2; i++)
        {
            if (student1[i].roll_no == m1)
            {
                return i; /// return ith position
            }
        }
        return 0;
    }
    void s_start()
    {
        char x;
        int getmarks;
        int ch;
        cout << "\t\t\tStudent's Dashboard\t\t\t" << endl;
        cout << endl;
        cout << "1. Register a student\n2. View Time-Table\n3. Subject-wise Teacher\n4. View Result" << endl;
        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            getsinfo();
            break;
        case 2:
            tt();
            break;
        case 3:
            sub_search();
            break;
        case 4:
            getmarks = search1(); /// enter roll no in search
            put_marks(getmarks);
            break;

        default:
            cout << "Invalid choice!!!!!" << endl;
            break;
        }
    }
    void t_input()
    {
        int h;
        int searchstud;
        cout << "\t\t\tTeacher's Dashboard\t\t\t" << endl;
        cout << endl;
        cout << "1. Enter marks of students\n2. View all students information\n3. Search a specific student\n4. View result of student" << endl;
        cout << "Enter your choice : ";
        cin >> h;
        switch (h)
        {
        case 1:
            searchstud = search1();
            get_marks(searchstud);
            break;
        case 2:
            putsinfo();
            break;

        case 3:
            searchstud = search1();
            display(searchstud);

        default:
            cout << "invalid choice .......!" << endl;
            break;
        }
    }
};
int main()

{
    classroom s; // Creating the object of class
    int choice;
    char c;
    int searchrollno;

    cout << endl;
    while (1)
    {
        cout << "* CLASSROOM MANAGEMENT SYSTEM **" << endl;
        cout << endl;
        cout << "\t\tMAIN MENU\t\t" << endl;
        cout << "1. Enter Student's Dashboard\n2. Enter Teacher's Dashboard\n3. exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            s.s_start();
            // system("clear");

            break;
        case 2:
            s.t_input();

            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }

    return 0;
}
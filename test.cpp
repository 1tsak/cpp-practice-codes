#include <iostream>
#include <string>
using namespace std;
class Student
{

public:
    string name;
    char gender;
    string subject;
    float marks;
};
int main()
{
    Student students;
    string name[2] = {"Anish", "Akshay"};
    char gender[2] = {'M', 'M'};
    string subject[2] = {"Maths", "English"};
    float marks[2] = {85.4, 90};
    for (int i = 0; i <= 2; i++)
    {
        cout << students.name[i] << endl;
        
    for (int i = 0; i <= 2; i++)
    {
        
        cout << students.gender[i] << endl;
        
    }
    for (int i = 0; i <= 2; i++)
    {
        cout << students.name[i] << endl;
        cout << students.gender[i] << endl;
        cout << students.subject[i] << endl;
        cout << students.marks[i] << endl;
    }
    for (int i = 0; i <= 2; i++)
    {
        cout << students.name[i] << endl;
        cout << students.gender[i] << endl;
        cout << students.subject[i] << endl;
        cout << students.marks[i] << endl;
    }

    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    protected:
        string name;
        string surname;
        int grade;
        int studentID;

    public:
        Student(string fname,string lname,int ID,int grade1)
        {
        name = fname;
        surname = lname;
        grade = grade1;
        studentID= ID;
        }


    void showinfo()
    {
        cout << "Name:" << name << " " << surname << endl;
        cout << "Student ID:" << studentID << endl;
        cout << "Grade:" << grade << endl;
    }

    int getgrade()
    {
        return grade;
    }
};

class DoctoralStudent : public Student
{
    private:
        string supervisor;

    public:
        DoctoralStudent(string fname,string lname,int ID,int grade1,string supervisor)
        {
        name = fname;
        surname = lname;
        grade = grade1;
        studentID = ID;
        }

        void showinfo()
        {
            Student::showinfo();
            cout << "Supervisor:" << supervisor << endl;
        }
};

int main()
{
    Student stds("mike", "kaza", 12345, 8);
    DoctoralStudent doc("chris", "anto", 54321, 9, "Teacher blaxou");

    stds.showinfo();
    doc.showinfo();

    int average = (stds.getgrade() + doc.getgrade()) / 2;
    cout << "Average grade: " << average << endl;

    return 0;
}





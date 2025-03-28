#include <iostream>
#include <vector>

using namespace std;

template <typename T> // template for any type 
class Student  // class definition
{
public:
    vector<T> id; // vector to store student id
    vector<T> name; // vector to store student name
 
public: 
    Student() 
    {
        cout << "Student initialized successfully!" << endl;
    }

    ~Student() 
    {
        cout << "Student destructor initialized." << endl;
    }
};

template <typename T> 
class StudentManagementSystem : public Student<T> 
{
public:
    // ADD STUDENT

    void addStudent() // function to add student
    {
        int num_students;
        cout << "Enter Number of Students: ";
        cin >> num_students;

        for (int i = 0; i < num_students; i++) 
        {
            T s_id;
            T s_name;
            cout << "Enter Student ID: ";
            cin >> s_id;
            cout << "Enter Student Name: ";
            cin.ignore();
            getline(cin, s_name);

            this->id.push_back(s_id);
            this->name.push_back(s_name);
        }
    }

    // DISPLAY STUDENTS
    void displayAllStudents() 
    {
        if (this->id.empty()) // check if the vector is empty
        {
            cout << "No students available." << endl;
            return;
        }

        cout << endl
             << "Student Information:" << endl;
        for (int i = 0; i < this->id.size(); i++)
        {
            cout << "ID: " << this->id[i] << endl; 
            cout << "Name: " << this->name[i] << endl;
        }
    }

    // REMOVE STUDENT

    void removeStudentById() 
    {
        T s_id;
        cout << "Enter Student ID to Remove: ";
        cin >> s_id;

        for (int i = 0; i < this->id.size(); i++)
        {
            if (s_id == this->id[i])
            {
                this->id.erase(this->id.begin() + i);
                this->name.erase(this->name.begin() + i); // begin () returns an iterator pointing to the first element of the vector 

                cout << "Student with ID " << s_id << " removed successfully.\n";
                return;
            }
        }
        cout << "Invalid Student ID! No student found." << endl;
    }

    // SEARCH STUDENT
    void searchStudentById()
    {
        T s_id;
        cout << "Enter Student ID to Search: ";
        cin >> s_id;

        for (int i = 0; i < this->id.size(); i++) 
        {
            if (s_id == this->id[i])
            {
                cout << endl
                     << "Student Found:" << endl;
                cout << "ID: " << this->id[i] << endl;
                cout << "Name: " << this->name[i] << endl;
                return; // Exit function after finding the student
            }
        }
        cout << "Student ID not found!!!" << endl;
    }
};

int main()
{
    StudentManagementSystem<string> std_manage; 

    int choice;

    do
    {
        cout << endl
             << "Student Management System";
        cout << endl
             << "**************************";
        cout << endl
             << "Press 1 for Add Student Data";
        cout << endl
             << "Press 2 for Display Students Data ";
        cout << endl
             << "Press 3 for Remove Student Data";
        cout << endl
             << "Press 4 for Search Student Data";
        cout << endl
             << "Press 5 for Exit";
        cout << endl
             << "Enter your choice:-) ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            std_manage.addStudent();
            break;
        case 2:
            std_manage.displayAllStudents();
            break;
        case 3:
            std_manage.removeStudentById();
            break;
        case 4:
            std_manage.searchStudentById();
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid input!!! Please try again:(" << endl;
        }
    } while (choice != 5);

    return 0;
}
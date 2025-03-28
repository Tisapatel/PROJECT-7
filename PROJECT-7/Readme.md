

 ✅ Overview :-
The Student Management System is a console-based C++ application that uses OOP concepts like classes, objects, and inheritance, along with templates to manage student data efficiently. It allows users to add, display, remove, and search student records stored dynamically using vectors. The StudentManagement class inherits from the Student class and provides methods to manipulate the data. A menu-driven interface is implemented using a do-while loop and switch statements to perform operations based on user input. The system ensures error handling for invalid inputs and empty records, making it an efficient and flexible solution for managing student information. 

 📚 Student Management System Documentation :-

    📄 Introduction
    The Student Management System is a console-based C++ application that allows users to perform the following operations:    

    -  Add new student data.
    -  Display all student records.
    -  Remove a student record by ID.
    -  Search for a student by ID.
    -  Exit the application.
 

    This project is implemented using Object-Oriented Programming (OOP) concepts such as:

     *  Class and Object :

       -  Inheritance
       -  InheritanceTemplates
       -  Constructor and Destructor


    🧩 Project Structure

    The project is structured into the following files:

    1.   Class Student :
       -  Stores student details (id and name) in vectors.
       -  Contains a constructor and destructor.
      
    2.   Class StudentManagement :
       -  Inherits from Student using template-based inheritance.
       -  Provides methods for adding, displaying, removing, and searching student data.

    3.   Main Function
       -  Presents a menu to the user for interacting with the system.
       -  Executes the desired operation based on user choice.


 📚 Code Breakdown 

   1️⃣ Header Files and Namespace

       *  #include <iostream> - For input-output operations.
       *  #include <vector> - To store student data dynamically.
       *  using namespace std; - Avoids the need to use std:: prefix.

   2️⃣ Class Student (Base Class)

       *  Template - The Student class uses a template (T), making it flexible
          for different data types.
       *  Constructor - Displays a success message when a Student object is created.
       *  Destructor - Displays a message when a Student object is destroyed.
      
   3️⃣ Class StudentManagement (Derived Class)  

       *   Inherits the Student class using templates.
       *   Contains all methods for student management.

   4️⃣ addStudent() - Add Student Details

       *    Takes input for the number of students.
       *    Asks for Student ID and Student Name for each student.
       *    Adds the student data to the id and name vectors.

   5️⃣ displayAllStudents() - Display All Students

       *    Checks if the id vector is empty.
       *    If data is available, it displays all student information.
    
   6️⃣ removeStudentById() - Remove Student by ID

       *    Asks for Student ID to remove.
       *    If a match is found, it removes the student from both vectors.
       *    Displays a success message or an error message if the ID is not found.

   7️⃣ searchStudentById() - Search Student by ID    

       *    Asks for Student ID to search.
       *    If found, displays the student’s information.
       *    Otherwise, shows a Student ID not found message. 

   8️⃣ Main Function


   📊 Main Menu Options

       1 - Add Student Data
       
       2 - Display All Students
       
       3 - Remove Student by ID
       
       4 - Search Student by ID
       
       5 - Exit the Program
    

   🎯 Features and Functionality

    1.   Add Student Data

        -  Add multiple students by entering ID and Name.
        -  Stores the data in vectors.

    2.   Display Student Data

        -  Shows all stored student records.
        -  Displays No students available if no data is present.

    3.  Remove Student by ID

        -  Removes the student with the matching ID.
        -  Displays success or error messages.

    4.  Search Student by ID

        -  Finds and displays the student record.
        -  Shows Student ID not found if the record is missing.

    5.  Exit the Program

        -  Terminates the program.

   🛠️ Error Handling

        -   Invalid Input - Displays an error message for invalid menu choices.
        -   Empty Student List - Handles operations gracefully when the list
            is empty.    

   📌 Conclusion

    This Student Management System demonstrates the effective use of:

        -   Templates for flexible data handling.
        -   Class Inheritance to extend functionality.
        -   Vector Operations for dynamic data storage.
        -   Menu-driven Approach for seamless interaction.        
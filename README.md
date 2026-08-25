# 🎓 Student Management System (C++)

## 📖 Overview
This project is a **menu-driven Student Management System** built using C++.  
It allows users to manage student records with operations such as **add, display, search, update, and delete**.  
Data persistence is achieved through file handling, ensuring that student information is stored in a text file (`document.txt`) and remains available across sessions.

---

## ✨ Features
- **Add Student** → Enter student details and save them to a file.  
- **Display Students** → Show all student records stored in the file.  
- **Search Student** → Find a student by USN.  
- **Update Student** → Modify existing student details by USN.  
- **Delete Student** → Remove a student record by USN.  
- **Interactive Menu** → Console-based menu for easy navigation.  

---

## 🛠️ Concepts Used
This project demonstrates several important C++ programming concepts:

- **Object-Oriented Programming (OOP)**
  - Encapsulation of student data in the `Student` class.
  - Constructors for safe initialization.
  - Member functions for input and file saving.

- **File Handling**
  - Use of `fstream`, `ifstream`, and `ofstream` for reading/writing files.
  - Temporary file logic for update and delete operations.
  - Persistent storage in `document.txt`.

- **Control Structures**
  - `switch-case` for menu-driven program flow.
  - Loops for continuous execution until exit.

- **Strings & Input Handling**
  - `getline()` for multi-word input.
  - `cin.ignore()` to handle input buffer issues.

- **Basic Data Structures**
  - Use of `vector<Student>` (in earlier versions) for storing objects in memory.

# 🔐 C++ Console Login and Registration System

This is a basic C++ console application that simulates a **login, registration, and password recovery system** using a local file (`records.txt`) for storing user credentials.

---

## 🎯 Features

- ✅ **Login** using a username and password
- 📝 **Register** a new user account
- 🔑 **Forgot Password** recovery by username
- 📄 **Data stored** in a text file (`records.txt`)
- 🔁 Menu-based navigation with looped execution

---

## 🧠 Concepts Demonstrated

- File I/O using `<fstream>` (`ifstream`, `ofstream`)
- String handling and user input
- `switch-case` based menu flow
- Recursive menu calls (`main()` called internally)
- Simple authentication mechanism using `username password` pairs

---

## 🛠️ How to Build & Run

```bash
g++ -o loginapp LoginSystem.cpp
./loginapp

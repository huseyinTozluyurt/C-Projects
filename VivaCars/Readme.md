# 🚗 VivaCars Console Shopping App

This is a C++ console application simulating a **car shopping experience**. Users can select vehicles based on a given budget, view their shopping cart, and handle over-budget situations with replacement logic.

---

## 🎯 Features

- Collects user info: name, gender, budget
- Allows choosing from four car brands:
  - Toyoto: $3000
  - BMW: $5000
  - Wolwo: $4000
  - Tesla: $10000
- Dynamic product selection and cart display
- Budget check and **replacement option** for over-limit items
- Shows final cart and remaining money

---

## 🧠 Concepts Demonstrated

- C++ classes and structs
- Dynamic memory allocation (`new[]`, `delete[]`)
- Conditionals and loops for flow control
- Input validation and re-selection logic
- Encapsulation of pricing in a `ProductList` class

---

## 🛠️ How to Build & Run

```bash
g++ -o vivacars VivaCars.cpp
./vivacars

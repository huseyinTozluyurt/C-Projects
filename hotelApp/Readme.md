# 🏨 Hotel Management & Food Ordering Console App

This C++ console application simulates a simple **hotel and food service management system**, allowing the operator to manage room bookings and food orders, view remaining stock, and calculate daily sales revenue.

---

## 🎯 Features

- Set initial stock quantities for:
  - Rooms
  - Pasta
  - Burgers
  - Noodles
  - Shakes
  - Chicken-rolls
- Take orders from customers
- Check stock availability
- Display remaining quantities
- Show total items sold and revenue collected
- Exit option with full day-end report

---

## 📦 Menu Options

- 1-) Rooms
- 2-) Pasta
- 3-) Burger
- 4-) Noodles
- 5-) Shake
- 6-) Chicken-roll
- 7-) Sales report
- 8-) Exit

---

## 🧠 Concepts Demonstrated

- Procedural flow with `switch` statements
- Inventory management using counters
- Basic billing logic
- Label/goto usage (though avoidable)
- Console interaction via `cin` / `cout`

---

## 🛠️ Build and Run

```bash
g++ -o hotelapp HotelManagement.cpp
./hotelapp

# 📚 Book Management System in C

🇧🇷 Portuguese version: [README-PT.md](./README-PT.md)

## 📌 About the Project

This project is a simple **book management system** developed in C.
It was created to practice core programming concepts such as structured programming, memory management, and data organization.

The application works as an in-memory library, allowing users to **add, remove, and list books** through an interactive terminal menu.

---

## ⚙️ Features

* 📖 Add books with:

  * Title
  * Author
  * Publisher
  * Edition
* ❌ Remove books by index
* 📋 List all books
* 🔤 Automatic alphabetical sorting by title
* 📊 Maximum capacity control
* 🧠 Use of `struct` for data modeling

---

## 🧱 Code Structure

This project uses:

* `struct Livro` to represent books
* Array of structs for storage
* `switch-case` for menu control
* Helper functions for:

  * Input buffer cleaning
  * Sorting using `strcmp` (Bubble Sort)
* String handling with `fgets` and `strcspn`

---

## 🛠️ Technologies

* C Programming Language
* Standard Libraries:

  * `stdio.h`
  * `stdlib.h`
  * `string.h`

---

## ▶️ How to Compile and Run

```bash
gcc main.c -o biblioteca
./biblioteca
```

---

## 🎯 Learning Goals

This project focuses on:

* Programming logic
* Basic data structures
* String manipulation in C
* Memory organization
* Clean code practices

---

## 🚀 Future Improvements

### 🔍 Search System

* Search by title, author, or publisher
* Partial search support

### ⚡ Performance Optimization

* Replace Bubble Sort with Quick Sort or Merge Sort
* Implement binary search

### 💾 Data Persistence

* Save data to `.txt` or `.bin` files
* Load data on startup

### 🧩 Code Modularization

* Split into `.c` and `.h` files

### 🧠 Advanced Data Structures

* Linked lists
* Binary search trees
* Hash tables for fast lookup

---

## 📚 Final Notes

This project represents an important step in learning C and serves as a foundation for more advanced data structures and algorithms.

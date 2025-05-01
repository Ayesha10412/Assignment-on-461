# Array Memory Allocation: C++ vs JavaScript

This document explains different types of array memory allocation strategies in **C++** and **JavaScript** with examples and key differences. The four categories covered are:

- Fixed Stack Dynamic  
- Stack Dynamic  
- Fixed Heap Dynamic  
- Heap Dynamic

---

## 1. Fixed Stack Dynamic

### C++
- Example: `int arr[5];`
- The array is declared with a fixed size of 5.
- Memory is allocated **on the stack** at compile time.
- This is a **static array**:
  - Size cannot be changed after declaration.
  - Fast and memory-efficient.
  - Automatically freed when the function ends.
- Suitable for small, predictable-size arrays.

### JavaScript
- Example: `const arr = [1, 2, 3, 4, 5];`
- Arrays are always allocated **on the heap** in JavaScript.
- `const` makes the reference immutable, but the array contents can change.
- JavaScript arrays are **not truly fixed-size**:
  - You can `push`, `pop`, or modify elements.
- Memory is managed automatically by JavaScript.

---

## 2. Stack Dynamic

### C++
- Example: `int arr[n];` (Variable Length Array)
- The array size is determined **at runtime** using the variable `n`.
- Memory is allocated **on the stack**.
- Limitations:
  - VLAs are **not part of standard C++** and are unsupported in some compilers (e.g., MSVC).
  - Stack memory is automatically freed, but limited in size.
  - Large VLAs may cause stack overflow.

### JavaScript
- Example: `let arr = new Array(n);`
- Memory is allocated **on the heap**.
- Size `n` is determined at runtime.
- JavaScript arrays are always dynamic and not limited by stack size.
- Automatic garbage collection handles memory management.

---

## 3. Fixed Heap Dynamic

### C++
- Example: `int* arr = new int[5];`
- Array is dynamically allocated **on the heap** using `new`.
- The size is fixed at the time of allocation.
- Manual memory management is required:
  - Must use `delete[] arr` to avoid memory leaks.
- Heap allows allocation of larger arrays than stack.

### JavaScript
- Example: `let arr = new Array(5);`
- Array is heap-allocated.
- Though initialized with size 5, the array can still grow or shrink.
- JavaScript handles memory via garbage collection.
- Arrays are always heap-allocated and flexible in size.

---

## 4. Heap Dynamic

### C++
- Example: `std::vector<int> arr;`
- Vector is a **dynamic array** with heap allocation.
- Elements can be added using `push_back()`.
- Size is determined at runtime and can grow/shrink as needed.
- Memory management is handled internally by the `vector` class.

### JavaScript
- Example: `let arr = [];`
- Dynamically allocated **on the heap**.
- Elements added using `arr.push(value)`.
- Arrays can grow/shrink without restriction.
- Memory is automatically managed by garbage collection.

---

## Summary

| Type               | C++                             | JavaScript                        |
|--------------------|----------------------------------|-----------------------------------|
| Fixed Stack Dynamic | `int arr[5];`                   | `const arr = [1, 2, 3, 4, 5];`     |
| Stack Dynamic       | `int arr[n];` (VLA)             | `let arr = new Array(n);`         |
| Fixed Heap Dynamic  | `new int[5];`                   | `new Array(5);`                   |
| Heap Dynamic        | `std::vector<int>`              | `let arr = [];`                   |

---

## Notes
- C++ gives low-level control but requires manual memory management for heap allocations.
- JavaScript abstracts memory allocation and management, offering greater flexibility but less control.
- Understanding these distinctions is critical when optimizing for performance, memory usage, or compatibility.


 Topic: Fixed Stack Dynamic
 Explanation:
 C++:
The array arr[5] is declared with a fixed size of 5.

The memory is allocated on the stack at compile time.

It's a static array, meaning:

The size can't be changed after declaration.

It is fast and memory-efficient.

Stack memory is automatically managed (freed when function ends).

Ideal for small, predictable-size arrays.

 JavaScript:
const arr = [1, 2, 3, 4, 5]; creates an array with 5 elements.

In JavaScript, all arrays are dynamically allocated on the heap.

Although const makes the reference to the array immutable, the array's contents can still change.

Arrays in JS are not truly fixed-size—you can still push, pop, or reassign values.

Topic: Stack Dynamic 
Explanation:
 C++:
The array int arr[n] is a Variable Length Array (VLA).

The size of the array is determined at runtime using the variable n.

The memory is allocated on the stack, but since the size is determined during runtime, it must be known at the moment of declaration.

Limitations:

VLAs are not standardized in C++ and may not work on all compilers (e.g., MSVC does not support them).

Memory allocated on the stack is automatically freed when the function exits.

Stack memory is limited in size, so very large arrays could cause a stack overflow.

 JavaScript:
In JavaScript, the array arr is dynamically allocated on the heap.

The size n can be determined at runtime, and the array is initialized with new Array(n).

JavaScript arrays are always dynamically sized (i.e., they can grow or shrink as needed).

The memory for the array is managed automatically by JavaScript's garbage collection.

JavaScript arrays are not limited by stack size like C++.

 Topic: Fixed Heap Dynamic
  Explanation:
 C++:
The array int* arr = new int[5]; is dynamically allocated on the heap using the new keyword.

The size of the array is fixed at the time of allocation (5 elements).

Memory is managed manually in C++:

Manual deallocation is required using delete[] arr to avoid memory leaks.

The array can store data dynamically, but its size is fixed once allocated.

Heap memory allows larger arrays than stack memory, but memory management is the programmer's responsibility.

 JavaScript:
The array let arr = new Array(5); is heap-allocated (like C++'s new keyword).

The size of the array is fixed at 5, but JavaScript arrays can dynamically grow or shrink (though in this example, we keep the size fixed).

JavaScript handles memory management automatically through garbage collection. The programmer doesn't need to manually free memory.

Arrays in JavaScript are always heap-allocated and can be resized dynamically.
Topic: Heap Dynamic
 Explanation:
🔹 C++:
The array is managed using std::vector<int> arr; which is a dynamic array in C++.

Memory is allocated on the heap for the vector, and elements can be added dynamically using push_back().

The vector can grow and shrink as needed, and the size is determined at runtime.

Automatic memory management is done by the vector class in C++, but the programmer does not need to manually allocate or deallocate memory for the vector (apart from when it is destructed).

The vector uses dynamic memory to handle data as the program runs, allowing flexibility.

🔸 JavaScript:
The array let arr = []; is dynamically allocated on the heap.

JavaScript arrays are always dynamic and can grow or shrink at any time.

Elements are added dynamically using arr.push(i + 1).

Automatic garbage collection in JavaScript means you don't need to worry about manually deallocating memory.

Just like in C++, memory is managed dynamically, but JavaScript handles the details in the background.

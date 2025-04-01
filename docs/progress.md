# Progress and Learning Log

This document serves as a daily record of my progress, thoughts, and learning journey as I work on building a data structures library in C. My primary goal is to practice implementing data structures while simultaneously improving my skills in C programming, data structures, and algorithms.

---

## March 21st, 2025 (Friday)

### Activities:
- Started watching *Learn C Programming and OOP with Dr. Chuck* [feat. "The C Programming Language" by Kernighan and Ritchie]. Covered the first two chapters:
  - **K&R 0**: Historical Context
  - **From Python to C**

### Key Takeaways:
- Gained an understanding of the historical context of C and how it compares to other programming languages like Python.

---

## March 22nd, 2025 (Saturday)

### Activities:
- Watched *K&R 1: A Tutorial Introduction*
- Began learning basic syntax and the structure of C programs.

---

## March 23rd, 2025 (Sunday)

### Activities:
- Watched *K&R 2: Types, Operators, and Expressions*
- Learned about data types, operators (precedence), and expressions used in C.

---

## March 24th, 2025 (Monday)

### Activities:
- Watched *K&R 3: Control Flow*
- Explored conditional statements, loops, and basic control flow structures in C.

---

## March 25th, 2025 (Tuesday)

### Activities:
- Watched *K&R 4: Functions and Program Structure*
- Started to grasp how to organize code into functions and how C handles function calls.

---

## March 26th, 2025 (Wednesday)

### Activities:
- Watched half of *K&R 5: Pointers and Arrays*.
- Began brainstorming how to get practice with C basics.

---

## March 27th, 2025 (Thursday)

### Activities:
- Finished *K&R 5: Pointers and Arrays*
- Finalized project: Decided to implement a C data structures library, working through Striver's A2Z DSA course, and documenting the entire process.

---

## March 28th, 2025 (Friday)

### Activities:
- Finished *K&R 6: Structures*
- The next part of Dr. Chuck's lecture requires better C and DSA knowledge, so I will continue with it once I have completed this project.

---

## March 29th, 2025 (Saturday)

### Activities:
- Set up the project repository on GitHub.
- Created the basic folder structure.
- Wrote the initial `README.md` to explain the project goal and structure.
- Created the initial `progress.md` file to document progress and next steps.
- Reviewed *Time and Space Complexity* - Striver's A2Z DSA Course.

### Key Takeaways from Time and Space Complexity Lecture:
- We use **Big O notation** to measure code performance, as execution time varies across machines, but complexity is consistent as a function of input size.
  - **Rule 1**: Focus on the worst-case scenario because the goal is to handle the largest expected workload.
  - **Rule 2**: Consider only the highest-order term in the time/space function because lower-order terms become insignificant with larger inputs. This concept is similar to limits in calculus.

- **Important Point about Space Complexity**:
  - Avoid manipulating or tampering with input data directly, as it may not be permissible or safe. For example, if performing operations on a set of data, it would be unsafe to use something like `b = a + b`, even though it saves space, as it alters the original data.

### Relevance to the Project:
- Understanding time and space complexity is essential for optimizing the C data structures library.

---

## March 30th, 2025 (Sunday)

## Activities:
- Today, I worked on **Step 1 (Learn the Basics)**, **Lesson 2 (Build-up Logical Thinking)** of Striver's A2Z DSA Course by practicing pattern printing in C. The goal was to strengthen my understanding of loops and nested loops, which are fundamental for implementing more complex algorithms and data structures later. (See practice/patterns.c)

---

## March 31st, 2025 (Monday)

## Activities:
- Today, I completed **Step 1 (Learn the Basics)**, **Lesson 3 (Build-up Logical Thinking)** of Striver's A2Z DSA Course by watching the lecture about the C++ STL. Since I'll be implementing my own C STL or similar structures, understanding the C++ STL concepts will help guide my implementation and improve my data structures knowledge overall. Additionally, I continued to practice patterns.

Key Takeaways from C++ STL Lecture:

Covered various containers and their time complexities: vectors, lists, deques, stacks, queues, priority queues, sets, multisets, unordered sets, maps, multimaps, unordered maps.

Learned about iterators, their purpose, and how they differ from pointers in terms of flexibility and traversal capabilities.

Explored algorithms provided by the STL, including sorting, max and min element finding, next permutation, and more.

Reinforced the importance of leveraging these existing data structures to save time and effort when applicable, while also gaining insight into how they are implemented.

Relevance to the Project:

Understanding the C++ STL will help me think critically about how to build efficient data structures from scratch in C, particularly in terms of time complexity and functionality.

---
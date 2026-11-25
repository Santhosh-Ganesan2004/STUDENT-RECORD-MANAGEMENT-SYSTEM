# Student Record Management System

A menu-driven Student Record Management System developed in C using a **Singly Linked List**. The project supports adding, deleting, modifying, displaying, sorting, saving, and loading student records.

## Features

- Add new student records.
- Delete a student by roll number.
- Delete a student by name.
- Delete all student records.
- Modify existing student details.
- Display all student records.
- Sort records by roll number using Bubble Sort.
- Sort records alphabetically by name using Bubble Sort.
- Reverse the linked list.
- Save student records to a file.
- Load previously saved records.

## Project Structure

```text
student/
├── student.h
├── main.c
├── add.c
├── del.c
├── mod.c
├── save.c
├── show.c
├── sort.c
└── Makefile
```

## Student Structure

Each student record contains the following fields:

```c
typedef struct student
{
    int rno;
    char n[20];
    float p;
    struct student *next;
} Stu;
```

| Field | Description |
|---|---|
| `rno` | Student roll number |
| `n` | Student name |
| `p` | Student percentage |
| `next` | Pointer to the next student node |

## Technologies Used

- Language: C
- Compiler: GCC
- Data Structure: Singly Linked List
- Build Tool: Make

## Compilation

Compile the project using:

```bash
make
```

This generates the executable:

```text
exe
```

## Execution

Run the program:

```bash
./exe
```

## Menu Operations

| Option | Operation |
|---|---|
| A/a | Add a new student |
| D/d | Delete a student |
| S/s | Display all students |
| M/m | Modify student details |
| V/v | Save student records |
| E/e | Exit |
| T/t | Sort student records |
| L/l | Delete all records |
| R/r | Reverse the linked list |

## Sorting

The project implements Bubble Sort using linked-list node swapping.

- Sort by roll number.
- Sort alphabetically by student name.

Instead of swapping student data, the implementation rearranges node links.

## Concepts Practiced

- Structures and pointers
- Dynamic memory allocation (`malloc`, `free`)
- Singly linked lists
- Pointer manipulation
- Functions and modular programming
- File handling
- Bubble Sort
- Makefile and separate compilation

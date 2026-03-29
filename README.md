# Pointer & Reference Learning Activity

## Overview

This is an archived learning Activity designed for Programming 2 (COP3503) students to practice working with pointers through debugging and visualization exercises. The tool generates linked node structures that students must analyze using a debugger.

## What This Activity Does

The program creates a graph-like (like a maze) structure of interconnected Nodes. Each Node contains pointers to other Nodes (left, right, up, down). The Gen class generates different structures based on numeric input, creating various pointer connection patterns for students to trace and debug.

## Assignments

### Test 1: Basic Mapping
- Use the debugger to map out all Nodes on paper
- Identify which 2 nodes create an infinite loop
- Set breakpoint on line 21 to begin

### Test 2: Flag Finding
- Locate the Node where the flag is set to true
- Trace through the pointer connections

### Test 3: Complete Mapping
- Create a table documenting every Node and its connections
- List all left, right, up, and down pointers for each Node

### Test 4: Loop Detection
- Determine if a loop exists in the structure
- If present, identify which Nodes are involved in the loop

## Understanding References vs Pointers

### Pointers
- Store memory addresses of variables
- Can be null or reassigned
- Use `*` to dereference and access the value
- Example: `Node* ptr = &someNode;`

### References
- Alias for an existing variable
- Must be initialized when declared
- Cannot be null or reassigned
- Automatically dereferenced
- Example: `Node& ref = someNode;`

## Reference Links

[https://en.cppreference.com/w/cpp/language/pointer.html]
[https://www.geeksforgeeks.org/dsa/linked-list-data-structure/]
[https://frontendmasters.com/courses/algorithms/debugging-linked-list/]
[https://cgi.cse.unsw.edu.au/~learn/debugging/modules/debugging_data_structures/]

## Setup

Compile with C++ compiler supporting C++11 or later.

---

Tool archived: [March 29th, 2026]

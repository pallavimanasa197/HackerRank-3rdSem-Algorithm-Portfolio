# HackerRank 3rd Semester Algorithm Portfolio

## Student Details

- **Name:** Pallavi.G
- **Student ID / USN:** R25EF175
- **Semester:** 3rd Semester
- **Programming Language:** C
- **HackerRank Profile:** https://www.hackerrank.com/profile/gp1150299
- **GitHub Repository:** https://github.com/pallavimanasa197/HackerRank-3rdSem-Algorithm-Portfolio

---

## About This Portfolio

This repository contains my solutions to five mandatory algorithmic problems completed as part of the HackerRank Algorithms and GitHub Coding Portfolio activity.

The problems cover arrays, implementation, sorting, searching, and greedy algorithms. Each solution is implemented in C and organized in a separate folder.

The objective of this portfolio is to develop algorithmic problem-solving skills, understand algorithm efficiency, and maintain a structured coding portfolio using Git and GitHub.

---

## Problems Completed

| No. | Problem | Topic | Time Complexity | Space Complexity |
|---|---|---|---|---|
| 1 | Mini-Max Sum | Arrays / Implementation | O(N) | O(1) |
| 2 | Birthday Cake Candles | Arrays / Counting | O(N) | O(1) |
| 3 | Insertion Sort – Part 1 | Sorting | O(N) | O(1) |
| 4 | Binary Search | Searching | O(log N) | O(1) |
| 5 | Mark and Toys | Greedy / Sorting | O(N log N) | O(log N) |

---

# 1. Mini-Max Sum

### Problem Summary

Given five positive integers, find the minimum and maximum sums that can be obtained by adding exactly four of the five integers.

### Approach

The solution tracks the total sum and identifies the minimum and maximum values.

- Minimum sum = total sum - maximum value
- Maximum sum = total sum - minimum value

### Complexity

- **Time Complexity:** O(N)
- **Auxiliary Space:** O(1)

### Key Concept

Array traversal and minimum/maximum tracking.

---

# 2. Birthday Cake Candles

### Problem Summary

Given an array containing candle heights, find how many candles have the maximum height.

### Approach

The array is traversed once.

- Maintain the current maximum height.
- If a larger value is found, update the maximum and reset the count to 1.
- If the value equals the maximum, increase the count.

### Complexity

- **Time Complexity:** O(N)
- **Auxiliary Space:** O(1)

### Key Concept

Finding and counting maximum values.

---

# 3. Insertion Sort – Part 1

### Problem Summary

Insert the last unsorted element into its correct position in an already sorted portion of the array.

### Approach

The last element is stored temporarily.

Elements greater than this value are shifted one position to the right until the correct position is found. The stored value is then inserted into that position.

### Complexity

- **Time Complexity:** O(N) for this single insertion operation
- **Auxiliary Space:** O(1)

### Key Concept

Insertion, shifting, and maintaining sorted order.

---

# 4. Binary Search

### Problem Summary

Search for a target value in a sorted array using an efficient searching technique.

### Approach

Binary search repeatedly divides the search range into two halves.

1. Find the middle element.
2. Compare it with the target.
3. If equal, return the position.
4. If the target is smaller, search the left half.
5. Otherwise, search the right half.

### Complexity

- **Time Complexity:** O(log N)
- **Auxiliary Space:** O(1)

### Key Concept

Divide-and-conquer searching.

---

# 5. Mark and Toys

### Problem Summary

Given toy prices and a fixed budget, determine the maximum number of toys that can be purchased.

### Approach

The prices are sorted in ascending order.

The cheapest toys are purchased first while the total cost remains within the budget. Once the next toy cannot be purchased, the process stops.

### Complexity

- **Time Complexity:** O(N log N)
- **Auxiliary Space:** O(log N) approximately for sorting recursion stack

### Key Concept

Greedy selection combined with sorting.

---

# Algorithmic Techniques Learned

Through these problems, I practiced:

- Array traversal
- Minimum and maximum tracking
- Counting
- Insertion and shifting
- Binary search
- Sorting
- Greedy algorithms
- Time complexity analysis
- Space complexity analysis
- Git and GitHub version control

---

# Repository Structure

```text
HackerRank-3rdSem-Algorithm-Portfolio/
│
├── README.md
│
├── 01-Mini-Max-Sum/
│   └── solution.c
│
├── 02-Birthday-Cake-Candles/
│   └── solution.c
│
├── 03-Insertion-Sort-Part-1/
│   └── solution.c
│
├── 04-Binary-Search/
│   └── solution.c
│
└── 05-Mark-and-Toys/
    └── solution.c
    HackerRank Evidence

My public HackerRank profile:

https://www.hackerrank.com/profile/gp1150299

Accepted challenge screenshots and badge evidence are maintained as part of the activity submission.

Reflection

This activity helped me improve my understanding of fundamental algorithmic techniques and their practical implementation in C. I learned how different problems require different approaches, such as array traversal for finding maximum values, insertion and shifting for maintaining sorted order, binary search for efficient searching, and greedy selection for maximizing purchases within a budget. I also learned the importance of analyzing time and space complexity before choosing an algorithm. For example, binary search reduces the search space by half at every step and therefore operates in O(log N) time, while sorting-based solutions such as Mark and Toys require O(N log N) time. Apart from algorithmic concepts, this activity gave me practical experience with Git and GitHub. I learned how to organize source code into separate folders, initialize a Git repository, stage files, create commits, connect a local repository to GitHub, and push the project to a public repository. Overall, this activity improved both my programming problem-solving skills and my ability to maintain a structured coding portfolio.

Conclusion

This portfolio demonstrates the implementation and analysis of five fundamental algorithmic problems using C. The solutions are organized in a structured GitHub repository and supported by HackerRank submissions.
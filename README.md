# Implementation of Decrease and Conquer Algorithms

## Team Members
**Group 5 of BSCS 2-5**
- Co, Kyle Desmond
- Babasa, Maria Hanna 
- Borondia, Kurt 
- Castillo, Julianna Leila 
- Gueco, Jasper King 
- Nadonga, Solomon 
- Rivera, Geuel John 
- Tagura, Red Gabriel 
- Satorre, Ken Calvin

---

## About

This Machine Problem activity showcases the implementation of Decrease and Conquer technique, where it highlights its specialization in reducing the input size or factor to break down a complex problem into its simpler version.

This repository includes the following decrease and conquer techniques:
1. **Binary Search** – In the Binary Search algorithm, the process works by repeatedly dividing the search space in half until the target element is found, or is determined to be non-existent in the dataset. The middle element is used to compare against the target value during the search. It is determined by taking the floor division of the sum of the low and high indices, and this is recursively done until the target element is found.
2. **Russian Multiplication Method** – The Russian Multiplication Method is a multiplication technique that doubles and halves the multiplicand and multiplier, then adds the multiplier values corresponding to odd multiplicands.

### Directory Structure:
```bash
5-MP3/
│
├── README.md                        
├── .gitignore                       
│
├── BinarySearch.cpp                # Implementation of the Binary Search
└── RussianMultiplicationMethod.cpp # Implementation of the Russian Multiplication Method
```
## Developer Setup Guide

### Initial Setup

1. **Clone the repository**
   ```bash
   git clone https://github.com/hbd-red/5-MP3
   cd 5-MP3
   ```

2. **Compile and run the Code**
    ```bash
    g++ -o russian_multiplication_method RussianMultiplicationMethod.cpp
    ./russian_multiplication_method
    ```

*For submission of Machine Problem 3 in Design and Analysis of Algorithms*
# HASHING 
It is a concept to pre-compute and store things in an indexed order
with key and value, to minimize the fetching time.

Generally, for creating a map, 
 1. map<template, template> //any data type can be used for key
 2. unordered_map<template, template> //limited to "int", "char", "double", "string"


 ## Time Complexity
 1. map -> TC: log(N) //BC, WC, AC
 2. unordered_map -> TC: O(1) //BC, AC and O(n) IN WC can be used

 ## There are various methods used in hashing
 1. Divison method
 2. Folding method
 3. Mid Square method

 Since, the max allowed size of the array is 10^7
 values greater than that cannot be stored, thus the numbers are 
 divied by 10 and the remainder is created as the key

 Example: 
    - 28 % 10 = 8 <- key
    - 38 % 10 = 8 <- key
    - 2 % 10 = 2 <- key

## Collisions
When two or more number returns the same key, collision happens
to deal with it, chaining is done: 
0 -> 0
1 -> 0
2 -> 1
3 -> 0
4 -> 0
5 -> 0
6 -> 0
7 -> 0
8 -> 2:[28 -> 38] //chaining
9 -> 0

// You are given an array of elements. Now you need to choose the best index of this
// array. An index of the array is called best if the special sum of this index is maximum
// across the special sum of all the other indices. To calculate the special sum for any
// index you pick the first element that is and add it to your sum. Now you pick next
// two elements i.e., and and add both of them to your sum. Now you will pick the
// next elements, and this continues till the index for which it is possible to pick the
// elements. Find the best index and in the output print its corresponding special sum.
// Note that there may be more than one best index, but you need to only print the
// maximum special sum.
// Input
// First line contains an integer as input. Next line contains space separated integers
// denoting the elements of the array
// Output
// In the output you have to print an integer that denotes the maximum special sum
// Input/Output Format:
// Typical Input Expected Output
// 5
// 1 3 1 2 5
// 8
// 10
// 2 1 3 9 2 4 -10 -9 1 3
// 9
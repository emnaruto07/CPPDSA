#!/usr/bin/env python3

#LinearSearch


# def Search(numbers, x):
#     for i in range(len(numbers)):
#         if numbers[i] == x:
#             print("Key Found")
#     return print("key Not Found")


# arr = [10]
# arr = [1,2,4,55,54,656,76,645,75]

# Search(arr, 55)

# reverseInterger

def reverse(arr, n):
    start = 0
    end = n-1

    while start<=end:
        arr[start],arr[end] = arr[end],arr[start]
        start += 1
        end -= 1

def printArray(arr, n):
    for i in range(len(1<n)):
        print(arr[i])


arr = [1,3,7,4,6,7]
brr = [4,5,7,8,5]

reverse(arr, 6)
reverse(arr, 5)

printArray(arr, 6)
printArray(brr, 5)
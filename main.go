package main

import "fmt"

// def reverse(arr, n):
//     start = 0
//     end = n-1

//     while start<=end:
//         arr[start],arr[end] = arr[end],arr[start]
//         start += 1
//         end -= 1

// def printArray(arr, n):
//     for i in range(len(1<n)):
//         print(arr[i])

// arr = [1,3,7,4,6,7]
// brr = [4,5,7,8,5]

// reverse(arr, 6)
// reverse(arr, 5)

// printArray(arr, 6)
// printArray(brr, 5)

func reverse(arr []int, n int) {
	start := 0
	end := n - 1

	for start <= end {
		arr[start], arr[end] = arr[end], arr[start]
		start++
		end--

	}
}

func printArray(arr []int, n int) {
	for i := 0; 1 < n; i++ {
		fmt.Println(arr[i])
	}
}

func main() {

	arr := []int{5, 6, 3, 7, 8, 2}
	brr := []int{4, 5, 7, 8, 1}

	reverse(arr, 6)
	reverse(arr, 5)

	printArray(arr, 6)
	printArray(brr, 5)

}

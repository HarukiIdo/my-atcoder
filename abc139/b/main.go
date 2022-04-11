package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	sum := 1
	count := 0

	for sum < b {
		sum += a - 1
		count++
	}

	fmt.Println(count)
}

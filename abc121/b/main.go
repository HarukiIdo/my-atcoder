package main

import (
	"fmt"
)

// https://atcoder.jp/contests/abc121/tasks/abc121_b

func main() {
	var n, m, c int

	fmt.Scan(&n, &m, &c)
	b := make([]int, m)
	a := make([]int, m)

	count := 0

	for i := 0; i < m; i++ {
		fmt.Scan(&b[i])
	}

	for j := 0; j < n; j++ {
		sum := 0
		for i := 0; i < m; i++ {
			fmt.Scan(&a[i])
			sum += a[i] * b[i]
		}
		if sum+c > 0 {
			count++
		}
	}

	fmt.Println(count)
}

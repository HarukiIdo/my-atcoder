package main

import (
	"fmt"
	"math"
)

func main() {
	var n float64
	var x float64

	fmt.Scan(&n)

	for i := 0; i < 50001; i++ {
		x = math.Floor(float64(i) * 1.08)
		if x == n {
			fmt.Println(i)
			return
		}
	}
	fmt.Println(":(")
}

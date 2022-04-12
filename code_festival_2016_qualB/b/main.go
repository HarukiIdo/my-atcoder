package main

import (
	"fmt"
)

func main() {
	var n, a, b int
	var info string

	fmt.Scan(&n, &a, &b)
	fmt.Scan(&info)

	aPasscnt := 0
	bPassCnt := 0

	for _, s := range info {
		switch string(s) {
		case "a":
			if aPasscnt+bPassCnt < a+b {
				fmt.Println("Yes")
				aPasscnt++
			} else {
				fmt.Println("No")
			}
		case "b":
			if aPasscnt+bPassCnt < a+b && bPassCnt < b {
				bPassCnt++
				fmt.Println("Yes")
			} else {
				fmt.Println("No")
			}
		case "c":
			fmt.Println("No")
		default:
			continue
		}

	}

}

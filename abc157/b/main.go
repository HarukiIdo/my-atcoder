package main

import (
	"bufio"
	"fmt"
	"os"
)

var reader = bufio.NewReader(os.Stdin)

func main() {
	A := make([][]int, 3)
	for i := 0; i < 3; i++ {
		A[i] = make([]int, 3)
		for j := 0; j < 3; j++ {
			fmt.Fscan(reader, &A[i][j])
		}
	}
	var n int
	fmt.Fscan(reader, &n)

	b := make([]int, n)
	flag := make([][3]bool, 3)
	for x := 0; x < n; x++ {
		fmt.Scan(&b[x])
		for i := 0; i < 3; i++ {
			for j := 0; j < 3; j++ {
				if b[x] == A[i][j] {
					flag[i][j] = true
				}
			}
		}
	}

	if is_bingo(flag) {
		fmt.Print("Yes")
	} else {
		fmt.Print("No")
	}
}

func is_bingo(flag [][3]bool) bool {

	// 斜めのビンゴ
	if (flag[0][0] && flag[1][1] && flag[2][2]) || (flag[0][2] && flag[1][1] && flag[2][0]) {
		return true
	}

	//縦と横のビンゴ
	for i := 0; i < 3; i++ {
		if flag[0][i] && flag[1][i] && flag[2][i] {
			return true
		}
		if flag[i][0] && flag[i][1] && flag[i][2] {
			return true
		}
	}

	return false
}

package main

import (
	"fmt"
	"strings"
)

func main() {
	var s string
	fmt.Scan(&s)
	array := strings.Split(s, ",")

	for _, s := range array {
		fmt.Printf("%s ",s)
	}
}

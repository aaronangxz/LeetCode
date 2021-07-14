package main

func getConcatenation(nums []int) []int {
	a := append(nums, nums...)
	return a
}

package main

func findPeakElement(nums []int) int {
	idx := 0
	max := nums[0]
	for i := 0; i < len(nums)-1; i++ {
		if nums[i+1] > max {
			max = nums[i+1]
			idx = i + 1
		}
	}
	return idx
}

package LeetCode

func romanToInt(s string) int {
	var out int
	rune := []rune(s)
	for i := 0; i < len(rune); i++ {
		if rune[i] == 'I' {
			if i == len(rune)-1 {
				out++
				continue
			}
			if rune[i+1] == 'V' {
				out += 4
				i++
				continue
			}
			if rune[i+1] == 'X' {
				out += 9
				i++
				continue
			}
			out++
		} else if rune[i] == 'X' {
			if i == len(rune)-1 {
				out += 10
				continue
			}
			if rune[i+1] == 'L' {
				out += 40
				i++
				continue
			}
			if rune[i+1] == 'C' {
				out += 90
				i++
				continue
			}
			out += 10
		} else if rune[i] == 'C' {
			if i == len(rune)-1 {
				out += 100
				continue
			}
			if rune[i+1] == 'D' {
				out += 400
				i++
				continue
			}
			if rune[i+1] == 'M' {
				out += 900
				i++
				continue
			}
			out += 100
		} else if rune[i] == 'V' {
			out += 5
		} else if rune[i] == 'L' {
			out += 50
		} else if rune[i] == 'D' {
			out += 500
		} else if rune[i] == 'M' {
			out += 1000
		}
	}
	return out
}

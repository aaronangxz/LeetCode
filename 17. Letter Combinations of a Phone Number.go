package LeetCode

func concat(input1 []string, input2 []string) []string {
	var out []string
	for _, char1 := range input1 {
		for _, char2 := range input2 {
			str := char1 + char2
			out = append(out, str)
		}
	}
	return out
}

func letterCombinations(digits string) []string {
	s2 := []string{"a", "b", "c"}
	s3 := []string{"d", "e", "f"}
	s4 := []string{"g", "h", "i"}
	s5 := []string{"j", "k", "l"}
	s6 := []string{"m", "n", "o"}
	s7 := []string{"p", "q", "r", "s"}
	s8 := []string{"t", "u", "v"}
	s9 := []string{"w", "x", "y", "z"}

	var out []string

	for _, char := range digits {
		if len(out) == 0 {
			switch string(char) {
			case "2":
				out = s2
			case "3":
				out = s3
			case "4":
				out = s4
			case "5":
				out = s5
			case "6":
				out = s6
			case "7":
				out = s7
			case "8":
				out = s8
			case "9":
				out = s9
			}
			continue
		}

		switch string(char) {
		case "2":
			out = concat(out, s2)
		case "3":
			out = concat(out, s3)
		case "4":
			out = concat(out, s4)
		case "5":
			out = concat(out, s5)
		case "6":
			out = concat(out, s6)
		case "7":
			out = concat(out, s7)
		case "8":
			out = concat(out, s8)
		case "9":
			out = concat(out, s9)
		}
	}
	return out
}

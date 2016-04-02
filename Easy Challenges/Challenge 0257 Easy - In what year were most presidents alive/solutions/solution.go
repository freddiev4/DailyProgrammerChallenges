// implements Marzullo's algorithm for range overlapping
// https://en.wikipedia.org/wiki/Marzullo's_algorithm
// overkill for the small data size but using it to experiment with go

package main

import (
	"encoding/csv"
	"fmt"
	"os"
	"sort"
	"strconv"
	"strings"
	"time"
)

type RangeList [][]int

func (r RangeList) Len() int {
	return len(r)
}

func (r RangeList) Swap(i, j int) {
	r[i], r[j] = r[j], r[i]
}

func (r RangeList) Less(i, j int) bool {
	return r[i][0] < r[j][0]
}

func year_from_str(s string) int {
	if len(s) >= 4 {
		v, _ := strconv.ParseInt(s[len(s)-4:], 10, 32)
		return int(v)
	} else {
		// handle case where no date is listed (still alive)
		return time.Now().Year()
	}
}

func main() {
	f, _ := os.Open("president_data.txt")
	r := csv.NewReader(f)
	r.Read() // read off header

	rngs := make([]([]int), 0, 75)
	for {
		record, err := r.Read()
		if err != nil {
			break
		}

		birth_yr := year_from_str(strings.TrimSpace(record[1]))
		death_yr := year_from_str(strings.TrimSpace(record[3]))

		// -1 and +1 as stipulated in algorithm description for start/end of range
		rngs = append(rngs, []int{birth_yr, -1}, []int{death_yr, 1})
	}
	sort.Sort(RangeList(rngs))

	best := 0
	cnt := 0
	var best_rng [][]int
	for i, t := range rngs {
		cnt = cnt - t[1]
		if cnt > best {
			// new high for overlap, dump existing list
			best = cnt
			best_rng = best_rng[:0] // clear those already saved
			best_rng = append(best_rng, []int{t[0], rngs[i+1][0]})
		} else if cnt == best {
			// another case of the already found highest overlap
			best_rng = append(best_rng, []int{t[0], rngs[i+1][0]})
		}
	}

	fmt.Println("Most alive at one time: ", best)
	fmt.Println("years listed below")
	for _, rng := range best_rng {
		for i := rng[0]; i <= rng[1]; i++ {
			fmt.Println(i)
		}
	}
}

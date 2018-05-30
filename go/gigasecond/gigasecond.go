// gigasecond returns the exact date time from AddGigasecond.
package gigasecond

import "time"

// AddGigasecond adds to the given date time +10^9 seconds.
func AddGigasecond(t time.Time) time.Time {
	seconds := 1000000000
	return t.Add(time.Duration(seconds) * time.Second)
}

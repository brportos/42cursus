#!/usr/bin/env python3
import sys

print("=== Player Score Analytics ===")
if len(sys.argv) == 1:
    print("No scores provided. Usage: python3"
          " ft_score_analytics.py <score1> <score2> ...")
    sys.exit()
else:
    scores = []
    for arg in sys.argv[1:]:
        try:
            scores.append(int(arg))
        except ValueError:
            print(f"Invalid parameter: '{arg}'")
    if len(scores) == 0:
        print("No scores provided. Usage: python3"
              " ft_score_analytics.py <score1> <score2> ...")
        sys.exit()
    total_score = sum(scores)
    count = len(scores)
    average_score = total_score / count
    highest_score = max(scores)
    lowest_score = min(scores)
    Score_range = highest_score - lowest_score
    print("Scores processed: " + str(scores))
    print("Total players: " + str(count))
    print("Total score: " + str(total_score))
    print("Average score: " + str(average_score))
    print("High score: " + str(highest_score))
    print("Low score: " + str(lowest_score))
    print("Score range: " + str(Score_range))

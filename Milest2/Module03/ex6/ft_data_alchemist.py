#!/usr/bin/env python3
import random

initial = [
    'Alice', 'bob', 'Charlie', 'dylan',
    'Emma', 'Gregory', 'john', 'kevin', 'Liam'
    ]
all_capitalized = [name.capitalize() for name in initial]
already_capitalized = [name for name in initial if name[0].isupper()]
scores = {name: random.randint(0, 1000) for name in all_capitalized}
avarage = round(sum(scores.values()) / len(scores), 2)
high_scores = {
    name: score for name, score in scores.items() if score > avarage
    }

if __name__ == "__main__":
    print("=== Game Data Alchemist ===\n")
    print("Initial list of players: " + str(initial))
    print("New list with all names capitalized: " + str(all_capitalized))
    print("New list of capitalized names only: " + str(already_capitalized))
    print("Score dict: " + str(scores))
    print("Score average is " + str(avarage))
    print("High scores: " + str(high_scores))

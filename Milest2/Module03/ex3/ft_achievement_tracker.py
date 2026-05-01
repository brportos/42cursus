#!/usr/bin/env python3
import random

all_achevement = [
    "First Steps", "Boss Slayer", "Untouchable", "Speed Runner",
    "Master Explorer", "Collector Supreme", "World Savior",
    "Crafting Genius", "Strategist", "Survivor", "Treasure Hunter",
    "Sharp Mind", "Unstoppable", "Hidden Path Finder"
]

def gen_player_achievements():
    k = random.randint(4, 10)
    return set(random.sample(all_achevement, k))

alice = gen_player_achievements()
bob = gen_player_achievements()
charlie = gen_player_achievements()
dylan = gen_player_achievements()
players = [
        ("Alice", alice),
        ("Bob", bob),
        ("Charlie", charlie),
        ("Dylan", dylan)
    ]

print("=== Achievement Tracker System ===\n")
for name, achevements in players:
    print("Player " + name + ": " + str(achevements))

all_achevements = alice.union(bob, charlie, dylan)    
print("\nAll distinct achievements: " + str(all_achevements))

common = alice.intersection(bob, charlie, dylan)
print("\nCommon achievements: " + str(common))

print()
for name, their_set in players:
    others = set()
    for other_name, other_set in players:
        if other_name != name:
            others = others.union(other_set)
    unique = their_set.difference(others)
    print("Only " + name + " has: " + str(unique))
print()
for name, their_set in players:
    missing = all_achevements.difference(their_set)
    print(name + " is missing: " + str(missing))

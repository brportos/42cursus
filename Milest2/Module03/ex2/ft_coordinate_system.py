#!/usr/bin/env python3
import math


def get_player_pos() -> tuple[float, float, float]:
    while True:
        raw = input("Enter new coordinates as floats in format 'x,y,z': ")
        parts = raw.split(",")
        if len(parts) != 3:
            print("Invalid syntax")
            continue
        try:
            x = float(parts[0].strip())
            y = float(parts[1].strip())
            z = float(parts[2].strip())
            return (x, y, z)
        except ValueError as e:
            print("Error on parameter '" + parts[1].strip() + "': " + str(e))


if __name__ == "__main__":
    print("=== Game Coordinate System ===\n")
    print("Get a first set of coordinates")
    pos1 = get_player_pos()
    print("Got a first tuple: " + str(pos1))
    x1, y1, z1 = pos1
    print("It includes: x=" + str(x1) + ", Y=" + str(y1) + ", z=" + str(z1))
    dist_center = math.sqrt(x1**2 + y1**2 + z1**2)
    print("Distance to center: " + str(round(dist_center, 4)))
    print("\nGet a second set of coordinates")
    pos2 = get_player_pos()
    x2, y2, z2 = pos2
    dist = math.sqrt((x2 - x1)**2 + (y2 - y1)**2 + (z2 - z1)**2)
    print("Distance between the 2 sets of coordinates: " + str(round(dist, 4)))

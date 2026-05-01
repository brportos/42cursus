#!/usr/bin/env python3
import sys

print("=== Inventory System Analysis ===")

inventory = {}
for arg in sys.argv[1:]:
    parts = arg.split(":")
    if len(parts) != 2:
        print(f"Error - invalid parameter {arg!r}")
        continue
    name = parts[0]
    raw_qty = parts[1]
    if name in inventory:
        print(f"Redundant item {name!r} - discarding")
        continue
    try:
        qty = int(raw_qty)
    except ValueError as e:
        print(f"Quantity error for {name!r}: " + str(e))
        continue
    inventory[name] = qty

print("Got inventory: " + str(inventory))
item_lst = list(inventory.keys())
print("Item list: " + str(item_lst))

total = sum(inventory.values())
count = len(inventory)
print("Total quantity of the " + str(count) + " items: " + str(total))

for item in inventory.keys():
    pct = round((inventory[item] / total) * 100, 1)
    print("Item " + item + " represents " + str(pct) + "%")

most = max(inventory, key=lambda item: inventory[item])
least = min(inventory, key=lambda item: inventory[item])
print("Item most abundant: " + most + " with quantity " + str(inventory[most]))
print(
    "Item least abundant: " + least + " with quantity " + str(inventory[least])
    )

inventory.update({"magic_item": 1})
print("Updated inventory: " + str(inventory))

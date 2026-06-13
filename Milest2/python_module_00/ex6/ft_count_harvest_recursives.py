def ft_count_harvest_recursive(day=None, n=1):
    if day is None:
        day = int(input("Days until harvest: "))
    if n > day:
        print("Harvest time!")
        return
    print(f"Day {n}")
    ft_count_harvest_recursive(day, n + 1)

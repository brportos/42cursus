def count_day(current: int, total: int) -> None:
    if current > total:
        return
    print('Day', current)
    count_day(current + 1, total)


def ft_count_harvest_recursive() -> None:
    days = int(input("Days until harvest: "))
    count_day(1, days)
    print("Harvest time!")

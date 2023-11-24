def for_loop(n: int) -> int:
    res = 0

    for i in range(1, n + 1):
        res += i
        print(res)
    return res


for_loop(9)

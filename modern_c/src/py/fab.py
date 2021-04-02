def fab(num):
    if num < 3:
        return 1
    else:
        return fab(num-1)+fab(num-2)


def fabonaci(num):
    series = []
    for i in range(num):
        series.append(fab(i+1))
    print(series)

if __name__ == "__main__":
    fabonaci(50)
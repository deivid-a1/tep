


def main():
    N = int(input())
    string = input()

    T = 0
    A = 0
    total_n = 0
    flag = str()

    for item in string:
        total_n = total_n + 1
        if item == "A":
            A = A + 1
        else:
            T = T + 1
        
        if A > T:
            flag = "A"
        if T > A:
            flag = "T"

    if A == T:
        print(flag)
        return
    if A > T:
        print("A")
        return
    else:
        print("T")



if __name__ == "__main__":
    main()

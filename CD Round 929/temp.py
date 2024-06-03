import math

def solve():
    a, b, n = map(int, input().split())
    loop_val_a = int(math.log(n, a))
    loop_val_b = int(math.log(n, b))
    s = set()
    for i in range(loop_val_a):
        for j in range(loop_val_b):
            a_new = a ** i
            b_new = b ** j
            prod = a_new * b_new
            if n >= prod and n % prod == 0:
                s.add(prod)
    print(len(s))

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()

    

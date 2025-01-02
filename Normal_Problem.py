def solve():
    nt = input()  # Read input string
    nt = nt[::-1]  # Reverse the string
    
    # Replace 'q' with 'p' and 'p' with 'q'
    nt = ''.join('p' if i == 'q' else 'q' if i == 'p' else i for i in nt)
    
    print(nt)

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().splitlines()

    t = int(data[0])  # Number of test cases
    test_cases = data[1:]

    for nt in test_cases:
        solve()

def count_arrangements(a, b, mod):
    a.sort()
    b.sort()
    
    n = len(b)
    ways = 1
    j = 0  # Pointer for team a

    for i in range(n):
        # Move j to find the first player in a that can beat b[i]
        while j < n and a[j] <= b[i]:
            j += 1
        # Count of players in a that can beat b[i]
        count = n - j
        if count <= 0:
            return 0  # If no player can beat this one, return 0
        ways = (ways * count) % mod
        n -= 1  # Decrease the number of players available for the next round
    
    return ways

def main():
    import sys
    input = sys.stdin.read
    data = input().splitlines()
    
    MOD = 10**9 + 7
    index = 0
    t = int(data[index])
    index += 1
    results = []
    
    for _ in range(t):
        n = int(data[index])  # Read the number of players
        index += 1
        a = list(map(int, data[index].split()))  # Read skill levels for team a
        index += 1
        b = list(map(int, data[index].split()))  # Read skill levels for team b
        index += 1
        
        result = count_arrangements(a, b, MOD)
        results.append(result)
    
    print("\n".join(map(str, results)))

if __name__ == "__main__":
    main()
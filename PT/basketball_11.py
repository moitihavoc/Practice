def winner(record:str):
    A = 0
    B = 0

    for i in range(0, len(record)):
        if record[i] == "A":
            A += int(record[i+1])
        elif record[i] == "B":
            B += int(record[i+1])
        else: continue

    if A - B >= 2:
        return "A"
    else: return "B"

def main():
    rec = input()
    print(winner(rec))

if __name__ == "__main__":
    main()

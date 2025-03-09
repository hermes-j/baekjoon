str = input()
for ch in str:
    if ch.isupper():
        print(ch.lower(), end="")
    elif ch.islower():
        print(ch.upper(), end="")

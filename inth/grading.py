a = int(input())
b = int(input())
c = int(input())

grade = a + b + c

if 80 <= grade <= 100:
    print("A")
elif 75 <= grade <= 79:
    print("B+")
elif 70 <= grade <= 74:
    print("B")
elif 65 <= grade <= 69:
    print("C+")
elif 60 <= grade <= 64:
    print("C")
elif 55 <= grade <= 59:
    print("D+")
elif 50 <= grade <= 54:
    print("D")
elif 0 <= grade <= 49:
    print("F")
else:
    print("Invalid Input")


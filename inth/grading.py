a = int(input())
b = int(input())
c = int(input())

grade = a + b + c

if 80 <= grade:
    print("A")
elif 75 <= grade:
    print("B+")
elif 70 <= grade:
    print("B")
elif 65 <= grade:
    print("C+")
elif 60 <= grade:
    print("C")
elif 55 <= grade:
    print("D+")
elif 50 <= grade:
    print("D")
elif 0 <= grade:
    print("F")
else:
    print("Invalid Input")


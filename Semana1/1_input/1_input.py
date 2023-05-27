size = int(input())

for i in range(size):
    nums = input()
    num1, num2 = map(int, nums.split())
    print(num1+num2)


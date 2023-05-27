while(True):
    nums = input()
    num1, num2 = map(int, nums.split())

    if(num1==0 and num2 ==0):
        break

    print(num1+num2)


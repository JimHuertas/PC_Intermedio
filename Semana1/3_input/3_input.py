while(True):
    try: 
        nums = input()
    except EOFError:
        break

    num1, num2 = map(int, nums.split())

    print(num1+num2)


import time

def calc(x):
    return x**2 - x**2 + x*4 - x*5 + x + x

x = 5

while 1==1:
    n = input()

    if not n.isdigit():
        break
    
    n = int(n)
    
    start_time = time.time()

    res = 0

    for i in range(n):
        res = calc(x)
        
    end_time = time.time()
    
    duration = end_time - start_time
    
    print(f"Время : {duration} s")
    print(f"Итог : {res}")

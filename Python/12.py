
def get_number_of_divisors(n):
    count = 0
    for i in range(1, n+1):
        if n % i == 0:
            count += 1
    return count

def get_nth_triangle_number(n):
    triangle_num = 0
    for i in range(n+1):
        triangle_num += i
    return triangle_num
    
def get_first_triangle_num_over_n_divisors(n):
    num_divisors = 0
    i = 0
    triangle_num = 0
    while num_divisors < n:
        triangle_num = get_nth_triangle_number(i)
        num_divisors = get_number_of_divisors(triangle_num)
        print(num_divisors)
        i += 1
    return triangle_num


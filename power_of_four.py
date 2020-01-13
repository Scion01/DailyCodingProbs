#Given a 32-bit positive integer N, determine whether it is a power of four in faster than O(log N) time.


def check_power_of_four(n):
    if(n%4==0 and n&(n-1)==0):
        return True
    return False

print(check_power_of_four(4))
print(check_power_of_four(16))
print(check_power_of_four(64))
print(check_power_of_four(63))
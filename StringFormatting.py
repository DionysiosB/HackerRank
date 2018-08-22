def print_formatted(number):
    length = len(bin(number)[2:])
    for i in range(1,number+1):
        str1 = str(i).rjust(length)
        str2 = oct(i)[2:].rjust(length)
        str3 = hex(i)[2:].upper().rjust(length)
        str4 = bin(i)[2:].rjust(length)
        print(str1, str2, str3, str4)

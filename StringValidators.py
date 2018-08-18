if __name__ == '__main__':
    s = input()
    for f in ['isalnum','isalpha','isdigit','islower','isupper']: print(any(getattr(c,f)() for c in s))


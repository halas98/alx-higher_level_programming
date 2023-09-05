#!/usr/bin/python3
def uppercase(s):
    for char in s:
        if 'a' <= char <= 'z':
            print('{}'.format(chr(ord(char) - 32)), end='')
        else:
            print('{}'.format(char), end='')
    print()
if __name__ == "__main__":
    uppercase("best")
    uppercase("Best School 98 Battery street")

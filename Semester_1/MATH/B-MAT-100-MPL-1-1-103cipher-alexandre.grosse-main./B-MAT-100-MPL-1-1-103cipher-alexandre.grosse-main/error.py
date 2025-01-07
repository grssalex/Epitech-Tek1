##
## EPITECH PROJECT, 2024
## 
## File description:
## error.py
##

import sys
from usage import flag_h

def error_imput():
    if len(sys.argv) == 2 and sys.argv[1] == "-h":
        flag_h()
        sys.exit(0)
    elif len(sys.argv) != 4:
        print("Error: Incorrect number of arguments.")
        print("Usage: use ./103cipher -h for help.")
        sys.exit(84)
    elif not (sys.argv[3] == '0' or sys.argv[3] == '1'):
        print("\nError: The third argument must be 0 or 1.")
        print("Usage: ./103cipher \"message\" \"key\" 0 (or 1)\n")
        sys.exit(84)
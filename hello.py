#!/usr/bin/env python3

from datetime import datetime

name = input("YOUR NAME: ")
current_time = datetime.now().strftime("%H:%M:%S")

print(f"Hello {name}, right now the time is {current_time}")

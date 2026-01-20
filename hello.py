#!/usr/bin/env python3

from datetime import datetime

name = "Sajin"

current_time = datetime.now().strftime("%I:%M:%S %p")

print(f"Hello {name}, right now the time is {current_time}")

#!/usr/bin/python3
def remove_char_at(input_str, n):
if n < 0 or n >= len(input_str):
return input_str
return input_str[:n] + input_str[n+1:]
original_str = "example"
result_str = remove_char_at(original_str, 2)
print(result_str)

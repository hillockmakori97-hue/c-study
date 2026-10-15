## question 5
# def compute_discount(price,discount_rate=0.1):
#     discount=price*discount_rate
#     return discount

# print(compute_discount(5000))
# print(compute_discount(4000,0.3))

# #question 6

def analyze_numbers(numbers):
    highest=max(numbers)
    minimum=min(numbers)
    return highest,minimum

highest,lowest=analyze_numbers([4,5,6,7,8,2,9])
print(
    f'''
The highest number is {highest} and the lowest is {lowest}
'''
)
## question 7 
def build_email(first_name, last_name, domain):
  return f"{first_name}.{last_name}@{domain}"




generated_email = build_email(
    domain="techcorp.com", first_name="jane", last_name="doe"
)

print(f"Generated Email Address: {generated_email}")

## qustion 8
celsius_to_fahrenheit = lambda c: (c * 9 / 5) + 32
user_input = float(input("Enter temperature in Celsius: "))
converted_temp = celsius_to_fahrenheit(user_input)
print(f"{user_input}°C is equal to {converted_temp:.1f}°F")



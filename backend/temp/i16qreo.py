def divide(a, b):
    try:
        result = a / b
        return result
    except ZeroDivisionError as e:
        print("Error:", e)
        return None

numerator = 10
denominator = 0  # This will cause a ZeroDivisionError

result = divide(numerator, denominator)

if result is not None:
    print("Result:", result)
else:
    print("Error occurred, result is None.")

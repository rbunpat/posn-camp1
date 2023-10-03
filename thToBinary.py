def text_to_binary(text):
    binary_result = ""
    for char in text:
        # Encode the character as bytes using UTF-8 encoding
        byte_data = char.encode('utf-8')
        binary_value = ' '.join(format(byte, '08b') for byte in byte_data)
        binary_result += binary_value + ' '

    return binary_result.strip()  # Remove trailing space

# Input a string and convert it to binary
input_text = input("Enter a string: ")
binary_output = text_to_binary(input_text)

print(f"Binary representation: {binary_output}")

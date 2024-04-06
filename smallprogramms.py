#1
#image maker one
# Define the image dimensions
width = 200
height = 100

# Define colors (RGB format)
colors = {
    "sky": (135, 206, 235),  # Light blue
    "sun": (255, 255, 0),     # Yellow
    "grass": (50, 205, 50),   # Green
}

# Create an empty list to store pixel values
pixels = []

# Iterate over each pixel in the image
for y in range(height):
    for x in range(width):
        # Determine the color based on the position
        if y < height // 2:
            color = colors["sky"]
        elif y < height * 3 // 4 and abs(x - width // 2) < 20:
            color = colors["sun"]
        else:
            color = colors["grass"]

        # Add the pixel color to the list of pixels
        pixels.append(color)

# Print the pixels (for demonstration purposes)
print(pixels)

#2
# Define the image dimensions
width = 200
height = 100

# Define colors (RGB format)
colors = {
    "sky": (135, 206, 235),  # Light blue
    "sun": (255, 255, 0),     # Yellow
    "grass": (50, 205, 50),   # Green
}

# Create an empty list to store pixel values
pixels = []

# Iterate over each pixel in the image
for y in range(height):
    for x in range(width):
        # Determine the color based on the position
        if y < height // 2:
            color = colors["sky"]
        elif y < height * 3 // 4 and abs(x - width // 2) < 20:
            color = colors["sun"]
        else:
            color = colors["grass"]

        # Add the pixel color to the list of pixels
        pixels.append(color)

# Print the pixels (for demonstration purposes)
print(pixels)

#3

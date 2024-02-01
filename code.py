import matplotlib.pyplot as plt
import numpy as np

# Define parameters for the arithmetic progression
initial_term = 3
common_difference = 5

# Generate values for n and corresponding x(n)
n_values = np.arange(1, 20, 1)  # You can adjust the range as needed
x_n_values = initial_term + (n_values - 1) * common_difference

# Plot the graph
plt.plot(n_values, x_n_values, marker='o', linestyle='-', color='b')
plt.title('Arithmetic Progression: $x(n) = 3 + (n-1) \ times 5$')
plt.xlabel('Term Number (n)')
plt.ylabel('$x(n)$')
plt.grid(True)

# Save the plot as an image (adjust the filename and format as needed)
plt.savefig('arithmetic_progression_plot.png')

# Show the plot
plt.show()


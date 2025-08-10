import tkinter as tk

# Create the main window
root = tk.Tk()
root.title("Simple GUI")

# Create a label
label = tk.Label(root, text="Enter something:")
label.pack()

# Create an input box
entry = tk.Entry(root)
entry.pack()

# Function to run when button clicked
def show_text():
    text = entry.get()
    output_label.config(text=f"You typed: {text}")

# Create a button
button = tk.Button(root, text="Show Text", command=show_text)
button.pack()

# Label to display output
output_label = tk.Label(root, text="")
output_label.pack()

# Run the window loop
root.mainloop()

# import pandas as pd;

# df = pd.read_csv("AI/Pandas/P-2/student_performance_exploration.csv")

# # print(df.head(10))
# print(df.shape)


import matplotlib.pyplot as plt
import pandas as pd

# 1. Load the CSV data from your local path
file_path = "AI/Pandas/P-2/student_performance_exploration.csv"
df = pd.read_csv(file_path)

# 2. Count the occurrences of each department
department_counts = df["department"].value_counts()

# 3. Create the bar chart
plt.figure(figsize=(8, 5))
plt.bar(
    department_counts.index,
    department_counts.values,
    color="skyblue",
    edgecolor="black",
)

# 4. Customize the chart labels and title
plt.title("Number of Students by Department", fontsize=14, fontweight="bold")
plt.xlabel("Department", fontsize=12)
plt.ylabel("Number of Students", fontsize=12)
plt.grid(axis="y", linestyle="--", alpha=0.7)

# 5. Display the plot
plt.tight_layout()
plt.show()



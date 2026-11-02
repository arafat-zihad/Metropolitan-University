import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv("AI/Pandas/P-2/student_performance_exploration.csv")

corr = df.select_dtypes("number").corr()

plt.figure(figsize=(12, 8))
plt.imshow(corr, cmap="coolwarm")

plt.colorbar(label="Correlation")

plt.xticks(range(len(corr.columns)), corr.columns, rotation=90)
plt.yticks(range(len(corr.columns)), corr.columns)

plt.title("Student Performance Correlation Heatmap")
plt.tight_layout()
plt.show()
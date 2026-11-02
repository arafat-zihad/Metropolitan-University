import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv("AI/Pandas/P-2/student_performance_exploration.csv")

avg_score = df.groupby("gender")["total_score"].mean()

plt.bar(avg_score.index, avg_score.values)

plt.xlabel("Gender")
plt.ylabel("Average Total Score")
plt.title("Average Total Score by Gender")

plt.show()
import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv("AI/Pandas/P-2/student_performance_exploration.csv")

plt.scatter(
    df["sleep_hours_per_night"],
    df["final_exam_score"]
)

plt.xlabel("Sleep Hours per Night")
plt.ylabel("Final Exam Score")
plt.title("Sleep vs Final Exam Score")
plt.show()
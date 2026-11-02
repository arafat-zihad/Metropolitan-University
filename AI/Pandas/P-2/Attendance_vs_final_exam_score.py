import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv("AI/Pandas/P-2/student_performance_exploration.csv")
plt.scatter(df["attendance_percentage"], df["final_exam_score"])

plt.xlabel("Attendance (%)")
plt.ylabel("Final Exam Score")
plt.title("Attendance vs Final Exam Score")
plt.show()
import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv("AI/Pandas/P-2/student_performance_exploration.csv")

score_cols = [
    "assignment_score",
    "midterm_score",
    "final_exam_score",
    "total_score"
]

heatmap_data = df.groupby("department")[score_cols].mean()

plt.figure(figsize=(10, 6))
plt.imshow(heatmap_data, cmap="YlOrRd", aspect="auto")

plt.colorbar(label="Average Score")

plt.xticks(
    range(len(score_cols)),
    score_cols,
    rotation=45
)

plt.yticks(
    range(len(heatmap_data)),
    heatmap_data.index
)

plt.title("Average Student Scores by Department")
plt.tight_layout()
plt.show()
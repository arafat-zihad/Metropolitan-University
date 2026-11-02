import pandas as pd;

# Part: 01
# data = [101, 102, 104, 200, 201]
# data = [101.3, 102.4, 103.3, 104.9]
# data = ["A", "B", "C"]
# series = pd.Series(data, index=["a", "b", "c", "d", "e"])
# series.loc["b"] = 1000
# print(series[series < 200])

# Part 02

# calories = {"Day 1": 1750, "Day 2": 2100, "Day 3": 1700}

# series = pd.Series(calories)
# series.loc["Day 3"] += 500
# print(series)


# Part: 3 - DataFrame
# data = { 
#     "Name": ["Kattush", "Mokhai", "Shanda"],
#     "Age": [30, 26, 29]
# }

# df = pd.DataFrame(data, index=["Employee 1", "Employee 2", "Employee 3"])

# # Add new column data frame
# df["Job"] = ["Cook", "N/A", "Cashier"] 

# # Add new row
# new_rows = pd.DataFrame([{"Name": "Sandy", "Age": 33, "Job": "Engineer"}, {"Name": "Kota", "Age": 45, "Job": "Manager"}],
#                         index=["Employee 4", "Employee 5"])
# df = pd.concat([df, new_rows])
# print(df)

df = pd.read_csv("AI/Pandas/P-1/data.csv", index_col="Name")
# df = pd.read_json("AI/Pandas/P-1/data.json")
# print(df.to_string())


# print(df["Name"])
# print(df["Name"].to_string())
# print(df["Weight"].to_string())
# print(df[["Name", "Height", "Weight"]])

# print(df.loc["Pikachu":"Nidorina", ["Height", "Weight"]])

pokemon = input("Enter a Pokemon name: ")

try: 
    print(df.loc[pokemon])
except KeyError:
    print(f"{pokemon} not found")


"""
>> Series:
- What is Series? hwo it works?
* Series() is not a function instead constructor.
- how to add custom index in Series?
- how to access a value dirctly within a series? (use loc[], and iloc[])
- how to update a value?
- how to filter via value?


>> DataFrame:
- What is DataFrame? hwo it works?
* Series() is not a function instead constructor.
- how to add custom index in DataFrame?
- how to access a value dirctly within a DataFrame? (use loc[], and iloc[])
- how to update a value?
- how to filter via value?
- How to add new column in DF? 
- How to add new row and how to add index in new row?
- How to add multiple rows

>> Importing CSV
- hwo to import .csv
* use relative path inside read_csv like read_cse(AI/Pandas/P-1/data.csv)
- how to print full dataset?
- how to import .json file

>> Selection
- hwo to select and print by column?
- hwo to print multiple column
- how to selcet and print by rows?
- how to set a column as index then find row using the column?
- how to print all between two?
- how to print rows between two using iloc?
- how to print rows and column between two using iloc?
# - how to search for a value using user input?

"""
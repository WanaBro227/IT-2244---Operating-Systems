# In-Course Assessment: File Operations, Bash & String Handling

This README summarizes solutions for a practical in-course assessment involving Windows Command Prompt operations, Bash scripting for data processing, and string comparison logic.

---

## 📁 Question 01: Windows Command Prompt Operations
### Objective:
Perform file and directory operations on a Windows system using CMD.

### ✅ Tasks Completed:
1. **Created Directories on Desktop**
```cmd
cd %USERPROFILE%\Desktop
mkdir CSC2244 Marks Exam
```

2. **Subdirectories within `CSC2244`**
```cmd
cd CSC2244
mkdir practical
theory
exam
```

3. **Created files in each subdirectory**
```cmd
cd practical
echo a> file.txt
echo a> file.docx
echo a> file.pptx
```
(Repeated similarly for `theory` and `exam` folders)

4. **Created and moved Excel files**
```cmd
echo a> Icae_Marks.xlsx
echo a> Final_Exam_Marks.xlsx
move Icae_Marks.xlsx Marks\
move Final_Exam_Marks.xlsx Marks\
```

5. **Copied and hid directories**
```cmd
xcopy Marks CSC2244\exam /E /I
attrib +h exam
```

---

## 💻 Question 02: Bash Shell – `data.csv` Analysis

### 🗂 Resource File: `data.csv`
```csv
Name,Age,Department,GPA
John,22,Physicalscience,3.5
Priya,21,Environmentscience,3.7
Meera,22,IT,3.1
Carol,23,Physicalscience,3.99
David,21,IT,3.98
Riya,22,Physicalscience,3.6
Rahman,21,Environmentscience,3.7
Rose,22,IT,2
Anna,23,Physicalscience,3.78
Riyas,21,IT,3.76
```

### ✅ Tasks Completed:
1. **Filtered students with GPA > 3.5**
```bash
awk -F, 'NR==1 || $4 > 3.5' data.csv
```

2. **Calculated average GPA**
```bash
awk -F, 'NR>1 {sum+=$4; count++} END {if (count > 0) print "Avergae GPA:", sum/count}' data.csv
```

---

## 🧠 Question 03: Bash String Comparison
### Objective:
Compare the lengths of two user-input strings.

### ✅ Code:
```bash
read -p "Enter String_1: " string1
read -p "Enter String_2: " string2

len1=${#string1}
len2=${#string2}

if [ $len1 -gt $len2 ]; then
    echo "$string1 is larger than $string2"
elif [ $len1 -lt $len2 ]; then
    echo "$string2 is larger than $string1"
else
    echo "Both strings are of the same length"
fi
```

### 🧾 Example Output:
```
Enter String_1: Apple
Enter String_2: Banana
Banana is larger than Apple
```

---

## ✅ Summary
This practical covered essential shell-based scripting and Windows command-line operations:
- File handling and manipulation on Windows.
- Data filtering and aggregation in bash using `awk`.
- Interactive string input and comparison logic.

These exercises help strengthen system-level scripting and logic-building skills.


# Linux Day 5: CSV File Operations Using Shell Commands

## Script Breakdown

The Data.csv file contains the following sample data:

ID,Name,age,salary,Department
101,Alice,0,70000,Data Science
102,Bob,25,50000,Engineering
103,Charlie,5,80000,Data Science
104,David,40,90000,HR
105,Eve,28,60000,Engineering
106,Frank,38,75000,HR
107,Grace,27,72000,Data Science
108,Hank,32,68000,Engineering
109,Ivy,29,62000,Data Science
110,Jack,31,71000,HR


## Key Operations
File Creation and Viewing
Create CSV File:
touch Data.csv

Edit File in Terminal:
vi Data.csv

View File Contents:
more Data.csv

Filtering and Searching
Search for 'Engineering' Department:
grep 'Engineering' Data.csv

Display First 5 Rows:
head -5 Data.csv

Display Last 3 Rows:
tail -3 Data.csv

Display 7th Row:
head -n7 Data.csv | tail -n1

Column Operations
Count Number of Columns:
awk -F, '{print NF; exit}' Data.csv

Display Only Ages (3rd Column):
awk -F, '{print $3}' Data.csv

Display Only Salaries (4th Column):
awk -F, '{print $4}' Data.csv
or
cut -d, -f4 Data.csv

Display 2nd and 3rd Columns (Name, Age):
awk -F, '{print $2 "," $3}' Data.csv

Save 2nd and 3rd Columns to New File:
awk -F, '{print $2 "," $3}' Data.csv > Day52.csv

Sorting Operations
Sort Salaries (Ascending):
awk -F, '{print $4}' Data.csv | sort

Sort Entire CSV by Salary (Ascending):
sort -t',' -k4,4n Data.csv

Sort by Age (Descending):
sort -t',' -k3,3nr Data.csv

Sort by Salary (Descending):
sort -t',' -k4,4 -r Data.csv

Sort Alphabetically by Name and Reverse by Salary:
sort -t',' -k4,4r Data.csv | sort -t',' -k2,2

---

## Output Example

```

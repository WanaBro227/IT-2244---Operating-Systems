# Q1) Fibonacci Series
# Output:- First 10 Fibonacci Series
# 0 1 1 2 3 5 8 13 21 34

echo ""
echo "Fibonacci Series...."
num1=0
num2=1

echo -n "$num1 $num2 "

for (( a=2; a<=10; a++ ))
do
    fibo=$((num1+num2))
    echo -n "$fibo "
    num1=$num2
    num2=$fibo
done
echo ""
echo ""

# Q2) Factorial Series
# Output:- Factorial of 5 is 120

read -p "Enter a number to find the factorial: " num
fact=1

for (( a=1; a<=num; a++ ))
do
    fact=$((fact*a))
done
echo "Factorial of $num = $fact"
echo ""

# Q3) Multiples of 3 between 1 and 50
echo "Multiples of 3 between 1 and 50"
count=1

for (( a=3; a<=50; a+=3 ))
do
    echo "$count x 3 = $a"
    count=$((count+1))
done
#print multiplication table using for loop
echo "....01...."
echo ""
for((a=1; a<=25; a++ ))
do
	echo "$a x 2 = $((a*2))"
done
echo ""

echo "....02...."
for ((i=1; i<=9; i+=2))
do
    for ((k=1; k<=9-i; k++))
    do
        echo -n " "
    done

    for ((j=1; j<=i; j++))
    do
        echo -n "* "
    done

    echo ""
done

for((i=7; i>=1; i-=2))
do
   for ((k=1; k<=9-i; k++))
    do
        echo -n " "
    done

    for ((j=1; j<=i; j++))
    do
        echo -n "* "
    done

    echo ""
done

#         *
#       * * *
#     * * * * *
#   * * * * * * *
# * * * * * * * * *
#   * * * * * * *
#     * * * * *
#       * * *
#         *


for((a=1; a<=4; a++))
do
   if [ $a -eq 2 ]
done
    
* * * * *
*       *
*       *
*       *
* * * * *


#Fibonacci series
echo "....03...."
echo ""
base1=0
base2=1
echo -n "$base1 $base2 "
for((a=2; a<=10; a++))
do
Fibo=$(($base1+$base2))
echo -n "$Fibo "
base1=$base2
base2=$Fibo
done

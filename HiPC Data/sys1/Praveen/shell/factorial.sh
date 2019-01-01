clear
echo "Enter a number "
read num1
fact=1
for (( i = 1 ; i <= $num1 ; i++ ))
do
	fact=`expr $fact \* $i`
done
echo "factorial of $num1 : $fact";

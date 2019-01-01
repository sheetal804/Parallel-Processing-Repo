echo " enter a number :"
read num1
sum=0
num2=$num1
while [ $num1 -gt 0 ]
do
	temp=`expr $num1 % 10`
	num1=`expr $num1 / 10`
	sum=`expr $sum + $temp`
done
echo "sum of digits of $num2 : $sum"

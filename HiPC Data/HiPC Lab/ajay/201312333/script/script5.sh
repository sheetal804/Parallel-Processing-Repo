echo "enter number"
read a
b=$a
sum=0
while [ $b -gt 0 ]
do
	c=`expr $b % 10`
	b=`expr $b / 10`
	sum=`expr $sum + $c`
done
echo "sum is $sum"

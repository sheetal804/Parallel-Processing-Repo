echo enter a number
read n
s=0
while [ $n -ne 0 ]
do
	d=`expr $n % 10`
	s=`expr $s + $d`
	n=`expr $n / 10`
done
echo summation  of digit $s

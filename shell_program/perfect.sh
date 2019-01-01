echo enter a number
read n
num=n
s=0
while [ $n -ne 0 ]
do
	d=`expr $n % 10`
	if [ $d -eq 0 ]
	then
	s=`expr $s + $d`
	fi
	n=`expr $n / 10`
done
	if [ $s -eq num ]
	then
	echo perfect number
	else
	echo not a perfect number
	fi

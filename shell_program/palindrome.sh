echo enter a number
read n
num=$n
r=0
while [ $n -ne 0 ]
do
	d=`expr $n % 10`
	r=`expr $r \* 10 + $d`
	n=`expr $n / 10`
done
if [ $r -eq $num ]
then
	echo palindrome
else
	echo not palindrome
fi

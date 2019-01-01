echo enter two numbers
read a b
while [ $a -lt $b ]
do
	x=$b
	b=`expr $b % $a`
	if [ $b -eq 0 ]
	then 
	b=$a
	fi
	a=$x

done
echo "gcd is $b"	

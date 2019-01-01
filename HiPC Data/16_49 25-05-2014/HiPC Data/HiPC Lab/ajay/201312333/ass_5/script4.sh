echo "enter number"
read a
#c= `expr $a % 10`
while [ $a -ge 0 ]
do
	c= `expr $a % 10'
	$a= $a / 10
        sum= $sum + $c
done
echo "$sum"		
	

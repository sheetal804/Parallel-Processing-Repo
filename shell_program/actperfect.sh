echo enter a number
read n
s=0
num=$n
for((i=1 ; i<n ; i++ ))
do
	d=`expr $n % $i`
	if [ $d -eq 0 ]
	then
		s=`expr $s + $i`
		
        fi
done
	
	if [  $s -eq $num ]
	then
	echo perfect number
	else
	echo not a perfect number
	fi

echo enter three numbers
read a b c
if [ $a -gt $b -a $a -gt $c ]
then
	echo maximum is $a
	if [ $b -gt $c	]
	then 
		echo maximum is $b
	else
		echo maximum is $c
	fi
elif [ $b -gt $a -a $b -gt $c ]
then
	echo maximum is $b
	if [ $a -gt $c	]
	then 
		echo maximum is $a
	else
		echo maximum is $c
	fi
else
	echo maximum is $c
	if [ $b -gt $a	]
	then 
		echo maximum is $b
	else
		echo maximum is $a
	fi
fi

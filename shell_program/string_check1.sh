echo enter two strings
read s
read s1
if [ -n $s1 ]
then
	if [ -n $s ]
	then
	echo not null strings
	fi
else
	

echo null strings
fi

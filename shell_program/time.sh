echo enter time in 24 hrs format
read time
if [ $time -lt 12 ]
then
	echo GOOD MORNING
elif [ $time -gt 12 -a $time -lt 16 -o $time -eq 12 ]
	then
	echo GOOD AFTERNOON
else
 	echo GOOD EVENING
fi
 

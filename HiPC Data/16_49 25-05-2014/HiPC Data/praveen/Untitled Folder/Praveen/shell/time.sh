time=`date | cut -c12-13`
if [ $time -lt 12 ]
then 
	echo "Good Morning"
elif [ $time -lt 16 ]
then 
	echo "Good Afternoon"
else
	echo "Good Evening"
fi

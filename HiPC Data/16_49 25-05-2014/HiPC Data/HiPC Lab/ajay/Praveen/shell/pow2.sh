clear
echo "Enter a number :"
read num
temp=1
counter=0
for (( i = 0 ; i <= num ; i++ ))
do
	temp=`expr 2 \* $temp`
	if [ $temp -eq $num ]
	then
		counter=`expr $counter + 1`
	fi
done
if [ $counter -gt 0 ]
then
	echo "Given interger is power of 2."
else
	echo "Given interger is not a power of 2."
fi

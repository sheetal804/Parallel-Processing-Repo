clear
echo "Enter a number :"
read num
sum=0
for (( i = 1 ; i < num ; i++ ))
do
	if [ `expr $num % $i` -eq 0 ]
	then
		sum=`expr $sum + $i`
	fi
done
if [ $sum -eq $num ]
then 
	echo "Given Number is a perfect number."
else
	echo "Given Number is not a perfect number."
fi 

echo "enter number"
read a
i=1
for (( i=2; i < $a; i++ ))
do
	if [ `expr $a % $i` -eq 0 ]
	then
	sum=`expr $sum + `
	fi
done
if [ $sum -eq $a ]
then
echo "perfect number"
else
echo "not perfect number"
fi

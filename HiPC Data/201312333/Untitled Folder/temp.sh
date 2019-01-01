i=0
read n
while [ $i -lt $n ]
do
	read str
	echo $str | cut -c 3
	i=`expr $i + 1`
done

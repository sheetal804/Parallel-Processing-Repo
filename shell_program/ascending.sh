echo enter the elements in array
for(( i=0 ; i<=4 ; i++ ))
do
	read x
	a[$i]=$x
done
echo original matrix
for(( i=0 ; i<=4 ; i++ ))
do
	echo ${a[$i]}
done

for(( i=1 ; i<=4 ; i++ ))
do
	x=`expr 4 - $i`
for(( j=1 ; j <=x ; j++ ))
do
	in=`expr j + 1`	
	if [ ${a[$j]} -gt ${a[$in]} ]
	then
		temp=${a[$j]}
		a[$j]=${a[$in]}
		a[$in]=$temp
	fi
done
echo sorted matrix
for(( i=0 ; i<=4 ; i++ ))
do
	echo "${a[$i]}"
done

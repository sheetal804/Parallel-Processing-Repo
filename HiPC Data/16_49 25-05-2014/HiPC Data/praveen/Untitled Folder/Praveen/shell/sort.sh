declare -a array
echo "Enter any 5 numbers"
for (( i = 0 ; i < 5 ; i++ ))
do
	read array[$i]
done
echo "Numbers before sorting : ${array[*]}"
for (( i = 0 ; i < 5 ; i++ ))
do
	for (( j = i ; j < 5 ; j++ ))
	do	
		if [ ${array[$i]} -gt ${array[$j]} ]
		then
			temp=${array[$i]}
			array[$i]=${array[$j]}
			array[$j]=$temp
		fi
	done
done

echo "Numbers after sorting  : ${array[*]}"


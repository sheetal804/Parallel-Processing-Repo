echo "enter in array:"
for (( i=0; i <= 4; i++ ))
do
	read x
	nos[$i]=$x
done
echo "original numbers in array:"
for (( i=0;i <=4; i++ ))
do
	echo ${nos[$i]}
done
for (( i=0;i <=4; i++ ))
	for (( j=$i; i <=4; i++ ))
	do
		if [ ${nos[$i]} -gt ${nos[$j]} ]
		then
			t=${nos[$i]}
			nos[$i]=${nos[$j]}
			nos[$j]=$t
		fi
   done
done


echo -e "\nSorted Numbers in Ascending Order:"
for (( i=0; i <= 4; i++ )) 
do
  echo ${nos[$i]}
done

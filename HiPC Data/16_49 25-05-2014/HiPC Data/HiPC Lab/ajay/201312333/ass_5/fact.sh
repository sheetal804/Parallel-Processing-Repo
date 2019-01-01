echo "enter a"
read a
fact=1
for(( i=1; i <= $a; i++ ))
	do
		fact=`expr $fact \* $i`
	
	done
echo " $fact "

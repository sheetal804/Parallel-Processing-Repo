echo enter a  starting nd ending index
read strt end
for(( i=$strt ; i<=$end ; i++ ))
do
	echo "$file.xyz$i"
done

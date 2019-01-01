clear 
echo "Enter two numbers : "
read a
read b
while [ $b -ne 0 ]
do
	r=`expr $a % $b`
	a=$b
	b=$r
done
echo "GCD : $a"

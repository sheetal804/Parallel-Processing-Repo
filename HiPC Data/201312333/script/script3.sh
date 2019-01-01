echo "enter yr:"
read yr
a=`expr $yr % 4`
b=`expr $yr % 100`
c=`expr $yr % 400`
if [ $a -eq 0 -a $b -eq 0 -o $c -eq 0 ]
then 
echo "leap yr"
else
echo "nt leap yr"
fi

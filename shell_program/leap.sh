echo enter year
read yr
x=`expr $yr % 4`
y=`expr $yr % 400`
z=`expr $yr % 100`
if [ $x -eq 0 -a $z -ne 0 -o $y -eq 0 ]
then
echo leap year
else
echo not a leap year
fi 

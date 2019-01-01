echo Enter a number
read a
if test expr $a % 2 -eq 0 
then
echo even
else 
echo odd
fi

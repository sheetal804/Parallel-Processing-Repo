echo "Enter two string:"
read string1
read string2

if test  $string1 != $string2
then
echo "strings are not equal"
else
echo "strings are equal"
fi

echo "Enter one  string:"
read string1

if test $string1
then 
echo "string is not null or not defined"
else
echo "string is not null and defined"
fi

echo "Enter one string:"
read string1


if test -n $string1
then 
echo "string is not null and does exist"
else
echo "string may not exist"
fi




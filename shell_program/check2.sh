echo enter two strings
read s
read s1
if [ -z $s ]
then
	if [ -z $s1 ]
	then 
	echo both the strings are not null and they exist
	else
	echo second string is null nd does not exist whereas first exist
	fi
else
	if [ -z $s1]
	then
	echo second string exist but first doesnot exist
	else
	echo both strings doesnot exist and are null
	fi
fi

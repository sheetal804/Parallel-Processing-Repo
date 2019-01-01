if [ -e $3 ]
then
	head -n $1 $3
	tail -n $2 $3
else
echo " $0 : error in $3"
exit 2
fi

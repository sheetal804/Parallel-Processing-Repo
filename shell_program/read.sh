if [ -e $3 ]
then
	tail -n $1 $3
else
echo " $0 : error in $3"
exit 2
fi

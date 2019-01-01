if [ -e $2 ]
then
tail -n $1 $2
else
echo "$0: Error opening file $2"
exit 2
fi

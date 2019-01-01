#echo "enter time"
#read t
temph=`date | cut -c12-13`
if [ $temph -lt 12 ]
then
echo "Good morning $LOGNAME"
fi
if [ $temph -ge 12 -a $temph -le 16 ]
then 
echo "Good afternoon $LOGNAME"
fi
if [ $temph -ge 16 -a $temph -le 18 ]
then
echo "Good evening $LOGNAME"
fi


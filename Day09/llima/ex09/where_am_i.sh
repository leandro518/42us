IP=`ifconfig | grep "inet " | cut -d' ' -f2`
NUMB=`ifconfig | grep "inet " | cut -d' ' -f2 | wc -l | tr -d ' '`

if [ $NUMB == 0 ]
then
echo Je suis perdu!
else
echo $IP
fi
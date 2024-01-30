#make sure it has x permissions

echo "my first script" 
#echo $1

 
if [ $1 == r ]
then
       echo "reverse sort"
       sort numbers -r
else
       echo "normal sort"
       sort numbers

fi
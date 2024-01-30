#make sure it has x permissions

echo "my second script" 

if [[ $1 =~ .docx ]]; 
then
       echo "is a .docx file"
else
       echo "not a .docx file"
fi
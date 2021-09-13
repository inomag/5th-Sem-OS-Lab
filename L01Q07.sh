# 1912160_L01Q07.sh

# Q.7. Write a shell script that takes a command-line argument and reports on whether it is a directory, a file, or something else.

# nano L01Q07.sh

echo "Enter File Name: "
read fileName
if [ -f $fileName ]
then
	echo $fileName "is a file"
elif [ -d $fileName ]
then
	echo $fileName "is a directory"
else
	echo $fileName "is something else"
fi

# $chmod +x L01Q07.sh
# $./L01Q07.sh

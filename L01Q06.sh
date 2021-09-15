# 1912160_L01Q06.sh

# Q.6. Write a shell script that accepts one or more file name as arguments and converts all of them to uppercase, provided they exist in the current directory.

# $nano L01Q06.sh

for fileName in *
do
	if [ -f $fileName ]
	then
		# echo $fileName | tr [:lower:] [:upper:]
		tr [:lower:] [:upper:] < $fileName
	fi
done
# $chmod +x L01Q06.sh
# $./L01Q06.sh

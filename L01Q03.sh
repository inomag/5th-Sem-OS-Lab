# 1912160_L01Q03.sh

# Q.3. Write a sed command that swaps the first and second words in each line in a file.

# $nano L01Q03.sh

echo "Enter file name where the swap operation is to be performed: "
read fileName
sed 's/\([^ ]*\) *\([^ ]*\)/ \2 \1/g' $fileName

# $chmod +x L01Q03.sh
# $./L01Q03.sh

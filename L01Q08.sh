# 1912160_L01Q08.sh

# Q.8. Write a shell script that determines the period for which a specified user is working on the system.

# nano L01Q08.sh

echo "Enter Login Username: "
read User
last $User

# $chmod +x L01Q08.sh
# $./L01Q08.sh
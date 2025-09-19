echo "Enter first string:"
read str1
echo "Enter second string:"
read str2
echo "Enter third string:"
read str3

concat_str="$str1$str2$str3"
len_str1=${#str1}
len_str2=${#str2}   
len_str3=${#str3} 
len_concat=${#concat_str}
echo "Concatenated String: $concat_str"
echo "Length of first string: $len_str1"
echo "Length of second string: $len_str2"
echo "Length of third string: $len_str3"
echo "Length of concatenated string: $len_concat"

    if [ "$len_str1" -gt "$len_str2" ] && [ "$len_str1" -gt "$len_str3" ]; then
        echo "The first string is the longest."
    elif [ "$len_str2" -gt "$len_str1" ] && [ "$len_str2" -gt "$len_str3" ]; then
        echo "The second string is the longest."
    elif [ "$len_str3" -gt "$len_str1" ] && [ "$len_str3" -gt "$len_str2" ]; then
        echo "The third string is the longest."
    else
        echo "There is a tie for the longest string."
    fi 
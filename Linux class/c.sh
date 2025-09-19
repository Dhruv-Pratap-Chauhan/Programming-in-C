#write the script that prompts to enter the filename if exists then counts the numbers of lines words and characters else ask choice to create a new flw with asking contents also displays the words characters and lines.

echo "Enter the filename:"
read filename
if [ -e "$filename" ]; then
    lines=$(wc -l < "$filename")
    words=$(wc -w < "$filename")
    chars=$(wc -c < "$filename")
    echo "Lines: $lines"
    echo "Words: $words"
    echo "Characters: $chars"
else
    echo "File does not exist. Do you want to create a new file? (y/n)"
    read choice
    if [ "$choice" == "y" ]; then
        echo "Enter the contents of the file (end with Ctrl+D):"
        cat > "$filename"
        lines=$(wc -l < "$filename")
        words=$(wc -w < "$filename")
        chars=$(wc -c < "$filename")
        echo "File created."
        echo "Lines: $lines"
        echo "Words: $words"
        echo "Characters: $chars"
    else
        echo "Exiting without creating a file."
    fi
fi
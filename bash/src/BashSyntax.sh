
echo hello; echo there
#semicolon seperates commands
:
	#colon is a no operation. useful as a placeholder
: > data.xxx
	# equivalent to touch
rm data.xxx



( echo I am Anon;
		echo but you still know my variables;
		anon="Nobody"; )

echo "Variable doesn't exist [[$anon]]"

#!/usr/bin/bash
# execute test files

verbose=false
flags=" -g -Wall -Werror -Wextra -pedantic -std=gnu89"
tempfile="tmp"
srcfiles="$HOME/me/alx/alx-low_level_programming/0x14-bit_manipulation"
testfile="$srcfiles/tests"
binfile="$testfile/test"


if [ $# -lt 1 ]; then
	echo "Usage: ex.sh <testfile>"; exit 1
fi
while getopts :v opt
do
	case "$opt" in
		v) verbose=true;;
		*) echo -n
	esac
done

shift $((OPTIND - 1))
testfile="$testfile/$1"
if ! [ -f "$testfile" ]; then
	echo -e "#include \"../main.h\"\n\n" > "$testfile"
	nvim "$testfile"
else
	testfilecontents=$(cat "$testfile")
	if [ "$testfilecontents" = "" ]; then
		echo -e "#include \"../main.h\"\n\n" > "$testfile"
		nvim "$testfile"
	fi
fi

if gcc $flags "$srcfiles/"*.c "$testfile" -o "$binfile" > "$tempfile" 2>&1; then
	"$binfile"
else
	echo "Compilation error"
	if [ $verbose = true ]; then
		cat "$tempfile"
	fi
fi
rm "$tempfile"

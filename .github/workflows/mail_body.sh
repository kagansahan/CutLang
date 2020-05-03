#!/bin/bash

cd $HOME/work/CutLang/CutLang/.github/workflows/artifacts

. $HOME/work/CutLang/CutLang/build/bin/thisroot.sh
root --version 2>&1 | tee ./temp2.txt
echo ""
cat raw_output.txt | grep -e error -e WARNING -e syntax -e CLA.sh > ./temp.txt

a=''
while IFS='' read -r i || [ -n "$i" ]; do
        if echo $i | grep -q -e "Check the input file" -e Aborted; then
                echo $a
                echo $i
                echo ""
        elif echo $i | grep -q error; then
                echo $a
        fi
        a=$i
done < ./temp.txt
rm temp.txt
mv temp2.txt temp.txt


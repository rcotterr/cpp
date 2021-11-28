make

echo 'check char'
echo '----a----'
./convert 'a'
echo

echo '----!----'
./convert '!'
echo

echo 'check int'
echo '----0----'
./convert '0'
echo

echo '----"-42"----'
./convert '-42'
echo

echo '----42----'
./convert '42'
echo

echo 'check float'
echo '----0.0f----'
./convert '0.0f'
echo

echo '----"-4.2f"----'
./convert '-4.2f'
echo

echo '----4.2f----'
./convert '4.2f'
echo

echo '----"-inff"----'
./convert '-inff'
echo

echo '----"+inff"----'
./convert '+inff'
echo

echo '----"nanf"----'
./convert 'nanf'
echo

echo 'check double'
echo '----0.0----'
./convert '0.0'
echo

echo '----"-4.2"----'
./convert '-4.2'
echo

echo '----4.2----'
./convert '4.2'
echo

echo '----"-inf"----'
./convert '-inf'
echo

echo '----"+inf"----'
./convert '+inf'
echo

echo '----"nan"----'
./convert 'nan'
echo

echo 'check invalid'
echo '----"1234567.0f   "----'
./convert "1234567.0f   "
echo

echo '----\\n----'
./convert '\n'
echo

echo '----"1234567.0ff"----'
./convert "1234567.0ff"
echo


echo 'check overflow'
echo '----"1234567234567898765433456789098765434567898765434567.4567654345f"----'
./convert "1234567234567898765433456789098765434567898765434567.4567654345f"
echo

echo '----"-2147483648.0"----'
./convert "-2147483648.0"
echo

echo '----"-2147483650.0f"----'
./convert "-2147483650.0f"
echo


echo '----"2147483648.0"----'
./convert "2147483648.0"
echo

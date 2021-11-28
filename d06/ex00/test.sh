make

echo 'check char'
echo '----a----'
./convert 'a'
echo

echo '----!----'
./convert '!'
echo

echo '----\\n----'
./convert '\n'
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


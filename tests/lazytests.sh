echo "🚀 pswap tests"
echo "================================"
echo
echo "test 1: 100 random integers. Target < 700 movements"
./push_swap "$(awk 'BEGIN{for(i=1;i<=100;i++) printf "%d%s", int(1000*rand()), (i==100?"\n":" ")}')" | wc -l
echo
echo "test 2: ./push_swap 2 1 3 6 5 8 [NO ERROR]"
./push_swap 2 1 3 6 5 8
echo
echo "test 3: ./push_swap 0 one 2 3 [ERROR]"
./push_swap 0 one 2 3
echo
echo "test 4: Counting sort: [4 67 3 87 23]"
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
echo
echo "test 5: Checking with ./checker_linux $ARG"
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
echo 
echo "test 6: Valgrind leak check"
ARG="4 67 3 87 23"
output=$(valgrind --error-exitcode=1 --leak-check=summary ./push_swap $ARG 2>&1)
if [ "$?" -eq 0 ] && ! echo "$output" | grep -qi 'definitely lost:.*[1-9]'; then
    echo "OK"
else
    echo "KO"
fi
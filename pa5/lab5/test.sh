#!/bin/bash
text=".txt"
t=".test"

testlist=(
	1
	2
	3
	4
	5
	6d
	6f
	6s
	7d
	7f
	7s
	8d
	8f
	8s
	9f
	9s
	10d
	10f
	10s
	11d
	11f
	11s
	12d
	12f
	12s
	13d
	13f
	13s
	14d
	14f
	14s
	15
	16
	17d
	17f
	17s
	18d
	18f
	18s
	19
	20
	21
	22
	23
	24
	)

#uncomment for dmc

make all 

echo "checking dmc..."

for i in ${testlist[@]}; do
	#echo "$i"
	./main dmc tests/t${i}${t} > tests/test_dmc/t${i}${text}
	if [[ $(diff tests/results_dmc/t${i}${text} tests/test_dmc/t${i}${text}) ]]; then
		echo "dmc: error in test $i"
	fi
done

if [[ $(diff -r tests/results_dmc tests/test_dmc) ]]; then
	echo ""
else
	echo "dmc: all tests passed!"
fi

#uncomment for fac

echo "checking fac..."

for i in ${testlist[@]}; do
	#echo "$i"
	./main fac tests/t${i}${t} > tests/test_fac/t${i}${text}
	if [[ $(diff tests/results_fac/t${i}${text} tests/test_fac/t${i}${text}) ]]; then
		echo "fac: error in test $i"
	fi
done

if [[ $(diff -r tests/results_fac tests/test_fac) ]]; then
	echo ""
else
	echo "fac: all tests passed!"
fi

#uncomment for sac

echo "checking sac..."

for i in ${testlist[@]}; do
	#echo "$i"
	./main sac tests/t${i}${t} > tests/test_sac/t${i}${text}
	if [[ $(diff tests/results_sac/t${i}${text} tests/test_sac/t${i}${text}) ]]; then
		echo "sac: error in test $i"
	fi
done

if [[ $(diff -r tests/results_sac tests/test_sac) ]]; then
	echo ""
else
	echo "sac: all tests passed!"
fi

exit 0
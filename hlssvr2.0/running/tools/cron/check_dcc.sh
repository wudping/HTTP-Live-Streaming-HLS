#!/bin/sh

dir_exe=../../bin

cur_dir=`dirname $0`
cd ${cur_dir}

cd ../../
process=`pwd | xargs -i basename {}`"_dcc"
cd ./tools/cron


count=`ps -ef |grep "./${process} ../etc/${process}.conf"|grep -v grep|wc -l`

if [ $count -lt 1 ]; then
	echo "[`date +'%Y-%m-%d %T'`] process ${process} number:$count, fork it!"
	cd ${dir_exe};./${process} ../etc/${process}.conf
#else
	#echo "[`date +'%Y-%m-%d %T'`] process ${process} number is normal:$count"
fi

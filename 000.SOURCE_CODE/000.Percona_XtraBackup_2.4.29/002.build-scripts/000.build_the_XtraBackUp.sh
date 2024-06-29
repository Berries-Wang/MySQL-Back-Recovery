#!/bin/bash
CURR_DIR=`pwd`

rm -rf "${CURR_DIR}/../001.build-output"
mkdir -p "${CURR_DIR}/../001.build-output"

echo "进入目录:${CURR_DIR}"
cd ${CURR_DIR}/../001.build-output
echo '当前目录: '  `pwd`

cmake \
     -DWITH_DEBUG=1 \
     -DWITH_BOOST=${CURR_DIR}/../libs/boost_1_59_0 \
     ../000.percona-xtrabackup-release-2.4.29 

# 安装到指定目录
INSTALL_DIR="${CURR_DIR}/../001.build-output/XtraBackUp_Install_Dir"
mkdir "${INSTALL_DIR}"
make DESTDIR="${INSTALL_DIR}" install
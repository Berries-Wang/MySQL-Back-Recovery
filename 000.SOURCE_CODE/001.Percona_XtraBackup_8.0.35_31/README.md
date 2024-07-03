# Percona_XtraBackup_8.0.35_31
## 源码获取方法
```shell
  git clone https://github.com/percona/percona-xtrabackup.git
  cd percona-xtrabackup
  git checkout percona-xtrabackup-8.0.35-31
  # 没有这一步,会在编译中报文件不存在的错误
  git submodule update --init --recursive 
```


## 编译环境
### gcc
```txt
   wei@Berries-Wang:~/WorkSpace/Open_Source/percona-xtrabackup$ gcc -v
   Using built-in specs.
   COLLECT_GCC=gcc
   COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/10/lto-wrapper
   OFFLOAD_TARGET_NAMES=nvptx-none:amdgcn-amdhsa:hsa
   OFFLOAD_TARGET_DEFAULT=1
   Target: x86_64-linux-gnu
   Configured with: ../src/configure -v --with-pkgversion='Ubuntu 10.5.0-1ubuntu1~20.04' --with-bugurl=file:///usr/share/doc/gcc-10/README.Bugs --enable-languages=c,ada,c++,go,brig,d,fortran,objc,obj-c++,m2 --prefix=/usr --with-gcc-major-version-only --program-suffix=-10 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --enable-bootstrap --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-plugin --enable-default-pie --with-system-zlib --enable-libphobos-checking=release --with-target-system-zlib=auto --enable-objc-gc=auto --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none=/build/gcc-10-g5VkgL/gcc-10-10.5.0/debian/tmp-nvptx/usr,amdgcn-amdhsa=/build/gcc-10-g5VkgL/gcc-10-10.5.0/debian/tmp-gcn/usr,hsa --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu --with-build-config=bootstrap-lto-lean --enable-link-mutex
   Thread model: posix
   Supported LTO compression algorithms: zlib zstd
   gcc version 10.5.0 (Ubuntu 10.5.0-1ubuntu1~20.04) 
   
```



## 参考资料
1. [https://docs.percona.com/percona-xtrabackup/innovation-release/compile-xtrabackup.html](https://docs.percona.com/percona-xtrabackup/innovation-release/compile-xtrabackup.html)
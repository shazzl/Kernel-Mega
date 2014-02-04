#!/bin/bash

### select toolchain
## GCC 4.6 Linaro
CUR_TC=/home/ruby/Toolchains/arm-eabi-linaro-4.6.2/bin/
## GCC 4.7 Linaro
##CUR_TC=/home/ruby/Toolchains/arm-linux-androideabi-4.7/bin/
## GCC 4.8 Linaro
##CUR_TC=/home/ruby/Toolchains/linaro_4.6.4/bin/
## GCC 4.8 Linaro
##CUR_TC=/home/ruby/Toolchains/linaro_4.8.3/bin/

### compile kernel
CROSS_COMPILE=${CUR_TC}arm-eabi-
export ARCH=arm make
VARIANT_DEFCONFIG=msm8930_melius_eur_lte_defconfig cml1_defconfig

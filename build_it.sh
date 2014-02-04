### select toolchain
## GCC 4.6 Linaro
CUR_TC=/home/ruby/Toolchains/arm-eabi-linaro-4.6.2/bin/
## GCC 4.7 Linaro
##CUR_TC=/home/ruby/Toolchains/arm-linux-androideabi-4.7/bin/
## GCC 4.8 Linaro
##CUR_TC=/home/ruby/Toolchains/linaro_4.8.3/bin/

### compile kernel
ARCH=arm CROSS_COMPILE=${CUR_TC}arm-eabi- make -j8

echo "checking for compiled kernel..."
if [ -f arch/arm/boot/zImage ]
then

mkdir -p ../final_files


### copy zImage
cp arch/arm/boot/zImage ../final_files/.


echo "DONE"

fi

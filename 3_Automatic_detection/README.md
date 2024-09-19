# Using cross compilation:

## Install on your machine:

* sudo apt install libc6-arm64-cross
* sudo apt install g++-11-aarch64-linux-gnu
* sudo apt install qemu-user

## Compile

* make CC=aarch64-linux-gnu-g++-11

## To run the binary:

*  qemu-aarch64 -L /usr/aarch64-linux-gnu/ main.bin
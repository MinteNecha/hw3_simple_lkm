#!/bin/bash
echo "We are about to make and load a kernel module.\n"
sleep 2
make
sudo insmod lkm.ko
sudo dmesg | tail -1
sleep 5
sudo rmmod lkm
sudo dmesg | tail -1
sleep 1
echo "Time to clean."
sleep 2
make clean

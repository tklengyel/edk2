~/wksp_efi/edk2-fork$ git checkout ULibfuzzer
~/wksp_efi/edk2-fork$ build -p OvmfPkg/OvmfPkgIa32X64.dsc -t GCC5 -a IA32 -a X64 -b NOOPT -n 5 -DDEBUG_ON_SERIAL_PORT -m MdeModulePkg/Bus/Usb/UsbMassStorageDxe/ULibfuzzer.inf
~/wksp_efi/edk2-fork$ build -p OvmfPkg/OvmfPkgIa32X64.dsc -t GCC5 -a IA32 -a X64 -b NOOPT -n 5 -DDEBUG_ON_SERIAL_PORT

export EdkPath=~/wksp_efi/edk2-fork2
sudo qemu-system-x86_64 -m 5120 -monitor stdio -smp 1 -machine q35 --enable-kvm -cpu SandyBridge,+rdrand \
-serial file:$EdkPath/Build/rootfs/serial.log \
-bios $EdkPath/Build/Ovmf3264/NOOPT_GCC5/FV/OVMF.fd \
-hda fat:$EdkPath/Build/rootfs \
-global e1000.romfile="" \
-drive if=none,id=drive2,format=raw,file=/home/jshi19/workspace/simics5-project/images/512M.img \
-drive if=none,id=drive3,format=raw,file=$EdkPath/Build/rootfs/1M.img \
-device edu \
-device qemu-xhci,id=xhci \
-device usb-ehci,id=ehci \
-device ich9-usb-uhci1,id=uhci \
-device usb-storage,id=ums,bus=xhci.0,drive=drive2 \
-device usb-storage,id=ums2,bus=xhci.0,drive=drive3  \
-device usb-mouse,bus=ehci.0 \
-device usb-hub,id=hub1,bus=uhci.0

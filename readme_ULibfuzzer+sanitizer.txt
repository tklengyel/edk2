~/wksp_efi/edk2-fork2$ git checkout ULibfuzzer+sanitizer
~/wksp_efi/edk2-fork2$ build -p OvmfPkg/OvmfPkgIa32X64.dsc -t CLANGSAN40 -a IA32 -a X64 -b NOOPT -n 5 -DDEBUG_ON_SERIAL_PORT
~/wksp_efi/edk2$ cd Build/rootfs/
~/wksp_efi/edk2-fork2/Build/rootfs$ cp ~/wksp_efi/edk2-fork2/Build/Ovmf3264/NOOPT_CLANGSAN40/X64/ULibfuzzer_UsbMassStorageDxe.efi .
~/wksp_efi/edk2/Build/rootfs$ sudo qemu-system-x86_64  -serial file:serial.txt -m 5120 -hda fat:. -monitor stdio --enable-kvm -smp 4 -bios ../Ovmf3264/NOOPT_CLANGSAN40/FV/OVMF.fd -global e1000.romfile="" -machine q35 -device edu -drive if=none,id=drive2,format=raw,file=/home/jshi19/workspace/simics5-project/images/512M.img -device qemu-xhci,id=xhci -device usb-storage,drive=drive2 -cpu SandyBridge,+rdrand



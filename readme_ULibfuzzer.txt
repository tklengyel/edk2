~/wksp_efi/edk2-fork$ git checkout ULibfuzzer
~/wksp_efi/edk2-fork$ build -p OvmfPkg/OvmfPkgIa32X64.dsc -t GCC5 -a IA32 -a X64 -b NOOPT -n 5 -DDEBUG_ON_SERIAL_PORT -m MdeModulePkg/Bus/Usb/UsbMassStorageDxe/ULibfuzzer.inf
~/wksp_efi/edk2-fork$ build -p OvmfPkg/OvmfPkgIa32X64.dsc -t GCC5 -a IA32 -a X64 -b NOOPT -n 5 -DDEBUG_ON_SERIAL_PORT
~/wksp_efi/edk2-fork/Build/rootfs$ cd Build/rootfs/
~/wksp_efi/edk2-fork/Build/rootfs$ cp ~/wksp_efi/edk2-fork/Build/Ovmf3264/NOOPT_GCC5/X64/ULibfuzzer_UsbMassStorageDxe.efi .
sudo qemu-system-x86_64 -serial file:/home/jshi19/wksp_efi/edk2-fork/Build/rootfs/serial.log -m 5120 -monitor stdio -smp 1 -bios ~/wksp_efi/edk2-fork/Build/Ovmf3264/NOOPT_GCC5/FV/OVMF.fd -global e1000.romfile="" -hda fat:/home/jshi19/wksp_efi/edk2-fork/Build/rootfs -machine q35 --enable-kvm -device edu -cpu SandyBridge,+rdrand



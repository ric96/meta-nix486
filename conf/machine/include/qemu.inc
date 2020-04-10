MACHINE_FEATURES = "alsa bluetooth usbgadget screen vfat"

MACHINEOVERRIDES =. "qemuall:"

IMAGE_FSTYPES += "tar.bz2 ext4"

# Don't include kernels in standard images
RDEPENDS_${KERNEL_PACKAGE_NAME}-base = ""

EXTRA_IMAGEDEPENDS += "qemu-native qemu-helper-native"

# Provide the nfs server kernel module for all qemu images
KERNEL_FEATURES_append_pn-linux-yocto = " features/nfsd/nfsd-enable.scc"
KERNEL_FEATURES_append_pn-linux-yocto-rt = " features/nfsd/nfsd-enable.scc"

IMAGE_CLASSES += "qemuboot"

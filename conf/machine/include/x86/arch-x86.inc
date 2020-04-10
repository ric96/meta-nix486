#
# X86 Architecture definition (IA32, X86_64, and X32)
#

DEFAULTTUNE ?= "x86"
TARGET_FPU ?= ""
X86ARCH32 ?= "i486"

TUNE_PKGARCH = "${TUNE_PKGARCH_tune-${DEFAULTTUNE}}"

# ELF32 ABI
TUNEVALID[m32] = "IA32 ELF32 standard ABI"
TUNECONFLICTS[m32] = "m64 mx32"
TUNE_ARCH .= "${@bb.utils.contains('TUNE_FEATURES', 'm32', '${X86ARCH32}', '' ,d)}"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'm32', ' -m32', '', d)}"
MACHINEOVERRIDES =. "${@bb.utils.contains('TUNE_FEATURES', 'm32', 'x86:', '' ,d)}"

# Default Tune configurations
AVAILTUNES += "x86"
TUNE_FEATURES_tune-x86 = "m32"
BASE_LIB_tune-x86 = "lib"
TUNE_PKGARCH_tune-x86 = "x86"
PACKAGE_EXTRA_ARCHS_tune-x86 = "${TUNE_PKGARCH_tune-x86}"

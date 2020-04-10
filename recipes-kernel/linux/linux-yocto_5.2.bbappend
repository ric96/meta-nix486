FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
SRC_URI += "file://i486.cfg"

KBRANCH_generic486  = "v5.2/standard/base"

KMACHINE_generic486 ?= "common-pc"

SRCREV_machine_generic486 ?= "25b14cdf9659c68ab32d66616dfdbbe2ece3fd94"

COMPATIBLE_MACHINE_generic486 = "generic486"

LINUX_VERSION_generic486 = "5.2.17"

LICENSE = "Proprietary"
LIC_FILES_CHKSUM = "file://nv_tegra/LICENSE;md5=60ad17cc726658e8cf73578bea47b85f \
                    file://nv_tegra/LICENSE.brcm_patchram_plus;md5=38fb07f0dacf4830bc57f40a0fb7532e"

SRC_URI = "http://developer2.download.nvidia.com/embedded/L4T/r28_Release_v1.0/BSP/Tegra210_Linux_R${PV}_aarch64.tbz2"
SRC_URI[md5sum] = "a2686c154006f8fdf232bf9f2e7d01e6"
SRC_URI[sha256sum] = "0c0ab92bcba1f3be984b2c4311f9326c249a758247897af5792130de26a3fe8d"
SRC_URI += "\
    file://xorg.conf \
    file://nvcamera-daemon.init \
    file://nvcamera-daemon.service \
    file://argus-daemon.init \
    file://argus-daemon.service \
"

S = "${TMPDIR}/work-shared/tegra-binaries-${PV}-${PR}/Linux_for_Tegra"
B = "${WORKDIR}/build"

INHIBIT_PACKAGE_STRIP = "1"
INHIBIT_PACKAGE_DEBUG_SPLIT = "1"

COMPATIBLE_MACHINE = "(tegra210)"

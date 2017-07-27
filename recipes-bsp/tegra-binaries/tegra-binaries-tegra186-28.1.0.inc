LICENSE = "Proprietary"
LIC_FILES_CHKSUM = "file://nv_tegra/LICENSE;md5=60ad17cc726658e8cf73578bea47b85f \
                    file://nv_tegra/LICENSE.brcm_patchram_plus;md5=38fb07f0dacf4830bc57f40a0fb7532e"

SRC_URI = "http://developer2.download.nvidia.com/embedded/L4T/r28_Release_v1.0/BSP/Tegra186_Linux_R${PV}_aarch64.tbz2"
SRC_URI[md5sum] = "d8a1b64780de38d41e2d26c54b87e2ab"
SRC_URI[sha256sum] = "8c0634da2a47011dceb14bb4639ad8abcf89b0b67d8bd9cd58edbd251ccb321c"
SRC_URI += "\
    file://xorg.conf \
    file://nvcamera-daemon.init \
    file://nvcamera-daemon.service \
    file://argus-daemon.init \
    file://argus-daemon.service \
    file://tegra186-flash-helper.sh \
"

S = "${TMPDIR}/work-shared/tegra-binaries-${PV}-${PR}/Linux_for_Tegra"
B = "${WORKDIR}/build"

do_preconfigure() {
    cp ${WORKDIR}/xorg.conf ${WORKDIR}/*-daemon.* ${S}
    cp ${WORKDIR}/tegra186-flash-helper.sh ${S}
}

INHIBIT_PACKAGE_STRIP = "1"
INHIBIT_PACKAGE_DEBUG_SPLIT = "1"

COMPATIBLE_MACHINE = "(tegra186)"

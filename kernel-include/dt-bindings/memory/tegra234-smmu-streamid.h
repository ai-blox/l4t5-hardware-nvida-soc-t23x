/*
 * Copyright (c) 2019-2021, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * This file contains list of SMMU Stream IDs used in Tegra234.
 * There is duplicate copy of this file present in
 * kernel/nvidia-t23x/include/dt-bindings/memory/tegra234-smmu-streamid.h
 * make sure to update both to keep it in sync.
 */


#ifndef _DT_BINDINGS_MEMORY_TEGRA234_SMMU_STREAMID_H
#define _DT_BINDINGS_MEMORY_TEGRA234_SMMU_STREAMID_H

#define TEGRA_SID_INVALID		0x0
#define TEGRA_SID_PASSTHROUGH		0x7f

/*
 * Set IOMMU DT version to DT_VERSION_2 for HYPERVISOR/Server VM dtb
 */
#if defined (T23x_WORK_AROUND)
#undef  DT_VERSION_2
#define  DT_VERSION_2           2
#undef  TEGRA_IOMMU_DT_VERSION
#define TEGRA_IOMMU_DT_VERSION  DT_VERSION_2
#endif

/*
 * Set IOMMU DT version to DT_VERSION_2 for QNX
 */
#if defined (__QNX__)
#undef  TEGRA_IOMMU_DT_VERSION
#define TEGRA_IOMMU_DT_VERSION			DT_VERSION_2
#endif

#if TEGRA_IOMMU_DT_VERSION >= DT_VERSION_2

/*
 ********* ISO SMMU STREAM IDs ***********
 */
#define TEGRA_SID_ISO_NVDISPLAY		0x1U
#define TEGRA_SID_ISO_VI		0x2U
#define TEGRA_SID_ISO_VIFALC		0x3U
#define TEGRA_SID_ISO_VI2		0x4U
#define TEGRA_SID_ISO_VI2FALC		0x5U

#define TEGRA_SID_ISO_VI_VM2		0x6U
#define TEGRA_SID_ISO_VI2_VM2		0x7U

/*
 ********* NISO0 SMMU STREAM IDs **********
 */
#define TEGRA_SID_NISO0_AON		0x1U
#define TEGRA_SID_NISO0_APE		0x2U
#define TEGRA_SID_NISO0_HDA		0x3U
#define TEGRA_SID_NISO0_GPCDMA_0	0x4U
#define TEGRA_SID_NISO0_ETR		0x5U
#define TEGRA_SID_NISO0_MGBE		0x6U
#define TEGRA_SID_NISO0_NVDISPLAY	0x7U
#define TEGRA_SID_NISO0_DCE		0x8U
#define TEGRA_SID_NISO0_PSC		0x9U
#define TEGRA_SID_NISO0_RCE		0xAU
#define TEGRA_SID_NISO0_SCE		0xBU
#define TEGRA_SID_NISO0_UFSHC		0xCU

#define TEGRA_SID_NISO0_APE_1		0xDU

/* The GPC DMA clients. */
#define TEGRA_SID_NISO0_GPCDMA_1	0xEU
#define TEGRA_SID_NISO0_GPCDMA_2	0xFU
#define TEGRA_SID_NISO0_GPCDMA_3	0x10U
#define TEGRA_SID_NISO0_GPCDMA_4	0x11U

#define TEGRA_SID_NISO0_PCIE0		0x12U
#define TEGRA_SID_NISO0_PCIE4		0x13U
#define TEGRA_SID_NISO0_PCIE5		0x14U
#define TEGRA_SID_NISO0_PCIE6		0x15U

#define TEGRA_SID_NISO0_RCE_VM2		0x16U
#define TEGRA_SID_NISO0_RCE_SERVER	0x17U

#define TEGRA_SID_NISO0_SMMU_TEST	0x18U

/* UFS virtual SIDs for storage clients */
#define TEGRA_SID_NISO0_UFS_1		0x19U
#define TEGRA_SID_NISO0_UFS_2		0x1AU
#define TEGRA_SID_NISO0_UFS_3		0x1BU
#define TEGRA_SID_NISO0_UFS_4		0x1CU
#define TEGRA_SID_NISO0_UFS_5		0x1DU
#define TEGRA_SID_NISO0_UFS_6		0x1EU

#define TEGRA_SID_NISO0_NVDLA1		0x23U
#define TEGRA_SID_NISO0_NVENC		0x24U
#define TEGRA_SID_NISO0_NVJPG1		0x25U
#define TEGRA_SID_NISO0_OFA		0x26U

/* Reserved streamid corrosponding to NISO1 host1x clients */
#define TEGRA_SID_NISO0_RESV0		0x27U
#define TEGRA_SID_NISO0_RESV1		0x28U
#define TEGRA_SID_NISO0_RESV2		0x29U
#define TEGRA_SID_NISO0_RESV3		0x2AU
#define TEGRA_SID_NISO0_RESV4		0x2BU
#define TEGRA_SID_NISO0_RESV5		0x2CU
#define TEGRA_SID_NISO0_RESV6		0x2DU
#define TEGRA_SID_NISO0_RESV7		0x2EU
#define TEGRA_SID_NISO0_RESV8		0x2FU
#define TEGRA_SID_NISO0_RESV9		0x30U
#define TEGRA_SID_NISO0_RESV10		0x31U
#define TEGRA_SID_NISO0_RESV11		0x32U
#define TEGRA_SID_NISO0_RESV12		0x33U
#define TEGRA_SID_NISO0_RESV13		0x34U

/* Host1x virtualization clients. */
#define TEGRA_SID_NISO0_HOST1X_CTX0	0x35U
#define TEGRA_SID_NISO0_HOST1X_CTX1	0x36U
#define TEGRA_SID_NISO0_HOST1X_CTX2	0x37U
#define TEGRA_SID_NISO0_HOST1X_CTX3	0x38U
#define TEGRA_SID_NISO0_HOST1X_CTX4	0x39U
#define TEGRA_SID_NISO0_HOST1X_CTX5	0x3AU
#define TEGRA_SID_NISO0_HOST1X_CTX6	0x3BU
#define TEGRA_SID_NISO0_HOST1X_CTX7	0x3CU

/* Reserved streamid corrosponding to NISO1 host1x clients */
#define TEGRA_SID_NISO0_RESV14		0x3DU
#define TEGRA_SID_NISO0_RESV15		0x3EU
#define TEGRA_SID_NISO0_RESV16		0x3FU
#define TEGRA_SID_NISO0_RESV17		0x40U
#define TEGRA_SID_NISO0_RESV18		0x41U
#define TEGRA_SID_NISO0_RESV19		0x42U
#define TEGRA_SID_NISO0_RESV20		0x43U
#define TEGRA_SID_NISO0_RESV21		0x44U
#define TEGRA_SID_NISO0_RESV22		0x45U
#define TEGRA_SID_NISO0_RESV23		0x46U
#define TEGRA_SID_NISO0_RESV24		0x47U
#define TEGRA_SID_NISO0_RESV25		0x48U

/* MGBE virtualization clients. */
#define TEGRA_SID_NISO0_MGBE_VF1	0x49U
#define TEGRA_SID_NISO0_MGBE_VF2	0x4AU
#define TEGRA_SID_NISO0_MGBE_VF3	0x4BU
#define TEGRA_SID_NISO0_MGBE_VF4	0x4CU
#define TEGRA_SID_NISO0_MGBE_VF5	0x4DU
#define TEGRA_SID_NISO0_MGBE_VF6	0x4EU
#define TEGRA_SID_NISO0_MGBE_VF7	0x4FU
#define TEGRA_SID_NISO0_MGBE_VF8	0x50U
#define TEGRA_SID_NISO0_MGBE_VF9	0x51U
#define TEGRA_SID_NISO0_MGBE_VF10	0x52U
#define TEGRA_SID_NISO0_MGBE_VF11	0x53U
#define TEGRA_SID_NISO0_MGBE_VF12	0x54U
#define TEGRA_SID_NISO0_MGBE_VF13	0x55U
#define TEGRA_SID_NISO0_MGBE_VF14	0x56U
#define TEGRA_SID_NISO0_MGBE_VF15	0x57U
#define TEGRA_SID_NISO0_MGBE_VF16	0x58U
#define TEGRA_SID_NISO0_MGBE_VF17	0x59U
#define TEGRA_SID_NISO0_MGBE_VF18	0x5AU
#define TEGRA_SID_NISO0_MGBE_VF19	0x5BU
#define TEGRA_SID_NISO0_MGBE_VF20	0x5CU

/* FIXME: Hack to support FSI Client on VDK */
#define TEGRA_SID_NISO0_FSI			0x5DU

/*
 ********* NISO1 SMMU STREAM IDs **********
 */
#define TEGRA_SID_NISO1_SDMMC1A		0x1U
#define TEGRA_SID_NISO1_SDMMC4A		0x2U
#define TEGRA_SID_NISO1_EQOS		0x3U
#define TEGRA_SID_NISO1_HWMP_PMA	0x4U
#define TEGRA_SID_NISO1_PCIE1		0x5U
#define TEGRA_SID_NISO1_PCIE2		0x6U
#define TEGRA_SID_NISO1_PCIE3		0x7U
#define TEGRA_SID_NISO1_PCIE7		0x8U
#define TEGRA_SID_NISO1_PCIE8		0x9U
#define TEGRA_SID_NISO1_PCIE9		0xAU
#define TEGRA_SID_NISO1_PCIE10		0xBU
#define TEGRA_SID_NISO1_QSPI0		0xCU
#define TEGRA_SID_NISO1_QSPI1		0xDU
#define TEGRA_SID_NISO1_XUSB_HOST	0xEU
#define TEGRA_SID_NISO1_XUSB_DEV	0xFU
#define TEGRA_SID_NISO1_BPMP		0x10U
#define TEGRA_SID_NISO1_FSI		0x11U

/* PVA virtualization clients. */
#define TEGRA_SID_NISO1_PVA0_VM0	0x12U
#define TEGRA_SID_NISO1_PVA0_VM1	0x13U
#define TEGRA_SID_NISO1_PVA0_VM2	0x14U
#define TEGRA_SID_NISO1_PVA0_VM3	0x15U
#define TEGRA_SID_NISO1_PVA0_VM4	0x16U
#define TEGRA_SID_NISO1_PVA0_VM5	0x17U
#define TEGRA_SID_NISO1_PVA0_VM6	0x18U
#define TEGRA_SID_NISO1_PVA0_VM7	0x19U

#define TEGRA_SID_NISO1_XUSB_VF0	0x1AU
#define TEGRA_SID_NISO1_XUSB_VF1	0x1BU
#define TEGRA_SID_NISO1_XUSB_VF2	0x1CU
#define TEGRA_SID_NISO1_XUSB_VF3	0x1DU

/* EQOS virtual functions */
#define TEGRA_SID_NISO1_EQOS_VF1	0x1EU
#define TEGRA_SID_NISO1_EQOS_VF2	0x1FU
#define TEGRA_SID_NISO1_EQOS_VF3	0x20U
#define TEGRA_SID_NISO1_EQOS_VF4	0x21U

#define TEGRA_SID_NISO1_ISP_VM2		0x22U

/* Reserved streamid corrosponding to NISO0 host1x clients */
#define TEGRA_SID_NISO1_RESV0		0x23U
#define TEGRA_SID_NISO1_RESV1		0x24U
#define TEGRA_SID_NISO1_RESV2		0x25U
#define TEGRA_SID_NISO1_RESV3		0x26U

#define TEGRA_SID_NISO1_HC		0x27U
#define TEGRA_SID_NISO1_ISP		0x28U
#define TEGRA_SID_NISO1_NVDEC		0x29U
#define TEGRA_SID_NISO1_NVJPG		0x2AU
#define TEGRA_SID_NISO1_NVDLA0		0x2BU
#define TEGRA_SID_NISO1_PVA0		0x2CU

#define TEGRA_SID_NISO1_SES_SE0		0x2DU
#define TEGRA_SID_NISO1_SES_SE1		0x2EU
#define TEGRA_SID_NISO1_SES_SE2		0x2FU
#define TEGRA_SID_NISO1_SEU1_SE0	0x30U
#define TEGRA_SID_NISO1_SEU1_SE1	0x31U
#define TEGRA_SID_NISO1_SEU1_SE2	0x32U
#define TEGRA_SID_NISO1_TSEC		0x33U
#define TEGRA_SID_NISO1_VIC		0x34U

/* Host1x virtualization clients. */
#define TEGRA_SID_NISO1_HOST1X_CTX0	0x35U
#define TEGRA_SID_NISO1_HOST1X_CTX1	0x36U
#define TEGRA_SID_NISO1_HOST1X_CTX2	0x37U
#define TEGRA_SID_NISO1_HOST1X_CTX3	0x38U
#define TEGRA_SID_NISO1_HOST1X_CTX4	0x39U
#define TEGRA_SID_NISO1_HOST1X_CTX5	0x3AU
#define TEGRA_SID_NISO1_HOST1X_CTX6	0x3BU
#define TEGRA_SID_NISO1_HOST1X_CTX7	0x3CU

/* Host1x command buffers */
#define TEGRA_SID_NISO1_HC_VM0		0x3DU
#define TEGRA_SID_NISO1_HC_VM1		0x3EU
#define TEGRA_SID_NISO1_HC_VM2		0x3FU
#define TEGRA_SID_NISO1_HC_VM3		0x40U
#define TEGRA_SID_NISO1_HC_VM4		0x41U
#define TEGRA_SID_NISO1_HC_VM5		0x42U
#define TEGRA_SID_NISO1_HC_VM6		0x43U
#define TEGRA_SID_NISO1_HC_VM7		0x44U

/* SE data buffers */
#define TEGRA_SID_NISO1_SE_VM0		0x45U
#define TEGRA_SID_NISO1_SE_VM1		0x46U
#define TEGRA_SID_NISO1_SE_VM2		0x47U

#define TEGRA_SID_NISO1_ISPFALC		0x48U

#define TEGRA_SID_NISO1_SMMU_TEST	0x49U

#else

#define TEGRA_SID_AON		0x1
#define TEGRA_SID_APE		0x2
#define TEGRA_SID_GPCDMA_0	0x3
#define TEGRA_SID_BPMP		0x4
#define TEGRA_SID_DCE		0x5
#define TEGRA_SID_NVDLA0	0x6
#define TEGRA_SID_NVDLA1	0x7
#define TEGRA_SID_EQOS		0x8
#define TEGRA_SID_ETR		0x9
#define TEGRA_SID_HDA		0xA
#define TEGRA_SID_HC		0xB
#define TEGRA_SID_ISP		0xC
#define TEGRA_SID_MGBE		0xD
#define TEGRA_SID_NVDEC		0xE
#define TEGRA_SID_NVDISPLAY_NISO	0xF
#define TEGRA_SID_NVDISPLAY	0x10
#define TEGRA_SID_NVENC		0x11
#define TEGRA_SID_NVJPG1	0x12
#define TEGRA_SID_NVJPG		0x13
#define TEGRA_SID_OFA		0x14
#define TEGRA_SID_PCIE0		0x15
#define TEGRA_SID_PCIE1		0x16
#define TEGRA_SID_PCIE2		0x17
#define TEGRA_SID_PCIE3		0x18
#define TEGRA_SID_PCIE4		0x19
#define TEGRA_SID_PCIE5		0x1A
#define TEGRA_SID_PCIE6		0x1B
#define TEGRA_SID_PCIE7		0x1C
#define TEGRA_SID_PCIE8		0x1D
#define TEGRA_SID_PCIE9		0x1E
#define TEGRA_SID_PCIE10	0x1F
#define TEGRA_SID_PSC		0x20
#define TEGRA_SID_PVA0		0x21
#define TEGRA_SID_PMA		0x22
#define TEGRA_SID_RCE		0x23
#define TEGRA_SID_SCE		0x24
#define TEGRA_SID_SDMMC1A	0x25
#define TEGRA_SID_SDMMC4A	0x26
#define TEGRA_SID_SE		0x27
#define TEGRA_SID_SE1		0x28
#define TEGRA_SID_SE2		0x29
#define TEGRA_SID_SEU1		0x2A
#define TEGRA_SID_TSEC		0x2B
#define TEGRA_SID_UFSHC		0x2D
#define TEGRA_SID_VIC		0x2E
#define TEGRA_SID_VI		0x2F
#define TEGRA_SID_VIFALC	0x30
#define TEGRA_SID_VI2		0x31
#define TEGRA_SID_VI2FALC	0x32
#define TEGRA_SID_XSPI0		0x33
#define TEGRA_SID_XSPI1		0x34
#define TEGRA_SID_XUSB_HOST	0x35
#define TEGRA_SID_XUSB_DEV	0x36
#define TEGRA_SID_FSI		0x37
#define TEGRA_SID_ISPFALC	0x38

#define TEGRA_SID_SMMU_TEST	0x39

/* PVA virtualization clients. */
#define TEGRA_SID_PVA_VM0	0x3A
#define TEGRA_SID_PVA_VM1	0x3B
#define TEGRA_SID_PVA_VM2	0x3C
#define TEGRA_SID_PVA_VM3	0x3D
#define TEGRA_SID_PVA_VM4	0x3E
#define TEGRA_SID_PVA_VM5	0x3F
#define TEGRA_SID_PVA_VM6	0x40
#define TEGRA_SID_PVA_VM7	0x41

/* Host1x virtualization clients. */
#define TEGRA_SID_HOST1X_CTX0	0x51
#define TEGRA_SID_HOST1X_CTX1	0x52
#define TEGRA_SID_HOST1X_CTX2	0x53
#define TEGRA_SID_HOST1X_CTX3	0x54
#define TEGRA_SID_HOST1X_CTX4	0x55
#define TEGRA_SID_HOST1X_CTX5	0x56
#define TEGRA_SID_HOST1X_CTX6	0x57
#define TEGRA_SID_HOST1X_CTX7	0x58

/* Host1x command buffers */
#define TEGRA_SID_HC_VM0	0x59
#define TEGRA_SID_HC_VM1	0x5A
#define TEGRA_SID_HC_VM2	0x5B
#define TEGRA_SID_HC_VM3	0x5C
#define TEGRA_SID_HC_VM4	0x5D
#define TEGRA_SID_HC_VM5	0x5E
#define TEGRA_SID_HC_VM6	0x5F
#define TEGRA_SID_HC_VM7	0x60

#define TEGRA_SID_XUSB_VF0	0x61
#define TEGRA_SID_XUSB_VF1	0x62
#define TEGRA_SID_XUSB_VF2	0x63
#define TEGRA_SID_XUSB_VF3	0x64

/* EQOS virtual functions */
#define TEGRA_SID_EQOS_VF1	0x65
#define TEGRA_SID_EQOS_VF2	0x66
#define TEGRA_SID_EQOS_VF3	0x67
#define TEGRA_SID_EQOS_VF4	0x68

/* SE data buffers */
#define TEGRA_SID_SE_VM0	0x69U
#define TEGRA_SID_SE_VM1	0x6AU
#define TEGRA_SID_SE_VM2	0x6BU

/* The GPC DMA clients. */
#define TEGRA_SID_GPCDMA_1	0x6CU
#define TEGRA_SID_GPCDMA_2	0x6DU
#define TEGRA_SID_GPCDMA_3	0x6EU
#define TEGRA_SID_GPCDMA_4	0x6FU

#define TEGRA_SID_RCE_VM2	0x70U

#define TEGRA_SID_VI_VM2	0x71U

#define TEGRA_SID_APE_1 	0x72U
#define TEGRA_SID_RCE_SERVER 	0x73U

#define TEGRA_SID_ISP_VM2	0x74U

#endif

#endif /* _DT_BINDINGS_MEMORY_TEGRA234_SMMU_STREAMID_H */

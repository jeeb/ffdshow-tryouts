#ifndef _FFDSHOW_MEDIAGUIDS_H_
#define _FFDSHOW_MEDIAGUIDS_H_

#define DEFINE_GUID_FOURCC(FOURCC) \
 DEFINE_GUID(MEDIASUBTYPE_##FOURCC,FOURCC_##FOURCC, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

#define DEFINE_GUID_WAVE(WAVE) \
 DEFINE_GUID(MEDIASUBTYPE_##WAVE,WAVE_FORMAT_##WAVE, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

#define FOURCC_FFDS mmioFOURCC('F','F','D','S')
#define FOURCC_FVFW mmioFOURCC('F','V','F','W')
#define FOURCC_FMP4 mmioFOURCC('F','M','P','4')
#define FOURCC_XVID mmioFOURCC('X','V','I','D')
#define FOURCC_DIVX mmioFOURCC('D','I','V','X')
#define FOURCC_DIV3 mmioFOURCC('D','I','V','3')
#define FOURCC_DVX3 mmioFOURCC('D','V','X','3')
#define FOURCC_DX50 mmioFOURCC('D','X','5','0')
#define FOURCC_MPG4 mmioFOURCC('M','P','G','4')
#define FOURCC_MP41 mmioFOURCC('M','P','4','1')
#define FOURCC_MP42 mmioFOURCC('M','P','4','2')
#define FOURCC_MP43 mmioFOURCC('M','P','4','3')
#define FOURCC_H261 mmioFOURCC('H','2','6','1')
#define FOURCC_M261 mmioFOURCC('M','2','6','1')
#define FOURCC_H263 mmioFOURCC('H','2','6','3')
//#define FOURCC_I263 mmioFOURCC('I','2','6','3')
#define FOURCC_S263 mmioFOURCC('S','2','6','3')
#define FOURCC_L263 mmioFOURCC('L','2','6','3')
#define FOURCC_M263 mmioFOURCC('M','2','6','3')
#define FOURCC_U263 mmioFOURCC('U','2','6','3')
#define FOURCC_X263 mmioFOURCC('X','2','6','3')
#define FOURCC_H264 mmioFOURCC('H','2','6','4')
#define FOURCC_X264 mmioFOURCC('X','2','6','4')
//#define FOURCC_L264 mmioFOURCC('L','2','6','4')
#define FOURCC_VSSH mmioFOURCC('V','S','S','H')
#define FOURCC_DAVC mmioFOURCC('D','A','V','C')
#define FOURCC_PAVC mmioFOURCC('P','A','V','C')
#define FOURCC_AVC1 mmioFOURCC('A','V','C','1')
//#define FOURCC_SVM2 mmioFOURCC('S','V','M','2')
#define FOURCC_BLZ0 mmioFOURCC('B','L','Z','0')
#define FOURCC_SMP4 mmioFOURCC('S','M','P','4')
#define FOURCC_DXGM mmioFOURCC('D','X','G','M')
#define FOURCC_WMV1 mmioFOURCC('W','M','V','1')
#define FOURCC_WMV2 mmioFOURCC('W','M','V','2')
#define FOURCC_WMV3 mmioFOURCC('W','M','V','3')
#define FOURCC_WVC1 mmioFOURCC('W','V','C','1')
#define FOURCC_WMVP mmioFOURCC('W','M','V','P')
#define FOURCC_WVP2 mmioFOURCC('W','V','P','2')
#define FOURCC_VP50 mmioFOURCC('V','P','5','0')
#define FOURCC_VP60 mmioFOURCC('V','P','6','0')
#define FOURCC_VP61 mmioFOURCC('V','P','6','1')
#define FOURCC_VP62 mmioFOURCC('V','P','6','2')
#define FOURCC_VP6F mmioFOURCC('V','P','6','F')
#define FOURCC_VP6A mmioFOURCC('V','P','6','A')
#define FOURCC_FLV4 mmioFOURCC('F','L','V','4')
#define FOURCC_CAVS mmioFOURCC('C','A','V','S')
#define FOURCC_MSS1 mmioFOURCC('M','S','S','1')
#define FOURCC_MSS2 mmioFOURCC('M','S','S','2')
#define FOURCC_MJPG mmioFOURCC('M','J','P','G')
#define FOURCC_LJPG mmioFOURCC('L','J','P','G')
#define FOURCC_MJLS mmioFOURCC('M','J','L','S')
#define FOURCC_AVRN mmioFOURCC('A','V','R','N')
#define FOURCC_MJPA mmioFOURCC('M','J','P','A')
#define FOURCC_DVSD mmioFOURCC('D','V','S','D')
#define FOURCC_DV25 mmioFOURCC('D','V','2','5')
#define FOURCC_DV50 mmioFOURCC('D','V','5','0')
#define FOURCC_CDVC mmioFOURCC('C','D','V','C')
#define FOURCC_CDV5 mmioFOURCC('C','D','V','5')
#define FOURCC_DVIS mmioFOURCC('D','V','I','S')
#define FOURCC_PDVC mmioFOURCC('P','D','V','C')
#define FOURCC_HFYU mmioFOURCC('H','F','Y','U')
#define FOURCC_FFVH mmioFOURCC('F','F','V','H')
#define FOURCC_CYUV mmioFOURCC('C','Y','U','V')
#define FOURCC_ASV1 mmioFOURCC('A','S','V','1')
#define FOURCC_ASV2 mmioFOURCC('A','S','V','2')
#define FOURCC_VCR1 mmioFOURCC('V','C','R','1')
#define FOURCC_FFV1 mmioFOURCC('F','F','V','1')
#define FOURCC_AVIS mmioFOURCC('A','V','I','S')
#define FOURCC_MPEG mmioFOURCC('M','P','E','G')
#define FOURCC_1001 0x10000001 // MPEG1 in AVI generated by mencoder
#define FOURCC_1002 0x10000002 // MPEG2 in AVI generated by mencoder
#define FOURCC_MPG1 mmioFOURCC('M','P','G','1')
#define FOURCC_MPG2 mmioFOURCC('M','P','G','2')
#define FOURCC_EM2V mmioFOURCC('E','M','2','V')
#define FOURCC_MMES mmioFOURCC('M','M','E','S')
#define FOURCC_DIV1 mmioFOURCC('D','I','V','1')
#define FOURCC_DIV2 mmioFOURCC('D','I','V','2')
#define FOURCC_DIV4 mmioFOURCC('D','I','V','4')
#define FOURCC_DIV5 mmioFOURCC('D','I','V','5')
#define FOURCC_DIV6 mmioFOURCC('D','I','V','6')
#define FOURCC_AP41 mmioFOURCC('A','P','4','1')
#define FOURCC_MPG3 mmioFOURCC('M','P','G','3')
#define FOURCC_MP4S mmioFOURCC('M','P','4','S')
#define FOURCC_SEDG mmioFOURCC('S','E','D','G')
#define FOURCC_MP4V mmioFOURCC('M','P','4','V')
#define FOURCC_M4S2 mmioFOURCC('M','4','S','2')
#define FOURCC_COL1 mmioFOURCC('C','O','L','1')
#define FOURCC_XVIX mmioFOURCC('X','V','I','X')
#define FOURCC_UMP4 mmioFOURCC('U','M','P','4')
#define FOURCC_3IV1 mmioFOURCC('3','I','V','1')
#define FOURCC_3IV2 mmioFOURCC('3','I','V','2')
#define FOURCC_3IVX mmioFOURCC('3','I','V','X')
#define FOURCC_NDIG mmioFOURCC('N','D','I','G')
#define FOURCC_LMP4 mmioFOURCC('L','M','P','4')
#define FOURCC_RMP4 mmioFOURCC('R','M','P','4')
#define FOURCC_DM4V mmioFOURCC('D','M','4','V')
#define FOURCC_HDX4 mmioFOURCC('H','D','X','4')
#define FOURCC_CRAM mmioFOURCC('C','R','A','M')
#define FOURCC_RT21 mmioFOURCC('R','T','2','1')
#define FOURCC_IV32 mmioFOURCC('I','V','3','2')
#define FOURCC_IV31 mmioFOURCC('I','V','3','1')
#define FOURCC_CVID mmioFOURCC('C','V','I','D')
#define FOURCC_MSZH mmioFOURCC('M','S','Z','H')
#define FOURCC_ZLIB mmioFOURCC('Z','L','I','B')
#define FOURCC_FLV1 mmioFOURCC('F','L','V','1')
#define FOURCC_8BPS mmioFOURCC('8','B','P','S')
#define FOURCC_PNG1 mmioFOURCC('P','N','G','1')
#define FOURCC_MPNG mmioFOURCC('M','P','N','G')
#define FOURCC_DUCK mmioFOURCC('D','U','C','K')
#define FOURCC_TM20 mmioFOURCC('T','M','2','0')
#define FOURCC_TSCC mmioFOURCC('T','S','C','C')
//#define FOURCC_SNOW mmioFOURCC('S','N','O','W')
#define FOURCC_QPEG mmioFOURCC('Q','P','E','G')
#define FOURCC_Q1_0 mmioFOURCC('Q','1','.','0')
#define FOURCC_Q1_1 mmioFOURCC('Q','1','.','1')
#define FOURCC_WV1F mmioFOURCC('W','V','1','F')
#define FOURCC_LOCO mmioFOURCC('L','O','C','O')
#define FOURCC_WNV1 mmioFOURCC('W','N','V','1')
#define FOURCC_CSCD mmioFOURCC('C','S','C','D')
#define FOURCC_ZMBV mmioFOURCC('Z','M','B','V')
#define FOURCC_ULTI mmioFOURCC('U','L','T','I')
#define FOURCC_VIXL mmioFOURCC('V','I','X','L')
#define FOURCC_AASC mmioFOURCC('A','A','S','C')
#define FOURCC_FPS1 mmioFOURCC('F','P','S','1')
#define FOURCC_AMVV mmioFOURCC('A','M','V','V')
#define FOURCC_SP5X mmioFOURCC('S','P','5','X')
#define FOURCC_RLE4 BI_RLE4
#define FOURCC_RLE8 BI_RLE8
#define FOURCC_BITFIELDS 3

//theora
#define FOURCC_THEO mmioFOURCC('T','H','E','O')
#define FOURCC_VP31 mmioFOURCC('V','P','3','1')
DEFINE_GUID(FORMAT_TheoraIll, 0xa99f116c, 0xdffa, 0x412c, 0x95, 0xde, 0x72, 0x5f, 0x99, 0x87, 0x48, 0x26);
DEFINE_GUID(MEDIASUBTYPE_RLTheora, 0xd124b2b1, 0x8968, 0x4ae8, 0xb2, 0x88, 0xfe, 0x16, 0xea, 0x34, 0xb0, 0xce);
DEFINE_GUID(FORMAT_RLTheora , 0xe69b30d1, 0x7d65, 0x4166, 0xb9, 0x90, 0x10, 0x3d, 0xa8, 0xc9, 0x11, 0xe3 );

//quicktime
#define FOURCC_JPEG mmioFOURCC('J','P','E','G')
#define FOURCC_SVQ1 mmioFOURCC('S','V','Q','1')
#define FOURCC_SVQ3 mmioFOURCC('S','V','Q','3')
#define FOURCC_QRLE mmioFOURCC('Q','R','L','E')
#define FOURCC_RPZA mmioFOURCC('R','P','Z','A')

//real
#define FOURCC_RV10 mmioFOURCC('R','V','1','0')
#define FOURCC_RV20 mmioFOURCC('R','V','2','0')

//uncompressed
#define FOURCC_YUY2 mmioFOURCC('Y','U','Y','2')
#define FOURCC_V422 mmioFOURCC('V','4','2','2')
#define FOURCC_YV12 mmioFOURCC('Y','V','1','2')
#define FOURCC_YVYU mmioFOURCC('Y','V','Y','U')
#define FOURCC_UYVY mmioFOURCC('U','Y','V','Y')
#define FOURCC_YUYV mmioFOURCC('Y','U','Y','V')
#define FOURCC_VYUY mmioFOURCC('V','Y','U','Y')
#define FOURCC_I420 mmioFOURCC('I','4','2','0')
#define FOURCC_IYUV mmioFOURCC('I','Y','U','V')
#define FOURCC_444P mmioFOURCC('4','4','4','P')
#define FOURCC_YV24 mmioFOURCC('Y','V','2','4') // YUV 4:4:4
#define FOURCC_422P mmioFOURCC('4','2','2','P')
#define FOURCC_YV16 mmioFOURCC('Y','V','1','6') // YUV 4:2:2
#define FOURCC_411P mmioFOURCC('4','1','1','P')
#define FOURCC_Y41B mmioFOURCC('Y','4','1','B') // YUV 4:1:1
#define FOURCC_410P mmioFOURCC('4','1','0','P')
#define FOURCC_PAL1 mmioFOURCC('P','A','L','1')
#define FOURCC_PAL4 mmioFOURCC('P','A','L','4')
#define FOURCC_PAL8 mmioFOURCC('P','A','L','8')
#define FOURCC_RGB2 mmioFOURCC('R','G','B','2')
#define FOURCC_RGB3 mmioFOURCC('R','G','B','3')
#define FOURCC_RGB5 mmioFOURCC('R','G','B','5')
#define FOURCC_RGB6 mmioFOURCC('R','G','B','6')
#define FOURCC_CLJR mmioFOURCC('C','L','J','R')
#define FOURCC_Y800 mmioFOURCC('Y','8','0','0')
#define FOURCC_NV12 mmioFOURCC('N','V','1','2')
#define FOURCC_NV21 mmioFOURCC('N','V','2','1')
//mencoder's raw formats
#define FOURCC_RGB32MPLAYER IMGFMT_RGB32
#define FOURCC_RGB24MPLAYER IMGFMT_RGB24
#define FOURCC_RGB16MPLAYER IMGFMT_RGB16
#define FOURCC_RGB15MPLAYER IMGFMT_RGB15

DEFINE_GUID_FOURCC(I420)
DEFINE_GUID_FOURCC(422P)
DEFINE_GUID_FOURCC(444P)
DEFINE_GUID_FOURCC(411P)
DEFINE_GUID_FOURCC(410P)
DEFINE_GUID_FOURCC(VYUY)
DEFINE_GUID_FOURCC(Y800)
DEFINE_GUID_FOURCC(NV12)
DEFINE_GUID_FOURCC(NV21)

#define FOURCC_MASK_ALL 1
#define FOURCC_MASK_YUV 2
#define FOURCC_MASK_RGB 3
#define FOURCC_MASK_PAL 4

//audio
#define WAVE_FORMAT_WMA7    0x160
#define WAVE_FORMAT_WMA8    0x161
#define WAVE_FORMAT_AC3_W   0x2000
#define WAVE_FORMAT_DTS_W   0x2001
#define WAVE_FORMAT_AAC1    0xAAC0
#define WAVE_FORMAT_AAC2    0x00FF
#define WAVE_FORMAT_AAC3    0x4134504D
#define WAVE_FORMAT_AAC4    0x706D
#define WAVE_FORMAT_AVIS    0x3313
#define WAVE_FORMAT_AMR     0xFE
#define WAVE_FORMAT_SAMR    mmioFOURCC('s','a','m','r')
#define WAVE_FORMAT_IMA_DK3 0x62
#define WAVE_FORMAT_IMA_WAV 0x11
#define WAVE_FORMAT_IMA_DK4 0x61
#define WAVE_FORMAT_IMA4    mmioFOURCC('i','m','a','4')
#define WAVE_FORMAT_G726    0x45
#define WAVE_FORMAT_FLAC    0xf1ac
#define WAVE_FORMAT_TTA     0x77a1
#define WAVE_FORMAT_VORBIS1  ((WORD)'O'+((WORD)'g'<<8))	// 0x674f("Og") ... Original stream compatible
#define WAVE_FORMAT_VORBIS2  ((WORD)'P'+((WORD)'g'<<8))	// 0x6750("Pg") ... Have independent header
#define WAVE_FORMAT_VORBIS3  ((WORD)'Q'+((WORD)'g'<<8))	// 0x6751("Qg") ... Have no codebook header
#define WAVE_FORMAT_VORBIS1P ((WORD)'o'+((WORD)'g'<<8))	// 0x676f("og") ... Original stream compatible
#define WAVE_FORMAT_VORBIS2P ((WORD)'p'+((WORD)'g'<<8))	// 0x6770("pg") ... Have independent header
#define WAVE_FORMAT_VORBIS3P ((WORD)'q'+((WORD)'g'<<8))	// 0x6771("qg") ... Have no codebook header
#define WAVE_FORMAT_FFVORBIS (('V'<<8)+'o')
#define WAVE_FORMAT_QT_ULAW 0x6c75
#define WAVE_FORMAT_alaw    mmioFOURCC('a','l','a','w')
#define WAVE_FORMAT_ulaw    mmioFOURCC('u','l','a','w')
#define WAVE_FORMAT_ULAW    mmioFOURCC('U','L','A','W')
#define WAVE_FORMAT_LPCM    mmioFOURCC('l','p','c','m')
#define WAVE_FORMAT_RAW     mmioFOURCC('r','a','w',' ')
#define WAVE_FORMAT_qdm2    mmioFOURCC('q','d','m','2')
#define WAVE_FORMAT_QDM2    mmioFOURCC('Q','D','M','2')
#define WAVE_FORMAT_sowt    mmioFOURCC('s','o','w','t')
#define WAVE_FORMAT_SOWT    mmioFOURCC('S','O','W','T')
#define WAVE_FORMAT_twos    mmioFOURCC('t','w','o','s')
#define WAVE_FORMAT_TWOS    mmioFOURCC('T','W','O','S')
#define WAVE_FORMAT_IN32    mmioFOURCC('I','N','3','2')
#define WAVE_FORMAT_in32    mmioFOURCC('i','n','3','2')
#define WAVE_FORMAT_IN24    mmioFOURCC('I','N','2','4')
#define WAVE_FORMAT_in24    mmioFOURCC('i','n','2','4')
#define WAVE_FORMAT_FL32    mmioFOURCC('F','L','3','2')
#define WAVE_FORMAT_fl32    mmioFOURCC('f','l','3','2')
#define WAVE_FORMAT_FL64    mmioFOURCC('F','L','6','4')
#define WAVE_FORMAT_fl64    mmioFOURCC('f','l','6','4')
#define WAVE_FORMAT_MAC3    mmioFOURCC('M','A','C','3')
#define WAVE_FORMAT_MAC6    mmioFOURCC('M','A','C','6')
#define WAVE_FORMAT_QT_GSM  0x6761
#define WAVE_FORMAT_COOK    0x2004
#define WAVE_FORMAT_14_4    0x345F3431
#define WAVE_FORMAT_28_8    0x385F3832
#define WAVE_FORMAT_IMC     0x401
#define WAVE_FORMAT_ATRAC3  0x270
#define WAVE_FORMAT_NELLYMOSER	mmioFOURCC('N','E','L','L')
#define WAVE_FORMAT_PCM8    0x9a120008
#define WAVE_FORMAT_PCM16   0x9a120016
#define WAVE_FORMAT_PCM24   0x9a120024
#define WAVE_FORMAT_PCM32   0x9a120032
#define WAVE_FORMAT_FLOAT32 0x9a120132
#define WAVE_FORMAT_FLOAT64 0x9a120164
#define WAVE_FORMAT_IMA_AMV mmioFOURCC('A','M','V','A')
#define WAVE_FORMAT_ADPCM_SWF mmioFOURCC('A','S','W','F')

DEFINE_GUID_WAVE(WMA7)
DEFINE_GUID_WAVE(WMA8)
DEFINE_GUID(MEDIASUBTYPE_MP3, WAVE_FORMAT_MPEGLAYER3, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
DEFINE_GUID_WAVE(AC3_W)
DEFINE_GUID_WAVE(DTS_W)
DEFINE_GUID_WAVE(AAC1)
DEFINE_GUID_WAVE(AAC2)
DEFINE_GUID_WAVE(AAC3)
DEFINE_GUID_WAVE(AAC4)
DEFINE_GUID_WAVE(AMR)
DEFINE_GUID_WAVE(SAMR)
DEFINE_GUID_WAVE(IMA_DK3)
DEFINE_GUID_WAVE(IMA_WAV)
DEFINE_GUID_WAVE(IMA_DK4)
DEFINE_GUID_WAVE(IMA4)
DEFINE_GUID_WAVE(G726)
DEFINE_GUID(MEDIASUBTYPE_MSADPCM, WAVE_FORMAT_ADPCM, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
DEFINE_GUID(MEDIASUBTYPE_CREATIVE_ADPCM, WAVE_FORMAT_CREATIVE_ADPCM, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
DEFINE_GUID(MEDIASUBTYPE_YAMAHA_ADPCM, WAVE_FORMAT_YAMAHA_ADPCM, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
DEFINE_GUID_WAVE(alaw)
DEFINE_GUID_WAVE(ALAW)
DEFINE_GUID_WAVE(ulaw)
DEFINE_GUID_WAVE(ULAW)
DEFINE_GUID_WAVE(MULAW)
DEFINE_GUID_WAVE(QT_ULAW)
DEFINE_GUID_WAVE(GSM610)
DEFINE_GUID_WAVE(FLAC)
DEFINE_GUID(MEDIASUBTYPE_FLAC2, 0x1541C5C0, 0xCDDF, 0x477D, 0xBC, 0x0A, 0x86, 0xF8, 0xAE, 0x7F, 0x83, 0x54);
DEFINE_GUID_WAVE(TTA)
DEFINE_GUID_WAVE(VORBIS1)
DEFINE_GUID_WAVE(VORBIS2)
DEFINE_GUID_WAVE(VORBIS3)
DEFINE_GUID_WAVE(VORBIS1P)
DEFINE_GUID_WAVE(VORBIS2P)
DEFINE_GUID_WAVE(VORBIS3P)
DEFINE_GUID_WAVE(FFVORBIS)
DEFINE_GUID_WAVE(RAW)
DEFINE_GUID_WAVE(AVIS)
DEFINE_GUID_WAVE(qdm2)
DEFINE_GUID_WAVE(QDM2)
DEFINE_GUID_WAVE(sowt)
DEFINE_GUID_WAVE(SOWT)
DEFINE_GUID_WAVE(twos)
DEFINE_GUID_WAVE(TWOS)
DEFINE_GUID_WAVE(in32)
DEFINE_GUID_WAVE(IN32)
DEFINE_GUID_WAVE(in24)
DEFINE_GUID_WAVE(IN24)
DEFINE_GUID_WAVE(fl32)
DEFINE_GUID_WAVE(FL32)
DEFINE_GUID_WAVE(fl64)
DEFINE_GUID_WAVE(FL64)
DEFINE_GUID_WAVE(MAC3)
DEFINE_GUID_WAVE(MAC6)
DEFINE_GUID_WAVE(QT_GSM)
DEFINE_GUID_WAVE(DSPGROUP_TRUESPEECH)
DEFINE_GUID_WAVE(14_4)
DEFINE_GUID_WAVE(28_8)
DEFINE_GUID_WAVE(IMC)
DEFINE_GUID_WAVE(ATRAC3)
DEFINE_GUID_WAVE(IMA_AMV)
DEFINE_GUID_WAVE(NELLYMOSER)
DEFINE_GUID_WAVE(ADPCM_SWF)

// vorbis/tremor/illiminable
#define WAVE_FORMAT_VORBIS 0xcddca2d5
DEFINE_GUID(FORMAT_VorbisFormat   ,0x6bddfa7e, 0x9f22, 0x46a9, 0xab, 0x5e, 0x88, 0x4e, 0xff, 0x29, 0x4d, 0x9f);
DEFINE_GUID(FORMAT_VorbisFormat2  ,0xb36e107f, 0xa938, 0x4387, 0x93, 0xc7, 0x55, 0xe9, 0x66, 0x75, 0x74, 0x73);
DEFINE_GUID(FORMAT_VorbisFormatIll,0x44e04f43, 0x58b3, 0x4de1, 0x9b, 0xaa, 0x89, 0x01, 0xf8, 0x52, 0xda, 0xe4);
DEFINE_GUID(MEDIASUBTYPE_Vorbis   ,0xcddca2d5, 0x6d75, 0x4f98, 0x84, 0x0e, 0x73, 0x7b, 0xed, 0xd5, 0xc6, 0x3b);
DEFINE_GUID(MEDIASUBTYPE_Vorbis2  ,0x8d2fd10b, 0x5841, 0x4a6b, 0x89, 0x05, 0x58, 0x8f, 0xec, 0x1a, 0xde, 0xd9);
DEFINE_GUID(MEDIASUBTYPE_VorbisIll,0x8a0566ac, 0x42b3, 0x4ad9, 0xac, 0xa3, 0x93, 0xb9, 0x06, 0xdd, 0xf9, 0x8a);

DEFINE_GUID(IID_IGraphBuilder           ,0x56a868a9, 0x0ad4, 0x11ce, 0xb0, 0x3a, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
DEFINE_GUID(CLSID_AVIDec                ,0xcf49d4e0, 0x1115, 0x11ce, 0xb0, 0x3a, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
DEFINE_GUID(CLSID_EnhancedVideoRenderer ,0xfa10746c, 0x9b63, 0x4b6c, 0xbc, 0x49, 0xfc, 0x30, 0x0e, 0xa5, 0xf2, 0x56);
DEFINE_GUID(CLSID_VideoMixingRenderer9  ,0x51b4abf3, 0x748f, 0x4e3b, 0xa2, 0x76, 0xc8, 0x28, 0x33, 0x0e, 0x92, 0x6a);
DEFINE_GUID(CLSID_DirectVobSubFilter    ,0x93a22e7a, 0x5091, 0x45ef, 0xba, 0x61, 0x6d, 0xa2, 0x61, 0x56, 0xa5, 0xd0);
DEFINE_GUID(CLSID_DirectVobSubFilter2   ,0x9852a670, 0xf845, 0x491b, 0x9b, 0xe6, 0xeb, 0xd8, 0x41, 0xb8, 0xa6, 0x13);
DEFINE_GUID(CLSID_HaaliVideoRenderer    ,0x760a8f35, 0x97e7, 0x479d, 0xaa, 0xf5, 0xda, 0x9e, 0xff, 0x95, 0xd7, 0x51);
DEFINE_GUID(CLSID_HaaliMediaSplitter    ,0x55da30fc, 0xf16b, 0x49fc, 0xba, 0xa5, 0xae, 0x59, 0xfc, 0x65, 0xf8, 0x2d);
DEFINE_GUID(MEDIASUBTYPE_SVCD_SUBPICTURE,0xda5b82ee, 0x6bd2, 0x426f, 0xbf, 0x1e, 0x30, 0x11, 0x2d, 0xa7, 0x8a, 0xe1);
DEFINE_GUID(MEDIASUBTYPE_CVD_SUBPICTURE ,0x7b57308f, 0x5154, 0x4c36, 0xb9, 0x03, 0x52, 0xfe, 0x76, 0xe1, 0x84, 0xfc);
DEFINE_GUID(CLSID_MPC_matroska          ,0x0a68c3b5, 0x9164, 0x4a54, 0xaf, 0xaf, 0x99, 0x5b, 0x2f, 0xf0, 0xe0, 0xd4);
DEFINE_GUID(CLSID_GabestMatroskaSplitter,0x149d2e01, 0xc32e, 0x4939, 0x80, 0xf6, 0xc0, 0x7b, 0x81, 0x01, 0x5a, 0x7a);
DEFINE_GUID(CLSID_InfTee                ,0xf8388a40, 0xd5bb, 0x11d0, 0xbe, 0x5a, 0x00, 0x80, 0xc7, 0x06, 0x56, 0x8e);
DEFINE_GUID(CLSID_SmartT                ,0xCC58E280, 0x8AA1, 0x11D1, 0xB3, 0xF1, 0x00, 0xAA, 0x00, 0x37, 0x61, 0xC5);
DEFINE_GUID(CLSID_DecklinkVideoRenderFilter ,0xCEB13CC8,0x3591,0x45a5,0xBA,0x0F, 0x20, 0xE9, 0xA1, 0xD7, 0x2F, 0x76);

#endif

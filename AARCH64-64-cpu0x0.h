typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef ulonglong uint64_t;

typedef ulong __darwin_size_t;

typedef ulong uintptr_t;

typedef struct _Unwind_Exception _Unwind_Exception, *P_Unwind_Exception;

typedef enum enum_4370 {
    _URC_NO_REASON=0,
    _URC_FOREIGN_EXCEPTION_CAUGHT=1,
    _URC_FATAL_PHASE2_ERROR=2,
    _URC_FATAL_PHASE1_ERROR=3,
    _URC_NORMAL_STOP=4,
    _URC_END_OF_STACK=5,
    _URC_HANDLER_FOUND=6,
    _URC_INSTALL_CONTEXT=7,
    _URC_CONTINUE_UNWIND=8
} enum_4370;

typedef enum enum_4370 _Unwind_Reason_Code;

typedef uint uint32_t;

struct _Unwind_Exception {
    uint64_t exception_class;
    void (*exception_cleanup)(_Unwind_Reason_Code, struct _Unwind_Exception *);
    uintptr_t private_1;
    uintptr_t private_2;
    uint32_t reserved[3];
};

typedef __darwin_size_t size_t;

typedef struct CS_CodeDirectory CS_CodeDirectory, *PCS_CodeDirectory;

struct CS_CodeDirectory {
    dword magic; // magic number (CSMAGIC_CODEDIRECTORY)
    dword length; // total length of CodeDirectory blob
    dword version; // compatibility version
    dword flags; // setup and mode flags
    dword hashOffset; // offset of hash slot element at index zero
    dword identOffset; // offset of identifier string
    dword nSpecialSlots; // number of special hash slots
    dword nCodeSlots; // number of ordinary (code) hash slots
    dword codeLimit; // limit to main image signature range
    byte hashSize; // size of each hash in bytes
    byte hashType; // type of hash (cdHashType* constants)
    byte platform; // platform identifier; zero if not platform binary
    byte pageSize; // log2(page size in bytes); 0 => infinite
    dword spare2; // unused (must be zero)
    dword scatterOffset; // offset of optional scatter vector
    dword teamOffset; // offset of optional team identifier
    dword spare3; // unused (must be zero)
    qword codeLimit64; // limit to main image signature range, 64 bits
    qword execSegBase; // offset of executable segment
    qword execSegLimit; // limit of executable segment
    qword execSegFlags; // executable segment flags
};

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

typedef struct dyld_info_command dyld_info_command, *Pdyld_info_command;

struct dyld_info_command {
    dword cmd;
    dword cmdsize;
    dword rebase_off; // file offset to rebase info
    dword rebase_size; // size of rebase info
    dword bind_off; // file offset to binding info
    dword bind_size; // size of binding info
    dword weak_bind_off; // file offset to weak binding info
    dword weak_bind_size; // size of weak binding info
    dword lazy_bind_off; // file offset to lazy binding info
    dword lazy_bind_size; // size of lazy binding info
    dword export_off; // file offset to lazy binding info
    dword export_size; // size of lazy binding info
};

typedef struct CS_BlobIndex CS_BlobIndex, *PCS_BlobIndex;

struct CS_BlobIndex {
    dword type; // type of entry
    dword offset; // offset of entry
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    qword addr;
    qword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
    dword reserved3;
};

typedef struct nlist nlist, *Pnlist;

struct nlist {
    dword n_strx;
    byte n_type;
    byte n_sect;
    word n_desc;
    qword n_value;
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    qword vmaddr;
    qword vmsize;
    qword fileoff;
    qword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct source_version_command source_version_command, *Psource_version_command;

struct source_version_command {
    dword cmd;
    dword cmdsize;
    qword version;
};

typedef struct mach_header mach_header, *Pmach_header;

struct mach_header {
    dword magic;
    dword cputype;
    dword cpusubtype;
    dword filetype;
    dword ncmds;
    dword sizeofcmds;
    dword flags;
    dword reserved;
};

typedef struct build_tool_version build_tool_version, *Pbuild_tool_version;

struct build_tool_version {
    dword tool;
    dword version;
};

typedef struct build_version_command build_version_command, *Pbuild_version_command;

struct build_version_command {
    dword cmd;
    dword cmdsize;
    dword platform;
    dword minos;
    dword sdk;
    dword ntools;
    struct build_tool_version build_tool_version[][1];
};

typedef struct dylib dylib, *Pdylib;

struct dylib {
    struct lc_str name;
    dword timestamp;
    dword current_version;
    dword compatibility_version;
};

typedef enum bind_opcode {
    BIND_OPCODE_DONE=0,
    BIND_OPCODE_SET_DYLIB_ORDINAL_IMM=16,
    BIND_OPCODE_SET_DYLIB_ORDINAL_ULEB=32,
    BIND_OPCODE_SET_DYLIB_SPECIAL_IMM=48,
    BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM=64,
    BIND_OPCODE_SET_TYPE_IMM=80,
    BIND_OPCODE_SET_ADDEND_SLEB=96,
    BIND_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB=112,
    BIND_OPCODE_ADD_ADDR_ULEB=128,
    BIND_OPCODE_DO_BIND=144,
    BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB=160,
    BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED=176,
    BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB=192,
    BIND_OPCODE_THREADED=208
} bind_opcode;

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
};

typedef struct CS_SuperBlob CS_SuperBlob, *PCS_SuperBlob;

struct CS_SuperBlob {
    dword magic; // magic number
    dword length; // total length of SuperBlob
    dword count; // number of index entries following
    struct CS_BlobIndex index[1]; // (count) entries
};

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    dword cmd;
    dword cmdsize;
    struct dylib dylib;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct linkedit_data_command linkedit_data_command, *Plinkedit_data_command;

struct linkedit_data_command {
    dword cmd;
    dword cmdsize;
    dword dataoff;
    dword datasize;
};

typedef enum rebase_opcode {
    REBASE_OPCODE_DONE=0,
    REBASE_OPCODE_SET_TYPE_IMM=16,
    REBASE_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB=32,
    REBASE_OPCODE_ADD_ADDR_ULEB=48,
    REBASE_OPCODE_ADD_ADDR_IMM_SCALED=64,
    REBASE_OPCODE_DO_REBASE_IMM_TIMES=80,
    REBASE_OPCODE_DO_REBASE_ULEB_TIMES=96,
    REBASE_OPCODE_DO_REBASE_ADD_ADDR_ULEB=112,
    REBASE_OPCODE_DO_REBASE_ULEB_TIMES_SKIPPING_ULEB=128
} rebase_opcode;




void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
undefined4 __Z23CheckCanSubComponentRunRN20wvWavesV15_1_154_19714PluginInstanceE(long param_1);
void __ZN13WCFixedStringILm15EEaSERKS0_(long *param_1,long *param_2);
undefined8 __ZN14cDuganAgentAlgC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType(undefined8 param_1);
void __ZN14cDuganAgentAlgD2Ev(undefined8 *param_1);
void __ZN14cDuganAgentAlgD1Ev(void);
void __ZThn8_N14cDuganAgentAlgD1Ev(void);
void __ZThn48_N14cDuganAgentAlgD1Ev(void);
void __ZThn56_N14cDuganAgentAlgD1Ev(void);
void __ZN14cDuganAgentAlgD0Ev(void);
void __ZThn8_N14cDuganAgentAlgD0Ev(void);
void __ZThn48_N14cDuganAgentAlgD0Ev(void);
void __ZThn56_N14cDuganAgentAlgD0Ev(void);
undefined8 __ZN14cDuganAgentAlg15UpdateParamSelfEm(long *param_1,long param_2);
void __ZN14cDuganAgentAlg33MarkAllManAutoMuteImagesForUpdateEv(long param_1);
undefined8 __ZN14cDuganAgentAlg17UpdateDisplaySelfEm(long param_1,long param_2);
ulong __ZN14cDuganAgentAlg25GetManAutoMuteBitmapIndexEv(long param_1);
undefined8 __ZN14cDuganAgentAlg13ReadMeterSelfEmP21WCParamExtensionMeterRd(long param_1,long param_2,undefined8 param_3,double *param_4);
undefined8 __ZN20wvWavesV15_1_154_19710cALGORITHM31HandleLoadPresetFromBrowserSelfERN8nlohmann10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS1_14adl_serializerENS5_IhNS9_IhEEEEEE(void);
undefined8 * __ZN14cDuganAgentAlg11InitAlgSelfEv(long *param_1);
undefined8 __ZN14cDuganAgentAlg13UpdateAlgSelfEv(long *param_1);
undefined8 __ZN14cDuganAgentAlg30PrepareDisplayFunctionsMapSelfERNSt3__13mapI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyENS0_4lessIS3_EENS0_9allocatorINS0_4pairIKS3_S5_EEEEEE(undefined8 param_1,long *param_2);
void __Z13DisplayWeightddR17WCFixedStringBase(double param_1,long *param_2);
undefined8 __ZN14cDuganAgentAlg28PrepareScaleFunctionsMapSelfERNSt3__13mapI13WCFixedStringILm127EE19sUserScaleFunctionsNS0_4lessIS3_EENS0_9allocatorINS0_4pairIKS3_S4_EEEEEE(void);
undefined8 __Z9CreateAlgRKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType(long param_1);
undefined8 __ZN20cDuganAgentRemoteAlgC1ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType(undefined8 param_1);
byte __ZN14cDuganAgentAlg17IsChannelBypassedEv(long param_1);
bool __ZN14cDuganAgentAlg14IsChannelMutedEv(long param_1);
undefined8 __ZN20cDuganAgentRemoteAlgC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType(undefined8 param_1);
undefined8 __ZN20cDuganAgentRemoteAlg20InitInstanceDataSelfEv(long param_1);
void __ZN20cDuganAgentRemoteAlg33AdjustProcessCodeDescriptionsSelfEv(long param_1);
void __ZN20cDuganAgentRemoteAlg19SetMixerBasicStructEPKN9wvMixerNS18WSMixerBasicStructEb(long param_1,undefined8 param_2,undefined1 param_3);
void __ZN20cDuganAgentRemoteAlg15SetCInfoToMixerEPKN9wvMixerNS14WSMixerControlE(long param_1,undefined8 param_2);
void __ZNK20cDuganAgentRemoteAlg15GetMixerControlEPN9wvMixerNS14WSMixerControlE(long param_1,undefined8 param_2);
void __ZN20cDuganAgentRemoteAlg19GetAllMixerControlsEv(long param_1);
undefined8 __ZN20cDuganAgentRemoteAlg24GetMixerControlByParamIDEmRN9wvMixerNS14WSMixerControlE(long param_1,ulong param_2,undefined4 *param_3);
void __ZN20cDuganAgentRemoteAlg13SetParamStateEmd(undefined8 param_1,long param_2,ulong param_3);
undefined8 __ZN20cDuganAgentRemoteAlg15UpdateParamSelfEm(long param_1,ulong param_2);
void __ZN9wvMixerNS25DropMixerStructBreadCrumbEPKNS_18WSMixerBasicStructES2_(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM24SetMetadataForONLPPresetERKN8nlohmann10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS1_14adl_serializerENS5_IhNS9_IhEEEEEEPKNS_6Preset11CPresetInfoE(void);
undefined8 __ZN20wvWavesV15_1_154_19710cALGORITHM11SetMuteSelfEb(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM20SetIsSessionLicensedEb(long param_1,undefined1 param_2);
undefined8 __ZN20wvWavesV15_1_154_19710cALGORITHM19LoadParamsForPresetEPNS_6Preset11CPresetInfoE(void);
uint __ZN20wvWavesV15_1_154_19710cALGORITHM12IsMuteOnDemoEv(undefined8 param_1);
undefined8 __ZN20wvWavesV15_1_154_19710cALGORITHM32InstantiateSpecificLinkGroupSelfEv(long param_1);
undefined8 __ZN20wvWavesV15_1_154_19710cALGORITHM18GetPluginInfo_boolEjRbl(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM27RequestRefreshMetersBuffersEv(long param_1);
void __ZNK20wvWavesV15_1_154_19710cALGORITHM24GetPluginNameForAboutBoxEv(void);
undefined4 __ZNK20wvWavesV15_1_154_19710cALGORITHM21GetNumSideChainInputsEv(long param_1);
undefined8 __ZN20wvWavesV15_1_154_19710cALGORITHM28GetPluginInfo_double_PrivateERdl(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM23SetNotifyOnLinkedParamsEb(long param_1,undefined1 param_2);
bool __ZN20wvWavesV15_1_154_19710cALGORITHM23GetNotifyOnLinkedParamsEv(long param_1);
void __ZN20wvWavesV15_1_154_19710cALGORITHM37GetGraphDataAsGraphicStreamForControlEmRN4wvGS27WCGraphicStreamBinaryWriterE(long *param_1);
void __ZNK20wvWavesV15_1_154_19710cALGORITHM22GetInternalPresetsNameEi(undefined8 *param_1);
undefined * __ZN20wvWavesV15_1_154_19710cALGORITHM8BIClientEv(long param_1);
void __ZN20cDuganAgentRemoteAlgD0Ev(void);
undefined8 __ZN20cDuganAgentRemoteAlg13UpdateAlgSelfEv(void);
undefined8 __ZN20cDuganAgentRemoteAlg11InitAlgSelfEv(void);
undefined8 __ZN20cDuganAgentRemoteAlg17UpdateDisplaySelfEm(void);
undefined8 __ZN20cDuganAgentRemoteAlg20GetInitialStatesSelfEPc(void);
void __ZThn8_N20cDuganAgentRemoteAlgD1Ev(long param_1);
void __ZThn8_N20cDuganAgentRemoteAlgD0Ev(long param_1);
void __ZThn48_N20cDuganAgentRemoteAlgD1Ev(long param_1);
void __ZThn48_N20cDuganAgentRemoteAlgD0Ev(long param_1);
void __ZThn56_N20cDuganAgentRemoteAlgD1Ev(long param_1);
void __ZThn56_N20cDuganAgentRemoteAlgD0Ev(long param_1);
uint * __ZN8WCFourCCC2EPKc(uint *param_1,byte *param_2);
void __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_(long *param_1,char *param_2,char *param_3,undefined4 param_4,undefined4 param_5);
void __ZNSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_ED1Ev(void);
void __ZNSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_ED0Ev(void);
void __ZNKSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_E7__cloneEv(long param_1);
void __ZNSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_E7destroyEv(void);
void __ZNSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);
void __ZNSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_EclEOdS9_S3_(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4);
long __ZNKSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_E6targetERKSt9type_info(long param_1,long param_2);
undefined **__ZNKSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_E11target_typeEv(void);
long * ___clang_call_terminate(void);
long * __ZNSt3__18functionIFvddR17WCFixedStringBaseEEaSEOS4_(long *param_1,long param_2);
long * __ZNSt3__18functionIFNS0_IFvddR17WCFixedStringBaseEEEPvEEaSEOS7_(long *param_1,long param_2);
void __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE(undefined8 param_1,undefined8 *param_2);
undefined1  [16]__ZNSt3__16__treeINS_12__value_typeI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4);
long * __ZNSt3__16__treeINS_12__value_typeI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_(long param_1,undefined8 *param_2,undefined8 param_3);
void __ZNSt3__16__treeINS_12__value_typeI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISP_EEEEEEDpOT_(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4);
void __ZNSt3__16__treeINS_12__value_typeI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(long *param_1,long param_2,undefined8 *param_3,long *param_4);
void __ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(long *param_1,long *param_2);
void __ZN16cDuganAgent_AlgTILi1EEC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType(undefined8 param_1);
void __ZN16cDuganAgent_AlgTILi1EED1Ev(undefined8 *param_1);
void __ZN16cDuganAgent_AlgTILi1EED0Ev(undefined8 *param_1);
void __ZThn8_N16cDuganAgent_AlgTILi1EED0Ev(undefined8 *param_1);
void __ZThn48_N16cDuganAgent_AlgTILi1EED1Ev(undefined8 *param_1);
void __ZThn48_N16cDuganAgent_AlgTILi1EED0Ev(undefined8 *param_1);
void __ZThn56_N16cDuganAgent_AlgTILi1EED1Ev(undefined8 *param_1);
void __ZThn56_N16cDuganAgent_AlgTILi1EED0Ev(undefined8 *param_1);
void __ZN16cDuganAgent_AlgTILi2EEC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType(undefined8 param_1);
void __ZN16cDuganAgent_AlgTILi2EED1Ev(undefined8 *param_1);
void __ZN16cDuganAgent_AlgTILi2EED0Ev(undefined8 *param_1);
void __ZThn8_N16cDuganAgent_AlgTILi2EED1Ev(undefined8 *param_1);
void __ZThn8_N16cDuganAgent_AlgTILi2EED0Ev(undefined8 *param_1);
void __ZThn48_N16cDuganAgent_AlgTILi2EED0Ev(undefined8 *param_1);
void __ZThn56_N16cDuganAgent_AlgTILi2EED1Ev(undefined8 *param_1);
void __ZThn56_N16cDuganAgent_AlgTILi2EED0Ev(undefined8 *param_1);
void __ZN17cDuganMaster_AlgTILi1EEC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType(undefined8 param_1);
void __ZN17cDuganMaster_AlgTILi1EED0Ev(undefined8 *param_1);
void __ZThn8_N17cDuganMaster_AlgTILi1EED1Ev(undefined8 *param_1);
void __ZThn8_N17cDuganMaster_AlgTILi1EED0Ev(undefined8 *param_1);
void __ZThn48_N17cDuganMaster_AlgTILi1EED1Ev(undefined8 *param_1);
void __ZThn48_N17cDuganMaster_AlgTILi1EED0Ev(undefined8 *param_1);
void __ZThn56_N17cDuganMaster_AlgTILi1EED0Ev(undefined8 *param_1);
void ___cxx_global_var_init.14(void);
void ___cxx_global_var_init.15(void);
void __GLOBAL__sub_I_DuganAgentAlg.cpp(void);
void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
void __ZN16cDuganAgent_AlgTILi1EEC1ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType(undefined8 param_1);
void __ZN16cDuganAgent_AlgTILi1EE33AdjustProcessCodeDescriptionsSelfEv(long param_1);
uint __ZN16cDuganAgent_AlgTILi1EE12InitDataSelfEv(long param_1);
undefined8 __ZN16cDuganAgent_AlgTILi1EE20GetInitialStatesSelfEPc(long param_1,long param_2);
void __ZN16cDuganAgent_AlgTILi1EE18SetBypassCoefsSelfEv(long param_1);
undefined8 * __ZN16cDuganAgent_AlgTILi1EE7SetLeakEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi1EE6SetAttEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi1EE6SetRelEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi1EE11SetBypassTcEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi1EE12SetOneWeightEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi1EE12SetOneBypassEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi1EE10SetOneMuteEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi1EE14SetOneRSumGainEs(long param_1,int param_2);
undefined8 __ZN16cDuganAgent_AlgTILi1EE24SetOutputsIOMatrixOffsetEii(long *param_1,undefined4 param_2,int param_3);
undefined8 __ZN16cDuganAgent_AlgTILi1EE23SetInputsIOMatrixOffsetEii(long *param_1,undefined4 param_2,int param_3);
undefined8 * __ZN16cDuganAgent_AlgTILi1EE10SetOutputsEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi1EE9SetInputsEs(long param_1,int param_2);
void __ZN16cDuganAgent_AlgTILi2EEC1ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType(undefined8 param_1);
void __ZN16cDuganAgent_AlgTILi2EE33AdjustProcessCodeDescriptionsSelfEv(long param_1);
uint __ZN16cDuganAgent_AlgTILi2EE12InitDataSelfEv(long param_1);
undefined8 __ZN16cDuganAgent_AlgTILi2EE20GetInitialStatesSelfEPc(long param_1,long param_2);
void __ZN16cDuganAgent_AlgTILi2EE18SetBypassCoefsSelfEv(long param_1);
undefined8 * __ZN16cDuganAgent_AlgTILi2EE6SetAttEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi2EE6SetRelEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi2EE11SetBypassTcEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi2EE12SetOneWeightEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi2EE12SetOneBypassEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi2EE10SetOneMuteEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi2EE14SetOneRSumGainEs(long param_1,int param_2);
undefined8 __ZN16cDuganAgent_AlgTILi2EE24SetOutputsIOMatrixOffsetEii(long *param_1,undefined4 param_2,int param_3);
undefined8 __ZN16cDuganAgent_AlgTILi2EE23SetInputsIOMatrixOffsetEii(long *param_1,undefined4 param_2,int param_3);
undefined8 * __ZN16cDuganAgent_AlgTILi2EE10SetOutputsEs(long param_1,int param_2);
undefined8 * __ZN16cDuganAgent_AlgTILi2EE9SetInputsEs(long param_1,int param_2);
void __ZN17cDuganMaster_AlgTILi1EEC1ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType(undefined8 param_1);
void __ZN17cDuganMaster_AlgTILi1EE33AdjustProcessCodeDescriptionsSelfEv(long param_1);
void __ZN17cDuganMaster_AlgTILi1EE12InitDataSelfEv(long param_1);
undefined8 __ZN17cDuganMaster_AlgTILi1EE20GetInitialStatesSelfEPc(long param_1,long param_2);
void __ZN17cDuganMaster_AlgTILi1EE18SetBypassCoefsSelfEv(long param_1);
undefined8 __ZN17cDuganMaster_AlgTILi1EE12SetWeightingEs(void);
undefined8 * __ZN17cDuganMaster_AlgTILi1EE7SetLeakEs(long param_1,int param_2);
undefined8 * __ZN17cDuganMaster_AlgTILi1EE6SetAttEs(long param_1,int param_2);
undefined8 * __ZN17cDuganMaster_AlgTILi1EE6SetRelEs(long param_1,int param_2);
undefined8 __ZN17cDuganMaster_AlgTILi1EE11SetBypassTcEs(void);
undefined8 __ZN17cDuganMaster_AlgTILi1EE12SetOneWeightEs(void);
undefined8 __ZN17cDuganMaster_AlgTILi1EE12SetOneBypassEs(void);
undefined8 __ZN17cDuganMaster_AlgTILi1EE10SetOneMuteEs(void);
undefined8 __ZN17cDuganMaster_AlgTILi1EE14SetOneRSumGainEs(void);
undefined8 __ZN17cDuganMaster_AlgTILi1EE24SetOutputsIOMatrixOffsetEii(long *param_1,undefined4 param_2,int param_3);
undefined8 __ZN17cDuganMaster_AlgTILi1EE23SetInputsIOMatrixOffsetEii(long *param_1,undefined4 param_2,int param_3);
undefined8 * __ZN17cDuganMaster_AlgTILi1EE10SetOutputsEs(long param_1,int param_2);
undefined8 * __ZN17cDuganMaster_AlgTILi1EE9SetInputsEs(long param_1,int param_2);
void ___cxx_global_var_init.14(void);
void ___cxx_global_var_init.15(void);
void __GLOBAL__sub_I_DuganAgentAlgT.cpp(void);
void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
undefined8 __ZN13DuganAgentGUI11DoMouseDownEPN20wvWavesV15_1_154_19717PluginViewManager11WCEventDataE(undefined8 param_1,undefined8 param_2);
undefined8 __ZN13DuganAgentGUI9DoMouseUpEPN20wvWavesV15_1_154_19717PluginViewManager11WCEventDataE(undefined8 param_1,undefined8 param_2);
void __ZN13DuganAgentGUID1Ev(void);
void __ZN13DuganAgentGUID0Ev(void);
undefined8 __ZNK20wvWavesV15_1_154_19714CStandardGUI_X23WriteXML_PluginSpecificEN4pugi8xml_nodeE(undefined8 param_1,undefined8 param_2);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_X15SetIsDirectTextEb(long param_1,undefined1 param_2);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_X19BuildSelectableListEv(long param_1);
long __ZN20wvWavesV15_1_154_19714CStandardGUI_X23GetNumGUIOwnControllersEv(long param_1);
void __ZThn8_N13DuganAgentGUID1Ev(long param_1);
void __ZThn8_N13DuganAgentGUID0Ev(long param_1);
void __ZThn16_N13DuganAgentGUID1Ev(long param_1);
void __ZThn16_N13DuganAgentGUID0Ev(long param_1);
void __ZThn120_N13DuganAgentGUID1Ev(long param_1);
void __ZThn120_N13DuganAgentGUID0Ev(long param_1);
void __ZThn128_N13DuganAgentGUID1Ev(long param_1);
void __ZThn128_N13DuganAgentGUID0Ev(long param_1);
void __ZThn168_N13DuganAgentGUID1Ev(long param_1);
void __ZThn168_N13DuganAgentGUID0Ev(long param_1);
void ___cxx_global_var_init.23(void);
void ___cxx_global_var_init.24(void);
void __GLOBAL__sub_I_DuganAgentGUI.cpp(void);
void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
void _WP_DoIdleAlg(long param_1);
undefined8 _WP_GetParamState(long param_1,int param_2,undefined8 *param_3);
void _WP_MetersGetValue(long param_1);
void _WP_MetersGetInfo(long param_1);
void _WP_MetersResetClip(long param_1);
void _WP_MetersReadFromDSP(long param_1);
undefined8 _WP_ReadMetersSend(long param_1,undefined8 *param_2);
undefined8 _WP_ReadMetersReceive(long param_1);
undefined8 _WP_InitAlg(long param_1);
undefined8 _WP_ResetAudioBuffers(long param_1);
void _WP_InitAlgToHardware(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void _WP_InitInstanceData(long param_1);
undefined8 _WP_UpdateAlg(long param_1);
undefined8 _WP_UpdatePar(long param_1,undefined8 param_2,int param_3,undefined8 *param_4);
void _WP_GetControlNameOfLength(long param_1);
void _WP_SetAutomationRefCons(long param_1);
void _WP_SetControllerValue(long param_1);
undefined8 _WP_TranslateController(long param_1,undefined8 param_2,char *param_3,int param_4);
undefined8 _WP_GetParamValueString(long param_1,int param_2);
void _WP_CallProcessSideAlloc(long param_1);
undefined8 _WP_GetGraphDataAsGraphicStream(long param_1,undefined8 param_2);
undefined8 _WP_GetGraphDataAsGraphicStreamForControl(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 _WP_GetControlState(long param_1);
void ___cxx_global_var_init.14(void);
void ___cxx_global_var_init.15(void);
void __GLOBAL__sub_I_API_PluginAlg.cpp(void);
void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
undefined8 _WP_InitGUI(long param_1,int param_2);
undefined8 _WP_ActivateWindow(long param_1,undefined8 param_2);
undefined8 _WP_ActivateWindowForGui(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 _WP_DeactivateWindow(long param_1);
undefined8 _WP_DeactivateWindowForGui(long param_1);
void _WP_ClearTouchEventsMap(long param_1);
void _WP_ClearTouchEventsMapForGui(long param_1);
void _WP_DoMouseDown(long param_1,undefined8 param_2);
void _WP_DoMouseDownForGui(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 _WP_DoMouseMove(long param_1,undefined8 param_2);
undefined8 _WP_DoMouseMoveForGui(long param_1,undefined8 param_2,undefined8 param_3);
void _WP_DoMouseUp(long param_1,undefined8 param_2);
void _WP_DoMouseUpForGui(long param_1,undefined8 param_2,undefined8 param_3);
void _WP_DoMouseWheel(long param_1,undefined8 param_2);
void _WP_DoMouseWheelForGui(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 _WP_DragDropStart(long param_1,undefined8 param_2);
undefined8 _WP_DragDropMove(long param_1,undefined8 param_2);
undefined8 _WP_DragDropStop(long param_1,undefined8 param_2);
undefined8 _WP_DoKeyDown(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 _WP_DoKeyDownForGui(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8 _WP_DoKeyUp(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 _WP_DoKeyUpForGui(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8 _WP_DoTouch(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 _WP_DoTouchForGui(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void _WP_GetDrawInstructions(long param_1,undefined8 param_2);
undefined8 _WP_GetDrawInstructionsForGui(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 _WP_GetDrawInstructionsForControl(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 _WP_GetViewRectForGui(long param_1,char *param_2,undefined8 param_3);
undefined8 _WP_GetViewRect(long param_1,undefined8 param_2);
void _WP_SetControlHighlightInfo(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void _WP_SetControllerValueFromText(long param_1,undefined8 param_2,char *param_3,undefined8 param_4);
void ___cxx_global_var_init.23(void);
void ___cxx_global_var_init.24(void);
void __GLOBAL__sub_I_API_PluginGUI.cpp(void);
void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
void _WP_SetChainerOutputsOffset(long param_1);
void _WP_SetChainerInputsOffset(long param_1);
void _WP_SetChainerSideChainOffset(long param_1);
void ___cxx_global_var_init.14(void);
void ___cxx_global_var_init.15(void);
void __GLOBAL__sub_I_API_PluginIO.cpp(void);
void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
void _WP_GetEqCurveData(long param_1);
void ___cxx_global_var_init.14(void);
void ___cxx_global_var_init.15(void);
void __GLOBAL__sub_I_API_PluginMisc.cpp(void);
void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
undefined8 _WP_ProcessFunctionLock(long param_1,int param_2);
undefined8 _WP_LocateDSP(long param_1);
undefined8 _WP_SetProcessActive(long param_1,undefined8 param_2);
undefined8 _WP_ChangeSampleRate(long param_1,undefined8 param_2);
undefined8 _WP_SetBypass(long param_1,undefined8 param_2);
void _WP_SetMute(long param_1);
undefined8 _WP_PreScan(long param_1);
undefined8 _WP_TransportChange(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5);
void _WP_RetrieveNSProcessCode(long param_1);
int _WP_GetNSProcessSize(long param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void ___cxx_global_var_init.14(void);
void ___cxx_global_var_init.15(void);
void __GLOBAL__sub_I_API_PluginProcess.cpp(void);
void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
undefined8 __ZN20wvWavesV15_1_154_19717WavesAPI3Internal30AddPluginSpecificAPI3FunctionsERNS_41WCWavesAPI3_PluginSide_RequestAndResponseE(undefined8 param_1);
undefined8 __ZN20wvWavesV15_1_154_19717WavesAPI3Internal28GetAllWavesAPI3FunctionNamesERNS_41WCWavesAPI3_PluginSide_RequestAndResponseE(long param_1);
undefined8 __ZN20wvWavesV15_1_154_19717WavesAPI3Internal4PingERNS_41WCWavesAPI3_PluginSide_RequestAndResponseE(long param_1);
undefined8 __ZN20wvWavesV15_1_154_19717WavesAPI3Internal7unknownERNS_41WCWavesAPI3_PluginSide_RequestAndResponseE(long *param_1);
long * __ZNSt3__113unordered_mapINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEENS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S9_EEEEED1Ev(long *param_1);
undefined4 _WP_PluginAPI3(long param_1);
void __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponse21set_error_and_messageEiPKc(long *param_1,int param_2,char *param_3);
long __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_(char *param_1,char *param_2);
byte * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED1Ev(byte *param_1);
void __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE9push_backEOSD_(char *param_1,undefined1 *param_2);
void __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5valueERKS9_PKc(undefined8 *param_1,char *param_2,undefined8 *param_3,char *param_4);
undefined8 *__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(undefined8 *param_1,char *param_2);
undefined4 __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5valueIiLi0EEET_RKS9_RKSF_(char *param_1,undefined8 *param_2,undefined4 *param_3);
long * __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseC2ER21WCPluginAPICallParams(long *param_1,long param_2);
void __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5parseIRPKcEESD_OT_NS1_8functionIFbiNS_6detail13parse_event_tERSD_EEEbb(byte *param_1,undefined8 *param_2,long *param_3,undefined1 param_4,undefined1 param_5);
long * __ZNSt3__16vectorI13WCFixedStringILm31EENS_9allocatorIS2_EEED1Ev(long *param_1);
long __ZN21WCPluginAPICallParamsD1Ev(long param_1);
undefined8 *__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_valueC2ENS_6detail7value_tE(undefined8 *param_1,undefined4 param_2);
undefined8 *__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRA1_KcEEEPT_DpOT0_(char *param_1);
void __ZNSt3__1L20__throw_length_errorEPKc(void);
void __ZNSt12length_errorC1EPKc(undefined8 param_1);
void __ZN8nlohmann6detail9exception4nameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi(undefined8 *param_1,undefined8 param_2,undefined8 param_3);
undefined8 *__ZN8nlohmann6detail9exceptionC2EiPKc(undefined8 *param_1,undefined4 param_2,undefined8 param_3);
void __ZNK8nlohmann6detail9exception4whatEv(long param_1);
void __ZN8nlohmann6detail9exceptionD1Ev(undefined8 *param_1);
void __ZN8nlohmann6detail9exceptionD0Ev(undefined8 *param_1);
void __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6parserINS_6detail22iterator_input_adapterIPKcEEEENSF_6parserISD_T_EESL_NS1_8functionIFbiNSF_13parse_event_tERSD_EEEbb(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined1 param_5,undefined1 param_6);
void __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5parseEbRSF_(long *param_1,int param_2,byte *param_3);
long __ZNSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEC2EOSJ_(long param_1,long param_2);
long __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEEC2EOSJ_NS3_8functionIFbiNS0_13parse_event_tERSF_EEEbb(long param_1,undefined8 *param_2,long *param_3,undefined1 param_4,undefined1 param_5);
int __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17get_decimal_pointEv(void);
undefined8 __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv(long *param_1);
bool __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE8skip_bomEv(long *param_1);
undefined8 __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE12scan_commentEv(long *param_1);
void __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE11scan_stringEv(long *param_1);
undefined8 __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE11scan_numberEv(long *param_1);
int __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv(long *param_1);
void __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5ungetEv(long param_1);
void __ZNKSt3__113__vector_baseIcNS_9allocatorIcEEE20__throw_length_errorEv(void);
void __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5resetEv(long param_1);
int __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE13get_codepointEv(long *param_1);
undefined8 __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE18next_byte_in_rangeESt16initializer_listIiE(long *param_1,int *param_2,long param_3);
long __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEED2Ev(long param_1);
long __ZNSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEC2ERKSJ_(long param_1,long *param_2);
undefined8 __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE18sax_parse_internalINS0_28json_sax_dom_callback_parserISF_EEEEbPT_(long param_1,long *param_2);
undefined8 __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_(long param_1,undefined8 param_2,undefined8 param_3,long param_4);
void __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv(undefined8 *param_1,long param_2);
void __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4);
void __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_(undefined8 *param_1,long param_2,uint param_3,long param_4);
void __ZN8nlohmann6detail11parse_errorD1Ev(undefined8 *param_1);
undefined8 __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE18sax_parse_internalINS0_19json_sax_dom_parserISF_EEEEbPT_(long param_1,long *param_2);
undefined8 __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_(long param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 *__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEC2ERSF_NS3_8functionIFbiNS0_13parse_event_tESH_EEEb(undefined8 *param_1,undefined8 param_2,long *param_3,undefined1 param_4);
void __ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(long *param_1,char *param_2);
void __ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm(long *param_1,ulong param_2);
void __ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEm(undefined8 *param_1,long param_2);
void __ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr27__is_cpp17_forward_iteratorIT_EE5valueEvE4typeES8_S8_(long *param_1,long *param_2,long *param_3);
void __ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(long *param_1,long *param_2,long *param_3,long *param_4);
void __ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(long *param_1,long *param_2,long *param_3,long *param_4);
undefined8 __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12start_objectEm(long *param_1,ulong param_2);
undefined8 __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE10end_objectEv(long param_1);
undefined8 __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE3keyERSB_(long param_1,undefined8 *param_2);
undefined8 __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11start_arrayEm(long *param_1,ulong param_2);
undefined8 __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE9end_arrayEv(long param_1);
undefined8 __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_12out_of_rangeEEEbmRKSB_RKT_(long param_1,undefined8 param_2,undefined8 param_3,long param_4);
void __ZN8nlohmann6detail12out_of_range6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_(undefined8 *param_1,undefined8 param_2,undefined8 *param_3);
void __ZN8nlohmann6detail12out_of_rangeD1Ev(undefined8 *param_1);
void __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_(long param_1,undefined4 param_2,undefined1 param_3);
undefined1  [16]__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueINS0_7value_tEEENS3_4pairIbPSF_EEOT_b(long *param_1,byte *param_2,ulong param_3);
void __ZNSt3__1L25__throw_bad_function_callEv(void);
void __ZNSt3__117bad_function_callD1Ev(void);
void __ZNSt3__117bad_function_callD0Ev(void);
void __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE12emplace_backIJSD_EEERSD_DpOT_(long *param_1,undefined1 *param_2);
void __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE(long *param_1,undefined8 *param_2);
void __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv(void);
long * __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev(long *param_1);
void __ZNKSt3__113__vector_baseIPN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISF_EEE20__throw_length_errorEv(void);
char * __ZNK8nlohmann6detail9iter_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEptEv(long *param_1);
void __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5eraseINS_6detail9iter_implISD_EELi0EEET_SI_(undefined8 *param_1,byte *param_2,undefined8 *param_3);
void __ZN8nlohmann6detail9iter_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEppEv(undefined8 *param_1);
bool __ZNK8nlohmann6detail9iter_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEeqISG_LDn0EEEbRKT_(undefined8 *param_1,undefined8 *param_2);
void __ZN8nlohmann6detail16invalid_iterator6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_(undefined8 *param_1,undefined8 param_2,undefined8 *param_3);
void __ZN8nlohmann6detail16invalid_iteratorD1Ev(undefined8 *param_1);
void __ZN8nlohmann6detail16invalid_iteratorD0Ev(undefined8 *param_1);
void __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_(undefined8 *param_1,undefined8 param_2,undefined8 *param_3);
void __ZN8nlohmann6detail10type_errorD1Ev(undefined8 *param_1);
long * __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE5eraseENS_21__tree_const_iteratorISG_PNS_11__tree_nodeISG_PvEElEE(undefined8 *param_1,long *param_2);
void __ZNSt3__116allocator_traitsINS_9allocatorINS_11__tree_nodeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS1_IcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES8_bxydS1_NS9_14adl_serializerENSC_IhNS1_IhEEEEEEEEPvEEEEE7destroyINS_4pairIKS8_SG_EEvvEEvRSK_PT_(undefined8 *param_1);
void __ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(long *param_1,long *param_2);
void __ZN8nlohmann6detail10type_errorD0Ev(undefined8 *param_1);
void __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_value7destroyENS_6detail7value_tE(long *param_1,int param_2);
void __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE7reserveEm(long *param_1,ulong param_2);
void __ZNSt3__120back_insert_iteratorINS_6vectorIN8nlohmann10basic_jsonINS_3mapES1_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS2_14adl_serializerENS1_IhNS8_IhEEEEEENS8_ISE_EEEEEaSEOSE_(undefined8 *param_1,undefined1 *param_2);
void __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE(undefined8 param_1,undefined8 *param_2);
long * __ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEED2Ev(long *param_1);
undefined8 __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKS9_EEEPT_DpOT0_(undefined8 param_1);
undefined1  [16]__ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4);
long * __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISR_EERKT_(long param_1,undefined8 *param_2,undefined8 *param_3);
void __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSR_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISG_PvEENS_22__tree_node_destructorINS5_ISZ_EEEEEEDpOT_(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4);
void __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSR_SR_(long *param_1,long param_2,undefined8 *param_3,long *param_4);
long * __ZNSt3__110unique_ptrINS_11__tree_nodeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES8_bxydS6_NS9_14adl_serializerENSC_IhNS6_IhEEEEEEEEPvEENS_22__tree_node_destructorINS6_ISJ_EEEEED1Ev(long *param_1);
uint __ZNKSt3__14lessIvEclIRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_EEDTltclsr3std3__1E7forwardIT_Efp_Eclsr3std3__1E7forwardIT0_Efp0_EEOSB_OSC_(undefined8 *param_1,undefined8 *param_2);
undefined8 * __ZN8nlohmann6detail12out_of_rangeC1ERKS1_(undefined8 *param_1,long param_2);
void __ZN8nlohmann6detail12out_of_rangeD0Ev(undefined8 *param_1);
undefined1  [16]__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRdEENS3_4pairIbPSF_EEOT_b(long *param_1,undefined8 *param_2,ulong param_3);
undefined1  [16]__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRbEENS3_4pairIbPSF_EEOT_b(long *param_1,byte *param_2,ulong param_3);
void __ZN8nlohmann6detail20external_constructorILNS0_7value_tE4EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_9boolean_tE(byte *param_1,ulong param_2);
undefined1  [16]__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIDnEENS3_4pairIbPSF_EEOT_b(long *param_1,undefined8 param_2,ulong param_3);
undefined1  [16]__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRxEENS3_4pairIbPSF_EEOT_b(long *param_1,undefined8 *param_2,ulong param_3);
void __ZN8nlohmann6detail20external_constructorILNS0_7value_tE5EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_16number_integer_tE(byte *param_1,undefined8 param_2);
undefined1  [16]__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRSB_EENS3_4pairIbPSF_EEOT_b(long *param_1,undefined8 param_2,ulong param_3);
undefined1  [16]__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRyEENS3_4pairIbPSF_EEOT_b(long *param_1,undefined8 *param_2,ulong param_3);
void __ZN8nlohmann6detail20external_constructorILNS0_7value_tE6EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_17number_unsigned_tE(byte *param_1,undefined8 param_2);
undefined8 * __ZN8nlohmann6detail11parse_errorC1ERKS1_(undefined8 *param_1,long param_2);
void __ZN8nlohmann6detail11parse_errorD0Ev(undefined8 *param_1);
void __ZN8nlohmann6detail11parse_error15position_stringERKNS0_10position_tE(undefined8 *param_1,long param_2);
char * __ZN8nlohmann6detail10lexer_baseINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE15token_type_nameENSG_10token_typeE(uint param_1);
long __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEED2Ev(long param_1);
undefined8 __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_12out_of_rangeEEEbmRKSB_RKT_(long param_1,undefined8 param_2,undefined8 param_3,long param_4);
long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueINS0_7value_tEEEPSF_OT_(long *param_1,byte *param_2);
long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRdEEPSF_OT_(long *param_1,undefined8 *param_2);
long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRbEEPSF_OT_(long *param_1,byte *param_2);
long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIDnEEPSF_OT_(long *param_1);
long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRxEEPSF_OT_(long *param_1,undefined8 *param_2);
long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRSB_EEPSF_OT_(long *param_1,undefined8 param_2);
long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRyEEPSF_OT_(long *param_1,undefined8 *param_2);
long * __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE4findIA3_cEENS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEERKT_(long param_1,undefined8 param_2);
undefined1 *__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ESt16initializer_listINS_6detail8json_refISD_EEEbNSF_7value_tE(undefined1 *param_1,char *param_2,long param_3,ulong param_4,int param_5);
long * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createINS3_ISD_NS7_ISD_EEEEJPKNS_6detail8json_refISD_EESL_EEEPT_DpOT0_(undefined8 *param_1,undefined8 *param_2);
long __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixEm(char *param_1,long param_2);
undefined1  [16]__ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JS7_SF_EEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_(long *param_1,undefined8 *param_2,long *param_3,undefined1 *param_4);
long * __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEEC2IPKNS1_6detail8json_refISD_EEEET_NS_9enable_ifIXaasr27__is_cpp17_forward_iteratorISM_EE5valuesr16is_constructibleISD_NS_15iterator_traitsISM_E9referenceEEE5valueESM_E4typeE(long *param_1,byte *param_2,byte *param_3);
void __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE11__vallocateEm(long *param_1,ulong param_2);
byte * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC1INS_6detail8json_refISD_EELi0EEERKT_(byte *param_1,byte *param_2);
long * __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseD2Ev(long *param_1);
void __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponse14finalize_replyEv(long *param_1);
bool __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5eraseERKS9_(char *param_1,undefined8 *param_2);
void __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE4dumpEicbNS_6detail15error_handler_tE(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,byte param_4,undefined8 param_5,undefined4 param_6);
long __ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE13__count_multiIA6_cEEmRKT_(long param_1,undefined8 param_2);
undefined8 *__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKPKcEEEPT_DpOT0_(undefined8 *param_1);
bool __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE14__erase_uniqueIS7_EEmRKT_(undefined8 *param_1,undefined8 *param_2);
long * __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE4findIS7_EENS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEERKT_(long param_1,undefined8 *param_2);
void __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE4dumpERKSF_bbjj(undefined8 *param_1,undefined1 *param_2,int param_3,undefined8 param_4,undefined8 param_5,ulong param_6);
void __ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEED1Ev(undefined8 *param_1);
void __ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEED0Ev(undefined8 *param_1);
void __ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv(long param_1);
void __ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv(void);
void __ZN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEE15write_characterEc(long param_1);
void __ZN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEE16write_charactersEPKcm(long param_1);
void __ZN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEED1Ev(void);
void __ZN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEED0Ev(void);
undefined8 *__ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEC2ENS3_10shared_ptrINS0_23output_adapter_protocolIcEEEEcNS0_15error_handler_tE(undefined8 *param_1,undefined8 *param_2,byte param_3,undefined4 param_4);
void __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorEv(void);
long __ZNSt3__110shared_ptrIN8nlohmann6detail23output_adapter_protocolIcEEED2Ev(long param_1);
undefined8 *__ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_escapedERKSB_b(undefined8 *param_1,long *param_2,uint param_3);
void __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIhLi0EEEvT_(undefined8 *param_1,uint param_2);
void __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIyLi0EEEvT_(undefined8 *param_1,ulong param_2);
void __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIxLi0EEEvT_(undefined8 *param_1,ulong param_2);
void __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE10dump_floatEd(double param_1,undefined8 *param_2);
undefined8 *__ZNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEC1Ev(undefined8 *param_1);
undefined8 *__ZNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(undefined8 *param_1);
void __ZNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev(undefined8 *param_1);
void __ZThn16_NSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(undefined8 *param_1);
void __ZThn16_NSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev(undefined8 *param_1);
void __ZTv0_n24_NSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(long *param_1);
void __ZTv0_n24_NSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev(long *param_1);
void __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(undefined8 *param_1);
void __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev(undefined8 *param_1);
void __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(undefined8 *param_1,long param_2,long param_3,int param_4,uint param_5);
void __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekposENS_4fposI11__mbstate_tEEj(long *param_1,long param_2,undefined8 param_3);
ulong __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(long param_1);
undefined8 __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(long param_1,undefined8 param_2);
ulong __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(long *param_1,uint param_2);
void __ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(undefined8 *param_1,long param_2);
undefined2 * __ZN8nlohmann6detail8to_charsIdEEPcS2_PKcT_(double param_1,undefined2 *param_2);
void __ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_(ulong param_1,long param_2,int *param_3,int *param_4);
void __ZN8nlohmann6detail9dtoa_impl18compute_boundariesIdEENS1_10boundariesET_(ulong *param_1,ulong param_2);
undefined1  [16] __ZN8nlohmann6detail9dtoa_impl5diyfp3mulERKS2_S4_(ulong *param_1,ulong *param_2);
void __ZN8nlohmann6detail9dtoa_impl16grisu2_digit_genEPcRiS3_NS1_5diyfpES4_S4_(long param_1,int *param_2,int *param_3,long param_4,undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,ulong param_9,int param_10);
void __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEED2Ev(long param_1);
byte * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev(byte *param_1);
undefined1  [16]__ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4);
long * __ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(long *param_1,long param_2,long param_3);
long * __ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_(long *param_1,long param_2,long param_3,long param_4,long param_5,int param_6);
undefined1 *__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ERKSD_(undefined1 *param_1,undefined1 *param_2);
long * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createINS2_IS9_SD_NS1_4lessIvEENS7_INS1_4pairIKS9_SD_EEEEEEJRKSL_EEEPT_DpOT0_(undefined8 *param_1);
undefined1  [16]__ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SF_EEEEENSO_INS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEENS_21__tree_const_iteratorISG_SX_lEERKT_DpOT0_(long *param_1,long *param_2,undefined8 *param_3,long param_4);
long * __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISG_PNS_11__tree_nodeISG_SP_EElEERPNS_15__tree_end_nodeISR_EESS_RKT_(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5);
void __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE16__construct_nodeIJRKNS_4pairIKS7_SF_EEEEENS_10unique_ptrINS_11__tree_nodeISG_PvEENS_22__tree_node_destructorINS5_ISW_EEEEEEDpOT_(long *param_1,long param_2,long param_3);
undefined8 __ZNSt3__14pairIKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES6_bxydS4_NS8_14adl_serializerENSB_IhNS4_IhEEEEEEEC2ERKSG_(undefined8 param_1,long param_2);
long * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createINS3_ISD_NS7_ISD_EEEEJRKSG_EEEPT_DpOT0_(long *param_1);
long * __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEEC2ERKSF_(long *param_1,long *param_2);
void __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE18__construct_at_endIPSD_EENS_9enable_ifIXsr27__is_cpp17_forward_iteratorIT_EE5valueEvE4typeESJ_SJ_m(long param_1,long param_2,long param_3);
long * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createINS_27byte_container_with_subtypeISC_EEJRKSG_EEEPT_DpOT0_(long *param_1);
long * __ZNSt3__16vectorIhNS_9allocatorIhEEEC2ERKS3_(long *param_1,long *param_2);
void __ZNSt3__16vectorIhNS_9allocatorIhEEE11__vallocateEm(long *param_1,long param_2);
void __ZNKSt3__113__vector_baseIhNS_9allocatorIhEEE20__throw_length_errorEv(void);
void __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5valueIS9_Li0EEET_RKS9_RKSF_(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined8 param_4);
char * __ZNK8nlohmann6detail9iter_implIKNS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEptEv(long *param_1);
bool __ZNK8nlohmann6detail9iter_implIKNS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEeqISH_LDn0EEEbRKT_(undefined8 *param_1,undefined8 *param_2);
void __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE8get_implIS9_Li0EEET_NS_6detail12priority_tagILj0EEE(undefined8 *param_1,char *param_2);
void __ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEEvRKT_RNSG_8string_tE(char *param_1,undefined8 param_2);
ulong * __ZNSt3__113unordered_mapINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEENS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S9_EEEEEC2ESt16initializer_listISH_E(ulong *param_1,ulong *param_2,long param_3);
void __ZNKSt3__122__unordered_map_hasherINS_17basic_string_viewIcNS_11char_traitsIcEEEENS_17__hash_value_typeIS4_PFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_4hashIS4_EENS_8equal_toIS4_EELb1EEclERKS4_(undefined8 param_1,undefined8 *param_2);
void __ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_22__unordered_map_hasherIS5_SB_NS_4hashIS5_EENS_8equal_toIS5_EELb1EEENS_21__unordered_map_equalIS5_SB_SG_SE_Lb1EEENS_9allocatorISB_EEE6rehashEm(ulong *param_1,ulong param_2);
ulong __ZNSt3__121__murmur2_or_cityhashImLm64EEclEPKvm(undefined8 param_1,ulong *param_2,ulong param_3);
ulong __ZNSt3__121__murmur2_or_cityhashImLm64EE18__hash_len_0_to_16EPKcm(ulong *param_1,ulong param_2);
long __ZNSt3__121__murmur2_or_cityhashImLm64EE19__hash_len_17_to_32EPKcm(long *param_1,long param_2);
long __ZNSt3__121__murmur2_or_cityhashImLm64EE19__hash_len_33_to_64EPKcm(long *param_1,long param_2);
bool __ZNKSt3__18equal_toINS_17basic_string_viewIcNS_11char_traitsIcEEEEEclERKS4_S7_(undefined8 *param_1,undefined8 *param_2);
int __ZNKSt3__117basic_string_viewIcNS_11char_traitsIcEEE7compareES3_(undefined8 *param_1,void *param_2,ulong param_3);
long * __ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_22__unordered_map_hasherIS5_SB_NS_4hashIS5_EENS_8equal_toIS5_EELb1EEENS_21__unordered_map_equalIS5_SB_SG_SE_Lb1EEENS_9allocatorISB_EEE8__rehashEm(ulong *param_1,ulong param_2);
long * __ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_22__unordered_map_hasherIS5_SB_NS_4hashIS5_EENS_8equal_toIS5_EELb1EEENS_21__unordered_map_equalIS5_SB_SG_SE_Lb1EEENS_9allocatorISB_EEED2Ev(long *param_1);
long * __ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_22__unordered_map_hasherIS5_SB_NS_4hashIS5_EENS_8equal_toIS5_EELb1EEENS_21__unordered_map_equalIS5_SB_SG_SE_Lb1EEENS_9allocatorISB_EEE4findIS5_EENS_15__hash_iteratorIPNS_11__hash_nodeISB_PvEEEERKT_(long *param_1,undefined8 *param_2);
undefined8 *__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRA5_KcEEEPT_DpOT0_(char *param_1);
undefined8 *__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKNS1_17basic_string_viewIcS6_EEEEEPT_DpOT0_(undefined8 *param_1);
void __ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEiLi0EEEvRKT_RT0_(char *param_1,uint *param_2);
void __ZN8nlohmann6detail20external_constructorILNS0_7value_tE7EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_14number_float_tE(undefined8 param_1,byte *param_2);
void __ZNSt3__1L17__call_once_proxyINS_5tupleIJOZN20wvWavesV15_1_154_19717WavesAPI3Internal30AddPluginSpecificAPI3FunctionsERNS2_41WCWavesAPI3_PluginSide_RequestAndResponseEE3$_0EEEEEvPv(undefined8 *param_1);
void ___cxx_global_var_init.14(void);
void ___cxx_global_var_init.15(void);
void __GLOBAL__sub_I_API_Plugin_New.cpp(void);
void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
void _WP_LoadFromBuffer(long param_1,undefined8 param_2,undefined4 param_3);
undefined8 _WP_SetActiveSetupType(long param_1,int param_2);
undefined8 _WP_GetActiveSetupType(long param_1,undefined4 *param_2);
undefined8 _WP_GetNumChunks(long param_1,undefined4 *param_2);
void _WP_GetChunkSize(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4);
void _WP_GetChunk(long param_1);
void _WP_SetChunk(long param_1);
undefined8 _WP_CopySetup(long param_1);
void ___cxx_global_var_init.14(void);
void ___cxx_global_var_init.15(void);
void __GLOBAL__sub_I_API_PluginSetup.cpp(void);
void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
ulong _WP_CreateInstance(long param_1);
undefined8 _WP_DeleteInstance(long param_1);
void _WP_DisposeGUI(long param_1);
undefined8 _WP_CreateGUI(long param_1);
void _WP_CreateAdditionalGUIs(long param_1);
void _WP_DisposeAdditionalGUIs(long param_1);
void _WP_TextCommand(long param_1,undefined8 param_2);
void _WP_TextCommandWithReply(long param_1);
void ___cxx_global_var_init.14(void);
void ___cxx_global_var_init.15(void);
void __GLOBAL__sub_I_API_PluginStatic.cpp(void);
void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
undefined8 _WP_ProcessMidi(long param_1);
void ___cxx_global_var_init.14(void);
void ___cxx_global_var_init.15(void);
void __GLOBAL__sub_I_API_PluginMidi.cpp(void);
void __ZNSt3__112shared_mutexD1Ev(long param_1);
long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev(long param_1);
void _WP_GetPluginInfo_bool(void);
void _WP_GetPluginInfo_double(void);
void _WP_GetPluginInfo_int32_t(void);
void _WP_GetPluginInfo_size_t(void);
void _WP_GetPluginInfo_struct(void);
void _WP_GetPluginInfo_uint32_t(void);
void _WP_GetPluginInfo_WCFixedString(void);
void _WP_SetPluginInfo_bool(void);
void _WP_SetPluginInfo_c_str(void);
undefined8 _WP_SetPluginInfo_double(void);
void _WP_SetPluginInfo_int32_t(void);
void _WP_SetPluginInfo_struct(void);
void _WP_SetPluginInfo_uint32_t(void);
void _WP_SetPluginValueBinary(long param_1);
undefined8 _WP_UpdateAlgBuf(long param_1,undefined8 *param_2);
void _WP_SetPluginValueStr(long param_1);
void _WP_GetPluginValueBinary(long param_1);
void _WP_GetPluginValueStr(long param_1);
void ___cxx_global_var_init.14(void);
void ___cxx_global_var_init.15(void);
void __GLOBAL__sub_I_API_PluginInfo.cpp(void);
void __ZN14cDuganAgentAlg30PrepareDisplayFunctionsMapSelfERNSt3__13mapI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyENS0_4lessIS3_EENS0_9allocatorINS0_4pairIKS3_S5_EEEEEE.cold.1(long *param_1,long param_2);
void __ZN14cDuganAgentAlg30PrepareDisplayFunctionsMapSelfERNSt3__13mapI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyENS0_4lessIS3_EENS0_9allocatorINS0_4pairIKS3_S5_EEEEEE.cold.2(long *param_1);
void FUN_0001e3c4(long *param_1);
void _WP_InitGUI.cold.1(long *param_1);
void __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6parserINS_6detail22iterator_input_adapterIPKcEEEENSF_6parserISD_T_EESL_NS1_8functionIFbiNSF_13parse_event_tERSD_EEEbb.cold.1(long *param_1);
void FUN_0001e424(long *param_1);
void __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEEC2EOSJ_NS3_8functionIFbiNS0_13parse_event_tERSF_EEEbb.cold.1(long *param_1);
void __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE4dumpEicbNS_6detail15error_handler_tE.cold.1(long *param_1);
void __Unwind_Resume(_Unwind_Exception *exception_object);
void __Z11msToDspCoefdd(void);
void __Z13O1_Allp_90degd(void);
void __Z18GetPluginInfo_boolRN20wvWavesV15_1_154_19714PluginInstanceEjRbl(void);
void __Z18SetPluginInfo_boolRN20wvWavesV15_1_154_19714PluginInstanceEjbl(void);
void __Z19SetPluginInfo_c_strRN20wvWavesV15_1_154_19714PluginInstanceEjPKcl(void);
void __Z19Translate_Frequencydi(void);
void __Z20GetPluginInfo_doubleRN20wvWavesV15_1_154_19714PluginInstanceEjRdl(void);
void __Z20GetPluginInfo_size_tRN20wvWavesV15_1_154_19714PluginInstanceEjRml(void);
void __Z20GetPluginInfo_structRN20wvWavesV15_1_154_19714PluginInstanceEjPvl(void);
void __Z20SetPluginInfo_structRN20wvWavesV15_1_154_19714PluginInstanceEjPvl(void);
void __Z21GetPluginInfo_int32_tRN20wvWavesV15_1_154_19714PluginInstanceEjRil(void);
void __Z21SetPluginInfo_int32_tRN20wvWavesV15_1_154_19714PluginInstanceEjil(void);
void __Z22GetPluginInfo_uint32_tRN20wvWavesV15_1_154_19714PluginInstanceEjRjl(void);
void __Z22SetPluginInfo_uint32_tRN20wvWavesV15_1_154_19714PluginInstanceEjjl(void);
void __Z27GetPluginInfo_WCFixedStringRN20wvWavesV15_1_154_19714PluginInstanceEjR17WCFixedStringBasel(void);
void __Z8dbToGaind(void);
void __ZN12WCLinkGroupsC1ERNSt3__16vectorI14sCONTROL_PARAMNS0_9allocatorIS2_EEEERK12EPluginSetup(void);
void __ZN14WCMeterManager11ReadFromDSPEv(void);
void __ZN14WCMeterManager12GetMeterInfoEjRN20wvWavesV15_1_154_19714WavesMeterInfoE(void);
void __ZN14WCMeterManager13GetMeterIndexEm(void);
void __ZN14WCMeterManager13GetMeterValueEjPdPi(void);
void __ZN14WCMeterManager14ReadMetersSendEv(void);
void __ZN14WCMeterManager17ReadMetersReceiveEv(void);
void __ZN14WCMeterManager18SetMeterReadOffsetEjj(void);
void __ZN14WCMeterManager9ResetClipEj(void);
void __ZN15CSelectableHome19BuildSelectableListEv(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM11PreScanDataEPN20WPAPI_PROCESS_MEMORY13WavesSoundBufEiiPcS4_PNS1_12ExternStructEPNS1_16sNativeShellInfoE(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM12FinishCreateEv(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM12SetNumInputsEi(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM13GetSampleRateEv(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM13SetGUIPointerEPKcPNS_14CStandardGUI_XE(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM13SetNumOutputsEi(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM13SetSampleRateEi(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM15InitProcessCodeEv(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM15SetExecCallBackEPFiilPvS1_S1_El(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM15TransportChangeEbbbii(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM16ChangeSampleRateEi(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM16GetNSProcessSizeE13ProcessorType7EOSType(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM16InitInstanceDataEv(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM16MidiProcessInputERNS_4MIDI11WCMidiEventE(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM16SetProcessActiveEb(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM16UpdateParamStateEmdb(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM17GetPluginValueStrEPKcR17WCFixedStringBase(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM17SetPluginValueStrEPKcS2_(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM18SendAndFreeBuffersERPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADEREib(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM19LoadSetupFromBufferEPi8WCFourCCi(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM19SetPluginValue_boolEPKcb(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM20GetPluginValueBinaryEPKcPvm(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM20SetPluginValueBinaryEPKcPKvm(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM21RetrieveNSProcessCodeE13ProcessorType7EOSTypePc(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM22GetPointerToBypassCoefEii(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM24GetProcessSemaphoreIDPtrEv(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM7DisposeEv(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM7InitAlgEb(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM7SetMuteEb(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM8GetParamEm(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM8InitDataEv(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM9ChainBufsEPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADERES3_(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHM9SetBypassEb(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHMC2ERKNS_18WavesComponentInfoERP18WTResContainerType(void);
void __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev(void);
void __ZN20wvWavesV15_1_154_19711WCWLEClient22CheckAuthForSingleItemERKNS_13AuthCheckItemE(void);
void __ZN20wvWavesV15_1_154_19711WCWLEClientC1Ev(void);
void __ZN20wvWavesV15_1_154_19711WCWLEClientD1Ev(void);
void __ZN20wvWavesV15_1_154_19713AuthCheckItemC1ERK13WCFixedStringILm63EERKNS_9WCVersionERK8WCFourCC(void);
void __ZN20wvWavesV15_1_154_19713DisplayFloat1EddR17WCFixedStringBase(void);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_X11DoMouseDownEPNS_17PluginViewManager11WCEventDataE(void);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_X13DoMouseUpBaseEPNS_17PluginViewManager11WCEventDataE(void);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_X15DoMouseDownBaseEPNS_17PluginViewManager11WCEventDataE(void);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_X15DoMouseMoveBaseEPNS_17PluginViewManager11WCEventDataE(void);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_X16DoMouseWheelBaseEPNS_17PluginViewManager11WCEventDataE(void);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_X19ClearTouchEventsMapEv(void);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_X20InitGuiWithoutImagesEPNS_10cALGORITHMER8WCResKey(void);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_X42ConvertToControlIndexFromAutomationControlEi(void);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_X7InitGuiEPNS_10cALGORITHMER8WCResKey(void);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_X9DoMouseUpEPNS_17PluginViewManager11WCEventDataE(void);
void __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev(void);
void __ZN20wvWavesV15_1_154_19721WCPluginRedisReporter7set_algEPNS_10cALGORITHME(void);
void __ZN20wvWavesV15_1_154_19721WCPluginRedisReporterC1ERNS_18WavesComponentInfoEPNS_10cALGORITHME(void);
void __ZN20wvWavesV15_1_154_1972RM18AttachResContainerEP18WTNativeDLLRefTypeRP18WTResContainerTypej(void);
void __ZN20wvWavesV15_1_154_1972RM18DetachResContainerERP18WTResContainerType(void);
void __ZN20wvWavesV15_1_154_1975Utils10WCStMemObj6AssignEPKcm(void);
void __ZN20wvWavesV15_1_154_1975Utils10WCStMemObjC1Ev(void);
void __ZN20wvWavesV15_1_154_1975Utils10WCStMemObjD1Ev(void);
void __ZN20wvWavesV15_1_154_1978wvThread17ThreadMutexInited6obtainEv(void);
void __ZN20wvWavesV15_1_154_1978wvThread17ThreadMutexInited7releaseEv(void);
void __ZN20wvWavesV15_1_154_1979WCVersionC1EPKc(void);
void __ZN4wvGS27WCGraphicStreamBinaryWriterC1ERN20wvWavesV15_1_154_1975Utils10WCStMemObjEm(void);
void __ZN4wvGS27WCGraphicStreamBinaryWriterD1Ev(void);
void __ZN8WCResKeyC1ERK13WCFixedStringILm31EERKs(void);
void __ZNK20wvWavesV15_1_154_19710cALGORITHM10GetAlgNameEv(void);
void __ZNK20wvWavesV15_1_154_19710cALGORITHM13GetParamStateEm(void);
void __ZNK20wvWavesV15_1_154_19710cALGORITHM14GetActiveSetupEv(void);
void __ZNK20wvWavesV15_1_154_19710cALGORITHM16GetProcessActiveEv(void);
void __ZNK20wvWavesV15_1_154_19710cALGORITHM19GetParamValueStringEmR17WCFixedStringBase(void);
void __ZNK20wvWavesV15_1_154_19710cALGORITHM19GetPluginValue_boolEPKcb(void);
void __ZNK20wvWavesV15_1_154_19710cALGORITHM9GetBypassEv(void);
void __ZNK20wvWavesV15_1_154_19712WCParam_Base16RealWorldToStateEd(void);
void __ZNK20wvWavesV15_1_154_19717PluginViewManager11WCEventData21GetMouseButtonPressedEv(void);
void __ZNK20wvWavesV15_1_154_19721WCPluginInstanceProxy18GetDemoModeEnabledEv(void);
void __ZNK20wvWavesV15_1_154_1975Utils15WCStConstMemObj5EmptyEv(void);
void __ZNKSt13runtime_error4whatEv(void);
void __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc(void);
void __ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv(void);
void __ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv(void);
void __ZNKSt3__16locale9use_facetERNS0_2idE(void);
void __ZNKSt3__18ios_base6getlocEv(void);
void __ZNSt11logic_errorC2EPKc(void);
void __ZNSt13runtime_errorC1EPKc(void);
void __ZNSt13runtime_errorC1ERKS_(void);
void __ZNSt13runtime_errorD1Ev(void);
void __ZNSt3__111__call_onceERVmPvPFvS2_E(void);
void __ZNSt3__112__next_primeEm(void);
void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(void);
void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(void);
void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc(void);
void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(void);
void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(void);
void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_(void);
void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(void);
void __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(void);
void __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(void);
void __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(void);
void __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(void);
void __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(void);
void __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(void);
void __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEEC2Ev(void);
void __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(void);
void __ZNSt3__118condition_variableD1Ev(void);
void __ZNSt3__119__shared_mutex_baseC1Ev(void);
void __ZNSt3__119__shared_weak_count14__release_weakEv(void);
void __ZNSt3__119__shared_weak_countD2Ev(void);
void __ZNSt3__15mutexD1Ev(void);
void __ZNSt3__16localeD1Ev(void);
void __ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv(void);
void __ZNSt3__18ios_base4initEPv(void);
void __ZNSt3__18ios_base5clearEj(void);
void __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(void);
void __ZNSt3__19to_stringEi(void);
void __ZNSt3__19to_stringEm(void);
void __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_(void);
void __ZNSt9exceptionD2Ev(void);
void __ZSt9terminatev(void);
void __ZdlPv(void);
void __ZltRK17WCFixedStringBaseS1_(void);
void __Znwm(void);
void ___cxa_allocate_exception(void);
void ___cxa_atexit(void);
void ___cxa_begin_catch(void);
void ___cxa_end_catch(void);
void ___cxa_free_exception(void);
void ___cxa_guard_abort(void);
void ___cxa_guard_acquire(void);
void ___cxa_guard_release(void);
void ___cxa_throw(void);
int * ___error(void);
void ___stack_chk_fail(void);
void _bzero(void *param_1,size_t param_2);
void _localeconv(void);
void _log10(void);
int _memcmp(void *param_1,void *param_2,size_t param_3);
void * _memcpy(void *param_1,void *param_2,size_t param_3);
void * _memmove(void *param_1,void *param_2,size_t param_3);
void * _memset(void *param_1,int param_2,size_t param_3);
int _snprintf(char *param_1,size_t param_2,char *param_3,...);
int _strcmp(char *param_1,char *param_2);
size_t _strlen(char *param_1);
char * _strncpy(char *param_1,char *param_2,size_t param_3);
double _strtod(char *param_1,char **param_2);
longlong _strtoll(char *param_1,char **param_2,int param_3);
ulonglong _strtoull(char *param_1,char **param_2,int param_3);
undefined dyld_stub_binder();


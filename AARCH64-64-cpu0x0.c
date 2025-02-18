#include "AARCH64-64-cpu0x0.h"



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



undefined4 __Z23CheckCanSubComponentRunRN20wvWavesV15_1_154_19714PluginInstanceE(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  int local_9e0 [2];
  char acStack_9d8 [24];
  char *local_9c0;
  undefined8 uStack_9b8;
  char *local_9b0;
  char local_9a8 [2224];
  long alStack_f8 [11];
  long alStack_a0 [13];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00024040;
  local_9c0 = local_9a8;
  uStack_9b8 = 0x3f;
  local_9a8[8] = '\0';
  local_9a8[9] = '\0';
  local_9a8[10] = '\0';
  local_9a8[0xb] = '\0';
  local_9a8[0xc] = '\0';
  local_9a8[0xd] = '\0';
  local_9a8[0xe] = '\0';
  local_9a8[0xf] = '\0';
  local_9a8[0] = '\0';
  local_9a8[1] = '\0';
  local_9a8[2] = '\0';
  local_9a8[3] = '\0';
  local_9a8[4] = '\0';
  local_9a8[5] = '\0';
  local_9a8[6] = '\0';
  local_9a8[7] = '\0';
  local_9a8[0x18] = '\0';
  local_9a8[0x19] = '\0';
  local_9a8[0x1a] = '\0';
  local_9a8[0x1b] = '\0';
  local_9a8[0x1c] = '\0';
  local_9a8[0x1d] = '\0';
  local_9a8[0x1e] = '\0';
  local_9a8[0x1f] = '\0';
  local_9a8[0x10] = '\0';
  local_9a8[0x11] = '\0';
  local_9a8[0x12] = '\0';
  local_9a8[0x13] = '\0';
  local_9a8[0x14] = '\0';
  local_9a8[0x15] = '\0';
  local_9a8[0x16] = '\0';
  local_9a8[0x17] = '\0';
  local_9a8[0x28] = '\0';
  local_9a8[0x29] = '\0';
  local_9a8[0x2a] = '\0';
  local_9a8[0x2b] = '\0';
  local_9a8[0x2c] = '\0';
  local_9a8[0x2d] = '\0';
  local_9a8[0x2e] = '\0';
  local_9a8[0x2f] = '\0';
  local_9a8[0x20] = '\0';
  local_9a8[0x21] = '\0';
  local_9a8[0x22] = '\0';
  local_9a8[0x23] = '\0';
  local_9a8[0x24] = '\0';
  local_9a8[0x25] = '\0';
  local_9a8[0x26] = '\0';
  local_9a8[0x27] = '\0';
  local_9a8[0x38] = '\0';
  local_9a8[0x39] = '\0';
  local_9a8[0x3a] = '\0';
  local_9a8[0x3b] = '\0';
  local_9a8[0x3c] = '\0';
  local_9a8[0x3d] = '\0';
  local_9a8[0x3e] = '\0';
  local_9a8[0x3f] = '\0';
  local_9a8[0x30] = '\0';
  local_9a8[0x31] = '\0';
  local_9a8[0x32] = '\0';
  local_9a8[0x33] = '\0';
  local_9a8[0x34] = '\0';
  local_9a8[0x35] = '\0';
  local_9a8[0x36] = '\0';
  local_9a8[0x37] = '\0';
  cVar6 = 'd';
  lVar5 = 1;
  pcVar4 = local_9c0;
  do {
    local_9b0 = pcVar4 + 1;
    *pcVar4 = cVar6;
    if (lVar5 == 0x24) break;
    cVar6 = "deadbeef-deaf-feed-f00d-cafebabeface"[lVar5];
    lVar5 = lVar5 + 1;
    pcVar4 = local_9b0;
  } while (local_9b0 < local_9a8 + 0x3f);
  *local_9b0 = '\0';
  __ZN20wvWavesV15_1_154_1979WCVersionC1EPKc(local_9e0,"255.255.255.1");
  __ZN20wvWavesV15_1_154_19713AuthCheckItemC1ERK13WCFixedStringILm63EERKNS_9WCVersionERK8WCFourCC
            (alStack_f8,&local_9c0,local_9e0,param_1 + 0x438);
  lVar5 = 0;
  lVar3 = 0;
  builtin_strncpy(acStack_9d8,"2TSVcrgaippw",0xc);
  local_9e0 = (int  [2])0x4441455f41645574;
  do {
    if (*(int *)((long)local_9e0 + lVar5) == *(int *)(param_1 + 0x440)) {
      lVar3 = lVar3 + 1;
    }
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x14);
  if (lVar3 == 1) {
    local_9c0 = local_9a8;
    uStack_9b8 = 0x3f;
    local_9a8[8] = '\0';
    local_9a8[9] = '\0';
    local_9a8[10] = '\0';
    local_9a8[0xb] = '\0';
    local_9a8[0xc] = '\0';
    local_9a8[0xd] = '\0';
    local_9a8[0xe] = '\0';
    local_9a8[0xf] = '\0';
    local_9a8[0] = '\0';
    local_9a8[1] = '\0';
    local_9a8[2] = '\0';
    local_9a8[3] = '\0';
    local_9a8[4] = '\0';
    local_9a8[5] = '\0';
    local_9a8[6] = '\0';
    local_9a8[7] = '\0';
    local_9a8[0x18] = '\0';
    local_9a8[0x19] = '\0';
    local_9a8[0x1a] = '\0';
    local_9a8[0x1b] = '\0';
    local_9a8[0x1c] = '\0';
    local_9a8[0x1d] = '\0';
    local_9a8[0x1e] = '\0';
    local_9a8[0x1f] = '\0';
    local_9a8[0x10] = '\0';
    local_9a8[0x11] = '\0';
    local_9a8[0x12] = '\0';
    local_9a8[0x13] = '\0';
    local_9a8[0x14] = '\0';
    local_9a8[0x15] = '\0';
    local_9a8[0x16] = '\0';
    local_9a8[0x17] = '\0';
    local_9a8[0x28] = '\0';
    local_9a8[0x29] = '\0';
    local_9a8[0x2a] = '\0';
    local_9a8[0x2b] = '\0';
    local_9a8[0x2c] = '\0';
    local_9a8[0x2d] = '\0';
    local_9a8[0x2e] = '\0';
    local_9a8[0x2f] = '\0';
    local_9a8[0x20] = '\0';
    local_9a8[0x21] = '\0';
    local_9a8[0x22] = '\0';
    local_9a8[0x23] = '\0';
    local_9a8[0x24] = '\0';
    local_9a8[0x25] = '\0';
    local_9a8[0x26] = '\0';
    local_9a8[0x27] = '\0';
    local_9a8[0x38] = '\0';
    local_9a8[0x39] = '\0';
    local_9a8[0x3a] = '\0';
    local_9a8[0x3b] = '\0';
    local_9a8[0x3c] = '\0';
    local_9a8[0x3d] = '\0';
    local_9a8[0x3e] = '\0';
    local_9a8[0x3f] = '\0';
    local_9a8[0x30] = '\0';
    local_9a8[0x31] = '\0';
    local_9a8[0x32] = '\0';
    local_9a8[0x33] = '\0';
    local_9a8[0x34] = '\0';
    local_9a8[0x35] = '\0';
    local_9a8[0x36] = '\0';
    local_9a8[0x37] = '\0';
    cVar6 = '8';
    lVar5 = 1;
    pcVar4 = local_9c0;
    do {
      local_9b0 = pcVar4 + 1;
      *pcVar4 = cVar6;
      if (lVar5 == 0x24) break;
      cVar6 = "8e5a4bf7-f4a9-45df-97ed-c1ffeb76e5ca"[lVar5];
      lVar5 = lVar5 + 1;
      pcVar4 = local_9b0;
    } while (local_9b0 < local_9a8 + 0x3f);
    *local_9b0 = '\0';
    __ZN13WCFixedStringILm15EEaSERKS0_(alStack_f8,(long *)&local_9c0);
    local_9c0 = local_9a8;
    uStack_9b8 = 0xf;
    local_9a8[0] = '\0';
    local_9a8[1] = '\0';
    local_9a8[2] = '\0';
    local_9a8[3] = '\0';
    local_9a8[4] = '\0';
    local_9a8[5] = '\0';
    local_9a8[6] = '\0';
    local_9a8[7] = '\0';
    local_9a8[8] = '\0';
    local_9a8[9] = '\0';
    local_9a8[10] = '\0';
    local_9a8[0xb] = '\0';
    local_9a8[0xc] = '\0';
    local_9a8[0xd] = '\0';
    local_9a8[0xe] = '\0';
    local_9a8[0xf] = '\0';
    cVar6 = '1';
    lVar5 = 1;
    pcVar4 = local_9c0;
    do {
      local_9b0 = pcVar4 + 1;
      *pcVar4 = cVar6;
      if (lVar5 == 0xc) break;
      cVar6 = "15.1.154.197"[lVar5];
      lVar5 = lVar5 + 1;
      pcVar4 = local_9b0;
    } while (local_9b0 < local_9a8 + 0xf);
    *local_9b0 = '\0';
    __ZN13WCFixedStringILm15EEaSERKS0_(alStack_a0,(long *)&local_9c0);
  }
  if ((*(byte *)(param_1 + 0x728) >> 1 & 1) != 0) {
    __ZN13WCFixedStringILm15EEaSERKS0_(alStack_f8,(long *)(param_1 + 0x6b8));
  }
  __ZN20wvWavesV15_1_154_19711WCWLEClientC1Ev(&local_9c0);
  iVar1 = __ZN20wvWavesV15_1_154_19711WCWLEClient22CheckAuthForSingleItemERKNS_13AuthCheckItemE
                    (&local_9c0,alStack_f8);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0xffffd8ee;
  }
  __ZN20wvWavesV15_1_154_19711WCWLEClientD1Ev(&local_9c0);
  if (*(long *)PTR____stack_chk_guard_00024040 == local_38) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void __ZN13WCFixedStringILm15EEaSERKS0_(long *param_1,long *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_1 != param_2) {
    param_1[2] = *param_1;
    *(undefined1 *)*param_1 = 0;
    pcVar3 = (char *)*param_2;
    if (pcVar3 != (char *)0x0) {
      cVar2 = *pcVar3;
      while (cVar2 != '\0') {
        pcVar3 = pcVar3 + 1;
        pcVar1 = (char *)param_1[2];
        if ((char *)(*param_1 + param_1[1]) <= pcVar1) break;
        param_1[2] = (long)(pcVar1 + 1);
        *pcVar1 = cVar2;
        cVar2 = *pcVar3;
      }
      *(undefined1 *)param_1[2] = 0;
    }
  }
  return;
}



undefined8
__ZN14cDuganAgentAlgC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
          (undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           __ZN20wvWavesV15_1_154_19710cALGORITHMC2ERKNS_18WavesComponentInfoERP18WTResContainerType
                     ();
  *puVar2 = &DAT_00024198;
  puVar2[1] = &DAT_00024ae8;
  puVar2[6] = &
              PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  puVar2[7] = &DAT_00024b60;
  puVar2[0x6fb] = 0x3ff0000000000000;
  puVar2[0x6fa] = 0x3f00945e01a42b29;
  iVar1 = *(int *)((long)puVar2 + 0x12ac);
  if (iVar1 == 0x4447414d) {
    __ZN20wvWavesV15_1_154_19710cALGORITHM12SetNumInputsEi(param_1,1);
    __ZN20wvWavesV15_1_154_19710cALGORITHM13SetNumOutputsEi(param_1,1);
  }
  else if (iVar1 == 0x4447474d || iVar1 == 0x44474d4d) {
    __ZN20wvWavesV15_1_154_19710cALGORITHM12SetNumInputsEi(param_1,1);
    __ZN20wvWavesV15_1_154_19710cALGORITHM13SetNumOutputsEi(param_1,1);
  }
  else {
    __ZN20wvWavesV15_1_154_19710cALGORITHM12SetNumInputsEi(param_1,2);
    __ZN20wvWavesV15_1_154_19710cALGORITHM13SetNumOutputsEi(param_1,2);
  }
  return param_1;
}



void __ZN14cDuganAgentAlgD2Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00024198;
  param_1[1] = &DAT_00024ae8;
  param_1[6] = &
               PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[7] = &DAT_00024b60;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  return;
}



void __ZN14cDuganAgentAlgD1Ev(void)

{
  code *pcVar1;
  
                    // WARNING: Does not return
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4eac);
  (*pcVar1)();
}



void __ZThn8_N14cDuganAgentAlgD1Ev(void)

{
  code *pcVar1;
  
                    // WARNING: Does not return
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4eb0);
  (*pcVar1)();
}



void __ZThn48_N14cDuganAgentAlgD1Ev(void)

{
  code *pcVar1;
  
                    // WARNING: Does not return
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4eb4);
  (*pcVar1)();
}



void __ZThn56_N14cDuganAgentAlgD1Ev(void)

{
  code *pcVar1;
  
                    // WARNING: Does not return
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4eb8);
  (*pcVar1)();
}



void __ZN14cDuganAgentAlgD0Ev(void)

{
  code *pcVar1;
  
                    // WARNING: Does not return
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4ebc);
  (*pcVar1)();
}



void __ZThn8_N14cDuganAgentAlgD0Ev(void)

{
  code *pcVar1;
  
                    // WARNING: Does not return
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4ec0);
  (*pcVar1)();
}



void __ZThn48_N14cDuganAgentAlgD0Ev(void)

{
  code *pcVar1;
  
                    // WARNING: Does not return
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4ec4);
  (*pcVar1)();
}



void __ZThn56_N14cDuganAgentAlgD0Ev(void)

{
  code *pcVar1;
  
                    // WARNING: Does not return
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4ec8);
  (*pcVar1)();
}



undefined8 __ZN14cDuganAgentAlg15UpdateParamSelfEm(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  
  *(undefined4 *)(param_1[0xb0] + param_2 * 0x5e8 + 0x348) = 3;
  switch(param_2) {
  case 0:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x8e8);
    break;
  case 1:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x8f8);
    break;
  case 2:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x900);
    break;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x8f0);
    break;
  default:
    goto LAB_00005114;
  case 7:
  case 8:
    *(undefined4 *)(&DAT_00004a28 + param_1[0xb0]) = 1;
  case 10:
  case 0xe:
    uVar2 = (**(code **)(*param_1 + 0x918))(param_1,1);
    uVar1 = (**(code **)(*param_1 + 0x928))(param_1,1);
    uVar2 = __ZN20wvWavesV15_1_154_19710cALGORITHM9ChainBufsEPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADERES3_
                      (param_1,uVar2,uVar1);
    uVar1 = (**(code **)(*param_1 + 0x910))(param_1,1);
    uVar2 = __ZN20wvWavesV15_1_154_19710cALGORITHM9ChainBufsEPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADERES3_
                      (param_1,uVar2,uVar1);
    uVar1 = (**(code **)(*param_1 + 0x920))(param_1,1);
    uVar2 = __ZN20wvWavesV15_1_154_19710cALGORITHM9ChainBufsEPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADERES3_
                      (param_1,uVar2,uVar1);
    *(undefined4 *)(&DAT_00004a28 + param_1[0xb0]) = 1;
    return uVar2;
  case 0xb:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x910);
    break;
  case 0xc:
    lVar6 = param_1[0xb0];
    lVar3 = (long)(int)param_1[0x49] * 8 + lVar6;
    *(undefined8 *)(&DAT_00003b10 + lVar3 + 0xb0) = 0;
    if (*(code **)(&DAT_00003e68 + lVar6) != (code *)0x0) {
      uVar2 = (**(code **)(&DAT_00003e68 + lVar6))(0,&DAT_00003bf8 + lVar6);
      *(undefined8 *)(&DAT_00003b10 + lVar3 + 0xa0) = uVar2;
    }
    *(undefined4 *)(&DAT_00003e58 + lVar6) = 3;
    uVar2 = (**(code **)(*param_1 + 0x918))(param_1,1);
    uVar1 = (**(code **)(*param_1 + 0x928))(param_1,1);
    uVar2 = __ZN20wvWavesV15_1_154_19710cALGORITHM9ChainBufsEPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADERES3_
                      (param_1,uVar2,uVar1);
    uVar1 = (**(code **)(*param_1 + 0x920))(param_1,1);
    uVar2 = __ZN20wvWavesV15_1_154_19710cALGORITHM9ChainBufsEPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADERES3_
                      (param_1,uVar2,uVar1);
    return uVar2;
  case 0xd:
    lVar3 = param_1[0xb0];
    puVar4 = &DAT_00004a28;
    uVar5 = 1;
    goto LAB_0000510c;
  case 0x10:
    (**(code **)(*param_1 + 0x410))(param_1);
    (**(code **)(*param_1 + 0x408))(param_1);
    *(undefined8 *)(param_1[0xb0] + (long)(int)param_1[0x49] * 8 + 0x5f30) = 0;
    *(undefined8 *)(param_1[0xb0] + (long)(int)param_1[0x49] * 8 + 0x5f20) = 0x408f400000000000;
    lVar3 = param_1[0xb0];
    puVar4 = &DAT_000061c8;
    uVar5 = 3;
LAB_0000510c:
    *(undefined4 *)(puVar4 + lVar3) = uVar5;
LAB_00005114:
    return 0;
  case 0x13:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x908);
  }
                    // WARNING: Could not recover jumptable at 0x00005140. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,1);
  return uVar2;
}



void __ZN14cDuganAgentAlg33MarkAllManAutoMuteImagesForUpdateEv(long param_1)

{
  *(undefined4 *)(&DAT_00004a28 + *(long *)(param_1 + 0x580)) = 1;
  return;
}



undefined8 __ZN14cDuganAgentAlg17UpdateDisplaySelfEm(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(*(long *)(param_1 + 0x580) + param_2 * 0x5e8 + 0x348) = 0;
  if (param_2 == 0xc) {
    uVar1 = __ZN14cDuganAgentAlg25GetManAutoMuteBitmapIndexEv(param_1);
    lVar2 = *(long *)(param_1 + 0x580);
    *(int *)(lVar2 + 0x4bfc) = (int)uVar1;
    *(undefined4 *)(lVar2 + 0x4c00) = 0xffffffff;
  }
  else if (param_2 == 10) {
    lVar3 = *(long *)(param_1 + 0x580);
    lVar2 = lVar3 + 0x6468 + (long)*(int *)(param_1 + 0x248) * 8;
    *(undefined8 *)(lVar2 + 0xb0) =
         *(undefined8 *)(&DAT_00003bc0 + lVar3 + (long)*(int *)(param_1 + 0x248) * 8);
    if (*(code **)(lVar3 + 0x67c0) != (code *)0x0) {
      uVar4 = (**(code **)(lVar3 + 0x67c0))(lVar3 + 0x6550);
      *(undefined8 *)(lVar2 + 0xa0) = uVar4;
    }
    *(undefined4 *)(lVar3 + 0x67b0) = 3;
  }
  return 0;
}



ulong __ZN14cDuganAgentAlg25GetManAutoMuteBitmapIndexEv(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(param_1 + 0x580);
  plVar1 = (long *)(&DAT_000046e0 + lVar5);
  lVar3 = (long)*(int *)(param_1 + 0x248);
  lVar2 = lVar5 + lVar3 * 8;
  if (*(double *)(&DAT_00003bc0 + lVar2) == 1.0) {
    uVar6 = 3;
  }
  else if (*(double *)(&DAT_00002ff0 + lVar2) == 1.0) {
    uVar6 = (ulong)(*(double *)(lVar5 + lVar3 * 8 + 0x5360) != 1.0) << 1;
  }
  else {
    uVar4 = (uint)(double)plVar1[lVar3 + 0x16];
    if (*(double *)(&DAT_00002a08 + lVar2) == 1.0) {
      uVar4 = 2;
    }
    uVar6 = (ulong)uVar4;
  }
  (**(code **)(*plVar1 + 0x10))
            (plVar1,*(double *)(&DAT_00002ff0 + lVar2) == 1.0 ||
                    *(double *)(&DAT_00002a08 + lVar2) == 1.0);
  return uVar6;
}



undefined8
__ZN14cDuganAgentAlg13ReadMeterSelfEmP21WCParamExtensionMeterRd
          (long param_1,long param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  
  if (param_2 == 0xf) {
    dVar1 = *(double *)(&DAT_000037d8 + param_1) * *param_4;
  }
  else {
    if (param_2 != 0x10) {
      return 0;
    }
    if (*param_4 <= 1.0) {
      dVar1 = 500.0;
      if (*param_4 < *(double *)(&DAT_000037d0 + param_1)) {
        dVar1 = 0.0;
      }
    }
    else {
      dVar1 = 1000.0;
    }
  }
  *param_4 = dVar1;
  return 0;
}



undefined8
__ZN20wvWavesV15_1_154_19710cALGORITHM31HandleLoadPresetFromBrowserSelfERN8nlohmann10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS1_14adl_serializerENS5_IhNS9_IhEEEEEE
          (void)

{
  return 0;
}



undefined8 * __ZN14cDuganAgentAlg11InitAlgSelfEv(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                     (param_1,0,*(undefined4 *)((long)param_1 + 0x47c),0,
                      *(undefined4 *)((long)param_1 + 500),(int)param_1[0x1af],0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0x270))(param_1,*puVar1);
  }
  return puVar1;
}



undefined8 __ZN14cDuganAgentAlg13UpdateAlgSelfEv(long *param_1)

{
  (**(code **)(*param_1 + 0x938))(param_1,0);
  (**(code **)(*param_1 + 0x930))(param_1,0);
  (**(code **)(*param_1 + 0x8e8))(param_1,0);
  (**(code **)(*param_1 + 0x8f0))(param_1,0);
  (**(code **)(*param_1 + 0x8f8))(param_1,0);
  (**(code **)(*param_1 + 0x900))(param_1,0);
  (**(code **)(*param_1 + 0x908))(param_1,0);
  (**(code **)(*param_1 + 0x928))(param_1,0);
  (**(code **)(*param_1 + 0x910))(param_1,0);
  (**(code **)(*param_1 + 0x918))(param_1,0);
  (**(code **)(*param_1 + 0x920))(param_1,0);
  *(undefined4 *)(&DAT_00004a28 + param_1[0xb0]) = 1;
  return 0;
}



undefined8
__ZN14cDuganAgentAlg30PrepareDisplayFunctionsMapSelfERNSt3__13mapI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyENS0_4lessIS3_EENS0_9allocatorINS0_4pairIKS3_S5_EEEEEE
          (undefined8 param_1,long *param_2)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  undefined1 auVar5 [16];
  char **local_120;
  char *local_118;
  undefined8 uStack_110;
  char *local_108;
  char local_100 [128];
  undefined2 local_80;
  undefined *local_78;
  code *pcStack_70;
  undefined **local_60;
  long alStack_58 [3];
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00024040;
  local_80 = 0;
  local_78 = &DAT_00025550;
  pcStack_70 = __Z13DisplayWeightddR17WCFixedStringBase;
  local_40 = (long *)0x0;
  local_118 = local_100;
  uStack_110 = 0x7f;
  local_100[8] = '\0';
  local_100[9] = '\0';
  local_100[10] = '\0';
  local_100[0xb] = '\0';
  local_100[0xc] = '\0';
  local_100[0xd] = '\0';
  local_100[0xe] = '\0';
  local_100[0xf] = '\0';
  local_100[0] = '\0';
  local_100[1] = '\0';
  local_100[2] = '\0';
  local_100[3] = '\0';
  local_100[4] = '\0';
  local_100[5] = '\0';
  local_100[6] = '\0';
  local_100[7] = '\0';
  local_100[0x18] = '\0';
  local_100[0x19] = '\0';
  local_100[0x1a] = '\0';
  local_100[0x1b] = '\0';
  local_100[0x1c] = '\0';
  local_100[0x1d] = '\0';
  local_100[0x1e] = '\0';
  local_100[0x1f] = '\0';
  local_100[0x10] = '\0';
  local_100[0x11] = '\0';
  local_100[0x12] = '\0';
  local_100[0x13] = '\0';
  local_100[0x14] = '\0';
  local_100[0x15] = '\0';
  local_100[0x16] = '\0';
  local_100[0x17] = '\0';
  local_100[0x28] = '\0';
  local_100[0x29] = '\0';
  local_100[0x2a] = '\0';
  local_100[0x2b] = '\0';
  local_100[0x2c] = '\0';
  local_100[0x2d] = '\0';
  local_100[0x2e] = '\0';
  local_100[0x2f] = '\0';
  local_100[0x20] = '\0';
  local_100[0x21] = '\0';
  local_100[0x22] = '\0';
  local_100[0x23] = '\0';
  local_100[0x24] = '\0';
  local_100[0x25] = '\0';
  local_100[0x26] = '\0';
  local_100[0x27] = '\0';
  local_100[0x38] = '\0';
  local_100[0x39] = '\0';
  local_100[0x3a] = '\0';
  local_100[0x3b] = '\0';
  local_100[0x3c] = '\0';
  local_100[0x3d] = '\0';
  local_100[0x3e] = '\0';
  local_100[0x3f] = '\0';
  local_100[0x30] = '\0';
  local_100[0x31] = '\0';
  local_100[0x32] = '\0';
  local_100[0x33] = '\0';
  local_100[0x34] = '\0';
  local_100[0x35] = '\0';
  local_100[0x36] = '\0';
  local_100[0x37] = '\0';
  local_100[0x48] = '\0';
  local_100[0x49] = '\0';
  local_100[0x4a] = '\0';
  local_100[0x4b] = '\0';
  local_100[0x4c] = '\0';
  local_100[0x4d] = '\0';
  local_100[0x4e] = '\0';
  local_100[0x4f] = '\0';
  local_100[0x40] = '\0';
  local_100[0x41] = '\0';
  local_100[0x42] = '\0';
  local_100[0x43] = '\0';
  local_100[0x44] = '\0';
  local_100[0x45] = '\0';
  local_100[0x46] = '\0';
  local_100[0x47] = '\0';
  local_100[0x58] = '\0';
  local_100[0x59] = '\0';
  local_100[0x5a] = '\0';
  local_100[0x5b] = '\0';
  local_100[0x5c] = '\0';
  local_100[0x5d] = '\0';
  local_100[0x5e] = '\0';
  local_100[0x5f] = '\0';
  local_100[0x50] = '\0';
  local_100[0x51] = '\0';
  local_100[0x52] = '\0';
  local_100[0x53] = '\0';
  local_100[0x54] = '\0';
  local_100[0x55] = '\0';
  local_100[0x56] = '\0';
  local_100[0x57] = '\0';
  local_100[0x68] = '\0';
  local_100[0x69] = '\0';
  local_100[0x6a] = '\0';
  local_100[0x6b] = '\0';
  local_100[0x6c] = '\0';
  local_100[0x6d] = '\0';
  local_100[0x6e] = '\0';
  local_100[0x6f] = '\0';
  local_100[0x60] = '\0';
  local_100[0x61] = '\0';
  local_100[0x62] = '\0';
  local_100[99] = '\0';
  local_100[100] = '\0';
  local_100[0x65] = '\0';
  local_100[0x66] = '\0';
  local_100[0x67] = '\0';
  cVar4 = 'D';
  local_100[0x78] = '\0';
  local_100[0x79] = '\0';
  local_100[0x7a] = '\0';
  local_100[0x7b] = '\0';
  local_100[0x7c] = '\0';
  local_100[0x7d] = '\0';
  local_100[0x7e] = '\0';
  local_100[0x7f] = '\0';
  local_100[0x70] = '\0';
  local_100[0x71] = '\0';
  local_100[0x72] = '\0';
  local_100[0x73] = '\0';
  local_100[0x74] = '\0';
  local_100[0x75] = '\0';
  local_100[0x76] = '\0';
  local_100[0x77] = '\0';
  lVar3 = 1;
  pcVar1 = local_118;
  local_60 = &local_78;
  do {
    local_108 = pcVar1 + 1;
    *pcVar1 = cVar4;
    if (lVar3 == 0xd) break;
    cVar4 = "DisplayWeight"[lVar3];
    lVar3 = lVar3 + 1;
    pcVar1 = local_108;
  } while (local_108 < local_100 + 0x7f);
  *local_108 = '\0';
  local_120 = &local_118;
  auVar5 = __ZNSt3__16__treeINS_12__value_typeI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_
                     (param_2,&local_118,&__ZNSt3__1L19piecewise_constructE,&local_120);
  lVar3 = auVar5._0_8_;
  *(undefined2 *)(lVar3 + 0xb8) = local_80;
  __ZNSt3__18functionIFvddR17WCFixedStringBaseEEaSEOS4_((long *)(lVar3 + 0xc0),(long)&local_78);
  __ZNSt3__18functionIFNS0_IFvddR17WCFixedStringBaseEEEPvEEaSEOS7_
            ((long *)(lVar3 + 0xe0),(long)alStack_58);
  if (alStack_58 == local_40) {
    pcVar2 = *(code **)(*local_40 + 0x20);
LAB_000055a8:
    (*pcVar2)();
  }
  else if (local_40 != (long *)0x0) {
    pcVar2 = *(code **)(*local_40 + 0x28);
    goto LAB_000055a8;
  }
  if (&local_78 == local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (undefined **)0x0) goto LAB_000055dc;
    pcVar2 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar2)();
LAB_000055dc:
  if (*(long *)PTR____stack_chk_guard_00024040 == local_38) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void __Z13DisplayWeightddR17WCFixedStringBase(double param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_1 != 0.0) {
    __ZN20wvWavesV15_1_154_19713DisplayFloat1EddR17WCFixedStringBase();
    return;
  }
  param_2[2] = *param_2;
  *(undefined1 *)*param_2 = 0;
  cVar1 = 'O';
  lVar2 = 1;
  do {
    pcVar3 = (char *)param_2[2];
    if ((char *)(*param_2 + param_2[1]) <= pcVar3) goto LAB_000056a8;
    param_2[2] = (long)(pcVar3 + 1);
    *pcVar3 = cVar1;
    cVar1 = "Off"[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  pcVar3 = (char *)param_2[2];
LAB_000056a8:
  *pcVar3 = '\0';
  return;
}



undefined8
__ZN14cDuganAgentAlg28PrepareScaleFunctionsMapSelfERNSt3__13mapI13WCFixedStringILm127EE19sUserScaleFunctionsNS0_4lessIS3_EENS0_9allocatorINS0_4pairIKS3_S4_EEEEEE
          (void)

{
  return 0;
}



undefined8
__Z9CreateAlgRKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x438) == 0x726d4749) {
    uVar2 = __Znwm(&DAT_000038b8);
    __ZN20cDuganAgentRemoteAlgC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
              (uVar2);
  }
  else {
    uVar2 = 0;
    iVar1 = *(int *)(param_1 + 0x43c);
    if (iVar1 < 0x4447474d) {
      if (iVar1 == 0x4447414d) {
        uVar2 = __Znwm(&DAT_00003850);
        __ZN16cDuganAgent_AlgTILi1EEC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
                  (uVar2);
      }
      else if (iVar1 == 0x44474153) {
        uVar2 = __Znwm(&DAT_00003868);
        __ZN16cDuganAgent_AlgTILi2EEC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
                  (uVar2);
      }
    }
    else if (iVar1 == 0x4447474d || iVar1 == 0x44474d4d) {
      uVar2 = __Znwm(&DAT_00003808);
      __ZN17cDuganMaster_AlgTILi1EEC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
                (uVar2);
    }
  }
  return uVar2;
}



undefined8
__ZN20cDuganAgentRemoteAlgC1ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
          (undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __ZN20cDuganAgentRemoteAlgC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
                    (param_1);
  return uVar1;
}



byte __ZN14cDuganAgentAlg17IsChannelBypassedEv(long param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  
  if (*(char *)(param_1 + 0x244) == '\0') {
    lVar1 = *(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8;
    if (*(double *)(&DAT_00003bc0 + lVar1) == 0.0) {
      dVar4 = *(double *)(&DAT_00004790 + lVar1);
      if (*(double *)(&DAT_00002ff0 + lVar1) == 0.0) {
        bVar2 = false;
      }
      else {
        bVar2 = *(double *)
                 (*(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8 + 0x5360) != 0.0;
      }
      bVar3 = __ZN14cDuganAgentAlg14IsChannelMutedEv(param_1);
      return (bVar2 | dVar4 == 0.0) & !bVar3;
    }
  }
  return 1;
}



bool __ZN14cDuganAgentAlg14IsChannelMutedEv(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x580);
  lVar4 = (long)*(int *)(param_1 + 0x248);
  lVar1 = lVar3 + lVar4 * 8;
  if (*(double *)(&DAT_00003bc0 + lVar1) == 0.0) {
    bVar2 = *(double *)(&DAT_00002a08 + lVar1) == 1.0;
    if ((*(double *)(&DAT_00002ff0 + lVar1) == 0.0) ||
       (*(double *)(lVar3 + lVar4 * 8 + 0x5360) == 0.0)) {
      lVar3 = lVar3 + lVar4 * 8;
      if (*(double *)(&DAT_00002ff0 + lVar1) == 0.0) {
        bVar2 = false;
      }
      else {
        bVar2 = *(double *)(lVar3 + 0x5360) == 0.0;
      }
      bVar2 = bVar2 || (*(double *)(&DAT_00002a08 + lVar1) == 1.0 ||
                       *(double *)(&DAT_00004790 + lVar3) == 2.0);
    }
    return bVar2;
  }
  return false;
}



undefined8
__ZN20cDuganAgentRemoteAlgC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
          (undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __ZN20wvWavesV15_1_154_19710cALGORITHMC2ERKNS_18WavesComponentInfoERP18WTResContainerType
                     ();
  *puVar1 = &DAT_00024b88;
  puVar1[1] = &DAT_00025480;
  puVar1[0x6fc] = 0xffffffffffffffff;
  puVar1[0x6fb] = 0xffffffffffffffff;
  puVar1[0x6fe] = 0xffffffffffffffff;
  puVar1[0x6fd] = 0xffffffffffffffff;
  puVar1[0x700] = 0xffffffffffffffff;
  puVar1[0x6ff] = 0xffffffffffffffff;
  puVar1[0x702] = 0xffffffffffffffff;
  puVar1[0x701] = 0xffffffffffffffff;
  puVar1[0x704] = 0xffffffffffffffff;
  puVar1[0x703] = 0xffffffffffffffff;
  puVar1[0x706] = 0xffffffffffffffff;
  puVar1[0x705] = 0xffffffffffffffff;
  puVar1[0x708] = 0xffffffffffffffff;
  puVar1[0x707] = 0xffffffffffffffff;
  puVar1[0x70a] = 0;
  puVar1[0x709] = 0;
  puVar1[0x70c] = 0;
  puVar1[0x70b] = 0;
  puVar1[0x70e] = 0;
  puVar1[0x70d] = 0;
  puVar1[0x710] = 0;
  puVar1[0x70f] = 0;
  puVar1[0x712] = 0;
  puVar1[0x711] = 0;
  puVar1[0x714] = 0;
  puVar1[0x713] = 0;
  puVar1[6] = &
              PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_000254a0
  ;
  puVar1[7] = &DAT_000254f8;
  puVar1[0x716] = 0;
  puVar1[0x715] = 0;
  puVar1[0x6fa] = 0xffffffffffffffff;
  __ZN20wvWavesV15_1_154_19710cALGORITHM12SetNumInputsEi(puVar1,0);
  __ZN20wvWavesV15_1_154_19710cALGORITHM13SetNumOutputsEi(param_1,0);
  return param_1;
}



undefined8 __ZN20cDuganAgentRemoteAlg20InitInstanceDataSelfEv(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = *(int *)(&DAT_000012ac + param_1);
  if (iVar2 != 0x4447414d) {
    if (iVar2 == 0x44474d4d) {
      *(undefined8 *)(&DAT_00003840 + param_1) = 4;
      *(undefined4 *)(&DAT_000037e8 + param_1) = 0;
      *(undefined8 *)(&DAT_00003848 + param_1) = 6;
      *(undefined4 *)(&DAT_000037f0 + param_1) = 1;
      *(undefined8 *)(&DAT_00003850 + param_1) = 9;
      *(undefined4 *)(&DAT_000037fc + param_1) = 2;
      *(undefined8 *)(&DAT_00003868 + param_1) = 0x14;
      *(undefined8 *)(&DAT_00003828 + param_1) = 0x500000005;
      *(undefined4 *)(&DAT_00003830 + param_1) = 5;
      *(undefined8 *)(&DAT_00003870 + param_1) = 0x17;
      *(undefined8 *)(&DAT_00003834 + param_1) = 0x600000006;
      *(undefined4 *)(&DAT_0000383c + param_1) = 6;
      goto LAB_00005af4;
    }
    if (iVar2 != 0x44474153) goto LAB_00005af4;
  }
  *(undefined8 *)(&DAT_00003880 + param_1) = 0xb;
  *(undefined8 *)(&DAT_00003878 + param_1) = 0xd;
  *(undefined8 *)(&DAT_00003890 + param_1) = 0xc;
  *(undefined8 *)(&DAT_00003808 + param_1) = 0x70000000a;
  *(undefined8 *)(&DAT_00003888 + param_1) = 0xe;
  *(undefined4 *)(&DAT_00003810 + param_1) = 9;
  *(undefined8 *)(&DAT_00003860 + param_1) = 10;
  *(undefined8 *)(param_1 + 0x3800) = 0x800000004;
  *(undefined8 *)(&DAT_000038a0 + param_1) = 0xf;
  *(undefined8 *)(&DAT_00003814 + param_1) = 0xb0000000c;
  *(undefined8 *)(&DAT_00003898 + param_1) = 0x10;
LAB_00005af4:
  lVar3 = 0;
  lVar4 = 0;
  do {
    if (*(int *)(&DAT_000037d8 + lVar3 + param_1) == -1) {
      plVar1 = (long *)(*(long *)(param_1 + 0x580) + lVar4);
      (**(code **)(*plVar1 + 0x10))(plVar1,1,0);
      plVar1 = (long *)(*(long *)(param_1 + 0x580) + lVar4);
      (**(code **)(*plVar1 + 0x10))(plVar1,1,1);
    }
    lVar4 = lVar4 + 0x5e8;
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x68);
  return 0;
}



void __ZN20cDuganAgentRemoteAlg33AdjustProcessCodeDescriptionsSelfEv(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x600); lVar1 != *(long *)(param_1 + 0x608); lVar1 = lVar1 + 200)
  {
    *(undefined4 *)(lVar1 + 0x6c) = 0;
    *(undefined4 *)(lVar1 + 0x70) = 0;
  }
  return;
}



void __ZN20cDuganAgentRemoteAlg19SetMixerBasicStructEPKN9wvMixerNS18WSMixerBasicStructEb
               (long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_11;
  
  local_11 = param_3;
  (**(code **)(param_1 + 0x208))(0x47,*(undefined8 *)(param_1 + 0x210),param_2,&local_11,0);
  return;
}



void __ZN20cDuganAgentRemoteAlg15SetCInfoToMixerEPKN9wvMixerNS14WSMixerControlE
               (long param_1,undefined8 param_2)

{
                    // WARNING: Could not recover jumptable at 0x00005be0. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0x208))(0x3f,*(undefined8 *)(param_1 + 0x210),0,param_2,0);
  return;
}



void __ZNK20cDuganAgentRemoteAlg15GetMixerControlEPN9wvMixerNS14WSMixerControlE
               (long param_1,undefined8 param_2)

{
                    // WARNING: Could not recover jumptable at 0x00005bfc. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0x208))(0x38,*(undefined8 *)(param_1 + 0x210),10,param_2,0);
  return;
}



void __ZN20cDuganAgentRemoteAlg19GetAllMixerControlsEv(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 local_210;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  uVar5 = 0;
  local_38 = *(long *)PTR____stack_chk_guard_00024040;
  local_1ec = 0x20;
  local_1e4 = 0xffffffffffffffff;
  local_1dc = 0xffffffffffffffff;
  local_1d4 = 0xffffffffffffffff;
  local_210 = 0x1d8;
  uStack_104 = 0;
  local_10c = 0;
  uStack_f4 = 0;
  uStack_fc = 0;
  uStack_e4 = 0;
  local_ec = 0;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_c4 = 0;
  local_cc = 0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_a4 = 0;
  local_ac = 0;
  uStack_94 = 0;
  uStack_9c = 0;
  uStack_84 = 0;
  local_8c = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_64 = 0;
  local_6c = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_204 = 0;
  local_20c = 0;
  uStack_1f4 = 0;
  local_1fc = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  local_1cc = 0;
  uStack_1c8 = 0;
  uStack_1b4 = 0;
  local_1bc = 0;
  uStack_1a4 = 0;
  local_1ac = 0;
  uStack_194 = 0;
  local_19c = 0;
  uStack_184 = 0;
  local_18c = 0;
  uStack_174 = 0;
  local_17c = 0;
  uStack_164 = 0;
  local_16c = 0;
  uStack_154 = 0;
  local_15c = 0;
  uStack_144 = 0;
  local_14c = 0;
  uStack_134 = 0;
  local_13c = 0;
  uStack_124 = 0;
  local_12c = 0;
  uStack_114 = 0;
  local_11c = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_4c = 0;
  local_40 = 0xffffffffffffffff;
  do {
    uVar3 = __ZN20cDuganAgentRemoteAlg24GetMixerControlByParamIDEmRN9wvMixerNS14WSMixerControlE
                      (param_1,uVar5,&local_210);
    if (((int)uVar3 == 0) &&
       (iVar2 = (**(code **)(param_1 + 0x208))
                          (0x38,*(undefined8 *)(param_1 + 0x210),10,&local_210,0), iVar2 == 0)) {
      __ZN20cDuganAgentRemoteAlg13SetParamStateEmd(CONCAT44(uStack_1c4,uStack_1c8),param_1,uVar5);
      uVar1 = local_20c._4_4_ & 1;
      plVar4 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM8GetParamEm(param_1,uVar5);
      (**(code **)(*plVar4 + 0x10))(plVar4,uVar1,*(undefined4 *)(param_1 + 0x248));
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x1a);
  if (*(long *)PTR____stack_chk_guard_00024040 == local_38) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8
__ZN20cDuganAgentRemoteAlg24GetMixerControlByParamIDEmRN9wvMixerNS14WSMixerControlE
          (long param_1,ulong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if ((*(int *)(&DAT_000037d0 + param_1) == -1) || (*(int *)(&DAT_000037d4 + param_1) == -1)) {
    return 0xfffffff9;
  }
  iVar1 = *(int *)(&DAT_000037d8 + param_1 + param_2 * 4);
  if (iVar1 == -1) {
    return 0xffffffed;
  }
  *(undefined8 *)(param_3 + 9) = 0x20;
  puVar2 = (undefined8 *)(param_3 + 0xb);
  *puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0xd) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0xf) = 0xffffffffffffffff;
  *param_3 = 0x1d8;
  *(undefined8 *)(param_3 + 3) = 0;
  *(undefined8 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 7) = 0;
  *(undefined8 *)(param_3 + 5) = 0;
  *(undefined8 *)(param_3 + 0x17) = 0;
  *(undefined8 *)(param_3 + 0x15) = 0;
  *(undefined8 *)(param_3 + 0x1b) = 0;
  *(undefined8 *)(param_3 + 0x19) = 0;
  *(undefined8 *)(param_3 + 0x1f) = 0;
  *(undefined8 *)(param_3 + 0x1d) = 0;
  *(undefined8 *)(param_3 + 0x23) = 0;
  *(undefined8 *)(param_3 + 0x21) = 0;
  *(undefined8 *)(param_3 + 0x27) = 0;
  *(undefined8 *)(param_3 + 0x25) = 0;
  *(undefined8 *)(param_3 + 0x2b) = 0;
  *(undefined8 *)(param_3 + 0x29) = 0;
  *(undefined8 *)(param_3 + 0x2f) = 0;
  *(undefined8 *)(param_3 + 0x2d) = 0;
  *(undefined8 *)(param_3 + 0x33) = 0;
  *(undefined8 *)(param_3 + 0x31) = 0;
  *(undefined8 *)(param_3 + 0x37) = 0;
  *(undefined8 *)(param_3 + 0x35) = 0;
  *(undefined8 *)(param_3 + 0x3b) = 0;
  *(undefined8 *)(param_3 + 0x39) = 0;
  *(undefined8 *)(param_3 + 0x3f) = 0;
  *(undefined8 *)(param_3 + 0x3d) = 0;
  *(undefined8 *)(param_3 + 0x72) = 0;
  *(undefined8 *)(param_3 + 0x70) = 0;
  *(undefined8 *)(param_3 + 0x13) = 0;
  *(undefined8 *)(param_3 + 0x11) = 0;
  *(undefined8 *)(param_3 + 0x43) = 0;
  *(undefined8 *)(param_3 + 0x41) = 0;
  *(undefined8 *)(param_3 + 0x47) = 0;
  *(undefined8 *)(param_3 + 0x45) = 0;
  *(undefined8 *)(param_3 + 0x4b) = 0;
  *(undefined8 *)(param_3 + 0x49) = 0;
  *(undefined8 *)(param_3 + 0x4f) = 0;
  *(undefined8 *)(param_3 + 0x4d) = 0;
  *(undefined8 *)(param_3 + 0x53) = 0;
  *(undefined8 *)(param_3 + 0x51) = 0;
  *(undefined8 *)(param_3 + 0x57) = 0;
  *(undefined8 *)(param_3 + 0x55) = 0;
  *(undefined8 *)(param_3 + 0x5b) = 0;
  *(undefined8 *)(param_3 + 0x59) = 0;
  *(undefined8 *)(param_3 + 0x5f) = 0;
  *(undefined8 *)(param_3 + 0x5d) = 0;
  *(undefined8 *)(param_3 + 99) = 0;
  *(undefined8 *)(param_3 + 0x61) = 0;
  *(undefined8 *)(param_3 + 0x67) = 0;
  *(undefined8 *)(param_3 + 0x65) = 0;
  *(undefined8 *)(param_3 + 0x6b) = 0;
  *(undefined8 *)(param_3 + 0x69) = 0;
  *(undefined8 *)(param_3 + 0x6f) = 0;
  *(undefined8 *)(param_3 + 0x6d) = 0;
  *(undefined8 *)(param_3 + 0x74) = 0xffffffffffffffff;
  if (param_2 < 0x1a) {
    if ((1L << (param_2 & 0x3f) & 0x250U) != 0) {
      iVar3 = 0;
      *(undefined4 *)puVar2 = 0x14;
      goto LAB_00005e9c;
    }
    if ((1L << (param_2 & 0x3f) & 0x700000U) != 0) {
      *(undefined4 *)puVar2 = 0x13;
      iVar3 = (int)param_2 + -0x14;
      goto LAB_00005e9c;
    }
    if ((1L << (param_2 & 0x3f) & 0x3800000U) != 0) {
      *(undefined4 *)puVar2 = 0x13;
      iVar3 = (int)param_2 + -0x17;
      goto LAB_00005e9c;
    }
  }
  *(undefined4 *)puVar2 = *(undefined4 *)(&DAT_000037d0 + param_1);
  iVar3 = *(int *)(&DAT_000037d4 + param_1);
LAB_00005e9c:
  param_3[0xc] = iVar3;
  param_3[10] = 0;
  *(undefined8 *)(param_3 + 0xd) = 0x10;
  param_3[0x10] = iVar1;
  return 0;
}



void __ZN20cDuganAgentRemoteAlg13SetParamStateEmd(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  
  uVar3 = (*(long *)(param_2 + 0x588) - *(long *)(param_2 + 0x580) >> 3) * -0x5ac056b015ac056b;
  if (param_3 <= uVar3 && uVar3 - param_3 != 0) {
    *(undefined8 *)
     (*(long *)(param_2 + 0x580) + param_3 * 0x5e8 + (long)*(int *)(param_2 + 0x248) * 8 + 0xa0) =
         param_1;
    lVar5 = *(long *)(param_2 + 0x580);
    lVar1 = lVar5 + param_3 * 0x5e8 + (long)*(int *)(param_2 + 0x248) * 8;
    puVar4 = (undefined8 *)(lVar1 + 0xb0);
    dVar6 = (double)__ZNK20wvWavesV15_1_154_19712WCParam_Base16RealWorldToStateEd(*puVar4);
    if ((dVar6 != *(double *)(lVar1 + 0xa0)) &&
       (pcVar2 = *(code **)(lVar5 + param_3 * 0x5e8 + 0x350), pcVar2 != (code *)0x0)) {
      uVar7 = (*pcVar2)(lVar5 + param_3 * 0x5e8 + 0xe8);
      *puVar4 = uVar7;
    }
    *(undefined4 *)(*(long *)(param_2 + 0x580) + param_3 * 0x5e8 + 0x348) = 3;
  }
  return;
}



undefined8 __ZN20cDuganAgentRemoteAlg15UpdateParamSelfEm(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 local_211;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1c8;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00024040;
  *(undefined4 *)(*(long *)(param_1 + 0x580) + param_2 * 0x5e8 + 0x348) = 3;
  local_210 = 0xffffffff00000000;
  local_200 = 0;
  uStack_1f8 = 0;
  local_208 = 0;
  local_1ec = 0x20;
  local_1e4 = 0xffffffffffffffff;
  local_1dc = 0xffffffffffffffff;
  local_1d4 = 0xffffffffffffffff;
  local_40 = 0xffffffffffffffff;
  uVar1 = __ZN20cDuganAgentRemoteAlg24GetMixerControlByParamIDEmRN9wvMixerNS14WSMixerControlE
                    (param_1,param_2,(undefined4 *)&local_210);
  if ((int)uVar1 == 0) {
    local_1c8 = __ZNK20wvWavesV15_1_154_19710cALGORITHM13GetParamStateEm(param_1,param_2);
    local_211 = 0;
    (**(code **)(param_1 + 0x208))(0x47,*(undefined8 *)(param_1 + 0x210),&local_210,&local_211,0);
  }
  if (*(long *)PTR____stack_chk_guard_00024040 == local_38) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void __ZN9wvMixerNS25DropMixerStructBreadCrumbEPKNS_18WSMixerBasicStructES2_(void)

{
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM24SetMetadataForONLPPresetERKN8nlohmann10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS1_14adl_serializerENS5_IhNS9_IhEEEEEEPKNS_6Preset11CPresetInfoE
               (void)

{
  return;
}



undefined8 __ZN20wvWavesV15_1_154_19710cALGORITHM11SetMuteSelfEb(void)

{
  return 0;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM20SetIsSessionLicensedEb(long param_1,undefined1 param_2)

{
  (&DAT_000035e8)[param_1] = param_2;
  return;
}



undefined8
__ZN20wvWavesV15_1_154_19710cALGORITHM19LoadParamsForPresetEPNS_6Preset11CPresetInfoE(void)

{
  return 1;
}



uint __ZN20wvWavesV15_1_154_19710cALGORITHM12IsMuteOnDemoEv(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = __ZNK20wvWavesV15_1_154_19710cALGORITHM19GetPluginValue_boolEPKcb
                    (param_1,"IsPluginLicensed",1);
  return uVar1 ^ 1;
}



undefined8 __ZN20wvWavesV15_1_154_19710cALGORITHM32InstantiateSpecificLinkGroupSelfEv(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = __Znwm(0xb0);
  __ZN12WCLinkGroupsC1ERNSt3__16vectorI14sCONTROL_PARAMNS0_9allocatorIS2_EEEERK12EPluginSetup
            (uVar1,param_1 + 0x580,param_1 + 0x248);
  return uVar1;
}



undefined8 __ZN20wvWavesV15_1_154_19710cALGORITHM18GetPluginInfo_boolEjRbl(void)

{
  return 0xffffffe7;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM27RequestRefreshMetersBuffersEv(long param_1)

{
  *(undefined1 *)(param_1 + 0xe18) = 1;
  return;
}



void __ZNK20wvWavesV15_1_154_19710cALGORITHM24GetPluginNameForAboutBoxEv(void)

{
  __ZNK20wvWavesV15_1_154_19710cALGORITHM10GetAlgNameEv();
  return;
}



undefined4 __ZNK20wvWavesV15_1_154_19710cALGORITHM21GetNumSideChainInputsEv(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd8c);
}



undefined8 __ZN20wvWavesV15_1_154_19710cALGORITHM28GetPluginInfo_double_PrivateERdl(void)

{
  return 0xffffffff;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM23SetNotifyOnLinkedParamsEb
               (long param_1,undefined1 param_2)

{
  if (*(long *)(param_1 + 0x490) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x490) + 0xa8) = param_2;
  }
  return;
}



bool __ZN20wvWavesV15_1_154_19710cALGORITHM23GetNotifyOnLinkedParamsEv(long param_1)

{
  if (*(long *)(param_1 + 0x490) != 0) {
    return *(char *)(*(long *)(param_1 + 0x490) + 0xa8) != '\0';
  }
  return false;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM37GetGraphDataAsGraphicStreamForControlEmRN4wvGS27WCGraphicStreamBinaryWriterE
               (long *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000062f0. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x838))();
  return;
}



void __ZNK20wvWavesV15_1_154_19710cALGORITHM22GetInternalPresetsNameEi(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 3;
  param_1[4] = 0;
  *puVar1 = 0;
  *param_1 = puVar1;
  param_1[1] = 0xff;
  param_1[2] = puVar1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  return;
}



undefined * __ZN20wvWavesV15_1_154_19710cALGORITHM8BIClientEv(long param_1)

{
  return &DAT_000029e8 + param_1;
}



void __ZN20cDuganAgentRemoteAlgD0Ev(void)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



undefined8 __ZN20cDuganAgentRemoteAlg13UpdateAlgSelfEv(void)

{
  return 0;
}



undefined8 __ZN20cDuganAgentRemoteAlg11InitAlgSelfEv(void)

{
  return 0;
}



undefined8 __ZN20cDuganAgentRemoteAlg17UpdateDisplaySelfEm(void)

{
  return 0;
}



undefined8 __ZN20cDuganAgentRemoteAlg20GetInitialStatesSelfEPc(void)

{
  return 1;
}



void __ZThn8_N20cDuganAgentRemoteAlgD1Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev(param_1 + -8);
  return;
}



void __ZThn8_N20cDuganAgentRemoteAlgD0Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev(param_1 + -8);
  __ZdlPv();
  return;
}



void __ZThn48_N20cDuganAgentRemoteAlgD1Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev(param_1 + -0x30);
  return;
}



void __ZThn48_N20cDuganAgentRemoteAlgD0Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev(param_1 + -0x30);
  __ZdlPv();
  return;
}



void __ZThn56_N20cDuganAgentRemoteAlgD1Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev(param_1 + -0x38);
  return;
}



void __ZThn56_N20cDuganAgentRemoteAlgD0Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev(param_1 + -0x38);
  __ZdlPv();
  return;
}



uint * __ZN8WCFourCCC2EPKc(uint *param_1,byte *param_2)

{
  size_t sVar1;
  uint uVar2;
  
  uVar2 = 0x3f3f3f3f;
  if ((param_2 != (byte *)0x0) && (sVar1 = _strlen((char *)param_2), sVar1 == 4)) {
    uVar2 = (int)(char)param_2[1] << 0x10 | (uint)*param_2 << 0x18 | (int)(char)param_2[2] << 8 |
            (int)(char)param_2[3];
  }
  *param_1 = uVar2;
  return param_1;
}



void __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
               (long *param_1,char *param_2,char *param_3,undefined4 param_4,undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  char *pcVar3;
  
  plVar1 = param_1 + 3;
  param_1[4] = 0;
  *plVar1 = 0;
  *param_1 = (long)plVar1;
  param_1[1] = 0x3f;
  param_1[2] = (long)plVar1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (param_2 != (char *)0x0) {
    cVar2 = *param_2;
    if (cVar2 != '\0') {
      pcVar3 = param_2 + 1;
      do {
        param_1[2] = (long)((long)plVar1 + 1);
        *(char *)plVar1 = cVar2;
        cVar2 = *pcVar3;
        plVar1 = (long *)param_1[2];
        if (cVar2 == '\0') break;
        pcVar3 = pcVar3 + 1;
      } while (plVar1 < (long *)(*param_1 + param_1[1]));
    }
    *(char *)plVar1 = '\0';
  }
  plVar1 = param_1 + 0xe;
  param_1[0xf] = 0;
  *plVar1 = 0;
  param_1[0xb] = (long)plVar1;
  param_1[0xc] = 0x1f;
  param_1[0xd] = (long)plVar1;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  if (param_3 != (char *)0x0) {
    cVar2 = *param_3;
    if (cVar2 != '\0') {
      pcVar3 = param_3 + 1;
      do {
        param_1[0xd] = (long)((long)plVar1 + 1);
        *(char *)plVar1 = cVar2;
        cVar2 = *pcVar3;
        plVar1 = (long *)param_1[0xd];
        if (cVar2 == '\0') break;
        pcVar3 = pcVar3 + 1;
      } while (plVar1 < (long *)(param_1[0xb] + param_1[0xc]));
    }
    *(char *)plVar1 = '\0';
  }
  *(undefined4 *)(param_1 + 0x12) = param_4;
  *(undefined4 *)((long)param_1 + 0x94) = param_5;
  return;
}



void __ZNSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_ED1Ev(void)

{
  return;
}



void __ZNSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_ED0Ev(void)

{
  __ZdlPv();
  return;
}



void __ZNKSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_E7__cloneEv
               (long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)__Znwm(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &DAT_00025550;
  puVar1[1] = uVar2;
  return;
}



void __ZNSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_E7destroyEv(void)

{
  return;
}



void __ZNSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_E18destroy_deallocateEv
               (void)

{
  __ZdlPv();
  return;
}



void __ZNSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_EclEOdS9_S3_
               (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
                    // WARNING: Could not recover jumptable at 0x00006590. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 8))(*param_2,*param_3,param_4);
  return;
}



long __ZNKSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_E6targetERKSt9type_info
               (long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar2 != 0x8000000000020636) {
    if (-1 < (long)uVar2) {
      return 0;
    }
    iVar1 = _strcmp((char *)(uVar2 & 0x7fffffffffffffff),"PFvddR17WCFixedStringBaseE");
    if (iVar1 != 0) {
      return 0;
    }
  }
  return param_1 + 8;
}



undefined **
__ZNKSt3__110__function6__funcIPFvddR17WCFixedStringBaseENS_9allocatorIS5_EES4_E11target_typeEv
          (void)

{
  return &__ZTIPFvddR17WCFixedStringBaseE;
}



long * ___clang_call_terminate(void)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  ___cxa_begin_catch();
  auVar6 = __ZSt9terminatev();
  plVar1 = auVar6._0_8_;
  plVar4 = plVar1 + 3;
  plVar2 = (long *)*plVar4;
  *plVar4 = 0;
  if (plVar1 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00006660;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00006660:
  plVar2 = (long *)(auVar6._8_8_ + 0x18);
  lVar5 = *plVar2;
  if (lVar5 != 0) {
    if (auVar6._8_8_ == lVar5) {
      plVar1[3] = (long)plVar1;
      (**(code **)(*(long *)*plVar2 + 0x18))((long *)*plVar2,plVar1);
      return plVar1;
    }
    *plVar4 = lVar5;
    plVar4 = plVar2;
  }
  *plVar4 = 0;
  return plVar1;
}



long * __ZNSt3__18functionIFvddR17WCFixedStringBaseEEaSEOS4_(long *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = param_1 + 3;
  plVar1 = (long *)*plVar3;
  *plVar3 = 0;
  if (param_1 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00006660;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00006660:
  plVar1 = (long *)(param_2 + 0x18);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    if (param_2 == lVar4) {
      param_1[3] = (long)param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *plVar3 = lVar4;
    plVar3 = plVar1;
  }
  *plVar3 = 0;
  return param_1;
}



long * __ZNSt3__18functionIFNS0_IFvddR17WCFixedStringBaseEEEPvEEaSEOS7_(long *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = param_1 + 3;
  plVar1 = (long *)*plVar3;
  *plVar3 = 0;
  if (param_1 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00006700;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00006700:
  plVar1 = (long *)(param_2 + 0x18);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    if (param_2 == lVar4) {
      param_1[3] = (long)param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *plVar3 = lVar4;
    plVar3 = plVar1;
  }
  *plVar3 = 0;
  return param_1;
}



void __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
               (undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
              (param_1,(undefined8 *)*param_2);
    __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
              (param_1,(undefined8 *)param_2[1]);
    if (*(char *)((long)param_2 + 0x97) < '\0') {
      __ZdlPv(param_2[0x10]);
    }
    __ZdlPv(param_2);
    return;
  }
  return;
}



undefined1  [16]
__ZNSt3__16__treeINS_12__value_typeI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  long *local_60 [3];
  long local_48;
  
  plVar2 = __ZNSt3__16__treeINS_12__value_typeI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_
                     ((long)param_1,&local_48,param_2);
  plVar3 = (long *)*plVar2;
  bVar1 = plVar3 == (long *)0x0;
  if (bVar1) {
    __ZNSt3__16__treeINS_12__value_typeI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISP_EEEEEEDpOT_
              ((long *)local_60,(long)param_1,param_3,param_4);
    __ZNSt3__16__treeINS_12__value_typeI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_
              (param_1,local_48,plVar2,local_60[0]);
    plVar3 = local_60[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = plVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



long * __ZNSt3__16__treeINS_12__value_typeI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_
                 (long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = __ZltRK17WCFixedStringBaseS1_(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = __ZltRK17WCFixedStringBaseS1_(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}



void __ZNSt3__16__treeINS_12__value_typeI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISP_EEEEEEDpOT_
               (long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  char *pcVar5;
  
  lVar1 = __Znwm(0x100);
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  puVar4 = (undefined8 *)*param_4;
  pcVar2 = (char *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  pcVar2[4] = '\0';
  pcVar2[5] = '\0';
  pcVar2[6] = '\0';
  pcVar2[7] = '\0';
  *(char **)(lVar1 + 0x20) = pcVar2;
  *(undefined8 *)(lVar1 + 0x28) = 0x7f;
  *(char **)(lVar1 + 0x30) = pcVar2;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  pcVar5 = (char *)*puVar4;
  if (pcVar5 != (char *)0x0) {
    cVar3 = *pcVar5;
    if (cVar3 != '\0') {
      do {
        pcVar5 = pcVar5 + 1;
        *(char **)(lVar1 + 0x30) = pcVar2 + 1;
        *pcVar2 = cVar3;
        cVar3 = *pcVar5;
        pcVar2 = *(char **)(lVar1 + 0x30);
        if (cVar3 == '\0') break;
      } while (pcVar2 < (char *)(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28)));
    }
    *pcVar2 = '\0';
  }
  *(undefined2 *)(lVar1 + 0xb8) = 0x100;
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



void __ZNSt3__16__treeINS_12__value_typeI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_
               (long *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (long *)*param_3;
  }
  __ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_
            ((long *)param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



void __ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_
               (long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  do {
    if ((bVar1) || (plVar3 = (long *)param_2[2], (char)plVar3[3] != '\0')) {
      return;
    }
    plVar2 = (long *)plVar3[2];
    plVar5 = (long *)*plVar2;
    if (plVar5 == plVar3) {
      if ((plVar2[1] == 0) || (plVar5 = (long *)(plVar2[1] + 0x18), *(char *)plVar5 != '\0')) {
        if ((long *)*plVar3 != param_2) {
          plVar5 = (long *)plVar3[1];
          lVar4 = *plVar5;
          plVar3[1] = lVar4;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
          }
          plVar5[2] = (long)plVar2;
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar5;
          *plVar5 = (long)plVar3;
          plVar3[2] = (long)plVar5;
          plVar2 = (long *)plVar5[2];
          plVar3 = plVar5;
        }
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar2 + 3) = 0;
        plVar3 = (long *)*plVar2;
        lVar4 = plVar3[1];
        *plVar2 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar2;
        }
        plVar5 = plVar2 + 2;
        plVar3[2] = *plVar5;
        ((undefined8 *)*plVar5)[*(long **)*plVar5 != plVar2] = plVar3;
        plVar3[1] = (long)plVar2;
LAB_00006b98:
        *plVar5 = (long)plVar3;
        return;
      }
    }
    else if ((plVar5 == (long *)0x0) || (plVar5 = plVar5 + 3, (char)*plVar5 != '\0')) {
      if ((long *)*plVar3 == param_2) {
        lVar4 = param_2[1];
        *plVar3 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        param_2[2] = (long)plVar2;
        ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = param_2;
        param_2[1] = (long)plVar3;
        plVar3[2] = (long)param_2;
        plVar2 = (long *)param_2[2];
        plVar3 = param_2;
      }
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar2 + 3) = 0;
      plVar3 = (long *)plVar2[1];
      lVar4 = *plVar3;
      plVar2[1] = lVar4;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x10) = plVar2;
      }
      plVar5 = plVar2 + 2;
      plVar3[2] = *plVar5;
      ((undefined8 *)*plVar5)[*(long **)*plVar5 != plVar2] = plVar3;
      *plVar3 = (long)plVar2;
      goto LAB_00006b98;
    }
    *(undefined1 *)(plVar3 + 3) = 1;
    bVar1 = plVar2 == param_1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar5 = '\x01';
    param_2 = plVar2;
  } while( true );
}



void __ZN16cDuganAgent_AlgTILi1EEC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
               (undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)
           __ZN14cDuganAgentAlgC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
                     (param_1);
  *puVar1 = &DAT_00025600;
  puVar1[1] = &DAT_00025f50;
  puVar1[6] = &
              PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00025f70
  ;
  puVar1[7] = &DAT_00025fc8;
  lVar2 = 0xdfc;
  do {
    *(int *)((long)puVar1 + lVar2 * 4) = (int)lVar2 + -0xdfc;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xe0d);
  do {
    *(int *)((long)puVar1 + lVar2 * 4) = (int)lVar2 + -0xe0d;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xe14);
  return;
}



void __ZN16cDuganAgent_AlgTILi1EED1Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00024198;
  param_1[1] = &DAT_00024ae8;
  param_1[6] = &
               PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[7] = &DAT_00024b60;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  return;
}



void __ZN16cDuganAgent_AlgTILi1EED0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00024198;
  param_1[1] = &DAT_00024ae8;
  param_1[6] = &
               PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[7] = &DAT_00024b60;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



void __ZThn8_N16cDuganAgent_AlgTILi1EED0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00024ae8;
  param_1[5] = &
               PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[6] = &DAT_00024b60;
  param_1[-1] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



void __ZThn48_N16cDuganAgent_AlgTILi1EED1Ev(undefined8 *param_1)

{
  param_1[-5] = &DAT_00024ae8;
  *param_1 = &
             PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[1] = &DAT_00024b60;
  param_1[-6] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  return;
}



void __ZThn48_N16cDuganAgent_AlgTILi1EED0Ev(undefined8 *param_1)

{
  param_1[-5] = &DAT_00024ae8;
  *param_1 = &
             PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[1] = &DAT_00024b60;
  param_1[-6] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



void __ZThn56_N16cDuganAgent_AlgTILi1EED1Ev(undefined8 *param_1)

{
  param_1[-6] = &DAT_00024ae8;
  param_1[-1] = &
                PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  *param_1 = &DAT_00024b60;
  param_1[-7] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  return;
}



void __ZThn56_N16cDuganAgent_AlgTILi1EED0Ev(undefined8 *param_1)

{
  param_1[-6] = &DAT_00024ae8;
  param_1[-1] = &
                PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  *param_1 = &DAT_00024b60;
  param_1[-7] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



void __ZN16cDuganAgent_AlgTILi2EEC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
               (undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)
           __ZN14cDuganAgentAlgC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
                     (param_1);
  *puVar1 = &DAT_00026008;
  puVar1[1] = &DAT_00026958;
  puVar1[6] = &
              PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00026978
  ;
  puVar1[7] = &DAT_000269d0;
  lVar2 = 0xdfe;
  do {
    *(int *)((long)puVar1 + lVar2 * 4) = (int)lVar2 + -0xdfe;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xe11);
  do {
    *(int *)((long)puVar1 + lVar2 * 4) = (int)lVar2 + -0xe11;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xe1a);
  return;
}



void __ZN16cDuganAgent_AlgTILi2EED1Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00024198;
  param_1[1] = &DAT_00024ae8;
  param_1[6] = &
               PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[7] = &DAT_00024b60;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  return;
}



void __ZN16cDuganAgent_AlgTILi2EED0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00024198;
  param_1[1] = &DAT_00024ae8;
  param_1[6] = &
               PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[7] = &DAT_00024b60;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



void __ZThn8_N16cDuganAgent_AlgTILi2EED1Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00024ae8;
  param_1[5] = &
               PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[6] = &DAT_00024b60;
  param_1[-1] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  return;
}



void __ZThn8_N16cDuganAgent_AlgTILi2EED0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00024ae8;
  param_1[5] = &
               PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[6] = &DAT_00024b60;
  param_1[-1] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



void __ZThn48_N16cDuganAgent_AlgTILi2EED0Ev(undefined8 *param_1)

{
  param_1[-5] = &DAT_00024ae8;
  *param_1 = &
             PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[1] = &DAT_00024b60;
  param_1[-6] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



void __ZThn56_N16cDuganAgent_AlgTILi2EED1Ev(undefined8 *param_1)

{
  param_1[-6] = &DAT_00024ae8;
  param_1[-1] = &
                PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  *param_1 = &DAT_00024b60;
  param_1[-7] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  return;
}



void __ZThn56_N16cDuganAgent_AlgTILi2EED0Ev(undefined8 *param_1)

{
  param_1[-6] = &DAT_00024ae8;
  param_1[-1] = &
                PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  *param_1 = &DAT_00024b60;
  param_1[-7] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



void __ZN17cDuganMaster_AlgTILi1EEC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
               (undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)
           __ZN14cDuganAgentAlgC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
                     (param_1);
  *puVar1 = &DAT_00026a10;
  puVar1[1] = &DAT_00027360;
  puVar1[6] = &
              PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00027380
  ;
  puVar1[7] = &DAT_000273d8;
  lVar2 = 0xdfa;
  do {
    *(int *)((long)puVar1 + lVar2 * 4) = (int)lVar2 + -0xdfa;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xdff);
  *(undefined8 *)((long)puVar1 + 0x37fc) = 0x100000000;
  *(undefined4 *)((long)puVar1 + 0x3804) = 2;
  return;
}



void __ZN17cDuganMaster_AlgTILi1EED0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00024198;
  param_1[1] = &DAT_00024ae8;
  param_1[6] = &
               PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[7] = &DAT_00024b60;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



void __ZThn8_N17cDuganMaster_AlgTILi1EED1Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00024ae8;
  param_1[5] = &
               PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[6] = &DAT_00024b60;
  param_1[-1] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  return;
}



void __ZThn8_N17cDuganMaster_AlgTILi1EED0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00024ae8;
  param_1[5] = &
               PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[6] = &DAT_00024b60;
  param_1[-1] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



void __ZThn48_N17cDuganMaster_AlgTILi1EED1Ev(undefined8 *param_1)

{
  param_1[-5] = &DAT_00024ae8;
  *param_1 = &
             PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[1] = &DAT_00024b60;
  param_1[-6] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  return;
}



void __ZThn48_N17cDuganMaster_AlgTILi1EED0Ev(undefined8 *param_1)

{
  param_1[-5] = &DAT_00024ae8;
  *param_1 = &
             PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  param_1[1] = &DAT_00024b60;
  param_1[-6] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



void __ZThn56_N17cDuganMaster_AlgTILi1EED0Ev(undefined8 *param_1)

{
  param_1[-6] = &DAT_00024ae8;
  param_1[-1] = &
                PTR___ZThn48_N20wvWavesV15_1_154_19710cALGORITHM18UpdateMeterDisplayEmP21WCParamExtensionMeter_00024b08
  ;
  *param_1 = &DAT_00024b60;
  param_1[-7] = &DAT_00024198;
  __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev();
  __ZdlPv();
  return;
}



void ___cxx_global_var_init_14(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_15(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_DuganAgentAlg_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  uRam000000000002c830 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_0002c858 = &DAT_0002c860;
  uRam000000000002c868 = 0;
  _DAT_0002c860 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_0002c860;
  DAT_0002c850 = 0x7f;
  uRam000000000002c878 = 0;
  _DAT_0002c870 = 0;
  uRam000000000002c888 = 0;
  _DAT_0002c880 = 0;
  uRam000000000002c898 = 0;
  _DAT_0002c890 = 0;
  uRam000000000002c8a8 = 0;
  _DAT_0002c8a0 = 0;
  uRam000000000002c8b8 = 0;
  _DAT_0002c8b0 = 0;
  uRam000000000002c8c8 = 0;
  _DAT_0002c8c0 = 0;
  uRam000000000002c8d8 = 0;
  _DAT_0002c8d0 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_0002c858 + 1;
    *DAT_0002c858 = cVar4;
    DAT_0002c858 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002c858 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_0002c850);
  *DAT_0002c858 = '\0';
  DAT_0002c8f0 = &DAT_0002c8f8;
  uRam000000000002c900 = 0;
  _DAT_0002c8f8 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE = &DAT_0002c8f8;
  DAT_0002c8e8 = 0xff;
  uRam000000000002c910 = 0;
  _DAT_0002c908 = 0;
  uRam000000000002c920 = 0;
  _DAT_0002c918 = 0;
  uRam000000000002c930 = 0;
  _DAT_0002c928 = 0;
  uRam000000000002c940 = 0;
  _DAT_0002c938 = 0;
  uRam000000000002c950 = 0;
  _DAT_0002c948 = 0;
  uRam000000000002c960 = 0;
  _DAT_0002c958 = 0;
  uRam000000000002c970 = 0;
  _DAT_0002c968 = 0;
  uRam000000000002c980 = 0;
  _DAT_0002c978 = 0;
  uRam000000000002c990 = 0;
  _DAT_0002c988 = 0;
  uRam000000000002c9a0 = 0;
  _DAT_0002c998 = 0;
  uRam000000000002c9b0 = 0;
  _DAT_0002c9a8 = 0;
  uRam000000000002c9c0 = 0;
  _DAT_0002c9b8 = 0;
  uRam000000000002c9d0 = 0;
  _DAT_0002c9c8 = 0;
  cVar4 = 'I';
  lVar3 = 1;
  uRam000000000002c9e0 = 0;
  _DAT_0002c9d8 = 0;
  uRam000000000002c9f0 = 0;
  _DAT_0002c9e8 = 0;
  do {
    pcVar1 = DAT_0002c8f0 + 1;
    *DAT_0002c8f0 = cVar4;
    DAT_0002c8f0 = pcVar1;
    if (lVar3 == 0x10) break;
    cVar4 = "Initial Settings"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002c8f0 <
           __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE + DAT_0002c8e8);
  *DAT_0002c8f0 = '\0';
  DAT_0002ca08 = &DAT_0002ca10;
  uRam000000000002ca18 = 0;
  _DAT_0002ca10 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE = &DAT_0002ca10;
  DAT_0002ca00 = 0xff;
  uRam000000000002ca28 = 0;
  _DAT_0002ca20 = 0;
  uRam000000000002ca38 = 0;
  _DAT_0002ca30 = 0;
  uRam000000000002ca48 = 0;
  _DAT_0002ca40 = 0;
  uRam000000000002ca58 = 0;
  _DAT_0002ca50 = 0;
  uRam000000000002ca68 = 0;
  _DAT_0002ca60 = 0;
  uRam000000000002ca78 = 0;
  _DAT_0002ca70 = 0;
  uRam000000000002ca88 = 0;
  _DAT_0002ca80 = 0;
  uRam000000000002ca98 = 0;
  _DAT_0002ca90 = 0;
  uRam000000000002caa8 = 0;
  _DAT_0002caa0 = 0;
  uRam000000000002cab8 = 0;
  _DAT_0002cab0 = 0;
  uRam000000000002cac8 = 0;
  _DAT_0002cac0 = 0;
  uRam000000000002cad8 = 0;
  _DAT_0002cad0 = 0;
  uRam000000000002cae8 = 0;
  _DAT_0002cae0 = 0;
  cVar4 = 'L';
  lVar3 = 1;
  uRam000000000002caf8 = 0;
  _DAT_0002caf0 = 0;
  uRam000000000002cb08 = 0;
  _DAT_0002cb00 = 0;
  do {
    pcVar1 = DAT_0002ca08 + 1;
    *DAT_0002ca08 = cVar4;
    DAT_0002ca08 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "Load Preset: "[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002ca08 <
           __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE + DAT_0002ca00);
  *DAT_0002ca08 = '\0';
  DAT_0002cb20 = &DAT_0002cb28;
  uRam000000000002cb30 = 0;
  _DAT_0002cb28 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE = &DAT_0002cb28;
  DAT_0002cb18 = 0xff;
  uRam000000000002cb40 = 0;
  _DAT_0002cb38 = 0;
  uRam000000000002cb50 = 0;
  _DAT_0002cb48 = 0;
  uRam000000000002cb60 = 0;
  _DAT_0002cb58 = 0;
  uRam000000000002cb70 = 0;
  _DAT_0002cb68 = 0;
  uRam000000000002cb80 = 0;
  _DAT_0002cb78 = 0;
  uRam000000000002cb90 = 0;
  _DAT_0002cb88 = 0;
  uRam000000000002cba0 = 0;
  _DAT_0002cb98 = 0;
  uRam000000000002cbb0 = 0;
  _DAT_0002cba8 = 0;
  uRam000000000002cbc0 = 0;
  _DAT_0002cbb8 = 0;
  uRam000000000002cbd0 = 0;
  _DAT_0002cbc8 = 0;
  uRam000000000002cbe0 = 0;
  _DAT_0002cbd8 = 0;
  uRam000000000002cbf0 = 0;
  _DAT_0002cbe8 = 0;
  uRam000000000002cc00 = 0;
  _DAT_0002cbf8 = 0;
  cVar4 = 'S';
  lVar3 = 1;
  uRam000000000002cc10 = 0;
  _DAT_0002cc08 = 0;
  uRam000000000002cc20 = 0;
  _DAT_0002cc18 = 0;
  do {
    pcVar1 = DAT_0002cb20 + 1;
    *DAT_0002cb20 = cVar4;
    DAT_0002cb20 = pcVar1;
    if (lVar3 == 0xc) break;
    cVar4 = "Switch Setup"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002cb20 <
           __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE + DAT_0002cb18);
  lVar3 = 0;
  *DAT_0002cb20 = '\0';
  DAT_0002cc38 = &DAT_0002cc40;
  uRam000000000002cc48 = 0;
  _DAT_0002cc40 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE = &DAT_0002cc40;
  DAT_0002cc30 = 0xff;
  uRam000000000002cc58 = 0;
  _DAT_0002cc50 = 0;
  uRam000000000002cc68 = 0;
  _DAT_0002cc60 = 0;
  uRam000000000002cc78 = 0;
  _DAT_0002cc70 = 0;
  uRam000000000002cc88 = 0;
  _DAT_0002cc80 = 0;
  uRam000000000002cc98 = 0;
  _DAT_0002cc90 = 0;
  uRam000000000002cca8 = 0;
  _DAT_0002cca0 = 0;
  uRam000000000002ccb8 = 0;
  _DAT_0002ccb0 = 0;
  uRam000000000002ccc8 = 0;
  _DAT_0002ccc0 = 0;
  uRam000000000002ccd8 = 0;
  _DAT_0002ccd0 = 0;
  uRam000000000002cce8 = 0;
  _DAT_0002cce0 = 0;
  uRam000000000002ccf8 = 0;
  _DAT_0002ccf0 = 0;
  uRam000000000002cd08 = 0;
  _DAT_0002cd00 = 0;
  uRam000000000002cd18 = 0;
  _DAT_0002cd10 = 0;
  cVar4 = 'R';
  uRam000000000002cd28 = 0;
  _DAT_0002cd20 = 0;
  uRam000000000002cd38 = 0;
  _DAT_0002cd30 = 0;
  do {
    pcVar1 = DAT_0002cc38 + 1;
    *DAT_0002cc38 = cVar4;
    DAT_0002cc38 = pcVar1;
    if (lVar3 == 4) break;
    cVar4 = "Reset"[lVar3 + 1];
    lVar3 = lVar3 + 1;
  } while (DAT_0002cc38 < __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE + DAT_0002cc30);
  *DAT_0002cc38 = '\0';
  __ZL14end_of_polygon = 0xfc18fc18;
  return;
}



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



void __ZN16cDuganAgent_AlgTILi1EEC1ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
               (undefined8 param_1)

{
  __ZN16cDuganAgent_AlgTILi1EEC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
            (param_1);
  return;
}



void __ZN16cDuganAgent_AlgTILi1EE33AdjustProcessCodeDescriptionsSelfEv(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x600);
  if (lVar1 != *(long *)(param_1 + 0x608)) {
    do {
      *(undefined8 *)(lVar1 + 0x6c) = 0x1100000007;
      lVar1 = lVar1 + 200;
    } while (lVar1 != *(long *)(param_1 + 0x608));
  }
  return;
}



uint __ZN16cDuganAgent_AlgTILi1EE12InitDataSelfEv(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0xdd0;
  uVar4 = __ZN14WCMeterManager13GetMeterIndexEm(lVar1,0x10);
  uVar2 = __ZN14WCMeterManager18SetMeterReadOffsetEjj
                    (lVar1,uVar4,*(undefined4 *)(&DAT_00003838 + param_1));
  uVar4 = __ZN14WCMeterManager13GetMeterIndexEm(lVar1,0xf);
  uVar3 = __ZN14WCMeterManager18SetMeterReadOffsetEjj
                    (lVar1,uVar4,*(undefined4 *)(&DAT_0000383c + param_1));
  *(undefined8 *)(&DAT_000037e0 + param_1) = 0xffffffffffffffff;
  *(undefined8 *)(&DAT_000037e8 + param_1) = 0xffffffffffffffff;
  return uVar3 | uVar2;
}



undefined8 __ZN16cDuganAgent_AlgTILi1EE20GetInitialStatesSelfEPc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0xd78)) {
    iVar3 = 0;
    lVar2 = param_2;
    do {
      uVar1 = (**(code **)(param_1 + 0xe30))(0,lVar2);
      lVar2 = lVar2 + (uVar1 & 0xffffffff);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xd78));
  }
  (**(code **)(param_1 + 0xe30))
            (0x3ff0000000000000,
             param_2 + (long)*(int *)(&DAT_0000383c + param_1) * (long)*(int *)(param_1 + 0x204));
  return 1;
}



void __ZN16cDuganAgent_AlgTILi1EE18SetBypassCoefsSelfEv(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  
  pvVar1 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),0);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM22GetPointerToBypassCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),0);
  sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)(param_1 + 0xd7c);
  if ((pvVar2 == (void *)0x0 || pvVar1 == (void *)0x0) || (int)sVar3 == 0) {
    return;
  }
  _memmove(pvVar2,pvVar1,sVar3);
  return;
}



undefined8 * __ZN16cDuganAgent_AlgTILi1EE7SetLeakEs(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = __Z8dbToGaind(*(undefined8 *)
                         (&DAT_00001268 +
                         *(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8));
  *(undefined8 *)(&DAT_000037d0 + param_1) = uVar5;
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_0000381c + param_1));
  (**(code **)(param_1 + 0xe30))(uVar5);
  iVar1 = *(int *)(&DAT_0000381c + param_1);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar4 != (undefined8 *)0x0) {
      sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar4 + 0x34);
      if (((void *)*puVar4 != (void *)0x0 && pvVar2 != (void *)0x0) && (int)sVar3 != 0) {
        _memmove((void *)*puVar4,pvVar2,sVar3);
      }
    }
  }
  return puVar4;
}



undefined8 * __ZN16cDuganAgent_AlgTILi1EE6SetAttEs(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = __Z11msToDspCoefdd(*(undefined8 *)
                              (*(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8 +
                              0x698),(double)*(int *)(param_1 + 0x238));
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_00003820 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar5);
  iVar1 = *(int *)(&DAT_00003820 + param_1);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar4 != (undefined8 *)0x0) {
      sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar4 + 0x34);
      if (((void *)*puVar4 != (void *)0x0 && pvVar2 != (void *)0x0) && (int)sVar3 != 0) {
        _memmove((void *)*puVar4,pvVar2,sVar3);
      }
    }
  }
  return puVar4;
}



undefined8 * __ZN16cDuganAgent_AlgTILi1EE6SetRelEs(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = __Z11msToDspCoefdd(*(undefined8 *)
                              (*(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8 +
                              0xc80),(double)*(int *)(param_1 + 0x238));
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_00003824 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar5);
  iVar1 = *(int *)(&DAT_00003824 + param_1);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar4 != (undefined8 *)0x0) {
      sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar4 + 0x34);
      if (((void *)*puVar4 != (void *)0x0 && pvVar2 != (void *)0x0) && (int)sVar3 != 0) {
        _memmove((void *)*puVar4,pvVar2,sVar3);
      }
    }
  }
  return puVar4;
}



undefined8 * __ZN16cDuganAgent_AlgTILi1EE11SetBypassTcEs(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = __Z11msToDspCoefdd(*(undefined8 *)
                              (*(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8 +
                              0x70e8),(double)*(int *)(param_1 + 0x238));
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_00003828 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar5);
  iVar1 = *(int *)(&DAT_00003828 + param_1);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar4 != (undefined8 *)0x0) {
      sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar4 + 0x34);
      if (((void *)*puVar4 != (void *)0x0 && pvVar2 != (void *)0x0) && (int)sVar3 != 0) {
        _memmove((void *)*puVar4,pvVar2,sVar3);
      }
    }
  }
  return puVar4;
}



undefined8 * __ZN16cDuganAgent_AlgTILi1EE12SetOneWeightEs(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = __Z8dbToGaind(*(undefined8 *)
                         (&DAT_000041a8 +
                         *(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8));
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_00003804 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar5);
  iVar1 = *(int *)(&DAT_00003804 + param_1);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar4 != (undefined8 *)0x0) {
      sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar4 + 0x34);
      if (((void *)*puVar4 != (void *)0x0 && pvVar2 != (void *)0x0) && (int)sVar3 != 0) {
        _memmove((void *)*puVar4,pvVar2,sVar3);
      }
    }
  }
  return puVar4;
}



undefined8 * __ZN16cDuganAgent_AlgTILi1EE12SetOneBypassEs(long param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  bVar2 = __ZN14cDuganAgentAlg17IsChannelBypassedEv(param_1);
  uVar6 = 0x3ff0000000000000;
  if (bVar2 == 0) {
    uVar6 = 0;
  }
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_00003808 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar6);
  iVar1 = *(int *)(&DAT_00003808 + param_1);
  pvVar3 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar5 != (undefined8 *)0x0) {
      sVar4 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar5 + 0x34);
      if (((void *)*puVar5 != (void *)0x0 && pvVar3 != (void *)0x0) && (int)sVar4 != 0) {
        _memmove((void *)*puVar5,pvVar3,sVar4);
      }
    }
  }
  return puVar5;
}



undefined8 * __ZN16cDuganAgent_AlgTILi1EE10SetOneMuteEs(long param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  bVar2 = __ZN14cDuganAgentAlg14IsChannelMutedEv(param_1);
  uVar6 = 0;
  if (!bVar2) {
    uVar6 = 0x3ff0000000000000;
  }
  *(undefined8 *)(&DAT_000037d8 + param_1) = uVar6;
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_0000380c + param_1));
  (**(code **)(param_1 + 0xe30))(uVar6);
  iVar1 = *(int *)(&DAT_0000380c + param_1);
  pvVar3 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar5 != (undefined8 *)0x0) {
      sVar4 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar5 + 0x34);
      if (((void *)*puVar5 != (void *)0x0 && pvVar3 != (void *)0x0) && (int)sVar4 != 0) {
        _memmove((void *)*puVar5,pvVar3,sVar4);
      }
    }
  }
  return puVar5;
}



undefined8 * __ZN16cDuganAgent_AlgTILi1EE14SetOneRSumGainEs(long param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  bVar2 = __ZN14cDuganAgentAlg17IsChannelBypassedEv(param_1);
  uVar6 = 0;
  if (bVar2 == 0) {
    uVar6 = 0x3ff0000000000000;
  }
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x3800));
  (**(code **)(param_1 + 0xe30))(uVar6);
  iVar1 = *(int *)(param_1 + 0x3800);
  pvVar3 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar5 != (undefined8 *)0x0) {
      sVar4 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar5 + 0x34);
      if (((void *)*puVar5 != (void *)0x0 && pvVar3 != (void *)0x0) && (int)sVar4 != 0) {
        _memmove((void *)*puVar5,pvVar3,sVar4);
      }
    }
  }
  return puVar5;
}



undefined8
__ZN16cDuganAgent_AlgTILi1EE24SetOutputsIOMatrixOffsetEii
          (long *param_1,undefined4 param_2,int param_3)

{
  undefined8 local_28;
  
  if (param_3 < 2) {
    *(undefined4 *)(&DAT_000037e8 + (long)param_1 + (long)param_3 * 4) = param_2;
    local_28 = (**(code **)(*param_1 + 0x930))(param_1,1);
    __ZN20wvWavesV15_1_154_19710cALGORITHM18SendAndFreeBuffersERPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADEREib
              (param_1,&local_28,0,1);
    return 0;
  }
  return 0xffffffed;
}



undefined8
__ZN16cDuganAgent_AlgTILi1EE23SetInputsIOMatrixOffsetEii
          (long *param_1,undefined4 param_2,int param_3)

{
  undefined8 local_28;
  
  if (param_3 < 2) {
    *(undefined4 *)(&DAT_000037e0 + (long)param_1 + (long)param_3 * 4) = param_2;
    local_28 = (**(code **)(*param_1 + 0x938))(param_1,1);
    __ZN20wvWavesV15_1_154_19710cALGORITHM18SendAndFreeBuffersERPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADEREib
              (param_1,&local_28,0,1);
    return 0;
  }
  return 0xffffffed;
}



undefined8 * __ZN16cDuganAgent_AlgTILi1EE10SetOutputsEs(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  size_t sVar5;
  undefined8 *puVar6;
  
  uVar1 = *(undefined4 *)(&DAT_000037e8 + param_1);
  uVar3 = __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                    (param_1,*(undefined4 *)(param_1 + 0x248),
                     *(undefined4 *)(&DAT_000037f8 + param_1));
  (**(code **)(param_1 + 0xe40))(uVar1,uVar3);
  uVar1 = *(undefined4 *)(&DAT_000037ec + param_1);
  uVar3 = __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                    (param_1,*(undefined4 *)(param_1 + 0x248),
                     *(undefined4 *)(&DAT_000037fc + param_1));
  (**(code **)(param_1 + 0xe40))(uVar1,uVar3);
  iVar2 = *(int *)(&DAT_000037f8 + param_1);
  pvVar4 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar2);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar2,2,0);
    if (puVar6 != (undefined8 *)0x0) {
      sVar5 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar6 + 0x34);
      if (((void *)*puVar6 != (void *)0x0 && pvVar4 != (void *)0x0) && (int)sVar5 != 0) {
        _memmove((void *)*puVar6,pvVar4,sVar5);
      }
    }
  }
  return puVar6;
}



undefined8 * __ZN16cDuganAgent_AlgTILi1EE9SetInputsEs(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  size_t sVar5;
  undefined8 *puVar6;
  
  uVar1 = *(undefined4 *)(&DAT_000037e0 + param_1);
  uVar3 = __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                    (param_1,*(undefined4 *)(param_1 + 0x248),
                     *(undefined4 *)(&DAT_000037f0 + param_1));
  (**(code **)(param_1 + 0xe40))(uVar1,uVar3);
  uVar1 = *(undefined4 *)(&DAT_000037e4 + param_1);
  uVar3 = __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                    (param_1,*(undefined4 *)(param_1 + 0x248),
                     *(undefined4 *)(&DAT_000037f4 + param_1));
  (**(code **)(param_1 + 0xe40))(uVar1,uVar3);
  iVar2 = *(int *)(&DAT_000037f0 + param_1);
  pvVar4 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar2);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar2,2,0);
    if (puVar6 != (undefined8 *)0x0) {
      sVar5 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar6 + 0x34);
      if (((void *)*puVar6 != (void *)0x0 && pvVar4 != (void *)0x0) && (int)sVar5 != 0) {
        _memmove((void *)*puVar6,pvVar4,sVar5);
      }
    }
  }
  return puVar6;
}



void __ZN16cDuganAgent_AlgTILi2EEC1ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
               (undefined8 param_1)

{
  __ZN16cDuganAgent_AlgTILi2EEC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
            (param_1);
  return;
}



void __ZN16cDuganAgent_AlgTILi2EE33AdjustProcessCodeDescriptionsSelfEv(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x600);
  if (lVar1 != *(long *)(param_1 + 0x608)) {
    do {
      *(undefined8 *)(lVar1 + 0x6c) = 0x1300000009;
      lVar1 = lVar1 + 200;
    } while (lVar1 != *(long *)(param_1 + 0x608));
  }
  return;
}



uint __ZN16cDuganAgent_AlgTILi2EE12InitDataSelfEv(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1 + 0xdd0;
  uVar3 = __ZN14WCMeterManager13GetMeterIndexEm(lVar4,0x10);
  uVar1 = __ZN14WCMeterManager18SetMeterReadOffsetEjj
                    (lVar4,uVar3,*(undefined4 *)(&DAT_00003848 + param_1));
  uVar3 = __ZN14WCMeterManager13GetMeterIndexEm(lVar4,0xf);
  uVar2 = __ZN14WCMeterManager18SetMeterReadOffsetEjj
                    (lVar4,uVar3,*(undefined4 *)(&DAT_0000384c + param_1));
  lVar4 = 0;
  *(undefined8 *)(&DAT_000037e0 + param_1) = 0xffffffffffffffff;
  *(undefined4 *)(&DAT_000037e8 + param_1) = 0xffffffff;
  do {
    *(undefined4 *)(&DAT_000037ec + lVar4 + param_1) = 0xffffffff;
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  return uVar2 | uVar1;
}



undefined8 __ZN16cDuganAgent_AlgTILi2EE20GetInitialStatesSelfEPc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0xd78)) {
    iVar3 = 0;
    lVar2 = param_2;
    do {
      uVar1 = (**(code **)(param_1 + 0xe30))(0,lVar2);
      lVar2 = lVar2 + (uVar1 & 0xffffffff);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xd78));
  }
  (**(code **)(param_1 + 0xe30))
            (0x3ff0000000000000,
             param_2 + (long)*(int *)(&DAT_0000384c + param_1) * (long)*(int *)(param_1 + 0x204));
  return 1;
}



void __ZN16cDuganAgent_AlgTILi2EE18SetBypassCoefsSelfEv(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  
  pvVar1 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),0);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM22GetPointerToBypassCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),0);
  sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)(param_1 + 0xd7c);
  if ((pvVar2 == (void *)0x0 || pvVar1 == (void *)0x0) || (int)sVar3 == 0) {
    return;
  }
  _memmove(pvVar2,pvVar1,sVar3);
  return;
}



undefined8 * __ZN16cDuganAgent_AlgTILi2EE6SetAttEs(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = __Z11msToDspCoefdd(*(undefined8 *)
                              (*(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8 +
                              0x698),(double)*(int *)(param_1 + 0x238));
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_00003830 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar5);
  iVar1 = *(int *)(&DAT_00003830 + param_1);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar4 != (undefined8 *)0x0) {
      sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar4 + 0x34);
      if (((void *)*puVar4 != (void *)0x0 && pvVar2 != (void *)0x0) && (int)sVar3 != 0) {
        _memmove((void *)*puVar4,pvVar2,sVar3);
      }
    }
  }
  return puVar4;
}



undefined8 * __ZN16cDuganAgent_AlgTILi2EE6SetRelEs(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = __Z11msToDspCoefdd(*(undefined8 *)
                              (*(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8 +
                              0xc80),(double)*(int *)(param_1 + 0x238));
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_00003834 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar5);
  iVar1 = *(int *)(&DAT_00003834 + param_1);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar4 != (undefined8 *)0x0) {
      sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar4 + 0x34);
      if (((void *)*puVar4 != (void *)0x0 && pvVar2 != (void *)0x0) && (int)sVar3 != 0) {
        _memmove((void *)*puVar4,pvVar2,sVar3);
      }
    }
  }
  return puVar4;
}



undefined8 * __ZN16cDuganAgent_AlgTILi2EE11SetBypassTcEs(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = __Z11msToDspCoefdd(*(undefined8 *)
                              (*(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8 +
                              0x70e8),(double)*(int *)(param_1 + 0x238));
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_00003838 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar5);
  iVar1 = *(int *)(&DAT_00003838 + param_1);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar4 != (undefined8 *)0x0) {
      sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar4 + 0x34);
      if (((void *)*puVar4 != (void *)0x0 && pvVar2 != (void *)0x0) && (int)sVar3 != 0) {
        _memmove((void *)*puVar4,pvVar2,sVar3);
      }
    }
  }
  return puVar4;
}



undefined8 * __ZN16cDuganAgent_AlgTILi2EE12SetOneWeightEs(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = __Z8dbToGaind(*(undefined8 *)
                         (&DAT_000041a8 +
                         *(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8));
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_00003814 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar5);
  iVar1 = *(int *)(&DAT_00003814 + param_1);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar4 != (undefined8 *)0x0) {
      sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar4 + 0x34);
      if (((void *)*puVar4 != (void *)0x0 && pvVar2 != (void *)0x0) && (int)sVar3 != 0) {
        _memmove((void *)*puVar4,pvVar2,sVar3);
      }
    }
  }
  return puVar4;
}



undefined8 * __ZN16cDuganAgent_AlgTILi2EE12SetOneBypassEs(long param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  bVar2 = __ZN14cDuganAgentAlg17IsChannelBypassedEv(param_1);
  uVar6 = 0x3ff0000000000000;
  if (bVar2 == 0) {
    uVar6 = 0;
  }
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_00003818 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar6);
  iVar1 = *(int *)(&DAT_00003818 + param_1);
  pvVar3 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar5 != (undefined8 *)0x0) {
      sVar4 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar5 + 0x34);
      if (((void *)*puVar5 != (void *)0x0 && pvVar3 != (void *)0x0) && (int)sVar4 != 0) {
        _memmove((void *)*puVar5,pvVar3,sVar4);
      }
    }
  }
  return puVar5;
}



undefined8 * __ZN16cDuganAgent_AlgTILi2EE10SetOneMuteEs(long param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  bVar2 = __ZN14cDuganAgentAlg14IsChannelMutedEv(param_1);
  uVar6 = 0;
  if (!bVar2) {
    uVar6 = 0x3ff0000000000000;
  }
  *(undefined8 *)(&DAT_000037d8 + param_1) = uVar6;
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_0000381c + param_1));
  (**(code **)(param_1 + 0xe30))(uVar6);
  iVar1 = *(int *)(&DAT_0000381c + param_1);
  pvVar3 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar5 != (undefined8 *)0x0) {
      sVar4 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar5 + 0x34);
      if (((void *)*puVar5 != (void *)0x0 && pvVar3 != (void *)0x0) && (int)sVar4 != 0) {
        _memmove((void *)*puVar5,pvVar3,sVar4);
      }
    }
  }
  return puVar5;
}



undefined8 * __ZN16cDuganAgent_AlgTILi2EE14SetOneRSumGainEs(long param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  bVar2 = __ZN14cDuganAgentAlg17IsChannelBypassedEv(param_1);
  uVar6 = 0;
  if (bVar2 == 0) {
    uVar6 = 0x3ff0000000000000;
  }
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_00003810 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar6);
  iVar1 = *(int *)(&DAT_00003810 + param_1);
  pvVar3 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar5 != (undefined8 *)0x0) {
      sVar4 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar5 + 0x34);
      if (((void *)*puVar5 != (void *)0x0 && pvVar3 != (void *)0x0) && (int)sVar4 != 0) {
        _memmove((void *)*puVar5,pvVar3,sVar4);
      }
    }
  }
  return puVar5;
}



undefined8
__ZN16cDuganAgent_AlgTILi2EE24SetOutputsIOMatrixOffsetEii
          (long *param_1,undefined4 param_2,int param_3)

{
  undefined8 local_28;
  
  if (param_3 < 3) {
    *(undefined4 *)(&DAT_000037ec + (long)param_1 + (long)param_3 * 4) = param_2;
    local_28 = (**(code **)(*param_1 + 0x930))(param_1,1);
    __ZN20wvWavesV15_1_154_19710cALGORITHM18SendAndFreeBuffersERPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADEREib
              (param_1,&local_28,0,1);
    return 0;
  }
  return 0xffffffed;
}



undefined8
__ZN16cDuganAgent_AlgTILi2EE23SetInputsIOMatrixOffsetEii
          (long *param_1,undefined4 param_2,int param_3)

{
  undefined8 local_28;
  
  if (param_3 < 3) {
    *(undefined4 *)(&DAT_000037e0 + (long)param_1 + (long)param_3 * 4) = param_2;
    local_28 = (**(code **)(*param_1 + 0x938))(param_1,1);
    __ZN20wvWavesV15_1_154_19710cALGORITHM18SendAndFreeBuffersERPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADEREib
              (param_1,&local_28,0,1);
    return 0;
  }
  return 0xffffffed;
}



undefined8 * __ZN16cDuganAgent_AlgTILi2EE10SetOutputsEs(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  size_t sVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = -0xc;
  do {
    uVar1 = *(undefined4 *)(&DAT_000037f8 + param_1 + lVar7);
    uVar3 = __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                      (param_1,*(undefined4 *)(param_1 + 0x248),
                       *(undefined4 *)(&DAT_00003810 + param_1 + lVar7));
    (**(code **)(param_1 + 0xe40))(uVar1,uVar3);
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0);
  iVar2 = *(int *)(&DAT_00003804 + param_1);
  pvVar4 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar2);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar2,3,0);
    if (puVar6 != (undefined8 *)0x0) {
      sVar5 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar6 + 0x34);
      if (((void *)*puVar6 != (void *)0x0 && pvVar4 != (void *)0x0) && (int)sVar5 != 0) {
        _memmove((void *)*puVar6,pvVar4,sVar5);
      }
    }
  }
  return puVar6;
}



undefined8 * __ZN16cDuganAgent_AlgTILi2EE9SetInputsEs(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  size_t sVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = -0xc;
  do {
    uVar1 = *(undefined4 *)(&DAT_000037ec + param_1 + lVar7);
    uVar3 = __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                      (param_1,*(undefined4 *)(param_1 + 0x248),
                       *(undefined4 *)(&DAT_00003804 + param_1 + lVar7));
    (**(code **)(param_1 + 0xe40))(uVar1,uVar3);
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0);
  iVar2 = *(int *)(&DAT_000037f8 + param_1);
  pvVar4 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar2);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar2,3,0);
    if (puVar6 != (undefined8 *)0x0) {
      sVar5 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar6 + 0x34);
      if (((void *)*puVar6 != (void *)0x0 && pvVar4 != (void *)0x0) && (int)sVar5 != 0) {
        _memmove((void *)*puVar6,pvVar4,sVar5);
      }
    }
  }
  return puVar6;
}



void __ZN17cDuganMaster_AlgTILi1EEC1ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
               (undefined8 param_1)

{
  __ZN17cDuganMaster_AlgTILi1EEC2ERKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
            (param_1);
  return;
}



void __ZN17cDuganMaster_AlgTILi1EE33AdjustProcessCodeDescriptionsSelfEv(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x600);
  if (lVar1 != *(long *)(param_1 + 0x608)) {
    do {
      *(undefined8 *)(lVar1 + 0x6c) = 0x500000003;
      lVar1 = lVar1 + 200;
    } while (lVar1 != *(long *)(param_1 + 0x608));
  }
  return;
}



void __ZN17cDuganMaster_AlgTILi1EE12InitDataSelfEv(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = __ZN14WCMeterManager13GetMeterIndexEm(param_1 + 0xdd0,0xf);
  __ZN14WCMeterManager18SetMeterReadOffsetEjj
            (param_1 + 0xdd0,uVar1,*(undefined4 *)(&DAT_000037fc + param_1));
  *(undefined8 *)(&DAT_000037e0 + param_1) = 0xffffffffffffffff;
  return;
}



undefined8 __ZN17cDuganMaster_AlgTILi1EE20GetInitialStatesSelfEPc(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0xd78)) {
    iVar2 = 0;
    do {
      uVar1 = (**(code **)(param_1 + 0xe30))(0,param_2);
      param_2 = param_2 + (uVar1 & 0xffffffff);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xd78));
  }
  return 1;
}



void __ZN17cDuganMaster_AlgTILi1EE18SetBypassCoefsSelfEv(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  
  pvVar1 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),0);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM22GetPointerToBypassCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),0);
  sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)(param_1 + 0xd7c);
  if ((pvVar2 == (void *)0x0 || pvVar1 == (void *)0x0) || (int)sVar3 == 0) {
    return;
  }
  _memmove(pvVar2,pvVar1,sVar3);
  return;
}



undefined8 __ZN17cDuganMaster_AlgTILi1EE12SetWeightingEs(void)

{
  return 0;
}



undefined8 * __ZN17cDuganMaster_AlgTILi1EE7SetLeakEs(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = __Z8dbToGaind(*(undefined8 *)
                         (&DAT_00001268 +
                         *(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8));
  *(undefined8 *)(&DAT_000037d0 + param_1) = uVar5;
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_000037f8 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar5);
  iVar1 = *(int *)(&DAT_000037f8 + param_1);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar4 != (undefined8 *)0x0) {
      sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar4 + 0x34);
      if (((void *)*puVar4 != (void *)0x0 && pvVar2 != (void *)0x0) && (int)sVar3 != 0) {
        _memmove((void *)*puVar4,pvVar2,sVar3);
      }
    }
  }
  return puVar4;
}



undefined8 * __ZN17cDuganMaster_AlgTILi1EE6SetAttEs(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = __Z11msToDspCoefdd(*(undefined8 *)
                              (*(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8 +
                              0x698),(double)*(int *)(param_1 + 0x238));
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_000037f0 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar5);
  iVar1 = *(int *)(&DAT_000037f0 + param_1);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar4 != (undefined8 *)0x0) {
      sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar4 + 0x34);
      if (((void *)*puVar4 != (void *)0x0 && pvVar2 != (void *)0x0) && (int)sVar3 != 0) {
        _memmove((void *)*puVar4,pvVar2,sVar3);
      }
    }
  }
  return puVar4;
}



undefined8 * __ZN17cDuganMaster_AlgTILi1EE6SetRelEs(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = __Z11msToDspCoefdd(*(undefined8 *)
                              (*(long *)(param_1 + 0x580) + (long)*(int *)(param_1 + 0x248) * 8 +
                              0xc80),(double)*(int *)(param_1 + 0x238));
  __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
            (param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(&DAT_000037f4 + param_1));
  (**(code **)(param_1 + 0xe30))(uVar5);
  iVar1 = *(int *)(&DAT_000037f4 + param_1);
  pvVar2 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar1,1,0);
    if (puVar4 != (undefined8 *)0x0) {
      sVar3 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar4 + 0x34);
      if (((void *)*puVar4 != (void *)0x0 && pvVar2 != (void *)0x0) && (int)sVar3 != 0) {
        _memmove((void *)*puVar4,pvVar2,sVar3);
      }
    }
  }
  return puVar4;
}



undefined8 __ZN17cDuganMaster_AlgTILi1EE11SetBypassTcEs(void)

{
  return 0;
}



undefined8 __ZN17cDuganMaster_AlgTILi1EE12SetOneWeightEs(void)

{
  return 0;
}



undefined8 __ZN17cDuganMaster_AlgTILi1EE12SetOneBypassEs(void)

{
  return 0;
}



undefined8 __ZN17cDuganMaster_AlgTILi1EE10SetOneMuteEs(void)

{
  return 0;
}



undefined8 __ZN17cDuganMaster_AlgTILi1EE14SetOneRSumGainEs(void)

{
  return 0;
}



undefined8
__ZN17cDuganMaster_AlgTILi1EE24SetOutputsIOMatrixOffsetEii
          (long *param_1,undefined4 param_2,int param_3)

{
  undefined8 local_28;
  
  if (0 < param_3) {
    return 0xffffffed;
  }
  *(undefined4 *)(&DAT_000037e4 + (long)param_1 + (long)param_3 * 4) = param_2;
  local_28 = (**(code **)(*param_1 + 0x930))(param_1,1);
  __ZN20wvWavesV15_1_154_19710cALGORITHM18SendAndFreeBuffersERPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADEREib
            (param_1,&local_28,0,1);
  return 0;
}



undefined8
__ZN17cDuganMaster_AlgTILi1EE23SetInputsIOMatrixOffsetEii
          (long *param_1,undefined4 param_2,int param_3)

{
  undefined8 local_28;
  
  if (0 < param_3) {
    return 0xffffffed;
  }
  *(undefined4 *)(&DAT_000037e0 + (long)param_1 + (long)param_3 * 4) = param_2;
  local_28 = (**(code **)(*param_1 + 0x938))(param_1,1);
  __ZN20wvWavesV15_1_154_19710cALGORITHM18SendAndFreeBuffersERPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADEREib
            (param_1,&local_28,0,1);
  return 0;
}



undefined8 * __ZN17cDuganMaster_AlgTILi1EE10SetOutputsEs(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  size_t sVar5;
  undefined8 *puVar6;
  
  uVar1 = *(undefined4 *)(&DAT_000037e4 + param_1);
  uVar3 = __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                    (param_1,*(undefined4 *)(param_1 + 0x248),
                     *(undefined4 *)(&DAT_000037ec + param_1));
  (**(code **)(param_1 + 0xe40))(uVar1,uVar3);
  iVar2 = *(int *)(&DAT_000037ec + param_1);
  pvVar4 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar2);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar2,1,0);
    if (puVar6 != (undefined8 *)0x0) {
      sVar5 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar6 + 0x34);
      if (((void *)*puVar6 != (void *)0x0 && pvVar4 != (void *)0x0) && (int)sVar5 != 0) {
        _memmove((void *)*puVar6,pvVar4,sVar5);
      }
    }
  }
  return puVar6;
}



undefined8 * __ZN17cDuganMaster_AlgTILi1EE9SetInputsEs(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  size_t sVar5;
  undefined8 *puVar6;
  
  uVar1 = *(undefined4 *)(&DAT_000037e0 + param_1);
  uVar3 = __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                    (param_1,*(undefined4 *)(param_1 + 0x248),
                     *(undefined4 *)(&DAT_000037e8 + param_1));
  (**(code **)(param_1 + 0xe40))(uVar1,uVar3);
  iVar2 = *(int *)(&DAT_000037e8 + param_1);
  pvVar4 = (void *)__ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii
                             (param_1,*(undefined4 *)(param_1 + 0x248),iVar2);
  if (((param_2 == 0) || (*(char *)(param_1 + 0x230) == '\0')) ||
     (*(char *)(param_1 + 0x244) != '\0')) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)
             __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil
                       (param_1,1,*(undefined4 *)(param_1 + 0x47c),1,
                        *(int *)(param_1 + 0x1f0) + iVar2,1,0);
    if (puVar6 != (undefined8 *)0x0) {
      sVar5 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)((long)puVar6 + 0x34);
      if (((void *)*puVar6 != (void *)0x0 && pvVar4 != (void *)0x0) && (int)sVar5 != 0) {
        _memmove((void *)*puVar6,pvVar4,sVar5);
      }
    }
  }
  return puVar6;
}



void ___cxx_global_var_init_14(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_15(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_DuganAgentAlgT_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  uRam000000000002cf28 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_0002cf50 = &DAT_0002cf58;
  uRam000000000002cf60 = 0;
  _DAT_0002cf58 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_0002cf58;
  DAT_0002cf48 = 0x7f;
  uRam000000000002cf70 = 0;
  _DAT_0002cf68 = 0;
  uRam000000000002cf80 = 0;
  _DAT_0002cf78 = 0;
  uRam000000000002cf90 = 0;
  _DAT_0002cf88 = 0;
  uRam000000000002cfa0 = 0;
  _DAT_0002cf98 = 0;
  uRam000000000002cfb0 = 0;
  _DAT_0002cfa8 = 0;
  uRam000000000002cfc0 = 0;
  _DAT_0002cfb8 = 0;
  uRam000000000002cfd0 = 0;
  _DAT_0002cfc8 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_0002cf50 + 1;
    *DAT_0002cf50 = cVar4;
    DAT_0002cf50 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002cf50 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_0002cf48);
  *DAT_0002cf50 = '\0';
  DAT_0002cfe8 = &DAT_0002cff0;
  uRam000000000002cff8 = 0;
  _DAT_0002cff0 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE = &DAT_0002cff0;
  DAT_0002cfe0 = 0xff;
  uRam000000000002d008 = 0;
  _DAT_0002d000 = 0;
  uRam000000000002d018 = 0;
  _DAT_0002d010 = 0;
  uRam000000000002d028 = 0;
  _DAT_0002d020 = 0;
  uRam000000000002d038 = 0;
  _DAT_0002d030 = 0;
  uRam000000000002d048 = 0;
  _DAT_0002d040 = 0;
  uRam000000000002d058 = 0;
  _DAT_0002d050 = 0;
  uRam000000000002d068 = 0;
  _DAT_0002d060 = 0;
  uRam000000000002d078 = 0;
  _DAT_0002d070 = 0;
  uRam000000000002d088 = 0;
  _DAT_0002d080 = 0;
  uRam000000000002d098 = 0;
  _DAT_0002d090 = 0;
  uRam000000000002d0a8 = 0;
  _DAT_0002d0a0 = 0;
  uRam000000000002d0b8 = 0;
  _DAT_0002d0b0 = 0;
  uRam000000000002d0c8 = 0;
  _DAT_0002d0c0 = 0;
  cVar4 = 'I';
  lVar3 = 1;
  uRam000000000002d0d8 = 0;
  _DAT_0002d0d0 = 0;
  uRam000000000002d0e8 = 0;
  _DAT_0002d0e0 = 0;
  do {
    pcVar1 = DAT_0002cfe8 + 1;
    *DAT_0002cfe8 = cVar4;
    DAT_0002cfe8 = pcVar1;
    if (lVar3 == 0x10) break;
    cVar4 = "Initial Settings"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002cfe8 <
           __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE + DAT_0002cfe0);
  *DAT_0002cfe8 = '\0';
  DAT_0002d100 = &DAT_0002d108;
  uRam000000000002d110 = 0;
  _DAT_0002d108 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE = &DAT_0002d108;
  DAT_0002d0f8 = 0xff;
  uRam000000000002d120 = 0;
  _DAT_0002d118 = 0;
  uRam000000000002d130 = 0;
  _DAT_0002d128 = 0;
  uRam000000000002d140 = 0;
  _DAT_0002d138 = 0;
  uRam000000000002d150 = 0;
  _DAT_0002d148 = 0;
  uRam000000000002d160 = 0;
  _DAT_0002d158 = 0;
  uRam000000000002d170 = 0;
  _DAT_0002d168 = 0;
  uRam000000000002d180 = 0;
  _DAT_0002d178 = 0;
  uRam000000000002d190 = 0;
  _DAT_0002d188 = 0;
  uRam000000000002d1a0 = 0;
  _DAT_0002d198 = 0;
  uRam000000000002d1b0 = 0;
  _DAT_0002d1a8 = 0;
  uRam000000000002d1c0 = 0;
  _DAT_0002d1b8 = 0;
  uRam000000000002d1d0 = 0;
  _DAT_0002d1c8 = 0;
  uRam000000000002d1e0 = 0;
  _DAT_0002d1d8 = 0;
  cVar4 = 'L';
  lVar3 = 1;
  uRam000000000002d1f0 = 0;
  _DAT_0002d1e8 = 0;
  uRam000000000002d200 = 0;
  _DAT_0002d1f8 = 0;
  do {
    pcVar1 = DAT_0002d100 + 1;
    *DAT_0002d100 = cVar4;
    DAT_0002d100 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "Load Preset: "[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002d100 <
           __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE + DAT_0002d0f8);
  *DAT_0002d100 = '\0';
  DAT_0002d218 = &DAT_0002d220;
  uRam000000000002d228 = 0;
  _DAT_0002d220 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE = &DAT_0002d220;
  DAT_0002d210 = 0xff;
  uRam000000000002d238 = 0;
  _DAT_0002d230 = 0;
  uRam000000000002d248 = 0;
  _DAT_0002d240 = 0;
  uRam000000000002d258 = 0;
  _DAT_0002d250 = 0;
  uRam000000000002d268 = 0;
  _DAT_0002d260 = 0;
  uRam000000000002d278 = 0;
  _DAT_0002d270 = 0;
  uRam000000000002d288 = 0;
  _DAT_0002d280 = 0;
  uRam000000000002d298 = 0;
  _DAT_0002d290 = 0;
  uRam000000000002d2a8 = 0;
  _DAT_0002d2a0 = 0;
  uRam000000000002d2b8 = 0;
  _DAT_0002d2b0 = 0;
  uRam000000000002d2c8 = 0;
  _DAT_0002d2c0 = 0;
  uRam000000000002d2d8 = 0;
  _DAT_0002d2d0 = 0;
  uRam000000000002d2e8 = 0;
  _DAT_0002d2e0 = 0;
  uRam000000000002d2f8 = 0;
  _DAT_0002d2f0 = 0;
  cVar4 = 'S';
  lVar3 = 1;
  uRam000000000002d308 = 0;
  _DAT_0002d300 = 0;
  uRam000000000002d318 = 0;
  _DAT_0002d310 = 0;
  do {
    pcVar1 = DAT_0002d218 + 1;
    *DAT_0002d218 = cVar4;
    DAT_0002d218 = pcVar1;
    if (lVar3 == 0xc) break;
    cVar4 = "Switch Setup"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002d218 <
           __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE + DAT_0002d210);
  lVar3 = 0;
  *DAT_0002d218 = '\0';
  DAT_0002d330 = &DAT_0002d338;
  uRam000000000002d340 = 0;
  _DAT_0002d338 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE = &DAT_0002d338;
  DAT_0002d328 = 0xff;
  uRam000000000002d350 = 0;
  _DAT_0002d348 = 0;
  uRam000000000002d360 = 0;
  _DAT_0002d358 = 0;
  uRam000000000002d370 = 0;
  _DAT_0002d368 = 0;
  uRam000000000002d380 = 0;
  _DAT_0002d378 = 0;
  uRam000000000002d390 = 0;
  _DAT_0002d388 = 0;
  uRam000000000002d3a0 = 0;
  _DAT_0002d398 = 0;
  uRam000000000002d3b0 = 0;
  _DAT_0002d3a8 = 0;
  uRam000000000002d3c0 = 0;
  _DAT_0002d3b8 = 0;
  uRam000000000002d3d0 = 0;
  _DAT_0002d3c8 = 0;
  uRam000000000002d3e0 = 0;
  _DAT_0002d3d8 = 0;
  uRam000000000002d3f0 = 0;
  _DAT_0002d3e8 = 0;
  uRam000000000002d400 = 0;
  _DAT_0002d3f8 = 0;
  uRam000000000002d410 = 0;
  _DAT_0002d408 = 0;
  cVar4 = 'R';
  uRam000000000002d420 = 0;
  _DAT_0002d418 = 0;
  uRam000000000002d430 = 0;
  _DAT_0002d428 = 0;
  do {
    pcVar1 = DAT_0002d330 + 1;
    *DAT_0002d330 = cVar4;
    DAT_0002d330 = pcVar1;
    if (lVar3 == 4) break;
    cVar4 = "Reset"[lVar3 + 1];
    lVar3 = lVar3 + 1;
  } while (DAT_0002d330 < __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE + DAT_0002d328);
  *DAT_0002d330 = '\0';
  __ZL14end_of_polygon = 0xfc18fc18;
  return;
}



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



undefined8
__ZN13DuganAgentGUI11DoMouseDownEPN20wvWavesV15_1_154_19717PluginViewManager11WCEventDataE
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = __ZNK20wvWavesV15_1_154_19717PluginViewManager11WCEventData21GetMouseButtonPressedEv
                    (param_2);
  if (*(char *)(lVar1 + 2) != '\0') {
    return 0;
  }
  uVar2 = __ZN20wvWavesV15_1_154_19714CStandardGUI_X11DoMouseDownEPNS_17PluginViewManager11WCEventDataE
                    (param_1,param_2);
  return uVar2;
}



undefined8
__ZN13DuganAgentGUI9DoMouseUpEPN20wvWavesV15_1_154_19717PluginViewManager11WCEventDataE
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = __ZNK20wvWavesV15_1_154_19717PluginViewManager11WCEventData21GetMouseButtonPressedEv
                    (param_2);
  if (*(char *)(lVar1 + 2) != '\0') {
    return 0;
  }
  uVar2 = __ZN20wvWavesV15_1_154_19714CStandardGUI_X9DoMouseUpEPNS_17PluginViewManager11WCEventDataE
                    (param_1,param_2);
  return uVar2;
}



void __ZN13DuganAgentGUID1Ev(void)

{
  __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev();
  return;
}



void __ZN13DuganAgentGUID0Ev(void)

{
  __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev();
  __ZdlPv();
  return;
}



undefined8
__ZNK20wvWavesV15_1_154_19714CStandardGUI_X23WriteXML_PluginSpecificEN4pugi8xml_nodeE
          (undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_X15SetIsDirectTextEb(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x698) = param_2;
  return;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_X19BuildSelectableListEv(long param_1)

{
  __ZN15CSelectableHome19BuildSelectableListEv(param_1 + 0x10);
  return;
}



long __ZN20wvWavesV15_1_154_19714CStandardGUI_X23GetNumGUIOwnControllersEv(long param_1)

{
  return (*(long **)(param_1 + 0x128))[1] - **(long **)(param_1 + 0x128) >> 3;
}



void __ZThn8_N13DuganAgentGUID1Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev(param_1 + -8);
  return;
}



void __ZThn8_N13DuganAgentGUID0Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev(param_1 + -8);
  __ZdlPv();
  return;
}



void __ZThn16_N13DuganAgentGUID1Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev(param_1 + -0x10);
  return;
}



void __ZThn16_N13DuganAgentGUID0Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev(param_1 + -0x10);
  __ZdlPv();
  return;
}



void __ZThn120_N13DuganAgentGUID1Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev(param_1 + -0x78);
  return;
}



void __ZThn120_N13DuganAgentGUID0Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev(param_1 + -0x78);
  __ZdlPv();
  return;
}



void __ZThn128_N13DuganAgentGUID1Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev(param_1 + -0x80);
  return;
}



void __ZThn128_N13DuganAgentGUID0Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev(param_1 + -0x80);
  __ZdlPv();
  return;
}



void __ZThn168_N13DuganAgentGUID1Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev(param_1 + -0xa8);
  return;
}



void __ZThn168_N13DuganAgentGUID0Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev(param_1 + -0xa8);
  __ZdlPv();
  return;
}



void ___cxx_global_var_init_23(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_24(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_DuganAgentGUI_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  
  DAT_0002d450 = &DAT_0002d458;
  uRam000000000002d460 = 0;
  _DAT_0002d458 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE = &DAT_0002d458;
  DAT_0002d448 = 0xff;
  uRam000000000002d470 = 0;
  _DAT_0002d468 = 0;
  uRam000000000002d480 = 0;
  _DAT_0002d478 = 0;
  uRam000000000002d490 = 0;
  _DAT_0002d488 = 0;
  uRam000000000002d4a0 = 0;
  _DAT_0002d498 = 0;
  uRam000000000002d4b0 = 0;
  _DAT_0002d4a8 = 0;
  uRam000000000002d4c0 = 0;
  _DAT_0002d4b8 = 0;
  uRam000000000002d4d0 = 0;
  _DAT_0002d4c8 = 0;
  uRam000000000002d4e0 = 0;
  _DAT_0002d4d8 = 0;
  uRam000000000002d4f0 = 0;
  _DAT_0002d4e8 = 0;
  uRam000000000002d500 = 0;
  _DAT_0002d4f8 = 0;
  uRam000000000002d510 = 0;
  _DAT_0002d508 = 0;
  uRam000000000002d520 = 0;
  _DAT_0002d518 = 0;
  uRam000000000002d530 = 0;
  _DAT_0002d528 = 0;
  cVar4 = 'I';
  lVar3 = 1;
  uRam000000000002d540 = 0;
  _DAT_0002d538 = 0;
  uRam000000000002d550 = 0;
  _DAT_0002d548 = 0;
  do {
    pcVar1 = DAT_0002d450 + 1;
    *DAT_0002d450 = cVar4;
    DAT_0002d450 = pcVar1;
    if (lVar3 == 0x10) break;
    cVar4 = "Initial Settings"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002d450 <
           __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE + DAT_0002d448);
  *DAT_0002d450 = '\0';
  DAT_0002d568 = &DAT_0002d570;
  uRam000000000002d578 = 0;
  _DAT_0002d570 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE = &DAT_0002d570;
  DAT_0002d560 = 0xff;
  uRam000000000002d588 = 0;
  _DAT_0002d580 = 0;
  uRam000000000002d598 = 0;
  _DAT_0002d590 = 0;
  uRam000000000002d5a8 = 0;
  _DAT_0002d5a0 = 0;
  uRam000000000002d5b8 = 0;
  _DAT_0002d5b0 = 0;
  uRam000000000002d5c8 = 0;
  _DAT_0002d5c0 = 0;
  uRam000000000002d5d8 = 0;
  _DAT_0002d5d0 = 0;
  uRam000000000002d5e8 = 0;
  _DAT_0002d5e0 = 0;
  uRam000000000002d5f8 = 0;
  _DAT_0002d5f0 = 0;
  uRam000000000002d608 = 0;
  _DAT_0002d600 = 0;
  uRam000000000002d618 = 0;
  _DAT_0002d610 = 0;
  uRam000000000002d628 = 0;
  _DAT_0002d620 = 0;
  uRam000000000002d638 = 0;
  _DAT_0002d630 = 0;
  uRam000000000002d648 = 0;
  _DAT_0002d640 = 0;
  cVar4 = 'L';
  lVar3 = 1;
  uRam000000000002d658 = 0;
  _DAT_0002d650 = 0;
  uRam000000000002d668 = 0;
  _DAT_0002d660 = 0;
  do {
    pcVar1 = DAT_0002d568 + 1;
    *DAT_0002d568 = cVar4;
    DAT_0002d568 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "Load Preset: "[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002d568 <
           __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE + DAT_0002d560);
  *DAT_0002d568 = '\0';
  DAT_0002d680 = &DAT_0002d688;
  uRam000000000002d690 = 0;
  _DAT_0002d688 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE = &DAT_0002d688;
  DAT_0002d678 = 0xff;
  uRam000000000002d6a0 = 0;
  _DAT_0002d698 = 0;
  uRam000000000002d6b0 = 0;
  _DAT_0002d6a8 = 0;
  uRam000000000002d6c0 = 0;
  _DAT_0002d6b8 = 0;
  uRam000000000002d6d0 = 0;
  _DAT_0002d6c8 = 0;
  uRam000000000002d6e0 = 0;
  _DAT_0002d6d8 = 0;
  uRam000000000002d6f0 = 0;
  _DAT_0002d6e8 = 0;
  uRam000000000002d700 = 0;
  _DAT_0002d6f8 = 0;
  uRam000000000002d710 = 0;
  _DAT_0002d708 = 0;
  uRam000000000002d720 = 0;
  _DAT_0002d718 = 0;
  uRam000000000002d730 = 0;
  _DAT_0002d728 = 0;
  uRam000000000002d740 = 0;
  _DAT_0002d738 = 0;
  uRam000000000002d750 = 0;
  _DAT_0002d748 = 0;
  uRam000000000002d760 = 0;
  _DAT_0002d758 = 0;
  cVar4 = 'S';
  lVar3 = 1;
  uRam000000000002d770 = 0;
  _DAT_0002d768 = 0;
  uRam000000000002d780 = 0;
  _DAT_0002d778 = 0;
  do {
    pcVar1 = DAT_0002d680 + 1;
    *DAT_0002d680 = cVar4;
    DAT_0002d680 = pcVar1;
    if (lVar3 == 0xc) break;
    cVar4 = "Switch Setup"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002d680 <
           __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE + DAT_0002d678);
  lVar3 = 0;
  *DAT_0002d680 = '\0';
  DAT_0002d798 = &DAT_0002d7a0;
  uRam000000000002d7a8 = 0;
  _DAT_0002d7a0 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE = &DAT_0002d7a0;
  DAT_0002d790 = 0xff;
  uRam000000000002d7b8 = 0;
  _DAT_0002d7b0 = 0;
  uRam000000000002d7c8 = 0;
  _DAT_0002d7c0 = 0;
  uRam000000000002d7d8 = 0;
  _DAT_0002d7d0 = 0;
  uRam000000000002d7e8 = 0;
  _DAT_0002d7e0 = 0;
  uRam000000000002d7f8 = 0;
  _DAT_0002d7f0 = 0;
  uRam000000000002d808 = 0;
  _DAT_0002d800 = 0;
  uRam000000000002d818 = 0;
  _DAT_0002d810 = 0;
  uRam000000000002d828 = 0;
  _DAT_0002d820 = 0;
  uRam000000000002d838 = 0;
  _DAT_0002d830 = 0;
  uRam000000000002d848 = 0;
  _DAT_0002d840 = 0;
  uRam000000000002d858 = 0;
  _DAT_0002d850 = 0;
  uRam000000000002d868 = 0;
  _DAT_0002d860 = 0;
  uRam000000000002d878 = 0;
  _DAT_0002d870 = 0;
  cVar4 = 'R';
  uRam000000000002d888 = 0;
  _DAT_0002d880 = 0;
  uRam000000000002d898 = 0;
  _DAT_0002d890 = 0;
  do {
    pcVar1 = DAT_0002d798 + 1;
    *DAT_0002d798 = cVar4;
    DAT_0002d798 = pcVar1;
    if (lVar3 == 4) break;
    cVar4 = "Reset"[lVar3 + 1];
    lVar3 = lVar3 + 1;
  } while (DAT_0002d798 < __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE + DAT_0002d790);
  *DAT_0002d798 = '\0';
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  uRam000000000002da88 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_0002daa8 = &DAT_0002dab0;
  uRam000000000002dab8 = 0;
  _DAT_0002dab0 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_0002dab0;
  DAT_0002daa0 = 0x7f;
  uRam000000000002dac8 = 0;
  _DAT_0002dac0 = 0;
  uRam000000000002dad8 = 0;
  _DAT_0002dad0 = 0;
  uRam000000000002dae8 = 0;
  _DAT_0002dae0 = 0;
  uRam000000000002daf8 = 0;
  _DAT_0002daf0 = 0;
  uRam000000000002db08 = 0;
  _DAT_0002db00 = 0;
  uRam000000000002db18 = 0;
  _DAT_0002db10 = 0;
  uRam000000000002db28 = 0;
  _DAT_0002db20 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_0002daa8 + 1;
    *DAT_0002daa8 = cVar4;
    DAT_0002daa8 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002daa8 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_0002daa0);
  *DAT_0002daa8 = '\0';
  return;
}



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



void _WP_DoIdleAlg(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0000a3b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x5d8))(*(long **)(param_1 + 0x748),1);
  return;
}



undefined8 _WP_GetParamState(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = __ZNK20wvWavesV15_1_154_19710cALGORITHM13GetParamStateEm
                    (*(undefined8 *)(param_1 + 0x748),(long)param_2);
  *param_3 = uVar1;
  return 0;
}



void _WP_MetersGetValue(long param_1)

{
  __ZN14WCMeterManager13GetMeterValueEjPdPi(*(long *)(param_1 + 0x748) + 0xdd0);
  return;
}



void _WP_MetersGetInfo(long param_1)

{
  __ZN14WCMeterManager12GetMeterInfoEjRN20wvWavesV15_1_154_19714WavesMeterInfoE
            (*(long *)(param_1 + 0x748) + 0xdd0);
  return;
}



void _WP_MetersResetClip(long param_1)

{
  __ZN14WCMeterManager9ResetClipEj(*(long *)(param_1 + 0x748) + 0xdd0);
  return;
}



void _WP_MetersReadFromDSP(long param_1)

{
  __ZN14WCMeterManager11ReadFromDSPEv(*(long *)(param_1 + 0x748) + 0xdd0);
  return;
}



undefined8 _WP_ReadMetersSend(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = __ZN14WCMeterManager14ReadMetersSendEv(*(long *)(param_1 + 0x748) + 0xdd0);
  *param_2 = uVar1;
  return 0;
}



undefined8 _WP_ReadMetersReceive(long param_1)

{
  __ZN14WCMeterManager17ReadMetersReceiveEv(*(long *)(param_1 + 0x748) + 0xdd0);
  return 0;
}



undefined8 _WP_InitAlg(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM7InitAlgEb(*(undefined8 *)(param_1 + 0x748),1);
  return 0;
}



undefined8 _WP_ResetAudioBuffers(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x748) + 0xb0))();
  return 0;
}



void _WP_InitAlgToHardware(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  __ZN20wvWavesV15_1_154_19710cALGORITHM13SetSampleRateEi(*(undefined8 *)(param_1 + 0x748),param_4);
  iVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM15SetExecCallBackEPFiilPvS1_S1_El
                    (*(undefined8 *)(param_1 + 0x748),param_2,param_3);
  if ((iVar1 == 0) &&
     (iVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM15InitProcessCodeEv
                        (*(undefined8 *)(param_1 + 0x748)), iVar1 == 0)) {
    __ZN20wvWavesV15_1_154_19710cALGORITHM8InitDataEv(*(undefined8 *)(param_1 + 0x748));
    return;
  }
  return;
}



void _WP_InitInstanceData(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM16InitInstanceDataEv(*(undefined8 *)(param_1 + 0x748));
  return;
}



undefined8 _WP_UpdateAlg(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x748) + 0x98))(*(long **)(param_1 + 0x748),1);
  return 0;
}



undefined8 _WP_UpdatePar(long param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM16UpdateParamStateEmdb
                    ((double)param_3,*(undefined8 *)(param_1 + 0x748),param_2,0);
  *param_4 = uVar1;
  return 0;
}



void _WP_GetControlNameOfLength(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0000a588. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x760))();
  return;
}



void _WP_SetAutomationRefCons(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0000a598. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x790))();
  return;
}



void _WP_SetControllerValue(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0000a5a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x768))();
  return;
}



undefined8 _WP_TranslateController(long param_1,undefined8 param_2,char *param_3,int param_4)

{
  undefined8 uVar1;
  char *local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  char local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00024040;
  local_d0 = local_b8;
  uStack_c8 = 0x7f;
  local_b8[8] = '\0';
  local_b8[9] = '\0';
  local_b8[10] = '\0';
  local_b8[0xb] = '\0';
  local_b8[0xc] = '\0';
  local_b8[0xd] = '\0';
  local_b8[0xe] = '\0';
  local_b8[0xf] = '\0';
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = '\0';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
  local_b8[0x18] = '\0';
  local_b8[0x19] = '\0';
  local_b8[0x1a] = '\0';
  local_b8[0x1b] = '\0';
  local_b8[0x1c] = '\0';
  local_b8[0x1d] = '\0';
  local_b8[0x1e] = '\0';
  local_b8[0x1f] = '\0';
  local_b8[0x10] = '\0';
  local_b8[0x11] = '\0';
  local_b8[0x12] = '\0';
  local_b8[0x13] = '\0';
  local_b8[0x14] = '\0';
  local_b8[0x15] = '\0';
  local_b8[0x16] = '\0';
  local_b8[0x17] = '\0';
  local_b8[0x28] = '\0';
  local_b8[0x29] = '\0';
  local_b8[0x2a] = '\0';
  local_b8[0x2b] = '\0';
  local_b8[0x2c] = '\0';
  local_b8[0x2d] = '\0';
  local_b8[0x2e] = '\0';
  local_b8[0x2f] = '\0';
  local_b8[0x20] = '\0';
  local_b8[0x21] = '\0';
  local_b8[0x22] = '\0';
  local_b8[0x23] = '\0';
  local_b8[0x24] = '\0';
  local_b8[0x25] = '\0';
  local_b8[0x26] = '\0';
  local_b8[0x27] = '\0';
  local_b8[0x38] = '\0';
  local_b8[0x39] = '\0';
  local_b8[0x3a] = '\0';
  local_b8[0x3b] = '\0';
  local_b8[0x3c] = '\0';
  local_b8[0x3d] = '\0';
  local_b8[0x3e] = '\0';
  local_b8[0x3f] = '\0';
  local_b8[0x30] = '\0';
  local_b8[0x31] = '\0';
  local_b8[0x32] = '\0';
  local_b8[0x33] = '\0';
  local_b8[0x34] = '\0';
  local_b8[0x35] = '\0';
  local_b8[0x36] = '\0';
  local_b8[0x37] = '\0';
  local_b8[0x48] = '\0';
  local_b8[0x49] = '\0';
  local_b8[0x4a] = '\0';
  local_b8[0x4b] = '\0';
  local_b8[0x4c] = '\0';
  local_b8[0x4d] = '\0';
  local_b8[0x4e] = '\0';
  local_b8[0x4f] = '\0';
  local_b8[0x40] = '\0';
  local_b8[0x41] = '\0';
  local_b8[0x42] = '\0';
  local_b8[0x43] = '\0';
  local_b8[0x44] = '\0';
  local_b8[0x45] = '\0';
  local_b8[0x46] = '\0';
  local_b8[0x47] = '\0';
  local_b8[0x58] = '\0';
  local_b8[0x59] = '\0';
  local_b8[0x5a] = '\0';
  local_b8[0x5b] = '\0';
  local_b8[0x5c] = '\0';
  local_b8[0x5d] = '\0';
  local_b8[0x5e] = '\0';
  local_b8[0x5f] = '\0';
  local_b8[0x50] = '\0';
  local_b8[0x51] = '\0';
  local_b8[0x52] = '\0';
  local_b8[0x53] = '\0';
  local_b8[0x54] = '\0';
  local_b8[0x55] = '\0';
  local_b8[0x56] = '\0';
  local_b8[0x57] = '\0';
  local_b8[0x68] = '\0';
  local_b8[0x69] = '\0';
  local_b8[0x6a] = '\0';
  local_b8[0x6b] = '\0';
  local_b8[0x6c] = '\0';
  local_b8[0x6d] = '\0';
  local_b8[0x6e] = '\0';
  local_b8[0x6f] = '\0';
  local_b8[0x60] = '\0';
  local_b8[0x61] = '\0';
  local_b8[0x62] = '\0';
  local_b8[99] = '\0';
  local_b8[100] = '\0';
  local_b8[0x65] = '\0';
  local_b8[0x66] = '\0';
  local_b8[0x67] = '\0';
  local_b8[0x78] = '\0';
  local_b8[0x79] = '\0';
  local_b8[0x7a] = '\0';
  local_b8[0x7b] = '\0';
  local_b8[0x7c] = '\0';
  local_b8[0x7d] = '\0';
  local_b8[0x7e] = '\0';
  local_b8[0x7f] = '\0';
  local_b8[0x70] = '\0';
  local_b8[0x71] = '\0';
  local_b8[0x72] = '\0';
  local_b8[0x73] = '\0';
  local_b8[0x74] = '\0';
  local_b8[0x75] = '\0';
  local_b8[0x76] = '\0';
  local_b8[0x77] = '\0';
  local_c0 = local_d0;
  uVar1 = (**(code **)(**(long **)(param_1 + 0x748) + 0x788))
                    (*(long **)(param_1 + 0x748),param_2,&local_d0);
  _strncpy(param_3,local_d0,(long)param_4);
  if (*(long *)PTR____stack_chk_guard_00024040 == local_38) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 _WP_GetParamValueString(long param_1,int param_2)

{
  __ZNK20wvWavesV15_1_154_19710cALGORITHM19GetParamValueStringEmR17WCFixedStringBase
            (*(undefined8 *)(param_1 + 0x748),(long)param_2);
  return 0;
}



void _WP_CallProcessSideAlloc(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0000a698. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x1d8))();
  return;
}



undefined8 _WP_GetGraphDataAsGraphicStream(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [64];
  
  __ZN4wvGS27WCGraphicStreamBinaryWriterC1ERN20wvWavesV15_1_154_1975Utils10WCStMemObjEm
            (auStack_60,param_2,0x80);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x748) + 0x828))
                    (*(long **)(param_1 + 0x748),auStack_60);
  __ZN4wvGS27WCGraphicStreamBinaryWriterD1Ev(auStack_60);
  return uVar1;
}



undefined8
_WP_GetGraphDataAsGraphicStreamForControl(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [64];
  
  __ZN4wvGS27WCGraphicStreamBinaryWriterC1ERN20wvWavesV15_1_154_1975Utils10WCStMemObjEm
            (auStack_60,param_3,0x80);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x748) + 0x830))
                    (*(long **)(param_1 + 0x748),param_2,auStack_60);
  __ZN4wvGS27WCGraphicStreamBinaryWriterD1Ev(auStack_60);
  return uVar1;
}



undefined8 _WP_GetControlState(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x748) + 0x338))();
  return 0;
}



void ___cxx_global_var_init_14(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_15(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_API_PluginAlg_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  uRam000000000002dd10 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_0002dd38 = &DAT_0002dd40;
  uRam000000000002dd48 = 0;
  _DAT_0002dd40 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_0002dd40;
  DAT_0002dd30 = 0x7f;
  uRam000000000002dd58 = 0;
  _DAT_0002dd50 = 0;
  uRam000000000002dd68 = 0;
  _DAT_0002dd60 = 0;
  uRam000000000002dd78 = 0;
  _DAT_0002dd70 = 0;
  uRam000000000002dd88 = 0;
  _DAT_0002dd80 = 0;
  uRam000000000002dd98 = 0;
  _DAT_0002dd90 = 0;
  uRam000000000002dda8 = 0;
  _DAT_0002dda0 = 0;
  uRam000000000002ddb8 = 0;
  _DAT_0002ddb0 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_0002dd38 + 1;
    *DAT_0002dd38 = cVar4;
    DAT_0002dd38 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002dd38 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_0002dd30);
  *DAT_0002dd38 = '\0';
  DAT_0002ddd0 = &DAT_0002ddd8;
  uRam000000000002dde0 = 0;
  _DAT_0002ddd8 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE = &DAT_0002ddd8;
  DAT_0002ddc8 = 0xff;
  uRam000000000002ddf0 = 0;
  _DAT_0002dde8 = 0;
  uRam000000000002de00 = 0;
  _DAT_0002ddf8 = 0;
  uRam000000000002de10 = 0;
  _DAT_0002de08 = 0;
  uRam000000000002de20 = 0;
  _DAT_0002de18 = 0;
  uRam000000000002de30 = 0;
  _DAT_0002de28 = 0;
  uRam000000000002de40 = 0;
  _DAT_0002de38 = 0;
  uRam000000000002de50 = 0;
  _DAT_0002de48 = 0;
  uRam000000000002de60 = 0;
  _DAT_0002de58 = 0;
  uRam000000000002de70 = 0;
  _DAT_0002de68 = 0;
  uRam000000000002de80 = 0;
  _DAT_0002de78 = 0;
  uRam000000000002de90 = 0;
  _DAT_0002de88 = 0;
  uRam000000000002dea0 = 0;
  _DAT_0002de98 = 0;
  uRam000000000002deb0 = 0;
  _DAT_0002dea8 = 0;
  cVar4 = 'I';
  lVar3 = 1;
  uRam000000000002dec0 = 0;
  _DAT_0002deb8 = 0;
  uRam000000000002ded0 = 0;
  _DAT_0002dec8 = 0;
  do {
    pcVar1 = DAT_0002ddd0 + 1;
    *DAT_0002ddd0 = cVar4;
    DAT_0002ddd0 = pcVar1;
    if (lVar3 == 0x10) break;
    cVar4 = "Initial Settings"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002ddd0 <
           __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE + DAT_0002ddc8);
  *DAT_0002ddd0 = '\0';
  DAT_0002dee8 = &DAT_0002def0;
  uRam000000000002def8 = 0;
  _DAT_0002def0 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE = &DAT_0002def0;
  DAT_0002dee0 = 0xff;
  uRam000000000002df08 = 0;
  _DAT_0002df00 = 0;
  uRam000000000002df18 = 0;
  _DAT_0002df10 = 0;
  uRam000000000002df28 = 0;
  _DAT_0002df20 = 0;
  uRam000000000002df38 = 0;
  _DAT_0002df30 = 0;
  uRam000000000002df48 = 0;
  _DAT_0002df40 = 0;
  uRam000000000002df58 = 0;
  _DAT_0002df50 = 0;
  uRam000000000002df68 = 0;
  _DAT_0002df60 = 0;
  uRam000000000002df78 = 0;
  _DAT_0002df70 = 0;
  uRam000000000002df88 = 0;
  _DAT_0002df80 = 0;
  uRam000000000002df98 = 0;
  _DAT_0002df90 = 0;
  uRam000000000002dfa8 = 0;
  _DAT_0002dfa0 = 0;
  uRam000000000002dfb8 = 0;
  _DAT_0002dfb0 = 0;
  uRam000000000002dfc8 = 0;
  _DAT_0002dfc0 = 0;
  cVar4 = 'L';
  lVar3 = 1;
  uRam000000000002dfd8 = 0;
  _DAT_0002dfd0 = 0;
  uRam000000000002dfe8 = 0;
  _DAT_0002dfe0 = 0;
  do {
    pcVar1 = DAT_0002dee8 + 1;
    *DAT_0002dee8 = cVar4;
    DAT_0002dee8 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "Load Preset: "[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002dee8 <
           __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE + DAT_0002dee0);
  *DAT_0002dee8 = '\0';
  DAT_0002e000 = &DAT_0002e008;
  uRam000000000002e010 = 0;
  _DAT_0002e008 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE = &DAT_0002e008;
  DAT_0002dff8 = 0xff;
  uRam000000000002e020 = 0;
  _DAT_0002e018 = 0;
  uRam000000000002e030 = 0;
  _DAT_0002e028 = 0;
  uRam000000000002e040 = 0;
  _DAT_0002e038 = 0;
  uRam000000000002e050 = 0;
  _DAT_0002e048 = 0;
  uRam000000000002e060 = 0;
  _DAT_0002e058 = 0;
  uRam000000000002e070 = 0;
  _DAT_0002e068 = 0;
  uRam000000000002e080 = 0;
  _DAT_0002e078 = 0;
  uRam000000000002e090 = 0;
  _DAT_0002e088 = 0;
  uRam000000000002e0a0 = 0;
  _DAT_0002e098 = 0;
  uRam000000000002e0b0 = 0;
  _DAT_0002e0a8 = 0;
  uRam000000000002e0c0 = 0;
  _DAT_0002e0b8 = 0;
  uRam000000000002e0d0 = 0;
  _DAT_0002e0c8 = 0;
  uRam000000000002e0e0 = 0;
  _DAT_0002e0d8 = 0;
  cVar4 = 'S';
  lVar3 = 1;
  uRam000000000002e0f0 = 0;
  _DAT_0002e0e8 = 0;
  uRam000000000002e100 = 0;
  _DAT_0002e0f8 = 0;
  do {
    pcVar1 = DAT_0002e000 + 1;
    *DAT_0002e000 = cVar4;
    DAT_0002e000 = pcVar1;
    if (lVar3 == 0xc) break;
    cVar4 = "Switch Setup"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002e000 <
           __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE + DAT_0002dff8);
  lVar3 = 0;
  *DAT_0002e000 = '\0';
  DAT_0002e118 = &DAT_0002e120;
  uRam000000000002e128 = 0;
  _DAT_0002e120 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE = &DAT_0002e120;
  DAT_0002e110 = 0xff;
  uRam000000000002e138 = 0;
  _DAT_0002e130 = 0;
  uRam000000000002e148 = 0;
  _DAT_0002e140 = 0;
  uRam000000000002e158 = 0;
  _DAT_0002e150 = 0;
  uRam000000000002e168 = 0;
  _DAT_0002e160 = 0;
  uRam000000000002e178 = 0;
  _DAT_0002e170 = 0;
  uRam000000000002e188 = 0;
  _DAT_0002e180 = 0;
  uRam000000000002e198 = 0;
  _DAT_0002e190 = 0;
  uRam000000000002e1a8 = 0;
  _DAT_0002e1a0 = 0;
  uRam000000000002e1b8 = 0;
  _DAT_0002e1b0 = 0;
  uRam000000000002e1c8 = 0;
  _DAT_0002e1c0 = 0;
  uRam000000000002e1d8 = 0;
  _DAT_0002e1d0 = 0;
  uRam000000000002e1e8 = 0;
  _DAT_0002e1e0 = 0;
  uRam000000000002e1f8 = 0;
  _DAT_0002e1f0 = 0;
  cVar4 = 'R';
  uRam000000000002e208 = 0;
  _DAT_0002e200 = 0;
  uRam000000000002e218 = 0;
  _DAT_0002e210 = 0;
  do {
    pcVar1 = DAT_0002e118 + 1;
    *DAT_0002e118 = cVar4;
    DAT_0002e118 = pcVar1;
    if (lVar3 == 4) break;
    cVar4 = "Reset"[lVar3 + 1];
    lVar3 = lVar3 + 1;
  } while (DAT_0002e118 < __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE + DAT_0002e110);
  *DAT_0002e118 = '\0';
  return;
}



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



undefined8 _WP_InitGUI(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined2 local_13a;
  char *local_138;
  undefined8 uStack_130;
  char *local_128;
  char local_120 [208];
  long *local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_00024040;
  local_138 = local_120;
  uStack_130 = 0x1f;
  local_120[8] = '\0';
  local_120[9] = '\0';
  local_120[10] = '\0';
  local_120[0xb] = '\0';
  local_120[0xc] = '\0';
  local_120[0xd] = '\0';
  local_120[0xe] = '\0';
  local_120[0xf] = '\0';
  local_120[0] = '\0';
  local_120[1] = '\0';
  local_120[2] = '\0';
  local_120[3] = '\0';
  local_120[4] = '\0';
  local_120[5] = '\0';
  local_120[6] = '\0';
  local_120[7] = '\0';
  local_120[0x18] = '\0';
  local_120[0x19] = '\0';
  local_120[0x1a] = '\0';
  local_120[0x1b] = '\0';
  local_120[0x1c] = '\0';
  local_120[0x1d] = '\0';
  local_120[0x1e] = '\0';
  local_120[0x1f] = '\0';
  local_120[0x10] = '\0';
  local_120[0x11] = '\0';
  local_120[0x12] = '\0';
  local_120[0x13] = '\0';
  local_120[0x14] = '\0';
  local_120[0x15] = '\0';
  local_120[0x16] = '\0';
  local_120[0x17] = '\0';
  cVar5 = 'G';
  lVar4 = 1;
  pcVar3 = local_138;
  do {
    local_128 = pcVar3 + 1;
    *pcVar3 = cVar5;
    if (lVar4 == 6) break;
    cVar5 = "GUIXML"[lVar4];
    lVar4 = lVar4 + 1;
    pcVar3 = local_128;
  } while (local_128 < local_120 + 0x1f);
  *local_128 = '\0';
  local_13a = 1000;
  __ZN8WCResKeyC1ERK13WCFixedStringILm31EERKs(local_120 + 0x20,&local_138,&local_13a);
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),"Primary");
  if (param_2 == 0) {
    __ZN20wvWavesV15_1_154_19714CStandardGUI_X7InitGuiEPNS_10cALGORITHMER8WCResKey
              (plVar1,*(undefined8 *)(param_1 + 0x748),local_120 + 0x20);
  }
  else {
    __ZN20wvWavesV15_1_154_19714CStandardGUI_X20InitGuiWithoutImagesEPNS_10cALGORITHMER8WCResKey
              (plVar1,*(undefined8 *)(param_1 + 0x748),local_120 + 0x20);
  }
  uVar2 = (**(code **)(*plVar1 + 0x208))(plVar1);
  if (local_50 != (long *)0x0) {
    LOAcquire();
    lVar4 = local_50[1];
    local_50[1] = lVar4 + -1;
    LORelease();
    if (lVar4 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(local_50);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00024040 == local_48) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 _WP_ActivateWindow(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),"Primary");
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1,param_2);
  }
  return 0;
}



undefined8 _WP_ActivateWindowForGui(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748));
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1,param_3);
  }
  return 0;
}



undefined8 _WP_DeactivateWindow(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),"Primary");
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x58))();
  }
  return 0;
}



undefined8 _WP_DeactivateWindowForGui(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748));
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x58))();
  }
  return 0;
}



void _WP_ClearTouchEventsMap(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc(*(undefined8 *)(param_1 + 0x748),"Primary");
  __ZN20wvWavesV15_1_154_19714CStandardGUI_X19ClearTouchEventsMapEv();
  return;
}



void _WP_ClearTouchEventsMapForGui(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc(*(undefined8 *)(param_1 + 0x748));
  __ZN20wvWavesV15_1_154_19714CStandardGUI_X19ClearTouchEventsMapEv();
  return;
}



void _WP_DoMouseDown(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                    (*(undefined8 *)(param_1 + 0x748),"Primary");
  __ZN20wvWavesV15_1_154_19714CStandardGUI_X15DoMouseDownBaseEPNS_17PluginViewManager11WCEventDataE
            (uVar1,param_2);
  return;
}



void _WP_DoMouseDownForGui(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc(*(undefined8 *)(param_1 + 0x748));
  __ZN20wvWavesV15_1_154_19714CStandardGUI_X15DoMouseDownBaseEPNS_17PluginViewManager11WCEventDataE
            (uVar1,param_3);
  return;
}



undefined8 _WP_DoMouseMove(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                    (*(undefined8 *)(param_1 + 0x748),"Primary");
  __ZN20wvWavesV15_1_154_19714CStandardGUI_X15DoMouseMoveBaseEPNS_17PluginViewManager11WCEventDataE
            (uVar1,param_2);
  return 0;
}



undefined8 _WP_DoMouseMoveForGui(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc(*(undefined8 *)(param_1 + 0x748));
  __ZN20wvWavesV15_1_154_19714CStandardGUI_X15DoMouseMoveBaseEPNS_17PluginViewManager11WCEventDataE
            (uVar1,param_3);
  return 0;
}



void _WP_DoMouseUp(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                    (*(undefined8 *)(param_1 + 0x748),"Primary");
  __ZN20wvWavesV15_1_154_19714CStandardGUI_X13DoMouseUpBaseEPNS_17PluginViewManager11WCEventDataE
            (uVar1,param_2);
  return;
}



void _WP_DoMouseUpForGui(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc(*(undefined8 *)(param_1 + 0x748));
  __ZN20wvWavesV15_1_154_19714CStandardGUI_X13DoMouseUpBaseEPNS_17PluginViewManager11WCEventDataE
            (uVar1,param_3);
  return;
}



void _WP_DoMouseWheel(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                    (*(undefined8 *)(param_1 + 0x748),"Primary");
  __ZN20wvWavesV15_1_154_19714CStandardGUI_X16DoMouseWheelBaseEPNS_17PluginViewManager11WCEventDataE
            (uVar1,param_2);
  return;
}



void _WP_DoMouseWheelForGui(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc(*(undefined8 *)(param_1 + 0x748));
  __ZN20wvWavesV15_1_154_19714CStandardGUI_X16DoMouseWheelBaseEPNS_17PluginViewManager11WCEventDataE
            (uVar1,param_3);
  return;
}



undefined8 _WP_DragDropStart(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),"Primary");
  (**(code **)(*plVar1 + 0x448))(plVar1,param_2);
  return 0;
}



undefined8 _WP_DragDropMove(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 local_28;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),"Primary");
  local_28 = (**(code **)(*plVar1 + 0x450))(plVar1,param_2);
  __ZN20wvWavesV15_1_154_19710cALGORITHM18SendAndFreeBuffersERPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADEREib
            (*(undefined8 *)(param_1 + 0x748),&local_28,0,1);
  return 0;
}



undefined8 _WP_DragDropStop(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 local_28;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),"Primary");
  local_28 = (**(code **)(*plVar1 + 0x458))(plVar1,param_2);
  __ZN20wvWavesV15_1_154_19710cALGORITHM18SendAndFreeBuffersERPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADEREib
            (*(undefined8 *)(param_1 + 0x748),&local_28,0,1);
  return 0;
}



undefined8 _WP_DoKeyDown(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),"Primary");
  (**(code **)(*plVar1 + 0x270))(plVar1,param_2,param_3);
  return 0;
}



undefined8
_WP_DoKeyDownForGui(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748));
  (**(code **)(*plVar1 + 0x270))(plVar1,param_3,param_4);
  return 0;
}



undefined8 _WP_DoKeyUp(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),"Primary");
  (**(code **)(*plVar1 + 0x280))(plVar1,param_2,param_3);
  return 0;
}



undefined8 _WP_DoKeyUpForGui(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748));
  (**(code **)(*plVar1 + 0x280))(plVar1,param_3,param_4);
  return 0;
}



undefined8 _WP_DoTouch(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),"Primary");
  (**(code **)(*plVar1 + 0x290))(plVar1,param_2,param_3);
  return 0;
}



undefined8 _WP_DoTouchForGui(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748));
  (**(code **)(*plVar1 + 0x290))(plVar1,param_3,param_4);
  return 0;
}



void _WP_GetDrawInstructions(long param_1,undefined8 param_2)

{
  _WP_GetDrawInstructionsForGui(param_1,"Primary",param_2);
  return;
}



undefined8 _WP_GetDrawInstructionsForGui(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [64];
  
  __ZN4wvGS27WCGraphicStreamBinaryWriterC1ERN20wvWavesV15_1_154_1975Utils10WCStMemObjEm
            (auStack_60,param_3,0x80);
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),param_2);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                               (*(undefined8 *)(param_1 + 0x748),"Primary");
  }
  uVar2 = (**(code **)(*plVar1 + 0x328))(plVar1,auStack_60);
  __ZN4wvGS27WCGraphicStreamBinaryWriterD1Ev(auStack_60);
  return uVar2;
}



undefined8 _WP_GetDrawInstructionsForControl(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [64];
  
  __ZN4wvGS27WCGraphicStreamBinaryWriterC1ERN20wvWavesV15_1_154_1975Utils10WCStMemObjEm
            (auStack_60,param_3,0x80);
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),"Primary");
  uVar2 = (**(code **)(*plVar1 + 0x340))(plVar1,param_2,auStack_60);
  __ZN4wvGS27WCGraphicStreamBinaryWriterD1Ev(auStack_60);
  return uVar2;
}



undefined8 _WP_GetViewRectForGui(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  long *plVar2;
  
  pcVar1 = "Primary";
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  plVar2 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),pcVar1);
  (**(code **)(*plVar2 + 0x70))(plVar2,param_3);
  return 0;
}



undefined8 _WP_GetViewRect(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),"Primary");
  (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
  return 0;
}



void _WP_SetControlHighlightInfo
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc(*(undefined8 *)(param_1 + 0x748),"Primary");
                    // WARNING: Could not recover jumptable at 0x0000b5a0. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x778))
            (*(long **)(param_1 + 0x748),param_2,"Primary",param_3,param_4);
  return;
}



void _WP_SetControllerValueFromText
               (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  int local_e4;
  char *local_e0;
  undefined8 uStack_d8;
  char *local_d0;
  char local_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_00024040;
  plVar1 = (long *)__ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                             (*(undefined8 *)(param_1 + 0x748),"Primary");
  local_e0 = local_c8;
  uStack_d8 = 0x7f;
  local_c8[8] = '\0';
  local_c8[9] = '\0';
  local_c8[10] = '\0';
  local_c8[0xb] = '\0';
  local_c8[0xc] = '\0';
  local_c8[0xd] = '\0';
  local_c8[0xe] = '\0';
  local_c8[0xf] = '\0';
  local_c8[0] = '\0';
  local_c8[1] = '\0';
  local_c8[2] = '\0';
  local_c8[3] = '\0';
  local_c8[4] = '\0';
  local_c8[5] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  local_c8[0x18] = '\0';
  local_c8[0x19] = '\0';
  local_c8[0x1a] = '\0';
  local_c8[0x1b] = '\0';
  local_c8[0x1c] = '\0';
  local_c8[0x1d] = '\0';
  local_c8[0x1e] = '\0';
  local_c8[0x1f] = '\0';
  local_c8[0x10] = '\0';
  local_c8[0x11] = '\0';
  local_c8[0x12] = '\0';
  local_c8[0x13] = '\0';
  local_c8[0x14] = '\0';
  local_c8[0x15] = '\0';
  local_c8[0x16] = '\0';
  local_c8[0x17] = '\0';
  local_c8[0x28] = '\0';
  local_c8[0x29] = '\0';
  local_c8[0x2a] = '\0';
  local_c8[0x2b] = '\0';
  local_c8[0x2c] = '\0';
  local_c8[0x2d] = '\0';
  local_c8[0x2e] = '\0';
  local_c8[0x2f] = '\0';
  local_c8[0x20] = '\0';
  local_c8[0x21] = '\0';
  local_c8[0x22] = '\0';
  local_c8[0x23] = '\0';
  local_c8[0x24] = '\0';
  local_c8[0x25] = '\0';
  local_c8[0x26] = '\0';
  local_c8[0x27] = '\0';
  local_c8[0x38] = '\0';
  local_c8[0x39] = '\0';
  local_c8[0x3a] = '\0';
  local_c8[0x3b] = '\0';
  local_c8[0x3c] = '\0';
  local_c8[0x3d] = '\0';
  local_c8[0x3e] = '\0';
  local_c8[0x3f] = '\0';
  local_c8[0x30] = '\0';
  local_c8[0x31] = '\0';
  local_c8[0x32] = '\0';
  local_c8[0x33] = '\0';
  local_c8[0x34] = '\0';
  local_c8[0x35] = '\0';
  local_c8[0x36] = '\0';
  local_c8[0x37] = '\0';
  local_c8[0x48] = '\0';
  local_c8[0x49] = '\0';
  local_c8[0x4a] = '\0';
  local_c8[0x4b] = '\0';
  local_c8[0x4c] = '\0';
  local_c8[0x4d] = '\0';
  local_c8[0x4e] = '\0';
  local_c8[0x4f] = '\0';
  local_c8[0x40] = '\0';
  local_c8[0x41] = '\0';
  local_c8[0x42] = '\0';
  local_c8[0x43] = '\0';
  local_c8[0x44] = '\0';
  local_c8[0x45] = '\0';
  local_c8[0x46] = '\0';
  local_c8[0x47] = '\0';
  local_c8[0x58] = '\0';
  local_c8[0x59] = '\0';
  local_c8[0x5a] = '\0';
  local_c8[0x5b] = '\0';
  local_c8[0x5c] = '\0';
  local_c8[0x5d] = '\0';
  local_c8[0x5e] = '\0';
  local_c8[0x5f] = '\0';
  local_c8[0x50] = '\0';
  local_c8[0x51] = '\0';
  local_c8[0x52] = '\0';
  local_c8[0x53] = '\0';
  local_c8[0x54] = '\0';
  local_c8[0x55] = '\0';
  local_c8[0x56] = '\0';
  local_c8[0x57] = '\0';
  local_c8[0x68] = '\0';
  local_c8[0x69] = '\0';
  local_c8[0x6a] = '\0';
  local_c8[0x6b] = '\0';
  local_c8[0x6c] = '\0';
  local_c8[0x6d] = '\0';
  local_c8[0x6e] = '\0';
  local_c8[0x6f] = '\0';
  local_c8[0x60] = '\0';
  local_c8[0x61] = '\0';
  local_c8[0x62] = '\0';
  local_c8[99] = '\0';
  local_c8[100] = '\0';
  local_c8[0x65] = '\0';
  local_c8[0x66] = '\0';
  local_c8[0x67] = '\0';
  local_c8[0x78] = '\0';
  local_c8[0x79] = '\0';
  local_c8[0x7a] = '\0';
  local_c8[0x7b] = '\0';
  local_c8[0x7c] = '\0';
  local_c8[0x7d] = '\0';
  local_c8[0x7e] = '\0';
  local_c8[0x7f] = '\0';
  local_c8[0x70] = '\0';
  local_c8[0x71] = '\0';
  local_c8[0x72] = '\0';
  local_c8[0x73] = '\0';
  local_c8[0x74] = '\0';
  local_c8[0x75] = '\0';
  local_c8[0x76] = '\0';
  local_c8[0x77] = '\0';
  local_e4 = 0;
  local_d0 = local_e0;
  if (param_3 != (char *)0x0) {
    cVar4 = *param_3;
    if (cVar4 != '\0') {
      pcVar5 = param_3 + 1;
      pcVar3 = local_e0;
      do {
        local_d0 = pcVar3 + 1;
        *pcVar3 = cVar4;
        cVar4 = *pcVar5;
        if (cVar4 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar3 = local_d0;
      } while (local_d0 < local_c8 + 0x7f);
    }
    *local_d0 = '\0';
  }
  uVar2 = __ZN20wvWavesV15_1_154_19714CStandardGUI_X42ConvertToControlIndexFromAutomationControlEi
                    (plVar1,param_2);
  (**(code **)(*plVar1 + 0x230))(plVar1,uVar2,&local_e0,&local_e4);
  *(bool *)param_4 = local_e4 == 1;
  if (*(long *)PTR____stack_chk_guard_00024040 == local_48) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___cxx_global_var_init_23(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_24(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_API_PluginGUI_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  
  DAT_0002e230 = &DAT_0002e238;
  uRam000000000002e240 = 0;
  _DAT_0002e238 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE = &DAT_0002e238;
  DAT_0002e228 = 0xff;
  uRam000000000002e250 = 0;
  _DAT_0002e248 = 0;
  uRam000000000002e260 = 0;
  _DAT_0002e258 = 0;
  uRam000000000002e270 = 0;
  _DAT_0002e268 = 0;
  uRam000000000002e280 = 0;
  _DAT_0002e278 = 0;
  uRam000000000002e290 = 0;
  _DAT_0002e288 = 0;
  uRam000000000002e2a0 = 0;
  _DAT_0002e298 = 0;
  uRam000000000002e2b0 = 0;
  _DAT_0002e2a8 = 0;
  uRam000000000002e2c0 = 0;
  _DAT_0002e2b8 = 0;
  uRam000000000002e2d0 = 0;
  _DAT_0002e2c8 = 0;
  uRam000000000002e2e0 = 0;
  _DAT_0002e2d8 = 0;
  uRam000000000002e2f0 = 0;
  _DAT_0002e2e8 = 0;
  uRam000000000002e300 = 0;
  _DAT_0002e2f8 = 0;
  uRam000000000002e310 = 0;
  _DAT_0002e308 = 0;
  cVar4 = 'I';
  lVar3 = 1;
  uRam000000000002e320 = 0;
  _DAT_0002e318 = 0;
  uRam000000000002e330 = 0;
  _DAT_0002e328 = 0;
  do {
    pcVar1 = DAT_0002e230 + 1;
    *DAT_0002e230 = cVar4;
    DAT_0002e230 = pcVar1;
    if (lVar3 == 0x10) break;
    cVar4 = "Initial Settings"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002e230 <
           __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE + DAT_0002e228);
  *DAT_0002e230 = '\0';
  DAT_0002e348 = &DAT_0002e350;
  uRam000000000002e358 = 0;
  _DAT_0002e350 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE = &DAT_0002e350;
  DAT_0002e340 = 0xff;
  uRam000000000002e368 = 0;
  _DAT_0002e360 = 0;
  uRam000000000002e378 = 0;
  _DAT_0002e370 = 0;
  uRam000000000002e388 = 0;
  _DAT_0002e380 = 0;
  uRam000000000002e398 = 0;
  _DAT_0002e390 = 0;
  uRam000000000002e3a8 = 0;
  _DAT_0002e3a0 = 0;
  uRam000000000002e3b8 = 0;
  _DAT_0002e3b0 = 0;
  uRam000000000002e3c8 = 0;
  _DAT_0002e3c0 = 0;
  uRam000000000002e3d8 = 0;
  _DAT_0002e3d0 = 0;
  uRam000000000002e3e8 = 0;
  _DAT_0002e3e0 = 0;
  uRam000000000002e3f8 = 0;
  _DAT_0002e3f0 = 0;
  uRam000000000002e408 = 0;
  _DAT_0002e400 = 0;
  uRam000000000002e418 = 0;
  _DAT_0002e410 = 0;
  uRam000000000002e428 = 0;
  _DAT_0002e420 = 0;
  cVar4 = 'L';
  lVar3 = 1;
  uRam000000000002e438 = 0;
  _DAT_0002e430 = 0;
  uRam000000000002e448 = 0;
  _DAT_0002e440 = 0;
  do {
    pcVar1 = DAT_0002e348 + 1;
    *DAT_0002e348 = cVar4;
    DAT_0002e348 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "Load Preset: "[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002e348 <
           __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE + DAT_0002e340);
  *DAT_0002e348 = '\0';
  DAT_0002e460 = &DAT_0002e468;
  uRam000000000002e470 = 0;
  _DAT_0002e468 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE = &DAT_0002e468;
  DAT_0002e458 = 0xff;
  uRam000000000002e480 = 0;
  _DAT_0002e478 = 0;
  uRam000000000002e490 = 0;
  _DAT_0002e488 = 0;
  uRam000000000002e4a0 = 0;
  _DAT_0002e498 = 0;
  uRam000000000002e4b0 = 0;
  _DAT_0002e4a8 = 0;
  uRam000000000002e4c0 = 0;
  _DAT_0002e4b8 = 0;
  uRam000000000002e4d0 = 0;
  _DAT_0002e4c8 = 0;
  uRam000000000002e4e0 = 0;
  _DAT_0002e4d8 = 0;
  uRam000000000002e4f0 = 0;
  _DAT_0002e4e8 = 0;
  uRam000000000002e500 = 0;
  _DAT_0002e4f8 = 0;
  uRam000000000002e510 = 0;
  _DAT_0002e508 = 0;
  uRam000000000002e520 = 0;
  _DAT_0002e518 = 0;
  uRam000000000002e530 = 0;
  _DAT_0002e528 = 0;
  uRam000000000002e540 = 0;
  _DAT_0002e538 = 0;
  cVar4 = 'S';
  lVar3 = 1;
  uRam000000000002e550 = 0;
  _DAT_0002e548 = 0;
  uRam000000000002e560 = 0;
  _DAT_0002e558 = 0;
  do {
    pcVar1 = DAT_0002e460 + 1;
    *DAT_0002e460 = cVar4;
    DAT_0002e460 = pcVar1;
    if (lVar3 == 0xc) break;
    cVar4 = "Switch Setup"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002e460 <
           __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE + DAT_0002e458);
  lVar3 = 0;
  *DAT_0002e460 = '\0';
  DAT_0002e578 = &DAT_0002e580;
  uRam000000000002e588 = 0;
  _DAT_0002e580 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE = &DAT_0002e580;
  DAT_0002e570 = 0xff;
  uRam000000000002e598 = 0;
  _DAT_0002e590 = 0;
  uRam000000000002e5a8 = 0;
  _DAT_0002e5a0 = 0;
  uRam000000000002e5b8 = 0;
  _DAT_0002e5b0 = 0;
  uRam000000000002e5c8 = 0;
  _DAT_0002e5c0 = 0;
  uRam000000000002e5d8 = 0;
  _DAT_0002e5d0 = 0;
  uRam000000000002e5e8 = 0;
  _DAT_0002e5e0 = 0;
  uRam000000000002e5f8 = 0;
  _DAT_0002e5f0 = 0;
  uRam000000000002e608 = 0;
  _DAT_0002e600 = 0;
  uRam000000000002e618 = 0;
  _DAT_0002e610 = 0;
  uRam000000000002e628 = 0;
  _DAT_0002e620 = 0;
  uRam000000000002e638 = 0;
  _DAT_0002e630 = 0;
  uRam000000000002e648 = 0;
  _DAT_0002e640 = 0;
  uRam000000000002e658 = 0;
  _DAT_0002e650 = 0;
  cVar4 = 'R';
  uRam000000000002e668 = 0;
  _DAT_0002e660 = 0;
  uRam000000000002e678 = 0;
  _DAT_0002e670 = 0;
  do {
    pcVar1 = DAT_0002e578 + 1;
    *DAT_0002e578 = cVar4;
    DAT_0002e578 = pcVar1;
    if (lVar3 == 4) break;
    cVar4 = "Reset"[lVar3 + 1];
    lVar3 = lVar3 + 1;
  } while (DAT_0002e578 < __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE + DAT_0002e570);
  *DAT_0002e578 = '\0';
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  uRam000000000002e868 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_0002e888 = &DAT_0002e890;
  uRam000000000002e898 = 0;
  _DAT_0002e890 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_0002e890;
  DAT_0002e880 = 0x7f;
  uRam000000000002e8a8 = 0;
  _DAT_0002e8a0 = 0;
  uRam000000000002e8b8 = 0;
  _DAT_0002e8b0 = 0;
  uRam000000000002e8c8 = 0;
  _DAT_0002e8c0 = 0;
  uRam000000000002e8d8 = 0;
  _DAT_0002e8d0 = 0;
  uRam000000000002e8e8 = 0;
  _DAT_0002e8e0 = 0;
  uRam000000000002e8f8 = 0;
  _DAT_0002e8f0 = 0;
  uRam000000000002e908 = 0;
  _DAT_0002e900 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_0002e888 + 1;
    *DAT_0002e888 = cVar4;
    DAT_0002e888 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002e888 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_0002e880);
  *DAT_0002e888 = '\0';
  return;
}



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



void _WP_SetChainerOutputsOffset(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0000bc3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x2f8))();
  return;
}



void _WP_SetChainerInputsOffset(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0000bc4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x300))();
  return;
}



void _WP_SetChainerSideChainOffset(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0000bc5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x308))();
  return;
}



void ___cxx_global_var_init_14(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_15(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_API_PluginIO_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  uRam000000000002eaf0 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_0002eb18 = &DAT_0002eb20;
  uRam000000000002eb28 = 0;
  _DAT_0002eb20 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_0002eb20;
  DAT_0002eb10 = 0x7f;
  uRam000000000002eb38 = 0;
  _DAT_0002eb30 = 0;
  uRam000000000002eb48 = 0;
  _DAT_0002eb40 = 0;
  uRam000000000002eb58 = 0;
  _DAT_0002eb50 = 0;
  uRam000000000002eb68 = 0;
  _DAT_0002eb60 = 0;
  uRam000000000002eb78 = 0;
  _DAT_0002eb70 = 0;
  uRam000000000002eb88 = 0;
  _DAT_0002eb80 = 0;
  uRam000000000002eb98 = 0;
  _DAT_0002eb90 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_0002eb18 + 1;
    *DAT_0002eb18 = cVar4;
    DAT_0002eb18 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002eb18 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_0002eb10);
  *DAT_0002eb18 = '\0';
  return;
}



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



void _WP_GetEqCurveData(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0000bf44. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x898))();
  return;
}



void ___cxx_global_var_init_14(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_15(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_API_PluginMisc_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  uRam000000000002ed80 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_0002eda8 = &DAT_0002edb0;
  uRam000000000002edb8 = 0;
  _DAT_0002edb0 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_0002edb0;
  DAT_0002eda0 = 0x7f;
  uRam000000000002edc8 = 0;
  _DAT_0002edc0 = 0;
  uRam000000000002edd8 = 0;
  _DAT_0002edd0 = 0;
  uRam000000000002ede8 = 0;
  _DAT_0002ede0 = 0;
  uRam000000000002edf8 = 0;
  _DAT_0002edf0 = 0;
  uRam000000000002ee08 = 0;
  _DAT_0002ee00 = 0;
  uRam000000000002ee18 = 0;
  _DAT_0002ee10 = 0;
  uRam000000000002ee28 = 0;
  _DAT_0002ee20 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_0002eda8 + 1;
    *DAT_0002eda8 = cVar4;
    DAT_0002eda8 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002eda8 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_0002eda0);
  *DAT_0002eda8 = '\0';
  return;
}



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



undefined8 _WP_ProcessFunctionLock(long param_1,int param_2)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM24GetProcessSemaphoreIDPtrEv
            (*(undefined8 *)(param_1 + 0x748));
  if (param_2 == 0) {
    __ZN20wvWavesV15_1_154_1978wvThread17ThreadMutexInited7releaseEv();
  }
  else {
    __ZN20wvWavesV15_1_154_1978wvThread17ThreadMutexInited6obtainEv();
  }
  return 0;
}



undefined8 _WP_LocateDSP(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x748) + 0x698))();
  if ((int)uVar1 == 0) {
    __ZN20wvWavesV15_1_154_19710cALGORITHM16SetProcessActiveEb(*(undefined8 *)(param_1 + 0x748),1);
  }
  return uVar1;
}



undefined8 _WP_SetProcessActive(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = __ZNK20wvWavesV15_1_154_19710cALGORITHM16GetProcessActiveEv
                    (*(undefined8 *)(param_1 + 0x748));
  if (iVar1 != (int)param_2) {
    __ZN20wvWavesV15_1_154_19710cALGORITHM16SetProcessActiveEb
              (*(undefined8 *)(param_1 + 0x748),param_2);
  }
  return 0;
}



undefined8 _WP_ChangeSampleRate(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM13GetSampleRateEv(*(undefined8 *)(param_1 + 0x748));
  if (iVar1 == (int)param_2) {
    return 0;
  }
  uVar2 = __ZN20wvWavesV15_1_154_19710cALGORITHM16ChangeSampleRateEi
                    (*(undefined8 *)(param_1 + 0x748),param_2);
  return uVar2;
}



undefined8 _WP_SetBypass(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = __ZNK20wvWavesV15_1_154_19710cALGORITHM9GetBypassEv(*(undefined8 *)(param_1 + 0x748));
  if (iVar1 != (int)param_2) {
    __ZN20wvWavesV15_1_154_19710cALGORITHM9SetBypassEb(*(undefined8 *)(param_1 + 0x748),param_2);
  }
  return 0;
}



void _WP_SetMute(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM7SetMuteEb(*(undefined8 *)(param_1 + 0x748));
  return;
}



undefined8 _WP_PreScan(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM11PreScanDataEPN20WPAPI_PROCESS_MEMORY13WavesSoundBufEiiPcS4_PNS1_12ExternStructEPNS1_16sNativeShellInfoE
            (*(undefined8 *)(param_1 + 0x748));
  return 0;
}



undefined8
_WP_TransportChange(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM15TransportChangeEbbbii
            (*(undefined8 *)(param_1 + 0x748),param_2,0,param_3,param_4,param_5);
  return 0;
}



void _WP_RetrieveNSProcessCode(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM21RetrieveNSProcessCodeE13ProcessorType7EOSTypePc
            (*(undefined8 *)(param_1 + 0x748));
  return;
}



int _WP_GetNSProcessSize(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  
  lVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM16GetNSProcessSizeE13ProcessorType7EOSType
                    (*(undefined8 *)(param_1 + 0x748));
  *param_4 = lVar1;
  return -(uint)(lVar1 == 0);
}



void ___cxx_global_var_init_14(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_15(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_API_PluginProcess_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  uRam000000000002f010 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_0002f038 = &DAT_0002f040;
  uRam000000000002f048 = 0;
  _DAT_0002f040 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_0002f040;
  DAT_0002f030 = 0x7f;
  uRam000000000002f058 = 0;
  _DAT_0002f050 = 0;
  uRam000000000002f068 = 0;
  _DAT_0002f060 = 0;
  uRam000000000002f078 = 0;
  _DAT_0002f070 = 0;
  uRam000000000002f088 = 0;
  _DAT_0002f080 = 0;
  uRam000000000002f098 = 0;
  _DAT_0002f090 = 0;
  uRam000000000002f0a8 = 0;
  _DAT_0002f0a0 = 0;
  uRam000000000002f0b8 = 0;
  _DAT_0002f0b0 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_0002f038 + 1;
    *DAT_0002f038 = cVar4;
    DAT_0002f038 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002f038 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_0002f030);
  *DAT_0002f038 = '\0';
  DAT_0002f0d0 = &DAT_0002f0d8;
  uRam000000000002f0e0 = 0;
  _DAT_0002f0d8 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE = &DAT_0002f0d8;
  DAT_0002f0c8 = 0xff;
  uRam000000000002f0f0 = 0;
  _DAT_0002f0e8 = 0;
  uRam000000000002f100 = 0;
  _DAT_0002f0f8 = 0;
  uRam000000000002f110 = 0;
  _DAT_0002f108 = 0;
  uRam000000000002f120 = 0;
  _DAT_0002f118 = 0;
  uRam000000000002f130 = 0;
  _DAT_0002f128 = 0;
  uRam000000000002f140 = 0;
  _DAT_0002f138 = 0;
  uRam000000000002f150 = 0;
  _DAT_0002f148 = 0;
  uRam000000000002f160 = 0;
  _DAT_0002f158 = 0;
  uRam000000000002f170 = 0;
  _DAT_0002f168 = 0;
  uRam000000000002f180 = 0;
  _DAT_0002f178 = 0;
  uRam000000000002f190 = 0;
  _DAT_0002f188 = 0;
  uRam000000000002f1a0 = 0;
  _DAT_0002f198 = 0;
  uRam000000000002f1b0 = 0;
  _DAT_0002f1a8 = 0;
  cVar4 = 'I';
  lVar3 = 1;
  uRam000000000002f1c0 = 0;
  _DAT_0002f1b8 = 0;
  uRam000000000002f1d0 = 0;
  _DAT_0002f1c8 = 0;
  do {
    pcVar1 = DAT_0002f0d0 + 1;
    *DAT_0002f0d0 = cVar4;
    DAT_0002f0d0 = pcVar1;
    if (lVar3 == 0x10) break;
    cVar4 = "Initial Settings"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002f0d0 <
           __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE + DAT_0002f0c8);
  *DAT_0002f0d0 = '\0';
  DAT_0002f1e8 = &DAT_0002f1f0;
  uRam000000000002f1f8 = 0;
  _DAT_0002f1f0 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE = &DAT_0002f1f0;
  DAT_0002f1e0 = 0xff;
  uRam000000000002f208 = 0;
  _DAT_0002f200 = 0;
  uRam000000000002f218 = 0;
  _DAT_0002f210 = 0;
  uRam000000000002f228 = 0;
  _DAT_0002f220 = 0;
  uRam000000000002f238 = 0;
  _DAT_0002f230 = 0;
  uRam000000000002f248 = 0;
  _DAT_0002f240 = 0;
  uRam000000000002f258 = 0;
  _DAT_0002f250 = 0;
  uRam000000000002f268 = 0;
  _DAT_0002f260 = 0;
  uRam000000000002f278 = 0;
  _DAT_0002f270 = 0;
  uRam000000000002f288 = 0;
  _DAT_0002f280 = 0;
  uRam000000000002f298 = 0;
  _DAT_0002f290 = 0;
  uRam000000000002f2a8 = 0;
  _DAT_0002f2a0 = 0;
  uRam000000000002f2b8 = 0;
  _DAT_0002f2b0 = 0;
  uRam000000000002f2c8 = 0;
  _DAT_0002f2c0 = 0;
  cVar4 = 'L';
  lVar3 = 1;
  uRam000000000002f2d8 = 0;
  _DAT_0002f2d0 = 0;
  uRam000000000002f2e8 = 0;
  _DAT_0002f2e0 = 0;
  do {
    pcVar1 = DAT_0002f1e8 + 1;
    *DAT_0002f1e8 = cVar4;
    DAT_0002f1e8 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "Load Preset: "[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002f1e8 <
           __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE + DAT_0002f1e0);
  *DAT_0002f1e8 = '\0';
  DAT_0002f300 = &DAT_0002f308;
  uRam000000000002f310 = 0;
  _DAT_0002f308 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE = &DAT_0002f308;
  DAT_0002f2f8 = 0xff;
  uRam000000000002f320 = 0;
  _DAT_0002f318 = 0;
  uRam000000000002f330 = 0;
  _DAT_0002f328 = 0;
  uRam000000000002f340 = 0;
  _DAT_0002f338 = 0;
  uRam000000000002f350 = 0;
  _DAT_0002f348 = 0;
  uRam000000000002f360 = 0;
  _DAT_0002f358 = 0;
  uRam000000000002f370 = 0;
  _DAT_0002f368 = 0;
  uRam000000000002f380 = 0;
  _DAT_0002f378 = 0;
  uRam000000000002f390 = 0;
  _DAT_0002f388 = 0;
  uRam000000000002f3a0 = 0;
  _DAT_0002f398 = 0;
  uRam000000000002f3b0 = 0;
  _DAT_0002f3a8 = 0;
  uRam000000000002f3c0 = 0;
  _DAT_0002f3b8 = 0;
  uRam000000000002f3d0 = 0;
  _DAT_0002f3c8 = 0;
  uRam000000000002f3e0 = 0;
  _DAT_0002f3d8 = 0;
  cVar4 = 'S';
  lVar3 = 1;
  uRam000000000002f3f0 = 0;
  _DAT_0002f3e8 = 0;
  uRam000000000002f400 = 0;
  _DAT_0002f3f8 = 0;
  do {
    pcVar1 = DAT_0002f300 + 1;
    *DAT_0002f300 = cVar4;
    DAT_0002f300 = pcVar1;
    if (lVar3 == 0xc) break;
    cVar4 = "Switch Setup"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002f300 <
           __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE + DAT_0002f2f8);
  lVar3 = 0;
  *DAT_0002f300 = '\0';
  DAT_0002f418 = &DAT_0002f420;
  uRam000000000002f428 = 0;
  _DAT_0002f420 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE = &DAT_0002f420;
  DAT_0002f410 = 0xff;
  uRam000000000002f438 = 0;
  _DAT_0002f430 = 0;
  uRam000000000002f448 = 0;
  _DAT_0002f440 = 0;
  uRam000000000002f458 = 0;
  _DAT_0002f450 = 0;
  uRam000000000002f468 = 0;
  _DAT_0002f460 = 0;
  uRam000000000002f478 = 0;
  _DAT_0002f470 = 0;
  uRam000000000002f488 = 0;
  _DAT_0002f480 = 0;
  uRam000000000002f498 = 0;
  _DAT_0002f490 = 0;
  uRam000000000002f4a8 = 0;
  _DAT_0002f4a0 = 0;
  uRam000000000002f4b8 = 0;
  _DAT_0002f4b0 = 0;
  uRam000000000002f4c8 = 0;
  _DAT_0002f4c0 = 0;
  uRam000000000002f4d8 = 0;
  _DAT_0002f4d0 = 0;
  uRam000000000002f4e8 = 0;
  _DAT_0002f4e0 = 0;
  uRam000000000002f4f8 = 0;
  _DAT_0002f4f0 = 0;
  cVar4 = 'R';
  uRam000000000002f508 = 0;
  _DAT_0002f500 = 0;
  uRam000000000002f518 = 0;
  _DAT_0002f510 = 0;
  do {
    pcVar1 = DAT_0002f418 + 1;
    *DAT_0002f418 = cVar4;
    DAT_0002f418 = pcVar1;
    if (lVar3 == 4) break;
    cVar4 = "Reset"[lVar3 + 1];
    lVar3 = lVar3 + 1;
  } while (DAT_0002f418 < __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE + DAT_0002f410);
  *DAT_0002f418 = '\0';
  return;
}



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



undefined8
__ZN20wvWavesV15_1_154_19717WavesAPI3Internal30AddPluginSpecificAPI3FunctionsERNS_41WCWavesAPI3_PluginSide_RequestAndResponseE
          (undefined8 param_1)

{
  long in_tmp_ldXn;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 *local_18;
  
  if (in_tmp_ldXn != -1) {
    local_18 = &local_28;
    local_20 = &local_18;
    local_28 = param_1;
    __ZNSt3__111__call_onceERVmPvPFvS2_E
              (&
               __ZZN20wvWavesV15_1_154_19717WavesAPI3Internal30AddPluginSpecificAPI3FunctionsERNS_41WCWavesAPI3_PluginSide_RequestAndResponseEE14call_once_flag
               ,&local_20,
               __ZNSt3__1L17__call_once_proxyINS_5tupleIJOZN20wvWavesV15_1_154_19717WavesAPI3Internal30AddPluginSpecificAPI3FunctionsERNS2_41WCWavesAPI3_PluginSide_RequestAndResponseEE3__0EEEEEvPv
              );
  }
  return 0;
}



undefined8
__ZN20wvWavesV15_1_154_19717WavesAPI3Internal28GetAllWavesAPI3FunctionNamesERNS_41WCWavesAPI3_PluginSide_RequestAndResponseE
          (long param_1)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long *plVar5;
  byte local_60 [8];
  undefined8 local_58;
  byte local_50 [8];
  undefined8 *local_48;
  byte abStack_40 [16];
  
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ESt16initializer_listINS_6detail8json_refISD_EEEbNSF_7value_tE
            (abStack_40,(char *)0x0,0,0,2);
  for (plVar5 = (long *)DAT_00031110; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    if (plVar5[4] != 0) {
      local_48 = (undefined8 *)0x0;
      local_50[0] = 3;
      local_48 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKNS1_17basic_string_viewIcS6_EEEEEPT_DpOT0_
                           (plVar5 + 2);
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE9push_backEOSD_
                ((char *)abStack_40,local_50);
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_50);
    }
  }
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ERKSD_
            (local_60,abStack_40);
  pcVar2 = (char *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                             ((char *)(param_1 + 0x70),"result");
  pbVar3 = (byte *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                             (pcVar2,"func-names");
  bVar1 = *pbVar3;
  *pbVar3 = local_60[0];
  uVar4 = *(undefined8 *)(pbVar3 + 8);
  *(undefined8 *)(pbVar3 + 8) = local_58;
  local_60[0] = bVar1;
  local_58 = uVar4;
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_60);
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (abStack_40);
  return 0;
}



undefined8
__ZN20wvWavesV15_1_154_19717WavesAPI3Internal4PingERNS_41WCWavesAPI3_PluginSide_RequestAndResponseE
          (long param_1)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte local_30 [8];
  undefined8 *local_28;
  
  local_30[0] = 3;
  local_28 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRA5_KcEEEPT_DpOT0_
                       ("pong");
  pcVar1 = (char *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                             ((char *)(param_1 + 0x70),"result");
  pbVar2 = (byte *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                             (pcVar1,"ping");
  local_30[0] = *pbVar2;
  *pbVar2 = 3;
  uVar3 = *(undefined8 *)(pbVar2 + 8);
  *(undefined8 **)(pbVar2 + 8) = local_28;
  local_28 = (undefined8 *)uVar3;
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_30);
  return 0;
}



undefined8
__ZN20wvWavesV15_1_154_19717WavesAPI3Internal7unknownERNS_41WCWavesAPI3_PluginSide_RequestAndResponseE
          (long *param_1)

{
  __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponse21set_error_and_messageEiPKc
            (param_1,-3,"unknown API3 method");
  return 0xfffffffd;
}



long * __ZNSt3__113unordered_mapINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEENS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S9_EEEEED1Ev
                 (long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



undefined4 _WP_PluginAPI3(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  char *local_3a8;
  long lStack_3a0;
  char *local_398;
  long local_390;
  char *local_388;
  char local_380 [8];
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  long alStack_280 [3];
  char *local_268;
  long local_258;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_00024040;
  __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseC2ER21WCPluginAPICallParams
            (alStack_280,param_1);
  local_398 = local_380;
  local_390 = 0xff;
  uStack_288 = 0;
  local_290 = 0;
  uStack_378 = 0;
  local_380[0] = '\0';
  local_380[1] = '\0';
  local_380[2] = '\0';
  local_380[3] = '\0';
  local_380[4] = '\0';
  local_380[5] = '\0';
  local_380[6] = '\0';
  local_380[7] = '\0';
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  local_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  local_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  local_320 = 0;
  uStack_308 = 0;
  local_310 = 0;
  uStack_2f8 = 0;
  local_300 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2c8 = 0;
  local_2d0 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  lStack_3a0 = local_258 - (long)local_268;
  local_3a8 = local_268;
  local_388 = local_398;
  plVar2 = __ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_22__unordered_map_hasherIS5_SB_NS_4hashIS5_EENS_8equal_toIS5_EELb1EEENS_21__unordered_map_equalIS5_SB_SG_SE_Lb1EEENS_9allocatorISB_EEE4findIS5_EENS_15__hash_iteratorIPNS_11__hash_nodeISB_PvEEEERKT_
                     ((long *)&_simple_func_map,&local_3a8);
  if (plVar2 == (long *)0x0) {
    cVar3 = 'm';
    lVar4 = 1;
    do {
      if (local_398 + local_390 <= local_388) break;
      pcVar5 = local_388 + 1;
      *local_388 = cVar3;
      cVar3 = "method "[lVar4];
      lVar4 = lVar4 + 1;
      local_388 = pcVar5;
    } while (lVar4 != 8);
    *local_388 = '\0';
    if (local_268 != (char *)0x0) {
      cVar3 = *local_268;
      pcVar5 = local_268;
      for (; (cVar3 != '\0' && (pcVar5 = pcVar5 + 1, local_388 < local_398 + local_390));
          local_388 = local_388 + 1) {
        *local_388 = cVar3;
        cVar3 = *pcVar5;
      }
      *local_388 = '\0';
    }
    cVar3 = ' ';
    lVar4 = 1;
    do {
      if (local_398 + local_390 <= local_388) break;
      pcVar5 = local_388 + 1;
      *local_388 = cVar3;
      cVar3 = " is not implemented"[lVar4];
      lVar4 = lVar4 + 1;
      local_388 = pcVar5;
    } while (lVar4 != 0x14);
    *local_388 = '\0';
    __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponse21set_error_and_messageEiPKc
              (alStack_280,-0x7f59,local_398);
  }
  else {
    (*(code *)plVar2[4])(alStack_280);
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseD2Ev(alStack_280);
  if (*(long *)PTR____stack_chk_guard_00024040 == local_48) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponse21set_error_and_messageEiPKc
               (long *param_1,int param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *local_140;
  undefined8 uStack_138;
  char *local_130;
  char local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00024040;
  if (param_2 != 0) {
    *(int *)(*param_1 + 4) = param_2;
    local_140 = local_128;
    uStack_138 = 0xff;
    local_128[0xf8] = '\0';
    local_128[0xf9] = '\0';
    local_128[0xfa] = '\0';
    local_128[0xfb] = '\0';
    local_128[0xfc] = '\0';
    local_128[0xfd] = '\0';
    local_128[0xfe] = '\0';
    local_128[0xff] = '\0';
    local_128[0xf0] = '\0';
    local_128[0xf1] = '\0';
    local_128[0xf2] = '\0';
    local_128[0xf3] = '\0';
    local_128[0xf4] = '\0';
    local_128[0xf5] = '\0';
    local_128[0xf6] = '\0';
    local_128[0xf7] = '\0';
    local_128[8] = '\0';
    local_128[9] = '\0';
    local_128[10] = '\0';
    local_128[0xb] = '\0';
    local_128[0xc] = '\0';
    local_128[0xd] = '\0';
    local_128[0xe] = '\0';
    local_128[0xf] = '\0';
    local_128[0] = '\0';
    local_128[1] = '\0';
    local_128[2] = '\0';
    local_128[3] = '\0';
    local_128[4] = '\0';
    local_128[5] = '\0';
    local_128[6] = '\0';
    local_128[7] = '\0';
    local_128[0x18] = '\0';
    local_128[0x19] = '\0';
    local_128[0x1a] = '\0';
    local_128[0x1b] = '\0';
    local_128[0x1c] = '\0';
    local_128[0x1d] = '\0';
    local_128[0x1e] = '\0';
    local_128[0x1f] = '\0';
    local_128[0x10] = '\0';
    local_128[0x11] = '\0';
    local_128[0x12] = '\0';
    local_128[0x13] = '\0';
    local_128[0x14] = '\0';
    local_128[0x15] = '\0';
    local_128[0x16] = '\0';
    local_128[0x17] = '\0';
    local_128[0x28] = '\0';
    local_128[0x29] = '\0';
    local_128[0x2a] = '\0';
    local_128[0x2b] = '\0';
    local_128[0x2c] = '\0';
    local_128[0x2d] = '\0';
    local_128[0x2e] = '\0';
    local_128[0x2f] = '\0';
    local_128[0x20] = '\0';
    local_128[0x21] = '\0';
    local_128[0x22] = '\0';
    local_128[0x23] = '\0';
    local_128[0x24] = '\0';
    local_128[0x25] = '\0';
    local_128[0x26] = '\0';
    local_128[0x27] = '\0';
    local_128[0x38] = '\0';
    local_128[0x39] = '\0';
    local_128[0x3a] = '\0';
    local_128[0x3b] = '\0';
    local_128[0x3c] = '\0';
    local_128[0x3d] = '\0';
    local_128[0x3e] = '\0';
    local_128[0x3f] = '\0';
    local_128[0x30] = '\0';
    local_128[0x31] = '\0';
    local_128[0x32] = '\0';
    local_128[0x33] = '\0';
    local_128[0x34] = '\0';
    local_128[0x35] = '\0';
    local_128[0x36] = '\0';
    local_128[0x37] = '\0';
    local_128[0x48] = '\0';
    local_128[0x49] = '\0';
    local_128[0x4a] = '\0';
    local_128[0x4b] = '\0';
    local_128[0x4c] = '\0';
    local_128[0x4d] = '\0';
    local_128[0x4e] = '\0';
    local_128[0x4f] = '\0';
    local_128[0x40] = '\0';
    local_128[0x41] = '\0';
    local_128[0x42] = '\0';
    local_128[0x43] = '\0';
    local_128[0x44] = '\0';
    local_128[0x45] = '\0';
    local_128[0x46] = '\0';
    local_128[0x47] = '\0';
    local_128[0x58] = '\0';
    local_128[0x59] = '\0';
    local_128[0x5a] = '\0';
    local_128[0x5b] = '\0';
    local_128[0x5c] = '\0';
    local_128[0x5d] = '\0';
    local_128[0x5e] = '\0';
    local_128[0x5f] = '\0';
    local_128[0x50] = '\0';
    local_128[0x51] = '\0';
    local_128[0x52] = '\0';
    local_128[0x53] = '\0';
    local_128[0x54] = '\0';
    local_128[0x55] = '\0';
    local_128[0x56] = '\0';
    local_128[0x57] = '\0';
    local_128[0x68] = '\0';
    local_128[0x69] = '\0';
    local_128[0x6a] = '\0';
    local_128[0x6b] = '\0';
    local_128[0x6c] = '\0';
    local_128[0x6d] = '\0';
    local_128[0x6e] = '\0';
    local_128[0x6f] = '\0';
    local_128[0x60] = '\0';
    local_128[0x61] = '\0';
    local_128[0x62] = '\0';
    local_128[99] = '\0';
    local_128[100] = '\0';
    local_128[0x65] = '\0';
    local_128[0x66] = '\0';
    local_128[0x67] = '\0';
    local_128[0x78] = '\0';
    local_128[0x79] = '\0';
    local_128[0x7a] = '\0';
    local_128[0x7b] = '\0';
    local_128[0x7c] = '\0';
    local_128[0x7d] = '\0';
    local_128[0x7e] = '\0';
    local_128[0x7f] = '\0';
    local_128[0x70] = '\0';
    local_128[0x71] = '\0';
    local_128[0x72] = '\0';
    local_128[0x73] = '\0';
    local_128[0x74] = '\0';
    local_128[0x75] = '\0';
    local_128[0x76] = '\0';
    local_128[0x77] = '\0';
    local_128[0x88] = '\0';
    local_128[0x89] = '\0';
    local_128[0x8a] = '\0';
    local_128[0x8b] = '\0';
    local_128[0x8c] = '\0';
    local_128[0x8d] = '\0';
    local_128[0x8e] = '\0';
    local_128[0x8f] = '\0';
    local_128[0x80] = '\0';
    local_128[0x81] = '\0';
    local_128[0x82] = '\0';
    local_128[0x83] = '\0';
    local_128[0x84] = '\0';
    local_128[0x85] = '\0';
    local_128[0x86] = '\0';
    local_128[0x87] = '\0';
    local_128[0x98] = '\0';
    local_128[0x99] = '\0';
    local_128[0x9a] = '\0';
    local_128[0x9b] = '\0';
    local_128[0x9c] = '\0';
    local_128[0x9d] = '\0';
    local_128[0x9e] = '\0';
    local_128[0x9f] = '\0';
    local_128[0x90] = '\0';
    local_128[0x91] = '\0';
    local_128[0x92] = '\0';
    local_128[0x93] = '\0';
    local_128[0x94] = '\0';
    local_128[0x95] = '\0';
    local_128[0x96] = '\0';
    local_128[0x97] = '\0';
    local_128[0xa8] = '\0';
    local_128[0xa9] = '\0';
    local_128[0xaa] = '\0';
    local_128[0xab] = '\0';
    local_128[0xac] = '\0';
    local_128[0xad] = '\0';
    local_128[0xae] = '\0';
    local_128[0xaf] = '\0';
    local_128[0xa0] = '\0';
    local_128[0xa1] = '\0';
    local_128[0xa2] = '\0';
    local_128[0xa3] = '\0';
    local_128[0xa4] = '\0';
    local_128[0xa5] = '\0';
    local_128[0xa6] = '\0';
    local_128[0xa7] = '\0';
    local_128[0xb8] = '\0';
    local_128[0xb9] = '\0';
    local_128[0xba] = '\0';
    local_128[0xbb] = '\0';
    local_128[0xbc] = '\0';
    local_128[0xbd] = '\0';
    local_128[0xbe] = '\0';
    local_128[0xbf] = '\0';
    local_128[0xb0] = '\0';
    local_128[0xb1] = '\0';
    local_128[0xb2] = '\0';
    local_128[0xb3] = '\0';
    local_128[0xb4] = '\0';
    local_128[0xb5] = '\0';
    local_128[0xb6] = '\0';
    local_128[0xb7] = '\0';
    local_128[200] = '\0';
    local_128[0xc9] = '\0';
    local_128[0xca] = '\0';
    local_128[0xcb] = '\0';
    local_128[0xcc] = '\0';
    local_128[0xcd] = '\0';
    local_128[0xce] = '\0';
    local_128[0xcf] = '\0';
    local_128[0xc0] = '\0';
    local_128[0xc1] = '\0';
    local_128[0xc2] = '\0';
    local_128[0xc3] = '\0';
    local_128[0xc4] = '\0';
    local_128[0xc5] = '\0';
    local_128[0xc6] = '\0';
    local_128[199] = '\0';
    local_128[0xd8] = '\0';
    local_128[0xd9] = '\0';
    local_128[0xda] = '\0';
    local_128[0xdb] = '\0';
    local_128[0xdc] = '\0';
    local_128[0xdd] = '\0';
    local_128[0xde] = '\0';
    local_128[0xdf] = '\0';
    local_128[0xd0] = '\0';
    local_128[0xd1] = '\0';
    local_128[0xd2] = '\0';
    local_128[0xd3] = '\0';
    local_128[0xd4] = '\0';
    local_128[0xd5] = '\0';
    local_128[0xd6] = '\0';
    local_128[0xd7] = '\0';
    local_128[0xe8] = '\0';
    local_128[0xe9] = '\0';
    local_128[0xea] = '\0';
    local_128[0xeb] = '\0';
    local_128[0xec] = '\0';
    local_128[0xed] = '\0';
    local_128[0xee] = '\0';
    local_128[0xef] = '\0';
    local_128[0xe0] = '\0';
    local_128[0xe1] = '\0';
    local_128[0xe2] = '\0';
    local_128[0xe3] = '\0';
    local_128[0xe4] = '\0';
    local_128[0xe5] = '\0';
    local_128[0xe6] = '\0';
    local_128[0xe7] = '\0';
    local_130 = local_140;
    if (param_3 != (char *)0x0) {
      cVar2 = *param_3;
      if (cVar2 != '\0') {
        pcVar3 = param_3 + 1;
        pcVar1 = local_140;
        do {
          local_130 = pcVar1 + 1;
          *pcVar1 = cVar2;
          cVar2 = *pcVar3;
          if (cVar2 == '\0') break;
          pcVar3 = pcVar3 + 1;
          pcVar1 = local_130;
        } while (local_130 < local_128 + 0xff);
      }
      *local_130 = '\0';
    }
    __ZN13WCFixedStringILm15EEaSERKS0_(param_1 + 0x1c,(long *)&local_140);
  }
  if (*(long *)PTR____stack_chk_guard_00024040 == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



long __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
               (char *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined8 *local_68 [3];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    puVar1 = (undefined8 *)__Znwm(0x18);
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = puVar1 + 1;
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  else if (*param_1 != '\x01') {
    puVar1 = (undefined8 *)___cxa_allocate_exception(0x20);
    if ((ulong)(long)*param_1 < 10) {
      pcVar3 = *(char **)(&DAT_00028db0 + (long)*param_1 * 8);
    }
    else {
      pcVar3 = "number";
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(local_68,pcVar3);
    puVar2 = (undefined8 *)
             __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                       (local_68,0,"cannot use operator[] with a string argument with ");
    uStack_48 = puVar2[1];
    local_50 = *puVar2;
    local_40 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
              (puVar1,0x131,&local_50);
                    // WARNING: Subroutine does not return
    ___cxa_throw(puVar1,&__ZTIN8nlohmann6detail10type_errorE,__ZN8nlohmann6detail10type_errorD1Ev);
  }
  plVar4 = *(long **)(param_1 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(&local_50,param_2);
  local_68[0] = &local_50;
  auVar5 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_
                     (plVar4,&local_50,&__ZNSt3__1L19piecewise_constructE,local_68);
  if (local_40._7_1_ < '\0') {
    __ZdlPv(local_50,auVar5._8_8_);
  }
  return auVar5._0_8_ + 0x38;
}



byte * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED1Ev
                 (byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                     (param_1);
  return pbVar1;
}



void __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE9push_backEOSD_
               (char *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  _Unwind_Exception *exception_object;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 auStack_78 [3];
  long local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  long lStack_48;
  long *local_40;
  
  if (*param_1 == '\0') {
    *param_1 = '\x02';
    plVar3 = (long *)__Znwm(0x18);
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = 0;
    *(long **)(param_1 + 8) = plVar3;
  }
  else {
    if (*param_1 != '\x02') {
      puVar4 = (undefined8 *)___cxa_allocate_exception(0x20);
      if ((ulong)(long)*param_1 < 10) {
        pcVar5 = *(char **)(&DAT_00028db0 + (long)*param_1 * 8);
      }
      else {
        pcVar5 = "number";
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(auStack_78,pcVar5);
      plVar3 = (long *)__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                                 (auStack_78,0,"cannot use push_back() with ");
      puStack_58 = (undefined1 *)plVar3[1];
      local_60 = *plVar3;
      local_50 = (undefined1 *)plVar3[2];
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = 0;
      __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
                (puVar4,0x134,&local_60);
                    // WARNING: Subroutine does not return
      ___cxa_throw(puVar4,&__ZTIN8nlohmann6detail10type_errorE,__ZN8nlohmann6detail10type_errorD1Ev)
      ;
    }
    plVar3 = *(long **)(param_1 + 8);
  }
  puVar2 = (undefined1 *)plVar3[1];
  if (puVar2 < (undefined1 *)plVar3[2]) {
    *puVar2 = *param_2;
    *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    plVar3[1] = (long)(puVar2 + 0x10);
  }
  else {
    lVar8 = (long)puVar2 - *plVar3 >> 4;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
      __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                ();
    }
    local_40 = plVar3 + 2;
    lVar6 = plVar3[2] - *plVar3;
    uVar7 = lVar6 >> 3;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 >> 0x3c != 0) {
      exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
      __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                (&local_60);
                    // WARNING: Subroutine does not return
      __Unwind_Resume(exception_object);
    }
    local_60 = __Znwm(uVar1 << 4);
    puStack_58 = (undefined1 *)(local_60 + lVar8 * 0x10);
    lStack_48 = local_60 + uVar1 * 0x10;
    *puStack_58 = *param_2;
    *(undefined8 *)(puStack_58 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    local_50 = puStack_58 + 0x10;
    __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
              (plVar3,&local_60);
    __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
              (&local_60);
  }
  return;
}



void __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5valueERKS9_PKc
               (undefined8 *param_1,char *param_2,undefined8 *param_3,char *param_4)

{
  undefined8 local_48 [2];
  char local_31;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(local_48,param_4);
  __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5valueIS9_Li0EEET_RKS9_RKSF_
            (param_1,param_2,param_3,local_48);
  if (local_31 < '\0') {
    __ZdlPv(local_48[0]);
  }
  return;
}



undefined8 *
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
          (undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  sVar1 = _strlen(param_2);
  if (0xffffffffffffffef < sVar1) {
                    // WARNING: Subroutine does not return
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorEv();
  }
  if (sVar1 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)sVar1;
    puVar2 = param_1;
    if (sVar1 == 0) goto LAB_0000da30;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    puVar2 = (undefined8 *)__Znwm(uVar3);
    param_1[1] = sVar1;
    param_1[2] = uVar3 | 0x8000000000000000;
    *param_1 = puVar2;
  }
  _memcpy(puVar2,param_2,sVar1);
LAB_0000da30:
  *(undefined1 *)((long)puVar2 + sVar1) = 0;
  return param_1;
}



undefined4
__ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5valueIiLi0EEET_RKS9_RKSF_
          (char *param_1,undefined8 *param_2,undefined4 *param_3)

{
  bool bVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  char *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*param_1 == '\x01') {
    uStack_38 = 0x8000000000000000;
    local_40 = 0;
    local_50 = param_1;
    plStack_48 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE4findIS7_EENS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEERKT_
                           (*(long *)(param_1 + 8),param_2);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0x8000000000000000;
    if (*param_1 == '\x02') {
      local_60 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
    }
    else if (*param_1 == '\x01') {
      local_68 = *(long *)(param_1 + 8) + 8;
    }
    else {
      local_58 = 1;
    }
    local_70 = param_1;
    bVar1 = __ZNK8nlohmann6detail9iter_implIKNS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEeqISH_LDn0EEEbRKT_
                      (&local_50,&local_70);
    if (bVar1) {
      local_70._0_4_ = *param_3;
    }
    else {
      pcVar2 = __ZNK8nlohmann6detail9iter_implIKNS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEptEv
                         ((long *)&local_50);
      local_70 = (char *)((ulong)local_70 & 0xffffffff00000000);
      __ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEiLi0EEEvRKT_RT0_
                (pcVar2,(uint *)&local_70);
    }
    return local_70._0_4_;
  }
  puVar3 = (undefined8 *)___cxa_allocate_exception(0x20);
  if ((ulong)(long)*param_1 < 10) {
    pcVar2 = *(char **)(&DAT_00028db0 + (long)*param_1 * 8);
  }
  else {
    pcVar2 = "number";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(&local_70,pcVar2);
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                     (&local_70,0,"cannot use value() with ");
  plStack_48 = (long *)puVar4[1];
  local_50 = (char *)*puVar4;
  local_40 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
            (puVar3,0x132,&local_50);
                    // WARNING: Subroutine does not return
  ___cxa_throw(puVar3,&__ZTIN8nlohmann6detail10type_errorE,__ZN8nlohmann6detail10type_errorD1Ev);
}



long * __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseC2ER21WCPluginAPICallParams
                 (long *param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  long lVar5;
  code *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  char cVar9;
  char *****pppppcVar10;
  long *plVar11;
  long *plVar12;
  byte local_278 [8];
  undefined8 local_270;
  byte local_268 [8];
  undefined8 local_260;
  byte local_258 [8];
  undefined8 local_250;
  byte local_248 [8];
  long local_240;
  undefined8 local_238 [2];
  char local_221;
  char ****local_220 [2];
  char local_209;
  byte local_208 [8];
  long local_200;
  char *local_1f8;
  undefined8 uStack_1f0;
  char *local_1e8;
  char local_1e0 [64];
  long alStack_1a0 [3];
  long *local_188;
  undefined8 *local_180;
  undefined8 uStack_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_00024040;
  *param_1 = param_2;
  plVar11 = param_1 + 1;
  *(undefined1 *)plVar11 = 0;
  param_1[2] = 0;
  plVar2 = param_1 + 6;
  param_1[7] = 0;
  *plVar2 = 0;
  param_1[3] = (long)plVar2;
  param_1[4] = 0x3f;
  param_1[5] = (long)plVar2;
  plVar12 = param_1 + 0xe;
  *(undefined1 *)plVar12 = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  __ZN20wvWavesV15_1_154_1975Utils10WCStMemObjC1Ev(param_1 + 0x19);
  plVar2 = param_1 + 0x1f;
  param_1[0x20] = 0;
  *plVar2 = 0;
  param_1[0x1c] = (long)plVar2;
  param_1[0x1d] = 0xff;
  param_1[0x1e] = (long)plVar2;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((long)param_1 + 0x229) = 0;
  *(undefined8 *)((long)param_1 + 0x221) = 0;
  local_180 = &local_168;
  uStack_178 = 0xff;
  uStack_70 = 0;
  local_78 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_140 = 0;
  local_148 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  local_108 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_e0 = 0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_188 = (long *)0x0;
  local_170 = local_180;
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5parseIRPKcEESD_OT_NS1_8functionIFbiNS_6detail13parse_event_tERSD_EEEbb
            (local_208,(undefined8 *)(*param_1 + 0x10),alStack_1a0,1,0);
  bVar1 = *(byte *)(param_1 + 1);
  *(byte *)(param_1 + 1) = local_208[0];
  lVar5 = param_1[2];
  param_1[2] = local_200;
  local_208[0] = bVar1;
  local_200 = lVar5;
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_208);
  if (alStack_1a0 == local_188) {
    pcVar6 = *(code **)(*local_188 + 0x20);
  }
  else {
    if (local_188 == (long *)0x0) goto LAB_0000de0c;
    pcVar6 = *(code **)(*local_188 + 0x28);
  }
  (*pcVar6)();
LAB_0000de0c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(local_238,"method");
  __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5valueERKS9_PKc
            (local_220,(char *)plVar11,local_238,"unknown");
  pppppcVar10 = (char *****)local_220[0];
  if (-1 < local_209) {
    pppppcVar10 = local_220;
  }
  pcVar7 = local_1e0;
  local_1f8 = pcVar7;
  uStack_1f0 = 0x3f;
  local_1e8 = pcVar7;
  local_1e0[8] = '\0';
  local_1e0[9] = '\0';
  local_1e0[10] = '\0';
  local_1e0[0xb] = '\0';
  local_1e0[0xc] = '\0';
  local_1e0[0xd] = '\0';
  local_1e0[0xe] = '\0';
  local_1e0[0xf] = '\0';
  local_1e0[0] = '\0';
  local_1e0[1] = '\0';
  local_1e0[2] = '\0';
  local_1e0[3] = '\0';
  local_1e0[4] = '\0';
  local_1e0[5] = '\0';
  local_1e0[6] = '\0';
  local_1e0[7] = '\0';
  local_1e0[0x18] = '\0';
  local_1e0[0x19] = '\0';
  local_1e0[0x1a] = '\0';
  local_1e0[0x1b] = '\0';
  local_1e0[0x1c] = '\0';
  local_1e0[0x1d] = '\0';
  local_1e0[0x1e] = '\0';
  local_1e0[0x1f] = '\0';
  local_1e0[0x10] = '\0';
  local_1e0[0x11] = '\0';
  local_1e0[0x12] = '\0';
  local_1e0[0x13] = '\0';
  local_1e0[0x14] = '\0';
  local_1e0[0x15] = '\0';
  local_1e0[0x16] = '\0';
  local_1e0[0x17] = '\0';
  local_1e0[0x28] = '\0';
  local_1e0[0x29] = '\0';
  local_1e0[0x2a] = '\0';
  local_1e0[0x2b] = '\0';
  local_1e0[0x2c] = '\0';
  local_1e0[0x2d] = '\0';
  local_1e0[0x2e] = '\0';
  local_1e0[0x2f] = '\0';
  local_1e0[0x20] = '\0';
  local_1e0[0x21] = '\0';
  local_1e0[0x22] = '\0';
  local_1e0[0x23] = '\0';
  local_1e0[0x24] = '\0';
  local_1e0[0x25] = '\0';
  local_1e0[0x26] = '\0';
  local_1e0[0x27] = '\0';
  local_1e0[0x38] = '\0';
  local_1e0[0x39] = '\0';
  local_1e0[0x3a] = '\0';
  local_1e0[0x3b] = '\0';
  local_1e0[0x3c] = '\0';
  local_1e0[0x3d] = '\0';
  local_1e0[0x3e] = '\0';
  local_1e0[0x3f] = '\0';
  local_1e0[0x30] = '\0';
  local_1e0[0x31] = '\0';
  local_1e0[0x32] = '\0';
  local_1e0[0x33] = '\0';
  local_1e0[0x34] = '\0';
  local_1e0[0x35] = '\0';
  local_1e0[0x36] = '\0';
  local_1e0[0x37] = '\0';
  if (pppppcVar10 != (char *****)0x0) {
    cVar9 = *(char *)pppppcVar10;
    if (cVar9 != '\0') {
      do {
        pppppcVar10 = (char *****)((long)pppppcVar10 + 1);
        local_1e8 = pcVar7 + 1;
        *pcVar7 = cVar9;
        cVar9 = *(char *)pppppcVar10;
        if (cVar9 == '\0') break;
        pcVar7 = local_1e8;
      } while (local_1e8 < local_1e0 + 0x3f);
    }
    *local_1e8 = '\0';
  }
  __ZN13WCFixedStringILm15EEaSERKS0_(param_1 + 3,(long *)&local_1f8);
  if (local_209 < '\0') {
    __ZdlPv(local_220[0]);
  }
  if (local_221 < '\0') {
    __ZdlPv(local_238[0]);
  }
  if ((((char)*plVar11 == '\x01') &&
      (plVar2 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE4findIA3_cEENS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEERKT_
                          (param_1[2],"id"), (long *)(param_1[2] + 8) != plVar2)) &&
     (*(int *)(*param_1 + 0x20) != 0)) {
    if ((char)param_1[0x10] == '\0') {
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ESt16initializer_listINS_6detail8json_refISD_EEEbNSF_7value_tE
                (local_248,(char *)0x0,0,0,1);
      bVar1 = *(byte *)(param_1 + 0xe);
      *(byte *)(param_1 + 0xe) = local_248[0];
      lVar5 = param_1[0xf];
      param_1[0xf] = local_240;
      local_248[0] = bVar1;
      local_240 = lVar5;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_248);
      puVar3 = (undefined1 *)
               __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                         ((char *)plVar11,"method");
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ERKSD_
                (local_258,puVar3);
      pbVar4 = (byte *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                                 ((char *)plVar12,"method");
      bVar1 = *pbVar4;
      *pbVar4 = local_258[0];
      uVar8 = *(undefined8 *)(pbVar4 + 8);
      *(undefined8 *)(pbVar4 + 8) = local_250;
      local_258[0] = bVar1;
      local_250 = uVar8;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_258);
      puVar3 = (undefined1 *)
               __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                         ((char *)plVar11,"id");
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ERKSD_
                (local_268,puVar3);
      pbVar4 = (byte *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                                 ((char *)plVar12,"id");
      bVar1 = *pbVar4;
      *pbVar4 = local_268[0];
      uVar8 = *(undefined8 *)(pbVar4 + 8);
      *(undefined8 *)(pbVar4 + 8) = local_260;
      local_268[0] = bVar1;
      local_260 = uVar8;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_268);
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ESt16initializer_listINS_6detail8json_refISD_EEEbNSF_7value_tE
                (local_278,(char *)0x0,0,0,1);
      pbVar4 = (byte *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                                 ((char *)plVar12,"result");
      bVar1 = *pbVar4;
      *pbVar4 = local_278[0];
      uVar8 = *(undefined8 *)(pbVar4 + 8);
      *(undefined8 *)(pbVar4 + 8) = local_270;
      local_278[0] = bVar1;
      local_270 = uVar8;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_278);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_00024040 != local_68) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return param_1;
}



void __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5parseIRPKcEESD_OT_NS1_8functionIFbiNS_6detail13parse_event_tERSD_EEEbb
               (byte *param_1,undefined8 *param_2,long *param_3,undefined1 param_4,
               undefined1 param_5)

{
  size_t sVar1;
  code *pcVar2;
  char *pcVar3;
  long alStack_138 [3];
  long *local_120;
  long alStack_118 [3];
  long *local_100;
  undefined1 auStack_f0 [152];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_00024040;
  *param_1 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  pcVar3 = (char *)*param_2;
  sVar1 = _strlen(pcVar3);
  __ZNSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEC2ERKSJ_
            ((long)alStack_138,param_3);
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6parserINS_6detail22iterator_input_adapterIPKcEEEENSF_6parserISD_T_EESL_NS1_8functionIFbiNSF_13parse_event_tERSD_EEEbb
            ((long)alStack_118,pcVar3,pcVar3 + sVar1,(long)alStack_138,param_4,param_5);
  __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5parseEbRSF_
            (alStack_118,1,param_1);
  __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEED2Ev
            ((long)auStack_f0);
  if (alStack_118 == local_100) {
    pcVar2 = *(code **)(*local_100 + 0x20);
LAB_0000e5e8:
    (*pcVar2)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar2 = *(code **)(*local_100 + 0x28);
    goto LAB_0000e5e8;
  }
  if (alStack_138 == local_120) {
    pcVar2 = *(code **)(*local_120 + 0x20);
  }
  else {
    if (local_120 == (long *)0x0) goto LAB_0000e618;
    pcVar2 = *(code **)(*local_120 + 0x28);
  }
  (*pcVar2)();
LAB_0000e618:
  if (*(long *)PTR____stack_chk_guard_00024040 == local_58) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



long * __ZNSt3__16vectorI13WCFixedStringILm31EENS_9allocatorIS2_EEED1Ev(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



long __ZN21WCPluginAPICallParamsD1Ev(long param_1)

{
  __ZN20wvWavesV15_1_154_1975Utils10WCStMemObjD1Ev(param_1 + 0x40);
  return param_1;
}



undefined8 *
__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_valueC2ENS_6detail7value_tE
          (undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  switch(param_2) {
  default:
    *param_1 = 0;
    return param_1;
  case 1:
    puVar1 = (undefined8 *)__Znwm(0x18);
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = puVar1 + 1;
    break;
  case 2:
    puVar1 = (undefined8 *)__Znwm(0x18);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    break;
  case 3:
    puVar1 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRA1_KcEEEPT_DpOT0_
                       ("");
    break;
  case 4:
    *(undefined1 *)param_1 = 0;
    return param_1;
  case 8:
    puVar1 = (undefined8 *)__Znwm(0x28);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
  }
  *param_1 = puVar1;
  return param_1;
}



undefined8 *
__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRA1_KcEEEPT_DpOT0_
          (char *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__Znwm(0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(puVar1,param_1);
  return puVar1;
}



void __ZNSt3__1L20__throw_length_errorEPKc(void)

{
  undefined8 uVar1;
  
  uVar1 = ___cxa_allocate_exception(0x10);
  __ZNSt12length_errorC1EPKc(uVar1);
                    // WARNING: Subroutine does not return
  ___cxa_throw(uVar1,PTR___ZTISt12length_error_00024020,PTR___ZNSt12length_errorD1Ev_00024000);
}



void __ZNSt12length_errorC1EPKc(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)__ZNSt11logic_errorC2EPKc
                             (param_1,
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                             );
  *plVar1 = (long)(PTR___ZTVSt12length_error_00024030 + 0x10);
  return;
}



// WARNING: Removing unreachable block (ram,0x0000e960)

void __ZN8nlohmann6detail9exception4nameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *local_a0;
  ulong uStack_98;
  byte local_89;
  undefined8 local_88 [2];
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (local_88,"[json.exception.",param_2);
  puVar2 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(local_88,".")
  ;
  uStack_68 = puVar2[1];
  local_70 = *puVar2;
  local_60 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__19to_stringEi(&local_a0,param_3);
  ppuVar1 = (undefined1 **)local_a0;
  if (-1 < (char)local_89) {
    uStack_98 = (ulong)local_89;
    ppuVar1 = &local_a0;
  }
  puVar2 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                     (&local_70,ppuVar1,uStack_98);
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  local_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                     (&local_50,"] ");
  uVar3 = *puVar2;
  param_1[1] = puVar2[1];
  *param_1 = uVar3;
  param_1[2] = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if ((char)local_89 < '\0') {
    __ZdlPv(local_a0);
  }
  if (local_60 < 0) {
    __ZdlPv(local_70);
  }
  if (local_71 < '\0') {
    __ZdlPv(local_88[0]);
  }
  return;
}



undefined8 *
__ZN8nlohmann6detail9exceptionC2EiPKc(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = &DAT_00028898;
  *(undefined4 *)(param_1 + 1) = param_2;
  __ZNSt13runtime_errorC1EPKc(param_1 + 2,param_3);
  return param_1;
}



void __ZNK8nlohmann6detail9exception4whatEv(long param_1)

{
  __ZNKSt13runtime_error4whatEv(param_1 + 0x10);
  return;
}



void __ZN8nlohmann6detail9exceptionD1Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028898;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(param_1);
  return;
}



void __ZN8nlohmann6detail9exceptionD0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028898;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(param_1);
  __ZdlPv();
  return;
}



void __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6parserINS_6detail22iterator_input_adapterIPKcEEEENSF_6parserISD_T_EESL_NS1_8functionIFbiNSF_13parse_event_tERSD_EEEbb
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined1 param_5,
               undefined1 param_6)

{
  code *pcVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  long alStack_58 [3];
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00024040;
  local_68 = param_2;
  uStack_60 = param_3;
  __ZNSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEC2EOSJ_
            ((long)alStack_58,param_4);
  __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEEC2EOSJ_NS3_8functionIFbiNS0_13parse_event_tERSF_EEEbb
            (param_1,&local_68,alStack_58,param_5,param_6);
  if (alStack_58 == local_40) {
    pcVar1 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_0000eb50;
    pcVar1 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar1)();
LAB_0000eb50:
  if (*(long *)PTR____stack_chk_guard_00024040 == local_38) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5parseEbRSF_
               (long *param_1,int param_2,byte *param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  code *pcVar3;
  long lVar4;
  byte local_1d0 [8];
  undefined8 local_1c8;
  byte local_1c0 [8];
  undefined8 local_1b8;
  byte local_1b0 [8];
  undefined8 local_1a8;
  byte local_1a0 [8];
  undefined8 local_198;
  undefined8 local_190 [2];
  char local_179;
  undefined8 local_178 [2];
  char local_161;
  long local_160;
  long lStack_158;
  long local_150;
  undefined *local_140 [2];
  undefined1 auStack_130 [24];
  undefined8 local_118 [2];
  char local_101;
  long alStack_100 [3];
  long *local_e8;
  byte *local_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  char local_b8;
  undefined1 local_b7;
  char local_88;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_00024040;
  if (param_1[3] == 0) {
    local_b7 = (undefined1)param_1[0x17];
    lStack_d0 = 0;
    local_d8 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    local_b8 = '\0';
    local_e0 = param_3;
    __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE18sax_parse_internalINS0_19json_sax_dom_parserISF_EEEEbPT_
              ((long)param_1,(long *)&local_e0);
    if (param_2 != 0) {
      uVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                        (param_1 + 5);
      *(int *)(param_1 + 4) = (int)uVar1;
      if ((int)uVar1 != 0xf) {
        lVar4 = param_1[9];
        __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                  (local_118,(long)(param_1 + 5));
        lStack_158 = param_1[10];
        local_160 = param_1[9];
        local_150 = param_1[0xb];
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                  (local_190,"value");
        __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                  (local_178,(long)param_1,0xf,(long)local_190);
        local_1a0[0] = 0;
        local_198 = 0;
        __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                  (local_140,0x65,&local_160,local_178);
        __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                  ((long)&local_e0,lVar4,local_118,(long)local_140);
        local_140[0] = &DAT_00028898;
        __ZNSt13runtime_errorD1Ev(auStack_130);
        __ZNSt9exceptionD2Ev(local_140);
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                  (local_1a0);
        if (local_161 < '\0') {
          __ZdlPv(local_178[0]);
        }
        if (local_179 < '\0') {
          __ZdlPv(local_190[0]);
        }
        if (local_101 < '\0') {
          __ZdlPv(local_118[0]);
        }
      }
    }
    if (local_b8 != '\0') {
      local_1d0[0] = *param_3;
      *param_3 = 9;
      local_1c8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_1d0);
    }
    if (local_d8 != 0) {
      lStack_d0 = local_d8;
      __ZdlPv();
    }
    goto LAB_0000eee0;
  }
  __ZNSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEC2ERKSJ_
            ((long)alStack_100,param_1);
  __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEC2ERSF_NS3_8functionIFbiNS0_13parse_event_tESH_EEEb
            (&local_e0,param_3,alStack_100,(char)param_1[0x17]);
  if (alStack_100 == local_e8) {
    pcVar3 = *(code **)(*local_e8 + 0x20);
LAB_0000ed88:
    (*pcVar3)();
  }
  else if (local_e8 != (long *)0x0) {
    pcVar3 = *(code **)(*local_e8 + 0x28);
    goto LAB_0000ed88;
  }
  __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE18sax_parse_internalINS0_28json_sax_dom_callback_parserISF_EEEEbPT_
            ((long)param_1,(long *)&local_e0);
  if (param_2 != 0) {
    uVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                      (param_1 + 5);
    *(int *)(param_1 + 4) = (int)uVar1;
    if ((int)uVar1 != 0xf) {
      lVar4 = param_1[9];
      __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                (local_118,(long)(param_1 + 5));
      lStack_158 = param_1[10];
      local_160 = param_1[9];
      local_150 = param_1[0xb];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(local_190,"value");
      __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                (local_178,(long)param_1,0xf,(long)local_190);
      local_1a0[0] = 0;
      local_198 = 0;
      __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                (local_140,0x65,&local_160,local_178);
      __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                ((long)&local_e0,lVar4,local_118,(long)local_140);
      local_140[0] = &DAT_00028898;
      __ZNSt13runtime_errorD1Ev(auStack_130);
      __ZNSt9exceptionD2Ev(local_140);
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_1a0);
      if (local_161 < '\0') {
        __ZdlPv(local_178[0]);
      }
      if (local_179 < '\0') {
        __ZdlPv(local_190[0]);
      }
      if (local_101 < '\0') {
        __ZdlPv(local_118[0]);
      }
    }
  }
  if (local_88 == '\0') {
    if (*param_3 == 9) {
      *param_3 = 0;
      local_1b8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
      pbVar2 = local_1c0;
      local_1c0[0] = 9;
      goto LAB_0000eed4;
    }
  }
  else {
    local_1b0[0] = *param_3;
    *param_3 = 9;
    local_1a8 = *(undefined8 *)(param_3 + 8);
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    pbVar2 = local_1b0;
LAB_0000eed4:
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              (pbVar2);
  }
  __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEED2Ev
            ((long)&local_e0);
LAB_0000eee0:
  if (*(long *)PTR____stack_chk_guard_00024040 == local_48) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



long __ZNSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEC2EOSJ_
               (long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (param_2 == lVar2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



long __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEEC2EOSJ_NS3_8functionIFbiNS0_13parse_event_tERSF_EEEbb
               (long param_1,undefined8 *param_2,long *param_3,undefined1 param_4,undefined1 param_5
               )

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = __ZNSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEC2ERKSJ_
                    (param_1,param_3);
  *(undefined4 *)(lVar2 + 0x20) = 0;
  uVar3 = *param_2;
  *(undefined8 *)(lVar2 + 0x30) = param_2[1];
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  *(undefined1 *)(lVar2 + 0x38) = param_5;
  *(undefined4 *)(lVar2 + 0x3c) = 0xffffffff;
  *(undefined1 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(char **)(lVar2 + 0x90) = "";
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17get_decimal_pointEv
                    ();
  *(int *)(param_1 + 0xb0) = iVar1;
  *(undefined1 *)(param_1 + 0xb8) = param_4;
  uVar3 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                    ((long *)(lVar2 + 0x28));
  *(int *)(param_1 + 0x20) = (int)uVar3;
  return param_1;
}



int __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17get_decimal_pointEv
              (void)

{
  undefined8 *puVar1;
  char cVar2;
  
  puVar1 = (undefined8 *)_localeconv();
  if ((char *)*puVar1 == (char *)0x0) {
    cVar2 = '.';
  }
  else {
    cVar2 = *(char *)*puVar1;
  }
  return (int)cVar2;
}



undefined8
__ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
          (long *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  byte local_38 [8];
  
  if ((param_1[4] == 0) &&
     (bVar2 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE8skip_bomEv
                        (param_1), !bVar2)) {
    pcVar6 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
    goto LAB_0000f320;
  }
  do {
    __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
              (param_1);
    uVar3 = *(uint *)((long)param_1 + 0x14);
    uVar5 = (ulong)uVar3;
  } while (uVar3 < 0x21 && (1L << (uVar5 & 0x3f) & 0x100002600U) != 0);
  cVar1 = (char)param_1[2];
  while ((cVar1 != '\0' && (uVar3 = (uint)uVar5, uVar3 == 0x2f))) {
    uVar4 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE12scan_commentEv
                      (param_1);
    if ((int)uVar4 == 0) goto LAB_0000f324;
    do {
      __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                (param_1);
      uVar3 = *(uint *)((long)param_1 + 0x14);
      uVar5 = (ulong)uVar3;
    } while (uVar3 < 0x21 && (1L << (uVar5 & 0x3f) & 0x100002600U) != 0);
    cVar1 = (char)param_1[2];
  }
  if (0x5a < (int)uVar3) {
    if ((int)uVar3 < 0x6e) {
      if (uVar3 == 0x5b) {
        return 8;
      }
      if (uVar3 == 0x5d) {
        return 10;
      }
      if (uVar3 == 0x66) {
        lVar7 = 0;
        while (uVar3 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                                 (param_1), (uint)(byte)"false"[lVar7 + 1] == (uVar3 & 0xff)) {
          lVar7 = lVar7 + 1;
          if (lVar7 == 4) {
            return 2;
          }
        }
      }
    }
    else if ((int)uVar3 < 0x7b) {
      if (uVar3 == 0x6e) {
        local_38[0] = 0x6e;
        local_38[1] = 0x75;
        local_38[2] = 0x6c;
        local_38[3] = 0x6c;
        lVar7 = 1;
        while (uVar3 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                                 (param_1), (uint)local_38[lVar7] == (uVar3 & 0xff)) {
          lVar7 = lVar7 + 1;
          if (lVar7 == 4) {
            return 3;
          }
        }
      }
      else if (uVar3 == 0x74) {
        local_38[4] = 0x74;
        local_38[5] = 0x72;
        local_38[6] = 0x75;
        local_38[7] = 0x65;
        lVar7 = 1;
        while (uVar3 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                                 (param_1), (uint)local_38[lVar7 + 4] == (uVar3 & 0xff)) {
          lVar7 = lVar7 + 1;
          if (lVar7 == 4) {
            return 1;
          }
        }
      }
    }
    else {
      if (uVar3 == 0x7b) {
        return 9;
      }
      if (uVar3 == 0x7d) {
        return 0xb;
      }
    }
    goto switchD_0000f2a0_caseD_23;
  }
  switch(uVar3) {
  case 0x22:
    uVar4 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE11scan_stringEv
                      (param_1);
    return uVar4;
  case 0x2c:
    uVar4 = 0xd;
    break;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    uVar4 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE11scan_numberEv
                      (param_1);
    return uVar4;
  case 0x3a:
    uVar4 = 0xc;
    break;
  default:
    if (uVar3 + 1 < 2) {
      return 0xf;
    }
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2e:
  case 0x2f:
switchD_0000f2a0_caseD_23:
    pcVar6 = "invalid literal";
LAB_0000f320:
    param_1[0xd] = (long)pcVar6;
LAB_0000f324:
    uVar4 = 0xe;
  }
  return uVar4;
}



bool __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE8skip_bomEv
               (long *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                    (param_1);
  if (iVar2 == 0xef) {
    iVar2 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                      (param_1);
    if (iVar2 == 0xbb) {
      iVar2 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                        (param_1);
      bVar1 = iVar2 == 0xbf;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5ungetEv
              ((long)param_1);
    bVar1 = true;
  }
  return bVar1;
}



undefined8
__ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE12scan_commentEv
          (long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                    (param_1);
  if (iVar1 == 0x2f) {
    do {
      do {
        iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                          (param_1);
      } while (0xe < iVar1 + 1U);
    } while ((0x4803U >> (ulong)(iVar1 + 1U & 0x1f) & 1) == 0);
LAB_0000f520:
    uVar2 = 1;
  }
  else {
    if (iVar1 == 0x2a) {
      do {
        while (iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                                 (param_1), iVar1 == 0x2a) {
          iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                            (param_1);
          if (iVar1 == 0x2f) goto LAB_0000f520;
          __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5ungetEv
                    ((long)param_1);
        }
      } while (1 < iVar1 + 1U);
      pcVar3 = "invalid comment; missing closing \'*/\'";
    }
    else {
      pcVar3 = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
    }
    uVar2 = 0;
    param_1[0xd] = (long)pcVar3;
  }
  return uVar2;
}



void __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE11scan_stringEv
               (long *param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_00024040;
  __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5resetEv
            ((long)param_1);
  plVar1 = param_1 + 10;
LAB_0000f594:
  iVar2 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                    (param_1);
  uVar5 = 4;
  pcVar8 = "invalid string: missing closing quote";
  switch(iVar2) {
  case 0:
    pcVar8 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
    break;
  case 1:
    pcVar8 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
    break;
  case 2:
    pcVar8 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
    break;
  case 3:
    pcVar8 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
    break;
  case 4:
    pcVar8 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
    break;
  case 5:
    pcVar8 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
    break;
  case 6:
    pcVar8 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
    break;
  case 7:
    pcVar8 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
    break;
  case 8:
    pcVar8 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
    break;
  case 9:
    pcVar8 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
    break;
  case 10:
    pcVar8 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
    break;
  case 0xb:
    pcVar8 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
    break;
  case 0xc:
    pcVar8 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
    break;
  case 0xd:
    pcVar8 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
    break;
  case 0xe:
    pcVar8 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
    break;
  case 0xf:
    pcVar8 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
    break;
  case 0x10:
    pcVar8 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
    break;
  case 0x11:
    pcVar8 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
    break;
  case 0x12:
    pcVar8 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
    break;
  case 0x13:
    pcVar8 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
    break;
  case 0x14:
    pcVar8 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
    break;
  case 0x15:
    pcVar8 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
    break;
  case 0x16:
    pcVar8 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
    break;
  case 0x17:
    pcVar8 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
    break;
  case 0x18:
    pcVar8 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
    break;
  case 0x19:
    pcVar8 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
    break;
  case 0x1a:
    pcVar8 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
    break;
  case 0x1b:
    pcVar8 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
    break;
  case 0x1c:
    pcVar8 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
    break;
  case 0x1d:
    pcVar8 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
    break;
  case 0x1e:
    pcVar8 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
    break;
  case 0x1f:
    pcVar8 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
    break;
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    uVar3 = *(uint *)((long)param_1 + 0x14);
    goto LAB_0000f5c4;
  case 0x22:
    goto switchD_0000f5bc_caseD_22;
  case 0x5c:
    iVar2 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                      (param_1);
    pcVar8 = "invalid string: forbidden character after backslash";
    if (iVar2 < 0x62) {
      if (iVar2 == 0x22) {
        uVar3 = 0x22;
      }
      else if (iVar2 == 0x2f) {
        uVar3 = 0x2f;
      }
      else {
        if (iVar2 != 0x5c) break;
        uVar3 = 0x5c;
      }
      goto LAB_0000f5c4;
    }
    switch(iVar2) {
    case 0x6e:
      uVar3 = 10;
      break;
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x73:
      goto switchD_0000f5bc_caseD_ffffffff;
    case 0x72:
      uVar3 = 0xd;
      break;
    case 0x74:
      uVar3 = 9;
      break;
    case 0x75:
      uVar3 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE13get_codepointEv
                        (param_1);
      if (uVar3 == 0xffffffff) {
LAB_0000f9d8:
        pcVar8 = "invalid string: \'\\u\' must be followed by 4 hex digits";
      }
      else if ((uVar3 & 0xfffffc00) == 0xd800) {
        iVar2 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                          (param_1);
        if ((iVar2 == 0x5c) &&
           (iVar2 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                              (param_1), iVar2 == 0x75)) {
          uVar4 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE13get_codepointEv
                            (param_1);
          if (uVar4 == 0xffffffff) goto LAB_0000f9d8;
          if (uVar4 >> 10 == 0x37) {
            uVar3 = uVar4 + uVar3 * 0x400 + 0xfca02400;
LAB_0000f778:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,uVar3 >> 0x12 | 0xfffffff0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,uVar3 >> 0xc & 0x3f | 0xffffff80);
LAB_0000f79c:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,uVar3 >> 6 & 0x3f | 0xffffff80);
            goto LAB_0000f7ac;
          }
        }
        pcVar8 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
      }
      else {
        if ((uVar3 & 0xfffffc00) != 0xdc00) {
          if (0x7f < (int)uVar3) {
            if (0x7ff < (int)uVar3) {
              if (0xffff < (int)uVar3) goto LAB_0000f778;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (plVar1,uVar3 >> 0xc | 0xffffffe0);
              goto LAB_0000f79c;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,uVar3 >> 6 | 0xffffffc0);
LAB_0000f7ac:
            uVar3 = uVar3 & 0x3f | 0xffffff80;
          }
          break;
        }
        pcVar8 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
      }
      goto switchD_0000f5bc_caseD_ffffffff;
    default:
      if (iVar2 == 0x62) {
        uVar3 = 8;
      }
      else {
        if (iVar2 != 0x66) goto switchD_0000f5bc_caseD_ffffffff;
        uVar3 = 0xc;
      }
    }
LAB_0000f5c4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (plVar1,(int)(char)uVar3);
    goto LAB_0000f594;
  default:
    pcVar8 = "invalid string: ill-formed UTF-8 byte";
    break;
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
    local_60 = 0xbf00000080;
    lVar7 = 2;
    goto LAB_0000f698;
  case 0xe0:
    local_60 = 0xbf000000a0;
    goto LAB_0000f5f8;
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xee:
  case 0xef:
    local_60 = 0xbf00000080;
    goto LAB_0000f5f8;
  case 0xed:
    local_60 = 0x9f00000080;
LAB_0000f5f8:
    uStack_58 = 0xbf00000080;
    lVar7 = 4;
LAB_0000f698:
    uVar6 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE18next_byte_in_rangeESt16initializer_listIiE
                      (param_1,(int *)&local_60,lVar7);
    if ((uVar6 & 1) == 0) {
LAB_0000f9a4:
      uVar5 = 0xe;
switchD_0000f5bc_caseD_22:
      if (*(long *)PTR____stack_chk_guard_00024040 == local_48) {
        return;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail(uVar5);
    }
    goto LAB_0000f594;
  case 0xf0:
    puVar9 = (undefined8 *)&DAT_00020994;
    goto LAB_0000f67c;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    puVar9 = (undefined8 *)&DAT_000209ac;
    goto LAB_0000f67c;
  case 0xf4:
    puVar9 = (undefined8 *)&DAT_000209c4;
LAB_0000f67c:
    uStack_58 = puVar9[1];
    local_60 = *puVar9;
    local_50 = puVar9[2];
    lVar7 = 6;
    goto LAB_0000f698;
  case -1:
    break;
  }
switchD_0000f5bc_caseD_ffffffff:
  param_1[0xd] = (long)pcVar8;
  goto LAB_0000f9a4;
}



undefined8
__ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE11scan_numberEv
          (long *param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  double dVar8;
  char *local_38;
  
  __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5resetEv
            ((long)param_1);
  iVar1 = *(int *)((long)param_1 + 0x14);
  if (iVar1 - 0x31U < 9) {
    iVar7 = 5;
LAB_0000fa30:
    while( true ) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 10,(int)(char)iVar1);
      iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                        (param_1);
      if (9 < iVar1 - 0x30U) break;
      iVar1 = *(int *)((long)param_1 + 0x14);
    }
    if (iVar1 != 0x2e) {
      if ((iVar1 != 0x45) && (iVar1 != 0x65)) {
LAB_0000fc1c:
        __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5ungetEv
                  ((long)param_1);
        local_38 = (char *)0x0;
        piVar2 = ___error();
        *piVar2 = 0;
        if (iVar7 == 6) {
          plVar3 = param_1 + 10;
          if (*(char *)((long)param_1 + 0x67) < '\0') {
            plVar3 = (long *)*plVar3;
          }
          lVar5 = _strtoll((char *)plVar3,&local_38,10);
          piVar2 = ___error();
          if (*piVar2 == 0) {
            param_1[0xe] = lVar5;
            return 6;
          }
        }
        else if (iVar7 == 5) {
          plVar3 = param_1 + 10;
          if (*(char *)((long)param_1 + 0x67) < '\0') {
            plVar3 = (long *)*plVar3;
          }
          uVar4 = _strtoull((char *)plVar3,&local_38,10);
          piVar2 = ___error();
          if (*piVar2 == 0) {
            param_1[0xf] = uVar4;
            return 5;
          }
        }
        goto LAB_0000faf0;
      }
      goto LAB_0000fa74;
    }
LAB_0000fbc4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1 + 10,(long)(char)param_1[0x11]);
    iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                      (param_1);
    if (9 < iVar1 - 0x30U) {
      pcVar6 = "invalid number; expected digit after \'.\'";
      goto LAB_0000fcf4;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 10,(long)*(char *)((long)param_1 + 0x14));
      iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                        (param_1);
    } while (iVar1 - 0x30U < 10);
    if ((iVar1 == 0x65) || (iVar1 == 0x45)) goto LAB_0000fa74;
  }
  else {
    if (iVar1 == 0x30) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 10,0x30);
      iVar7 = 5;
    }
    else {
      if (iVar1 == 0x2d) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1 + 10,0x2d);
      }
      iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                        (param_1);
      if (iVar1 - 0x31U < 9) {
        iVar1 = *(int *)((long)param_1 + 0x14);
        iVar7 = 6;
        goto LAB_0000fa30;
      }
      if (iVar1 != 0x30) {
        pcVar6 = "invalid number; expected digit after \'-\'";
        goto LAB_0000fcf4;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 10,(long)*(char *)((long)param_1 + 0x14));
      iVar7 = 6;
    }
    iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                      (param_1);
    if ((iVar1 != 0x65) && (iVar1 != 0x45)) {
      if (iVar1 != 0x2e) goto LAB_0000fc1c;
      goto LAB_0000fbc4;
    }
LAB_0000fa74:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1 + 10,(long)*(char *)((long)param_1 + 0x14));
    iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                      (param_1);
    if (9 < iVar1 - 0x30U) {
      if ((iVar1 != 0x2d) && (iVar1 != 0x2b)) {
        pcVar6 = "invalid number; expected \'+\', \'-\', or digit after exponent";
LAB_0000fcf4:
        param_1[0xd] = (long)pcVar6;
        return 0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 10,(long)*(char *)((long)param_1 + 0x14));
      iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                        (param_1);
      if (9 < iVar1 - 0x30U) {
        pcVar6 = "invalid number; expected digit after exponent sign";
        goto LAB_0000fcf4;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1 + 10,(long)*(char *)((long)param_1 + 0x14));
    iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                      (param_1);
    if (iVar1 - 0x30U < 10) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1 + 10,(long)*(char *)((long)param_1 + 0x14));
        iVar1 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                          (param_1);
      } while (iVar1 - 0x30U < 10);
    }
  }
  __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5ungetEv
            ((long)param_1);
  local_38 = (char *)0x0;
  piVar2 = ___error();
  *piVar2 = 0;
LAB_0000faf0:
  plVar3 = param_1 + 10;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    plVar3 = (long *)*plVar3;
  }
  dVar8 = _strtod((char *)plVar3,&local_38);
  param_1[0x10] = (long)dVar8;
  return 7;
}



int __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
              (long *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  size_t sVar9;
  uint uVar10;
  
  param_1[5] = param_1[5] + 1;
  param_1[4] = param_1[4] + 1;
  if ((char)param_1[3] == '\0') {
    pbVar2 = (byte *)*param_1;
    if (pbVar2 == (byte *)param_1[1]) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)*pbVar2;
      *param_1 = (long)(pbVar2 + 1);
    }
    *(uint *)((long)param_1 + 0x14) = uVar10;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
    uVar10 = *(uint *)((long)param_1 + 0x14);
  }
  if (uVar10 == 0xffffffff) {
    iVar4 = -1;
  }
  else {
    puVar3 = (undefined1 *)param_1[8];
    if (puVar3 < (undefined1 *)param_1[9]) {
      *puVar3 = (char)uVar10;
      param_1[8] = (long)(puVar3 + 1);
    }
    else {
      pvVar8 = (void *)param_1[7];
      sVar9 = (long)puVar3 - (long)pvVar8;
      uVar1 = sVar9 + 1;
      if ((long)uVar1 < 0) {
                    // WARNING: Subroutine does not return
        __ZNKSt3__113__vector_baseIcNS_9allocatorIcEEE20__throw_length_errorEv();
      }
      uVar6 = param_1[9] - (long)pvVar8;
      uVar7 = uVar6 * 2;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      if (0x3ffffffffffffffe < uVar6) {
        uVar1 = 0x7fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = (void *)__Znwm(uVar1);
      }
      *(undefined1 *)((long)pvVar5 + sVar9) = (char)uVar10;
      if (0 < (long)sVar9) {
        _memcpy(pvVar5,pvVar8,sVar9);
      }
      param_1[7] = (long)pvVar5;
      param_1[8] = (long)((undefined1 *)((long)pvVar5 + sVar9) + 1);
      param_1[9] = (long)pvVar5 + uVar1;
      if (pvVar8 != (void *)0x0) {
        __ZdlPv(pvVar8);
      }
    }
    iVar4 = *(int *)((long)param_1 + 0x14);
    if (iVar4 == 10) {
      param_1[5] = 0;
      param_1[6] = param_1[6] + 1;
    }
  }
  return iVar4;
}



void __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5ungetEv
               (long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  lVar2 = *plVar1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x30);
    lVar2 = *plVar1;
    if (lVar2 == 0) goto LAB_0000fe8c;
  }
  *plVar1 = lVar2 + -1;
LAB_0000fe8c:
  if (*(int *)(param_1 + 0x14) != -1) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
  }
  return;
}



void __ZNKSt3__113__vector_baseIcNS_9allocatorIcEEE20__throw_length_errorEv(void)

{
                    // WARNING: Subroutine does not return
  __ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv();
}



void __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE5resetEv
               (long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    **(undefined1 **)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  puVar5 = *(undefined1 **)(param_1 + 0x38);
  *(undefined1 **)(param_1 + 0x40) = puVar5;
  uVar1 = (undefined1)*(undefined4 *)(param_1 + 0x14);
  if (puVar5 < *(undefined1 **)(param_1 + 0x48)) {
    *puVar5 = uVar1;
    *(undefined1 **)(param_1 + 0x40) = puVar5 + 1;
  }
  else {
    uVar2 = (long)*(undefined1 **)(param_1 + 0x48) - (long)puVar5;
    lVar4 = uVar2 * 2;
    if (uVar2 == 0) {
      lVar4 = 1;
    }
    if (0x3ffffffffffffffe < uVar2) {
      lVar4 = 0x7fffffffffffffff;
    }
    puVar3 = (undefined1 *)__Znwm(lVar4);
    *puVar3 = uVar1;
    *(undefined1 **)(param_1 + 0x38) = puVar3;
    *(undefined1 **)(param_1 + 0x40) = puVar3 + 1;
    *(undefined1 **)(param_1 + 0x48) = puVar3 + lVar4;
    if (puVar5 != (undefined1 *)0x0) {
      __ZdlPv(puVar5);
      return;
    }
  }
  return;
}



int __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE13get_codepointEv
              (long *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint local_50 [4];
  
  iVar3 = 0;
  local_50[2] = 4;
  local_50[3] = 0;
  local_50[0] = 0xc;
  local_50[1] = 8;
  uVar5 = 0xc;
  lVar4 = 4;
  while( true ) {
    __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
              (param_1);
    iVar1 = *(int *)((long)param_1 + 0x14);
    uVar2 = iVar1 - 0x30;
    if (9 < uVar2) {
      if (iVar1 - 0x41U < 6) {
        uVar2 = iVar1 - 0x37;
      }
      else {
        if (5 < iVar1 - 0x61U) {
          return -1;
        }
        uVar2 = iVar1 - 0x57;
      }
    }
    iVar3 = (uVar2 << (ulong)(uVar5 & 0x1f)) + iVar3;
    if (lVar4 == 0x10) break;
    uVar5 = *(uint *)((long)local_50 + lVar4);
    lVar4 = lVar4 + 4;
  }
  return iVar3;
}



undefined8
__ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE18next_byte_in_rangeESt16initializer_listIiE
          (long *param_1,int *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (param_1 + 10,(long)*(char *)((long)param_1 + 0x14));
  if (param_3 != 0) {
    piVar1 = param_2 + param_3;
    do {
      __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE3getEv
                (param_1);
      iVar2 = *(int *)((long)param_1 + 0x14);
      if ((iVar2 < *param_2) || (param_2[1] < iVar2)) {
        param_1[0xd] = (long)"invalid string: ill-formed UTF-8 byte";
        return 0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 10,(int)(char)iVar2);
      param_2 = param_2 + 2;
    } while (param_2 != piVar1);
  }
  return 1;
}



long __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEED2Ev
               (long param_1)

{
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  return param_1;
}



long __ZNSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEC2ERKSJ_
               (long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (param_2 == plVar1) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(param_1 + 0x18) = uVar2;
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000105b0)

undefined8
__ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE18sax_parse_internalINS0_28json_sax_dom_callback_parserISF_EEEEbPT_
          (long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  double dVar7;
  byte local_108 [8];
  undefined8 local_100;
  undefined8 local_f8 [2];
  char local_e1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined *local_a8 [2];
  undefined1 auStack_98 [24];
  undefined8 local_80 [3];
  long local_68;
  long local_60;
  undefined8 local_58;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  puVar5 = (undefined8 *)(param_1 + 0x78);
  plVar1 = (long *)(param_1 + 0x28);
LAB_000101a0:
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    local_a8[0] = (undefined *)CONCAT71(local_a8[0]._1_7_,1);
    __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRbEENS3_4pairIbPSF_EEOT_b
              (param_2,(byte *)local_a8,0);
    break;
  case 2:
    local_a8[0] = (undefined *)((ulong)local_a8[0]._1_7_ << 8);
    __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRbEENS3_4pairIbPSF_EEOT_b
              (param_2,(byte *)local_a8,0);
    break;
  case 3:
    local_a8[0] = (undefined *)0x0;
    __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIDnEENS3_4pairIbPSF_EEOT_b
              (param_2,local_a8,0);
    break;
  case 4:
    __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRSB_EENS3_4pairIbPSF_EEOT_b
              (param_2,puVar5,0);
    break;
  case 5:
    local_a8[0] = *(undefined **)(param_1 + 0xa0);
    __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRyEENS3_4pairIbPSF_EEOT_b
              (param_2,local_a8,0);
    break;
  case 6:
    local_a8[0] = *(undefined **)(param_1 + 0x98);
    __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRxEENS3_4pairIbPSF_EEOT_b
              (param_2,local_a8,0);
    break;
  case 7:
    dVar7 = ABS((double)*(undefined **)(param_1 + 0xa8));
    if ((INFINITY <= dVar7) && (dVar7 <= INFINITY)) {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                (local_80,(long)plVar1);
      __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                (local_f8,(long)plVar1);
      puVar5 = (undefined8 *)
               __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                         (local_f8,0,"number overflow parsing \'");
      uStack_d8 = puVar5[1];
      local_e0 = *puVar5;
      local_d0 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5 = (undefined8 *)
               __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                         (&local_e0,"\'");
      uStack_b8 = puVar5[1];
      local_c0 = *puVar5;
      local_b0 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      local_108[0] = 0;
      local_100 = 0;
      __ZN8nlohmann6detail12out_of_range6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
                (local_a8,0x196,&local_c0);
      uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_12out_of_rangeEEEbmRKSB_RKT_
                        ((long)param_2,uVar6,local_80,(long)local_a8);
      local_a8[0] = &DAT_00028898;
      __ZNSt13runtime_errorD1Ev(auStack_98);
      __ZNSt9exceptionD2Ev(local_a8);
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_108);
      if (local_b0 < 0) {
        __ZdlPv(local_c0);
      }
      goto LAB_00010588;
    }
    local_a8[0] = *(undefined **)(param_1 + 0xa8);
    __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRdEENS3_4pairIbPSF_EEOT_b
              (param_2,local_a8,0);
    break;
  case 8:
    uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11start_arrayEm
                      (param_2,0xffffffffffffffff);
    if ((int)uVar6 == 0) {
LAB_000105bc:
      uVar6 = 0;
      goto LAB_00010438;
    }
    uVar6 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                      (plVar1);
    *(int *)(param_1 + 0x20) = (int)uVar6;
    if ((int)uVar6 == 10) {
      uVar4 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE9end_arrayEv
                        ((long)param_2);
LAB_00010280:
      if ((uVar4 & 1) != 0) break;
      goto LAB_000105bc;
    }
    local_a8[0] = (undefined *)CONCAT71(local_a8[0]._1_7_,1);
    __ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(&local_68,(char *)local_a8);
    goto LAB_000101a0;
  case 9:
    uVar4 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12start_objectEm
                      (param_2,0xffffffffffffffff);
    if ((uVar4 & 1) == 0) goto LAB_000105bc;
    uVar6 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                      (plVar1);
    iVar2 = (int)uVar6;
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 0xb) {
      uVar4 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE10end_objectEv
                        ((long)param_2);
      goto LAB_00010280;
    }
    if (iVar2 == 4) {
      uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE3keyERSB_
                        ((long)param_2,puVar5);
      if ((int)uVar6 == 0) goto LAB_000105bc;
      uVar6 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                        (plVar1);
      *(int *)(param_1 + 0x20) = (int)uVar6;
      if ((int)uVar6 == 0xc) {
        local_a8[0] = (undefined *)((ulong)local_a8[0] & 0xffffffffffffff00);
        __ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(&local_68,(char *)local_a8);
        uVar6 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                          (plVar1);
        uVar3 = (undefined4)uVar6;
        goto LAB_000103d0;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                (local_80,(long)plVar1);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      local_c0 = *(undefined8 *)(param_1 + 0x48);
      local_b0 = *(long *)(param_1 + 0x58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                (local_f8,"object separator");
      __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                (&local_e0,param_1,0xc,(long)local_f8);
      local_108[0] = 0;
      local_100 = 0;
      __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                (local_a8,0x65,&local_c0,&local_e0);
      uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                        ((long)param_2,uVar6,local_80,(long)local_a8);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                (local_80,(long)plVar1);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      local_c0 = *(undefined8 *)(param_1 + 0x48);
      local_b0 = *(long *)(param_1 + 0x58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                (local_f8,"object key");
      __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                (&local_e0,param_1,4,(long)local_f8);
      local_108[0] = 0;
      local_100 = 0;
      __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                (local_a8,0x65,&local_c0,&local_e0);
      uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                        ((long)param_2,uVar6,local_80,(long)local_a8);
    }
    goto LAB_00010560;
  default:
    goto switchD_000101bc_caseD_a;
  case 0xe:
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
              (local_80,(long)plVar1);
    uStack_b8 = *(undefined8 *)(param_1 + 0x50);
    local_c0 = *(undefined8 *)(param_1 + 0x48);
    local_b0 = *(long *)(param_1 + 0x58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(local_f8,"value");
    __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
              (&local_e0,param_1,0,(long)local_f8);
    local_108[0] = 0;
    local_100 = 0;
    __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
              (local_a8,0x65,&local_c0,&local_e0);
    uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                      ((long)param_2,uVar6,local_80,(long)local_a8);
    goto LAB_00010560;
  }
  if (local_60 != 0) {
    do {
      if ((*(ulong *)(local_68 + (local_60 - 1U >> 3 & 0x1ffffffffffffff8)) >>
           (local_60 - 1U & 0x3f) & 1) == 0) {
        uVar6 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                          (plVar1);
        iVar2 = (int)uVar6;
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) {
          uVar6 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                            (plVar1);
          *(int *)(param_1 + 0x20) = (int)uVar6;
          if ((int)uVar6 != 4) {
            uVar6 = *(undefined8 *)(param_1 + 0x48);
            __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                      (local_80,(long)plVar1);
            uStack_b8 = *(undefined8 *)(param_1 + 0x50);
            local_c0 = *(undefined8 *)(param_1 + 0x48);
            local_b0 = *(long *)(param_1 + 0x58);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                      (local_f8,"object key");
            __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                      (&local_e0,param_1,4,(long)local_f8);
            local_108[0] = 0;
            local_100 = 0;
            __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                      (local_a8,0x65,&local_c0,&local_e0);
            uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                              ((long)param_2,uVar6,local_80,(long)local_a8);
            goto LAB_00010560;
          }
          uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE3keyERSB_
                            ((long)param_2,puVar5);
          if ((int)uVar6 == 0) goto LAB_000105bc;
          uVar6 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                            (plVar1);
          *(int *)(param_1 + 0x20) = (int)uVar6;
          if ((int)uVar6 != 0xc) {
            uVar6 = *(undefined8 *)(param_1 + 0x48);
            __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                      (local_80,(long)plVar1);
            uStack_b8 = *(undefined8 *)(param_1 + 0x50);
            local_c0 = *(undefined8 *)(param_1 + 0x48);
            local_b0 = *(long *)(param_1 + 0x58);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                      (local_f8,"object separator");
            __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                      (&local_e0,param_1,0xc,(long)local_f8);
            local_108[0] = 0;
            local_100 = 0;
            __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                      (local_a8,0x65,&local_c0,&local_e0);
            uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                              ((long)param_2,uVar6,local_80,(long)local_a8);
            goto LAB_00010560;
          }
          uVar6 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                            (plVar1);
          uVar3 = (undefined4)uVar6;
          goto LAB_000103d0;
        }
        if (iVar2 != 0xb) {
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                    (local_80,(long)plVar1);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          local_c0 = *(undefined8 *)(param_1 + 0x48);
          local_b0 = *(long *)(param_1 + 0x58);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                    (local_f8,"object");
          __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                    (&local_e0,param_1,0xb,(long)local_f8);
          local_108[0] = 0;
          local_100 = 0;
          __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                    (local_a8,0x65,&local_c0,&local_e0);
          uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                            ((long)param_2,uVar6,local_80,(long)local_a8);
          goto LAB_00010560;
        }
        uVar4 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE10end_objectEv
                          ((long)param_2);
        if ((uVar4 & 1) == 0) goto LAB_000105bc;
      }
      else {
        uVar6 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                          (plVar1);
        iVar2 = (int)uVar6;
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) goto LAB_00010384;
        if (iVar2 != 10) {
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                    (local_80,(long)plVar1);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          local_c0 = *(undefined8 *)(param_1 + 0x48);
          local_b0 = *(long *)(param_1 + 0x58);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                    (local_f8,"array");
          __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                    (&local_e0,param_1,10,(long)local_f8);
          local_108[0] = 0;
          local_100 = 0;
          __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                    (local_a8,0x65,&local_c0,&local_e0);
          uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                            ((long)param_2,uVar6,local_80,(long)local_a8);
          goto LAB_00010560;
        }
        uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE9end_arrayEv
                          ((long)param_2);
        if ((int)uVar6 == 0) goto LAB_000105bc;
      }
      local_60 = local_60 + -1;
      if (local_60 == 0) break;
    } while( true );
  }
  uVar6 = 1;
  goto LAB_00010438;
LAB_00010384:
  uVar6 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                    (plVar1);
  uVar3 = (undefined4)uVar6;
LAB_000103d0:
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  goto LAB_000101a0;
switchD_000101bc_caseD_a:
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
            (local_80,(long)plVar1);
  uStack_b8 = *(undefined8 *)(param_1 + 0x50);
  local_c0 = *(undefined8 *)(param_1 + 0x48);
  local_b0 = *(long *)(param_1 + 0x58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(local_f8,"value");
  __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
            (&local_e0,param_1,0x10,(long)local_f8);
  local_108[0] = 0;
  local_100 = 0;
  __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
            (local_a8,0x65,&local_c0,&local_e0);
  uVar6 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                    ((long)param_2,uVar6,local_80,(long)local_a8);
LAB_00010560:
  local_a8[0] = &DAT_00028898;
  __ZNSt13runtime_errorD1Ev(auStack_98);
  __ZNSt9exceptionD2Ev(local_a8);
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_108);
LAB_00010588:
  if (local_d0 < 0) {
    __ZdlPv(local_e0);
  }
  if (local_e1 < '\0') {
    __ZdlPv(local_f8[0]);
  }
LAB_00010438:
  if (local_68 != 0) {
    __ZdlPv();
  }
  return uVar6;
}



undefined8
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(char *)(param_1 + 0x80) == '\0') {
    return 0;
  }
  puVar1 = (undefined8 *)___cxa_allocate_exception(0x28);
  puVar1 = __ZN8nlohmann6detail11parse_errorC1ERKS1_(puVar1,param_4);
                    // WARNING: Subroutine does not return
  ___cxa_throw(puVar1,&__ZTIN8nlohmann6detail11parse_errorE,__ZN8nlohmann6detail11parse_errorD1Ev);
}



void __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
               (undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint in_w3;
  undefined8 uStack_48;
  undefined1 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00024040;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pbVar2 = *(byte **)(param_2 + 0x40);
  for (pbVar1 = *(byte **)(param_2 + 0x38); pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
    if (*pbVar1 < 0x20) {
      local_40 = 0;
      uStack_48 = 0;
      _snprintf((char *)&uStack_48,9,"<U+%.4X>",in_w3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&uStack_48);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(int)(char)*pbVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00024040 == local_38) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



// WARNING: Removing unreachable block (ram,0x00010dd8)
// WARNING: Removing unreachable block (ram,0x00010db8)
// WARNING: Removing unreachable block (ram,0x00010e6c)

void __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *local_140;
  ulong uStack_138;
  byte local_129;
  undefined8 **local_128;
  ulong uStack_120;
  byte local_111;
  undefined8 local_110 [2];
  char local_f9;
  undefined8 local_f8 [2];
  char local_e1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
            (local_110,"parse_error");
  __ZN8nlohmann6detail9exception4nameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi
            (local_f8,local_110,param_2);
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                     (local_f8,"parse error");
  uStack_d8 = puVar4[1];
  local_e0 = *puVar4;
  local_d0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  __ZN8nlohmann6detail11parse_error15position_stringERKNS0_10position_tE(&local_128,(long)param_3);
  pppuVar2 = (undefined8 ***)local_128;
  if (-1 < (char)local_111) {
    uStack_120 = (ulong)local_111;
    pppuVar2 = &local_128;
  }
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                     (&local_e0,pppuVar2,uStack_120);
  uStack_b8 = puVar4[1];
  local_c0 = *puVar4;
  local_b0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                     (&local_c0,": ");
  uStack_98 = puVar4[1];
  local_a0 = *puVar4;
  local_90 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(&local_140,"");
  ppuVar3 = (undefined1 **)local_140;
  if (-1 < (char)local_129) {
    uStack_138 = (ulong)local_129;
    ppuVar3 = &local_140;
  }
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                     (&local_a0,ppuVar3,uStack_138);
  uStack_78 = puVar4[1];
  local_80 = *puVar4;
  local_70 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = param_4[1];
  puVar4 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar4 = param_4;
  }
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                     (&local_80,puVar4,uVar1);
  uStack_58 = puVar4[1];
  local_60 = *puVar4;
  local_50 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((char)local_129 < '\0') {
    __ZdlPv(local_140);
  }
  if (local_b0 < 0) {
    __ZdlPv(local_c0);
  }
  if ((char)local_111 < '\0') {
    __ZdlPv(local_128);
  }
  if (local_d0 < 0) {
    __ZdlPv(local_e0);
  }
  if (local_e1 < '\0') {
    __ZdlPv(local_f8[0]);
  }
  if (local_f9 < '\0') {
    __ZdlPv(local_110[0]);
  }
  uVar5 = *param_3;
  __ZN8nlohmann6detail9exceptionC2EiPKc(param_1,(int)param_2,&local_60);
  *param_1 = &DAT_000289d8;
  param_1[4] = uVar5;
  return;
}



// WARNING: Removing unreachable block (ram,0x000111d0)
// WARNING: Removing unreachable block (ram,0x00011018)
// WARNING: Removing unreachable block (ram,0x00011120)
// WARNING: Removing unreachable block (ram,0x00011260)
// WARNING: Type propagation algorithm not settling

void __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
               (undefined8 *param_1,long param_2,uint param_3,long param_4)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined1 *local_c0;
  ulong uStack_b8;
  byte local_a9;
  undefined8 local_a8 [2];
  char local_91;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 *******local_50;
  ulong uStack_48;
  ulong local_40;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
            (param_1,"syntax error ");
  uVar1 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar1 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&local_70,"while parsing ",param_4);
    puVar4 = (undefined8 *)
             __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                       (&local_70," ");
    uStack_48 = puVar4[1];
    local_50 = (undefined8 *******)*puVar4;
    local_40 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uVar1 = uStack_48;
    pppppppuVar2 = local_50;
    if (-1 < (long)local_40) {
      uVar1 = local_40 >> 0x38;
      pppppppuVar2 = &local_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar2,uVar1);
    if (local_60 < 0) {
      __ZdlPv(local_70);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,"- ");
  if (*(uint *)(param_2 + 0x20) == 0xe) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
              (local_a8,*(char **)(param_2 + 0x90));
    puVar4 = (undefined8 *)
             __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                       (local_a8,"; last read: \'");
    uStack_88 = puVar4[1];
    local_90 = *puVar4;
    local_80 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
              (&local_c0,param_2 + 0x28);
    ppuVar3 = (undefined1 **)local_c0;
    if (-1 < (char)local_a9) {
      uStack_b8 = (ulong)local_a9;
      ppuVar3 = &local_c0;
    }
    puVar4 = (undefined8 *)
             __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                       (&local_90,ppuVar3,uStack_b8);
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    local_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4 = (undefined8 *)
             __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                       (&local_70,"\'");
    uStack_48 = puVar4[1];
    local_50 = (undefined8 *******)*puVar4;
    local_40 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uVar1 = uStack_48;
    pppppppuVar2 = local_50;
    if (-1 < (long)local_40) {
      uVar1 = local_40 >> 0x38;
      pppppppuVar2 = &local_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar2,uVar1);
    if (local_60 < 0) {
      __ZdlPv(local_70);
    }
    if ((char)local_a9 < '\0') {
      __ZdlPv(local_c0);
    }
    if (local_80 < 0) {
      __ZdlPv(local_90);
    }
    if (-1 < local_91) goto joined_r0x000111e0;
  }
  else {
    pcVar5 = __ZN8nlohmann6detail10lexer_baseINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE15token_type_nameENSG_10token_typeE
                       (*(uint *)(param_2 + 0x20));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(&local_70,pcVar5);
    puVar4 = (undefined8 *)
             __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                       (&local_70,0,"unexpected ");
    uStack_48 = puVar4[1];
    local_50 = (undefined8 *******)*puVar4;
    local_40 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uVar1 = uStack_48;
    pppppppuVar2 = local_50;
    if (-1 < (long)local_40) {
      uVar1 = local_40 >> 0x38;
      pppppppuVar2 = &local_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar2,uVar1);
    local_a8[0] = local_70;
    if (-1 < local_60) goto joined_r0x000111e0;
  }
  __ZdlPv(local_a8[0]);
joined_r0x000111e0:
  if (param_3 != 0) {
    pcVar5 = __ZN8nlohmann6detail10lexer_baseINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE15token_type_nameENSG_10token_typeE
                       (param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(&local_70,pcVar5);
    puVar4 = (undefined8 *)
             __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                       (&local_70,0,"; expected ");
    uStack_48 = puVar4[1];
    local_50 = (undefined8 *******)*puVar4;
    local_40 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uVar1 = uStack_48;
    pppppppuVar2 = local_50;
    if (-1 < (long)local_40) {
      uVar1 = local_40 >> 0x38;
      pppppppuVar2 = &local_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar2,uVar1);
    if (local_60 < 0) {
      __ZdlPv(local_70);
    }
  }
  return;
}



void __ZN8nlohmann6detail11parse_errorD1Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028898;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(param_1);
  return;
}



// WARNING: Removing unreachable block (ram,0x00011978)

undefined8
__ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE18sax_parse_internalINS0_19json_sax_dom_parserISF_EEEEbPT_
          (long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  void *pvVar13;
  size_t sVar14;
  double dVar15;
  undefined1 auVar16 [16];
  byte local_128 [8];
  undefined8 local_120;
  undefined8 local_118 [2];
  char local_101;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 *local_c0 [2];
  undefined1 auStack_b0 [24];
  undefined8 local_98 [3];
  long local_80;
  long local_78;
  undefined8 local_70;
  
  puVar9 = (undefined8 *)(param_1 + 0x78);
  plVar1 = (long *)(param_1 + 0x28);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
LAB_000113dc:
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    local_c0[0] = (undefined8 *)CONCAT71(local_c0[0]._1_7_,1);
    __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRbEEPSF_OT_
              (param_2,(byte *)local_c0);
    break;
  case 2:
    local_c0[0] = (undefined8 *)((ulong)local_c0[0]._1_7_ << 8);
    __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRbEEPSF_OT_
              (param_2,(byte *)local_c0);
    break;
  case 3:
    local_c0[0] = (undefined8 *)0x0;
    __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIDnEEPSF_OT_
              (param_2);
    break;
  case 4:
    __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRSB_EEPSF_OT_
              (param_2,puVar9);
    break;
  case 5:
    local_c0[0] = *(undefined8 **)(param_1 + 0xa0);
    __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRyEEPSF_OT_
              (param_2,local_c0);
    break;
  case 6:
    local_c0[0] = *(undefined8 **)(param_1 + 0x98);
    __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRxEEPSF_OT_
              (param_2,local_c0);
    break;
  case 7:
    dVar15 = ABS((double)*(undefined8 **)(param_1 + 0xa8));
    if ((INFINITY <= dVar15) && (dVar15 <= INFINITY)) {
      uVar12 = *(undefined8 *)(param_1 + 0x48);
      __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                (local_98,(long)plVar1);
      __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                (local_118,(long)plVar1);
      puVar9 = (undefined8 *)
               __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                         (local_118,0,"number overflow parsing \'");
      uStack_f8 = puVar9[1];
      local_100 = *puVar9;
      local_f0 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      puVar9 = (undefined8 *)
               __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                         (&local_100,"\'");
      uStack_d8 = puVar9[1];
      local_e0 = *puVar9;
      local_d0 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      local_128[0] = 0;
      local_120 = 0;
      __ZN8nlohmann6detail12out_of_range6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
                (local_c0,0x196,&local_e0);
      uVar12 = __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_12out_of_rangeEEEbmRKSB_RKT_
                         ((long)param_2,uVar12,local_98,(long)local_c0);
      local_c0[0] = (undefined8 *)&DAT_00028898;
      __ZNSt13runtime_errorD1Ev(auStack_b0);
      __ZNSt9exceptionD2Ev(local_c0);
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_128);
      if (local_d0 < 0) {
        __ZdlPv(local_e0);
      }
      goto LAB_00011950;
    }
    local_c0[0] = *(undefined8 **)(param_1 + 0xa8);
    __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRdEEPSF_OT_
              (param_2,local_c0);
    break;
  case 8:
    local_c0[0] = (undefined8 *)CONCAT71(local_c0[0]._1_7_,2);
    lVar7 = __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueINS0_7value_tEEEPSF_OT_
                      (param_2,(byte *)local_c0);
    plVar3 = (long *)param_2[2];
    if (plVar3 < (long *)param_2[3]) {
      *plVar3 = lVar7;
      param_2[2] = (long)(plVar3 + 1);
    }
    else {
      pvVar13 = (void *)param_2[1];
      sVar14 = (long)plVar3 - (long)pvVar13;
      uVar2 = ((long)sVar14 >> 3) + 1;
      if (uVar2 >> 0x3d != 0) {
        __ZNKSt3__113__vector_baseIPN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISF_EEE20__throw_length_errorEv
                  ();
LAB_00011d78:
                    // WARNING: Does not return
        pcVar4 = (code *)SoftwareBreakpoint(1,0x11d7c);
        (*pcVar4)();
      }
      lVar10 = param_2[3] - (long)pvVar13;
      uVar11 = lVar10 >> 2;
      if (uVar2 <= uVar11) {
        uVar2 = uVar11;
      }
      if (0xffffffffffffffe < (ulong)(lVar10 >> 3)) {
        uVar2 = 0x1fffffffffffffff;
      }
      if (uVar2 == 0) {
        pvVar8 = (void *)0x0;
      }
      else {
        if (uVar2 >> 0x3d != 0) {
          __ZNSt3__1L20__throw_length_errorEPKc();
          goto LAB_00011d78;
        }
        pvVar8 = (void *)__Znwm(uVar2 << 3);
      }
      plVar3 = (long *)((long)pvVar8 + ((long)sVar14 >> 3) * 8);
      *plVar3 = lVar7;
      if (0 < (long)sVar14) {
        _memcpy(pvVar8,pvVar13,sVar14);
      }
      param_2[1] = (long)pvVar8;
      param_2[2] = (long)(plVar3 + 1);
      param_2[3] = (long)((long)pvVar8 + uVar2 * 8);
      if (pvVar13 != (void *)0x0) {
        __ZdlPv(pvVar13);
      }
    }
    uVar12 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                       (plVar1);
    *(int *)(param_1 + 0x20) = (int)uVar12;
    if ((int)uVar12 == 10) {
LAB_00011690:
      param_2[2] = param_2[2] + -8;
      break;
    }
    local_c0[0] = (undefined8 *)CONCAT71(local_c0[0]._1_7_,1);
    __ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(&local_80,(char *)local_c0);
    goto LAB_000113dc;
  case 9:
    local_c0[0] = (undefined8 *)CONCAT71(local_c0[0]._1_7_,1);
    lVar7 = __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueINS0_7value_tEEEPSF_OT_
                      (param_2,(byte *)local_c0);
    plVar3 = (long *)param_2[2];
    if (plVar3 < (long *)param_2[3]) {
      *plVar3 = lVar7;
      param_2[2] = (long)(plVar3 + 1);
    }
    else {
      pvVar13 = (void *)param_2[1];
      sVar14 = (long)plVar3 - (long)pvVar13;
      uVar2 = ((long)sVar14 >> 3) + 1;
      if (uVar2 >> 0x3d != 0) {
        __ZNKSt3__113__vector_baseIPN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISF_EEE20__throw_length_errorEv
                  ();
        goto LAB_00011d78;
      }
      lVar10 = param_2[3] - (long)pvVar13;
      uVar11 = lVar10 >> 2;
      if (uVar2 <= uVar11) {
        uVar2 = uVar11;
      }
      if (0xffffffffffffffe < (ulong)(lVar10 >> 3)) {
        uVar2 = 0x1fffffffffffffff;
      }
      if (uVar2 == 0) {
        pvVar8 = (void *)0x0;
      }
      else {
        if (uVar2 >> 0x3d != 0) {
          __ZNSt3__1L20__throw_length_errorEPKc();
          goto LAB_00011d78;
        }
        pvVar8 = (void *)__Znwm(uVar2 << 3);
      }
      plVar3 = (long *)((long)pvVar8 + ((long)sVar14 >> 3) * 8);
      *plVar3 = lVar7;
      if (0 < (long)sVar14) {
        _memcpy(pvVar8,pvVar13,sVar14);
      }
      param_2[1] = (long)pvVar8;
      param_2[2] = (long)(plVar3 + 1);
      param_2[3] = (long)((long)pvVar8 + uVar2 * 8);
      if (pvVar13 != (void *)0x0) {
        __ZdlPv(pvVar13);
      }
    }
    uVar12 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                       (plVar1);
    iVar5 = (int)uVar12;
    *(int *)(param_1 + 0x20) = iVar5;
    if (iVar5 == 0xb) goto LAB_00011690;
    if (iVar5 == 4) {
      local_c0[0] = puVar9;
      auVar16 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_
                          (*(long **)(*(long *)(param_2[2] + -8) + 8),puVar9,
                           &__ZNSt3__1L19piecewise_constructE,local_c0);
      param_2[4] = auVar16._0_8_ + 0x38;
      uVar12 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                         (plVar1);
      *(int *)(param_1 + 0x20) = (int)uVar12;
      if ((int)uVar12 == 0xc) {
        local_c0[0] = (undefined8 *)((ulong)local_c0[0] & 0xffffffffffffff00);
        __ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(&local_80,(char *)local_c0);
        uVar12 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                           (plVar1);
        uVar6 = (undefined4)uVar12;
        goto LAB_00011788;
      }
      uVar12 = *(undefined8 *)(param_1 + 0x48);
      __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                (local_98,(long)plVar1);
      uStack_d8 = *(undefined8 *)(param_1 + 0x50);
      local_e0 = *(undefined8 *)(param_1 + 0x48);
      local_d0 = *(long *)(param_1 + 0x58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                (local_118,"object separator");
      __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                (&local_100,param_1,0xc,(long)local_118);
      local_128[0] = 0;
      local_120 = 0;
      __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                (local_c0,0x65,&local_e0,&local_100);
      uVar12 = __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                         ((long)param_2,uVar12,local_98,(long)local_c0);
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 0x48);
      __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                (local_98,(long)plVar1);
      uStack_d8 = *(undefined8 *)(param_1 + 0x50);
      local_e0 = *(undefined8 *)(param_1 + 0x48);
      local_d0 = *(long *)(param_1 + 0x58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                (local_118,"object key");
      __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                (&local_100,param_1,4,(long)local_118);
      local_128[0] = 0;
      local_120 = 0;
      __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                (local_c0,0x65,&local_e0,&local_100);
      uVar12 = __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                         ((long)param_2,uVar12,local_98,(long)local_c0);
    }
    goto LAB_00011928;
  default:
    goto switchD_00011400_caseD_a;
  case 0xe:
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
              (local_98,(long)plVar1);
    uStack_d8 = *(undefined8 *)(param_1 + 0x50);
    local_e0 = *(undefined8 *)(param_1 + 0x48);
    local_d0 = *(long *)(param_1 + 0x58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(local_118,"value");
    __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
              (&local_100,param_1,0,(long)local_118);
    local_128[0] = 0;
    local_120 = 0;
    __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
              (local_c0,0x65,&local_e0,&local_100);
    uVar12 = __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                       ((long)param_2,uVar12,local_98,(long)local_c0);
    goto LAB_00011928;
  }
  if (local_78 != 0) {
    do {
      if ((*(ulong *)(local_80 + (local_78 - 1U >> 3 & 0x1ffffffffffffff8)) >>
           (local_78 - 1U & 0x3f) & 1) == 0) {
        uVar12 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                           (plVar1);
        iVar5 = (int)uVar12;
        *(int *)(param_1 + 0x20) = iVar5;
        if (iVar5 == 0xd) {
          uVar12 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                             (plVar1);
          *(int *)(param_1 + 0x20) = (int)uVar12;
          if ((int)uVar12 != 4) {
            uVar12 = *(undefined8 *)(param_1 + 0x48);
            __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                      (local_98,(long)plVar1);
            uStack_d8 = *(undefined8 *)(param_1 + 0x50);
            local_e0 = *(undefined8 *)(param_1 + 0x48);
            local_d0 = *(long *)(param_1 + 0x58);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                      (local_118,"object key");
            __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                      (&local_100,param_1,4,(long)local_118);
            local_128[0] = 0;
            local_120 = 0;
            __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                      (local_c0,0x65,&local_e0,&local_100);
            uVar12 = __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                               ((long)param_2,uVar12,local_98,(long)local_c0);
            goto LAB_00011928;
          }
          local_c0[0] = puVar9;
          auVar16 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_
                              (*(long **)(*(long *)(param_2[2] + -8) + 8),puVar9,
                               &__ZNSt3__1L19piecewise_constructE,local_c0);
          param_2[4] = auVar16._0_8_ + 0x38;
          uVar12 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                             (plVar1);
          *(int *)(param_1 + 0x20) = (int)uVar12;
          if ((int)uVar12 != 0xc) {
            uVar12 = *(undefined8 *)(param_1 + 0x48);
            __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                      (local_98,(long)plVar1);
            uStack_d8 = *(undefined8 *)(param_1 + 0x50);
            local_e0 = *(undefined8 *)(param_1 + 0x48);
            local_d0 = *(long *)(param_1 + 0x58);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                      (local_118,"object separator");
            __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                      (&local_100,param_1,0xc,(long)local_118);
            local_128[0] = 0;
            local_120 = 0;
            __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                      (local_c0,0x65,&local_e0,&local_100);
            uVar12 = __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                               ((long)param_2,uVar12,local_98,(long)local_c0);
            goto LAB_00011928;
          }
          uVar12 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                             (plVar1);
          uVar6 = (undefined4)uVar12;
          goto LAB_00011788;
        }
        if (iVar5 != 0xb) {
          uVar12 = *(undefined8 *)(param_1 + 0x48);
          __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                    (local_98,(long)plVar1);
          uStack_d8 = *(undefined8 *)(param_1 + 0x50);
          local_e0 = *(undefined8 *)(param_1 + 0x48);
          local_d0 = *(long *)(param_1 + 0x58);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                    (local_118,"object");
          __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                    (&local_100,param_1,0xb,(long)local_118);
          local_128[0] = 0;
          local_120 = 0;
          __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                    (local_c0,0x65,&local_e0,&local_100);
          uVar12 = __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                             ((long)param_2,uVar12,local_98,(long)local_c0);
          goto LAB_00011928;
        }
      }
      else {
        uVar12 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                           (plVar1);
        iVar5 = (int)uVar12;
        *(int *)(param_1 + 0x20) = iVar5;
        if (iVar5 == 0xd) goto LAB_0001171c;
        if (iVar5 != 10) {
          uVar12 = *(undefined8 *)(param_1 + 0x48);
          __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
                    (local_98,(long)plVar1);
          uStack_d8 = *(undefined8 *)(param_1 + 0x50);
          local_e0 = *(undefined8 *)(param_1 + 0x48);
          local_d0 = *(long *)(param_1 + 0x58);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                    (local_118,"array");
          __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
                    (&local_100,param_1,10,(long)local_118);
          local_128[0] = 0;
          local_120 = 0;
          __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
                    (local_c0,0x65,&local_e0,&local_100);
          uVar12 = __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                             ((long)param_2,uVar12,local_98,(long)local_c0);
          goto LAB_00011928;
        }
      }
      param_2[2] = param_2[2] + -8;
      local_78 = local_78 + -1;
      if (local_78 == 0) break;
    } while( true );
  }
  uVar12 = 1;
  goto LAB_000117fc;
LAB_0001171c:
  uVar12 = __ZN8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE4scanEv
                     (plVar1);
  uVar6 = (undefined4)uVar12;
LAB_00011788:
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  goto LAB_000113dc;
switchD_00011400_caseD_a:
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  __ZNK8nlohmann6detail5lexerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE16get_token_stringEv
            (local_98,(long)plVar1);
  uStack_d8 = *(undefined8 *)(param_1 + 0x50);
  local_e0 = *(undefined8 *)(param_1 + 0x48);
  local_d0 = *(long *)(param_1 + 0x58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(local_118,"value");
  __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEE17exception_messageENS0_10lexer_baseISF_E10token_typeERKSB_
            (&local_100,param_1,0x10,(long)local_118);
  local_128[0] = 0;
  local_120 = 0;
  __ZN8nlohmann6detail11parse_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKNS0_10position_tERKSC_RKT_
            (local_c0,0x65,&local_e0,&local_100);
  uVar12 = __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
                     ((long)param_2,uVar12,local_98,(long)local_c0);
LAB_00011928:
  local_c0[0] = (undefined8 *)&DAT_00028898;
  __ZNSt13runtime_errorD1Ev(auStack_b0);
  __ZNSt9exceptionD2Ev(local_c0);
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_128);
LAB_00011950:
  if (local_f0 < 0) {
    __ZdlPv(local_100);
  }
  if (local_101 < '\0') {
    __ZdlPv(local_118[0]);
  }
LAB_000117fc:
  if (local_80 != 0) {
    __ZdlPv();
  }
  return uVar12;
}



undefined8
__ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_11parse_errorEEEbmRKSB_RKT_
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(char *)(param_1 + 0x29) == '\0') {
    return 0;
  }
  puVar1 = (undefined8 *)___cxa_allocate_exception(0x28);
  puVar1 = __ZN8nlohmann6detail11parse_errorC1ERKS1_(puVar1,param_4);
                    // WARNING: Subroutine does not return
  ___cxa_throw(puVar1,&__ZTIN8nlohmann6detail11parse_errorE,__ZN8nlohmann6detail11parse_errorD1Ev);
}



undefined8 *
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEC2ERSF_NS3_8functionIFbiNS0_13parse_event_tESH_EEEb
          (undefined8 *param_1,undefined8 param_2,long *param_3,undefined1 param_4)

{
  char local_41;
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  __ZNSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEC2ERKSJ_
            ((long)(param_1 + 0xc),param_3);
  *(undefined1 *)(param_1 + 0x11) = 9;
  *(undefined1 *)(param_1 + 0x10) = param_4;
  param_1[0x12] = 0;
  local_41 = '\x01';
  __ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(param_1 + 4,&local_41);
  return param_1;
}



void __ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(long *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = param_1[1];
  if (uVar1 == param_1[2] * 0x40) {
    if ((long)(uVar1 + 1) < 0) {
                    // WARNING: Subroutine does not return
      __ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv(param_1);
    }
    uVar2 = param_1[2] << 7;
    uVar4 = uVar1 + 0x40 & 0xffffffffffffffc0;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    uVar2 = 0x7fffffffffffffff;
    if (uVar1 < 0x3fffffffffffffff) {
      uVar2 = uVar4;
    }
    __ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm(param_1,uVar2);
    uVar1 = param_1[1];
  }
  param_1[1] = uVar1 + 1;
  lVar3 = *param_1;
  uVar4 = uVar1 >> 6;
  uVar1 = 1L << (uVar1 & 0x3f);
  if (*param_2 == '\0') {
    uVar1 = *(ulong *)(lVar3 + uVar4 * 8) & (uVar1 ^ 0xffffffffffffffff);
  }
  else {
    uVar1 = *(ulong *)(lVar3 + uVar4 * 8) | uVar1;
  }
  *(ulong *)(lVar3 + uVar4 * 8) = uVar1;
  return;
}



void __ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_58;
  uint local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  long local_30;
  long lStack_28;
  
  if ((ulong)(param_1[2] * 0x40) < param_2) {
    local_38 = 0;
    local_30 = 0;
    lStack_28 = 0;
    __ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEm(&local_38,param_2);
    local_48 = *param_1;
    local_40 = 0;
    local_58 = local_48 + ((ulong)param_1[1] >> 3 & 0x1ffffffffffffff8);
    local_50 = (uint)param_1[1] & 0x3f;
    __ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr27__is_cpp17_forward_iteratorIT_EE5valueEvE4typeES8_S8_
              (&local_38,&local_48,&local_58);
    lVar1 = *param_1;
    *param_1 = local_38;
    lVar3 = param_1[2];
    lVar2 = param_1[1];
    param_1[2] = lStack_28;
    param_1[1] = local_30;
    if (lVar1 != 0) {
      local_38 = lVar1;
      local_30 = lVar2;
      lStack_28 = lVar3;
      __ZdlPv();
    }
  }
  return;
}



void __ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEm(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (-1 < param_2) {
    lVar1 = (param_2 - 1U >> 6) + 1;
    uVar2 = __Znwm(lVar1 * 8);
    *param_1 = uVar2;
    param_1[1] = 0;
    param_1[2] = lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  __ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv(param_1);
}



void __ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr27__is_cpp17_forward_iteratorIT_EE5valueEvE4typeES8_S8_
               (long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long alStack_50 [2];
  long local_40;
  uint local_38;
  long local_30;
  undefined4 local_28;
  long local_20;
  uint local_18;
  
  uVar3 = param_1[1];
  uVar1 = (uVar3 - *(uint *)(param_2 + 1)) + (ulong)*(uint *)(param_3 + 1) +
          (*param_3 - *param_2) * 8;
  param_1[1] = uVar1;
  if ((uVar3 == 0) || (0x3f < (uVar1 - 1 ^ uVar3 - 1))) {
    uVar2 = 0;
    if (0x40 < uVar1) {
      uVar2 = uVar1 - 1 >> 6;
    }
    *(undefined8 *)(*param_1 + uVar2 * 8) = 0;
  }
  local_20 = *param_2;
  local_18 = *(uint *)(param_2 + 1);
  local_30 = *param_3;
  local_28 = (undefined4)param_3[1];
  local_40 = *param_1 + (uVar3 >> 3 & 0x1ffffffffffffff8);
  local_38 = (uint)uVar3 & 0x3f;
  if (local_18 == local_38) {
    local_38 = local_18;
    __ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_
              (alStack_50,&local_20,&local_30,&local_40);
  }
  else {
    __ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_
              (alStack_50,&local_20,&local_30,&local_40);
  }
  return;
}



void __ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_
               (long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  puVar2 = (ulong *)*param_2;
  uVar1 = *(uint *)(param_2 + 1);
  uVar8 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar2) * 8) - (ulong)uVar1;
  if (0 < (long)uVar8) {
    if (uVar1 != 0) {
      uVar4 = (ulong)(0x40 - uVar1);
      uVar7 = uVar8;
      if ((long)uVar4 <= (long)uVar8) {
        uVar7 = uVar4;
      }
      uVar8 = uVar8 - uVar7;
      uVar4 = 0xffffffffffffffffU >> (uVar4 - uVar7 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f);
      uVar5 = *puVar2;
      *(ulong *)*param_4 = *(ulong *)*param_4 & (uVar4 ^ 0xffffffffffffffff);
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar5 & uVar4;
      lVar3 = uVar7 + *(uint *)(param_4 + 1);
      lVar9 = lVar3 + 0x3f;
      if (-1 < lVar3) {
        lVar9 = lVar3;
      }
      *param_4 = *param_4 + (lVar9 >> 6) * 8;
      *(int *)(param_4 + 1) = (int)lVar3 + (int)(lVar9 >> 6) * -0x40;
      puVar2 = (ulong *)(*param_2 + 8);
      *param_2 = (long)puVar2;
    }
    uVar7 = uVar8 + 0x3f;
    if (-1 < (long)uVar8) {
      uVar7 = uVar8;
    }
    lVar9 = (long)uVar7 >> 6;
    _memmove((void *)*param_4,puVar2,lVar9 << 3);
    lVar3 = (long)uVar8 % 0x40;
    *param_4 = *param_4 + lVar9 * 8;
    if (0 < lVar3) {
      lVar6 = *param_2;
      *param_2 = lVar6 + lVar9 * 8;
      uVar7 = 0xffffffffffffffff >> (-lVar3 & 0x3fU);
      uVar8 = *(ulong *)(lVar6 + lVar9 * 8);
      *(ulong *)*param_4 = *(ulong *)*param_4 & (uVar7 ^ 0xffffffffffffffff);
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar8 & uVar7;
      *(int *)(param_4 + 1) = (int)lVar3;
    }
  }
  *param_1 = *param_4;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}



void __ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_
               (long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  puVar5 = (ulong *)*param_2;
  uVar2 = *(uint *)(param_2 + 1);
  uVar4 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar5) * 8) - (ulong)uVar2;
  if (0 < (long)uVar4) {
    if (uVar2 != 0) {
      uVar10 = (ulong)(0x40 - uVar2);
      uVar7 = uVar4;
      if ((long)uVar10 <= (long)uVar4) {
        uVar7 = uVar10;
      }
      uVar4 = uVar4 - uVar7;
      uVar6 = 0xffffffffffffffffU >> (uVar10 - uVar7 & 0x3f) & -1L << ((ulong)uVar2 & 0x3f) &
              *puVar5;
      uVar8 = (ulong)(0x40 - *(uint *)(param_4 + 1));
      uVar10 = uVar8;
      if (uVar7 <= uVar8) {
        uVar10 = uVar7;
      }
      *(ulong *)*param_4 =
           *(ulong *)*param_4 &
           (0xffffffffffffffffU >> (uVar8 - uVar10 & 0x3f) &
            -1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f) ^ 0xffffffffffffffff);
      uVar2 = *(uint *)(param_4 + 1);
      uVar3 = *(uint *)(param_2 + 1);
      uVar8 = uVar6 << ((ulong)(uVar2 - uVar3) & 0x3f);
      if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
        uVar8 = uVar6 >> ((ulong)(uVar3 - uVar2) & 0x3f);
      }
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar8;
      puVar5 = (ulong *)(*param_4 + (uVar10 + *(uint *)(param_4 + 1) >> 3 & 0x1ffffffffffffff8));
      *param_4 = (long)puVar5;
      *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) + (int)uVar10 & 0x3f;
      lVar9 = uVar7 - uVar10;
      if (0 < lVar9) {
        *puVar5 = *puVar5 & (0xffffffffffffffffU >> (-lVar9 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_4 = uVar6 >> (uVar10 + *(uint *)(param_2 + 1) & 0x3f) | *(ulong *)*param_4;
        *(int *)(param_4 + 1) = (int)lVar9;
      }
      puVar5 = (ulong *)(*param_2 + 8);
      *param_2 = (long)puVar5;
    }
    uVar7 = (ulong)(0x40 - *(uint *)(param_4 + 1));
    if (0x3f < (long)uVar4) {
      uVar6 = -1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
      uVar10 = uVar4;
      do {
        uVar4 = *puVar5;
        *(ulong *)*param_4 = *(ulong *)*param_4 & ~uVar6;
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar4 << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
        lVar9 = *param_4;
        *param_4 = lVar9 + 8;
        *(ulong *)(lVar9 + 8) = *(ulong *)(lVar9 + 8) & uVar6;
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar4 >> (uVar7 & 0x3f);
        uVar4 = uVar10 - 0x40;
        puVar5 = (ulong *)(*param_2 + 8);
        *param_2 = (long)puVar5;
        bVar1 = 0x7f < (long)uVar10;
        uVar10 = uVar4;
      } while (bVar1);
    }
    if (0 < (long)uVar4) {
      uVar6 = *puVar5 & 0xffffffffffffffffU >> (-uVar4 & 0x3f);
      uVar10 = uVar7;
      if ((long)uVar4 <= (long)uVar7) {
        uVar10 = uVar4;
      }
      *(ulong *)*param_4 =
           *(ulong *)*param_4 &
           (-1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f) &
            0xffffffffffffffffU >> (uVar7 - uVar10 & 0x3f) ^ 0xffffffffffffffff);
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar6 << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
      puVar5 = (ulong *)(*param_4 + (uVar10 + *(uint *)(param_4 + 1) >> 3 & 0x1ffffffffffffff8));
      *param_4 = (long)puVar5;
      *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) + (int)uVar10 & 0x3f;
      lVar9 = uVar4 - uVar10;
      if (0 < lVar9) {
        *puVar5 = *puVar5 & (0xffffffffffffffffU >> (-lVar9 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar6 >> (uVar10 & 0x3f);
        *(int *)(param_4 + 1) = (int)lVar9;
      }
    }
  }
  *param_1 = *param_4;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}



undefined8
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12start_objectEm
          (long *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  _Unwind_Exception *exception_object;
  ulong uVar4;
  void *pvVar5;
  size_t sVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 local_88 [2];
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char local_51;
  
  local_51 = __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
                       ((long)(param_1 + 0xc),(int)((ulong)(param_1[2] - param_1[1]) >> 3),0);
  __ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(param_1 + 4,&local_51);
  local_70 = CONCAT71(local_70._1_7_,1);
  auVar8 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueINS0_7value_tEEENS3_4pairIbPSF_EEOT_b
                     (param_1,(byte *)&local_70,1);
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)param_1[3]) {
    puVar3 = puVar2 + 1;
    *puVar2 = auVar8._8_8_;
    param_1[2] = (long)puVar3;
    goto LAB_00012820;
  }
  pvVar5 = (void *)param_1[1];
  sVar6 = (long)puVar2 - (long)pvVar5;
  uVar7 = (long)sVar6 >> 3;
  uVar4 = uVar7 + 1;
  if (uVar4 >> 0x3d == 0) {
    if (uVar4 <= (ulong)((long)sVar6 >> 2)) {
      uVar4 = (long)sVar6 >> 2;
    }
    if (0xffffffffffffffe < uVar7) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 == 0) {
      pvVar1 = (void *)0x0;
    }
    else {
      if (uVar4 >> 0x3d != 0) goto LAB_00012900;
      pvVar1 = (void *)__Znwm(uVar4 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar1 + uVar7 * 8);
    puVar3 = puVar2 + 1;
    *puVar2 = auVar8._8_8_;
    if (0 < (long)sVar6) {
      _memcpy(pvVar1,pvVar5,sVar6);
    }
    param_1[1] = (long)pvVar1;
    param_1[2] = (long)puVar3;
    param_1[3] = (long)((long)pvVar1 + uVar4 * 8);
    if (pvVar5 != (void *)0x0) {
      __ZdlPv(pvVar5);
      puVar3 = (undefined8 *)param_1[2];
    }
LAB_00012820:
    if ((char *)puVar3[-1] != (char *)0x0 && param_2 != 0xffffffffffffffff) {
      uVar4 = (ulong)*(char *)puVar3[-1];
      if (uVar4 < 3) {
        uVar4 = *(ulong *)(&DAT_00021510 + uVar4 * 8);
      }
      else {
        uVar4 = 1;
      }
      if (uVar4 < param_2) {
        puVar2 = (undefined8 *)___cxa_allocate_exception(0x20);
        __ZNSt3__19to_stringEm(local_88,param_2);
        puVar3 = (undefined8 *)
                 __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                           (local_88,0,"excessive object size: ");
        uStack_68 = puVar3[1];
        local_70 = *puVar3;
        local_60 = puVar3[2];
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        __ZN8nlohmann6detail12out_of_range6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
                  (puVar2,0x198,&local_70);
                    // WARNING: Subroutine does not return
        ___cxa_throw(puVar2,&__ZTIN8nlohmann6detail12out_of_rangeE,
                     __ZN8nlohmann6detail12out_of_rangeD1Ev);
      }
    }
    return 1;
  }
  __ZNKSt3__113__vector_baseIPN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISF_EEE20__throw_length_errorEv
            ();
LAB_00012900:
  exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
  if (local_60._7_1_ < '\0') {
    __ZdlPv(local_70);
  }
  if (local_71 < '\0') {
    __ZdlPv(local_88[0]);
    if ((param_2 & 1) == 0) goto LAB_00012950;
  }
  else if ((int)param_2 == 0) goto LAB_00012950;
  ___cxa_free_exception(pvVar5);
LAB_00012950:
                    // WARNING: Subroutine does not return
  __Unwind_Resume(exception_object);
}



undefined8
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE10end_objectEv
          (long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  char *pcVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 uVar8;
  byte *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  byte local_40 [8];
  undefined8 local_38;
  
  if ((*(long *)(*(long *)(param_1 + 0x10) + -8) != 0) &&
     (uVar4 = __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
                        (param_1 + 0x60,
                         (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3) +
                         -1,1), (uVar4 & 1) == 0)) {
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ERKSD_
              (local_40,(undefined1 *)(param_1 + 0x88));
    pbVar6 = *(byte **)(*(long *)(param_1 + 0x10) + -8);
    bVar2 = *pbVar6;
    *pbVar6 = local_40[0];
    uVar8 = *(undefined8 *)(pbVar6 + 8);
    *(undefined8 *)(pbVar6 + 8) = local_38;
    local_40[0] = bVar2;
    local_38 = uVar8;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              (local_40);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  lVar7 = lVar1 + -8;
  *(long *)(param_1 + 0x10) = lVar7;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  if (((*(long *)(param_1 + 8) != lVar7) &&
      (local_60 = *(byte **)(lVar1 + -0x10), local_60 != (byte *)0x0)) && (*local_60 - 1 < 2)) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0x8000000000000000;
    bVar2 = *local_60;
    if (bVar2 == 0) {
      local_48 = 1;
    }
    else if (bVar2 == 2) {
      uStack_50 = **(undefined8 **)(local_60 + 8);
    }
    else if (bVar2 == 1) {
      local_58 = **(undefined8 **)(local_60 + 8);
    }
    else {
      local_48 = 0;
    }
    while( true ) {
      local_80 = *(char **)(lVar7 + -8);
      local_78 = 0;
      local_70 = 0;
      local_68 = 0x8000000000000000;
      if (*local_80 == '\x02') {
        local_70 = *(undefined8 *)(*(long *)(local_80 + 8) + 8);
      }
      else if (*local_80 == '\x01') {
        local_78 = *(long *)(local_80 + 8) + 8;
      }
      else {
        local_68 = 1;
      }
      bVar3 = __ZNK8nlohmann6detail9iter_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEeqISG_LDn0EEEbRKT_
                        (&local_60,&local_80);
      if (bVar3) {
        return 1;
      }
      pcVar5 = __ZNK8nlohmann6detail9iter_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEptEv
                         ((long *)&local_60);
      if (*pcVar5 == '\t') break;
      __ZN8nlohmann6detail9iter_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEppEv
                (&local_60);
      lVar7 = *(long *)(param_1 + 0x10);
    }
    local_a0 = local_60;
    uStack_90 = uStack_50;
    local_98 = local_58;
    local_88 = local_48;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5eraseINS_6detail9iter_implISD_EELi0EEET_SI_
              (&local_80,*(byte **)(*(long *)(param_1 + 0x10) + -8),&local_a0);
  }
  return 1;
}



undefined8
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE3keyERSB_
          (long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  byte local_58 [8];
  undefined8 local_50;
  char local_41 [9];
  undefined8 local_38;
  undefined8 *local_28;
  
  local_41[1] = 3;
  local_38 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKS9_EEEPT_DpOT0_
                       (param_2);
  local_41[0] = __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
                          (param_1 + 0x60,
                           (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3),4
                          );
  __ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb((long *)(param_1 + 0x38),local_41);
  if ((local_41[0] != '\0') && (*(long *)(*(long *)(param_1 + 0x10) + -8) != 0)) {
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ERKSD_
              (local_58,(undefined1 *)(param_1 + 0x88));
    local_28 = param_2;
    auVar5 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_
                       (*(long **)(*(long *)(*(long *)(param_1 + 0x10) + -8) + 8),param_2,
                        &__ZNSt3__1L19piecewise_constructE,&local_28);
    lVar2 = auVar5._0_8_;
    pbVar3 = (byte *)(lVar2 + 0x38);
    bVar1 = *pbVar3;
    *pbVar3 = local_58[0];
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(lVar2 + 0x40) = local_50;
    *(byte **)(param_1 + 0x50) = pbVar3;
    local_58[0] = bVar1;
    local_50 = uVar4;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              (local_58);
  }
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            ((byte *)(local_41 + 1));
  return 1;
}



undefined8
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11start_arrayEm
          (long *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  _Unwind_Exception *exception_object;
  ulong uVar4;
  void *pvVar5;
  size_t sVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 local_88 [2];
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char local_51;
  
  local_51 = __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
                       ((long)(param_1 + 0xc),(int)((ulong)(param_1[2] - param_1[1]) >> 3),2);
  __ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(param_1 + 4,&local_51);
  local_70 = CONCAT71(local_70._1_7_,2);
  auVar8 = __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueINS0_7value_tEEENS3_4pairIbPSF_EEOT_b
                     (param_1,(byte *)&local_70,1);
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)param_1[3]) {
    puVar3 = puVar2 + 1;
    *puVar2 = auVar8._8_8_;
    param_1[2] = (long)puVar3;
    goto LAB_00012d5c;
  }
  pvVar5 = (void *)param_1[1];
  sVar6 = (long)puVar2 - (long)pvVar5;
  uVar7 = (long)sVar6 >> 3;
  uVar4 = uVar7 + 1;
  if (uVar4 >> 0x3d == 0) {
    if (uVar4 <= (ulong)((long)sVar6 >> 2)) {
      uVar4 = (long)sVar6 >> 2;
    }
    if (0xffffffffffffffe < uVar7) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 == 0) {
      pvVar1 = (void *)0x0;
    }
    else {
      if (uVar4 >> 0x3d != 0) goto LAB_00012e3c;
      pvVar1 = (void *)__Znwm(uVar4 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar1 + uVar7 * 8);
    puVar3 = puVar2 + 1;
    *puVar2 = auVar8._8_8_;
    if (0 < (long)sVar6) {
      _memcpy(pvVar1,pvVar5,sVar6);
    }
    param_1[1] = (long)pvVar1;
    param_1[2] = (long)puVar3;
    param_1[3] = (long)((long)pvVar1 + uVar4 * 8);
    if (pvVar5 != (void *)0x0) {
      __ZdlPv(pvVar5);
      puVar3 = (undefined8 *)param_1[2];
    }
LAB_00012d5c:
    if ((char *)puVar3[-1] != (char *)0x0 && param_2 != 0xffffffffffffffff) {
      uVar4 = (ulong)*(char *)puVar3[-1];
      if (uVar4 < 3) {
        uVar4 = *(ulong *)(&DAT_00021510 + uVar4 * 8);
      }
      else {
        uVar4 = 1;
      }
      if (uVar4 < param_2) {
        puVar2 = (undefined8 *)___cxa_allocate_exception(0x20);
        __ZNSt3__19to_stringEm(local_88,param_2);
        puVar3 = (undefined8 *)
                 __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                           (local_88,0,"excessive array size: ");
        uStack_68 = puVar3[1];
        local_70 = *puVar3;
        local_60 = puVar3[2];
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        __ZN8nlohmann6detail12out_of_range6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
                  (puVar2,0x198,&local_70);
                    // WARNING: Subroutine does not return
        ___cxa_throw(puVar2,&__ZTIN8nlohmann6detail12out_of_rangeE,
                     __ZN8nlohmann6detail12out_of_rangeD1Ev);
      }
    }
    return 1;
  }
  __ZNKSt3__113__vector_baseIPN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISF_EEE20__throw_length_errorEv
            ();
LAB_00012e3c:
  exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
  if (local_60._7_1_ < '\0') {
    __ZdlPv(local_70);
  }
  if (local_71 < '\0') {
    __ZdlPv(local_88[0]);
    if ((param_2 & 1) == 0) goto LAB_00012e8c;
  }
  else if ((int)param_2 == 0) goto LAB_00012e8c;
  ___cxa_free_exception(pvVar5);
LAB_00012e8c:
                    // WARNING: Subroutine does not return
  __Unwind_Resume(exception_object);
}



undefined8
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE9end_arrayEv
          (long param_1)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  byte local_30 [8];
  undefined8 local_28;
  
  plVar6 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*plVar6 == 0) {
    *(long **)(param_1 + 0x10) = plVar6;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  }
  else {
    uVar2 = __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
                      (param_1 + 0x60,
                       (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3) + -1,
                       3);
    if ((uVar2 & 1) == 0) {
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ERKSD_
                (local_30,(undefined1 *)(param_1 + 0x88));
      pbVar3 = *(byte **)(*(long *)(param_1 + 0x10) + -8);
      bVar1 = *pbVar3;
      *pbVar3 = local_30[0];
      uVar7 = *(undefined8 *)(pbVar3 + 8);
      *(undefined8 *)(pbVar3 + 8) = local_28;
      local_30[0] = bVar1;
      local_28 = uVar7;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_30);
    }
    lVar4 = *(long *)(param_1 + 0x10);
    lVar8 = lVar4 + -8;
    *(long *)(param_1 + 0x10) = lVar8;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    if ((((uVar2 & 1) == 0) && (*(long *)(param_1 + 8) != lVar8)) &&
       (pcVar5 = *(char **)(lVar4 + -0x10), *pcVar5 == '\x02')) {
      lVar4 = *(long *)(pcVar5 + 8);
      pbVar3 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                         ((byte *)(*(long *)(lVar4 + 8) + -0x10));
      *(byte **)(lVar4 + 8) = pbVar3;
    }
  }
  return 1;
}



undefined8
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_12out_of_rangeEEEbmRKSB_RKT_
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(char *)(param_1 + 0x80) == '\0') {
    return 0;
  }
  puVar1 = (undefined8 *)___cxa_allocate_exception(0x20);
  puVar1 = __ZN8nlohmann6detail12out_of_rangeC1ERKS1_(puVar1,param_4);
                    // WARNING: Subroutine does not return
  ___cxa_throw(puVar1,&__ZTIN8nlohmann6detail12out_of_rangeE,__ZN8nlohmann6detail12out_of_rangeD1Ev)
  ;
}



// WARNING: Removing unreachable block (ram,0x00013118)

void __ZN8nlohmann6detail12out_of_range6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  undefined8 **local_b8;
  ulong uStack_b0;
  byte local_a1;
  undefined8 local_a0 [2];
  char local_89;
  undefined8 local_88 [2];
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
            (local_a0,"out_of_range");
  __ZN8nlohmann6detail9exception4nameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi
            (local_88,local_a0,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(&local_b8,"");
  pppuVar2 = (undefined8 ***)local_b8;
  if (-1 < (char)local_a1) {
    uStack_b0 = (ulong)local_a1;
    pppuVar2 = &local_b8;
  }
  puVar3 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                     (local_88,pppuVar2,uStack_b0);
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  local_60 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  puVar3 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                     (&local_70,puVar3,uVar1);
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  local_40 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (local_60 < 0) {
    __ZdlPv(local_70);
  }
  if ((char)local_a1 < '\0') {
    __ZdlPv(local_b8);
  }
  if (local_71 < '\0') {
    __ZdlPv(local_88[0]);
  }
  if (local_89 < '\0') {
    __ZdlPv(local_a0[0]);
  }
  __ZN8nlohmann6detail9exceptionC2EiPKc(param_1,(int)param_2,&local_50);
  *param_1 = &DAT_00028998;
  return;
}



void __ZN8nlohmann6detail12out_of_rangeD1Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028898;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(param_1);
  return;
}



void __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
               (long param_1,undefined4 param_2,undefined1 param_3)

{
  long *plVar1;
  undefined1 local_15;
  undefined4 local_14;
  
  plVar1 = *(long **)(param_1 + 0x18);
  local_15 = param_3;
  local_14 = param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_14,&local_15);
    return;
  }
                    // WARNING: Subroutine does not return
  __ZNSt3__1L25__throw_bad_function_callEv();
}



undefined1  [16]
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueINS0_7value_tEEENS3_4pairIbPSF_EEOT_b
          (long *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  byte local_50 [8];
  undefined8 local_48;
  byte local_40 [8];
  undefined8 local_38;
  byte local_30 [8];
  undefined8 local_28;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar6 = 0;
    lVar7 = 0;
    goto LAB_00013394;
  }
  local_30[0] = *param_2;
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_valueC2ENS_6detail7value_tE
            (&local_28,(uint)local_30[0]);
  if (((param_3 & 1) == 0) &&
     (uVar2 = __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
                        ((long)(param_1 + 0xc),(int)((ulong)(param_1[2] - param_1[1]) >> 3),5),
     (uVar2 & 1) == 0)) {
LAB_00013384:
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    uVar6 = local_28;
    bVar1 = local_30[0];
    if (param_1[1] == param_1[2]) {
      local_30[0] = 0;
      local_28 = 0;
      pbVar5 = (byte *)*param_1;
      local_40[0] = *pbVar5;
      *pbVar5 = bVar1;
      local_38 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = uVar6;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_40);
      lVar7 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_00013384;
      if (*pcVar3 == '\x02') {
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE12emplace_backIJSD_EEERSD_DpOT_
                  (*(long **)(pcVar3 + 8),local_30);
        lVar7 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar2 = param_1[8] - 1;
        uVar4 = *(ulong *)(param_1[7] + (uVar2 >> 3 & 0x1ffffffffffffff8));
        param_1[8] = uVar2;
        if ((uVar4 >> (uVar2 & 0x3f) & 1) == 0) goto LAB_00013384;
        local_30[0] = 0;
        local_28 = 0;
        pbVar5 = (byte *)param_1[10];
        local_50[0] = *pbVar5;
        *pbVar5 = bVar1;
        local_48 = *(undefined8 *)(pbVar5 + 8);
        *(undefined8 *)(pbVar5 + 8) = uVar6;
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                  (local_50);
        lVar7 = param_1[10];
      }
    }
    uVar6 = 1;
  }
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_30);
LAB_00013394:
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



void __ZNSt3__1L25__throw_bad_function_callEv(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar1 = &DAT_000288f0;
                    // WARNING: Subroutine does not return
  ___cxa_throw(puVar1,&__ZTINSt3__117bad_function_callE,__ZNSt3__117bad_function_callD1Ev);
}



void __ZNSt3__117bad_function_callD1Ev(void)

{
  __ZNSt9exceptionD2Ev();
  return;
}



void __ZNSt3__117bad_function_callD0Ev(void)

{
  __ZNSt9exceptionD2Ev();
  __ZdlPv();
  return;
}



void __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE12emplace_backIJSD_EEERSD_DpOT_
               (long *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  _Unwind_Exception *exception_object;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  long lStack_40;
  long *local_38;
  
  puVar2 = (undefined1 *)param_1[1];
  if (puVar2 < (undefined1 *)param_1[2]) {
    *puVar2 = *param_2;
    *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    param_1[1] = (long)(puVar2 + 0x10);
  }
  else {
    lVar5 = (long)puVar2 - *param_1 >> 4;
    uVar1 = lVar5 + 1;
    if (uVar1 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
      __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                ();
    }
    local_38 = param_1 + 2;
    lVar3 = param_1[2] - *param_1;
    uVar4 = lVar3 >> 3;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x7fffffffffffffe < (ulong)(lVar3 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 >> 0x3c != 0) {
      exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
      __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                (&local_58);
                    // WARNING: Subroutine does not return
      __Unwind_Resume(exception_object);
    }
    local_58 = __Znwm(uVar1 << 4);
    puStack_50 = (undefined1 *)(local_58 + lVar5 * 0x10);
    lStack_40 = local_58 + uVar1 * 0x10;
    *puStack_50 = *param_2;
    *(undefined8 *)(puStack_50 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    local_48 = puStack_50 + 0x10;
    __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
              (param_1,&local_58);
    __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
              (&local_58);
  }
  return;
}



void __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
               (long *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar1 = (undefined1 *)*param_1;
  lVar2 = param_2[1];
  puVar4 = (undefined1 *)param_1[1];
  if ((undefined1 *)param_1[1] != puVar1) {
    do {
      puVar3 = puVar4 + -0x10;
      *(undefined1 *)(lVar2 + -0x10) = *puVar3;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar4 + -8);
      *puVar3 = 0;
      *(undefined8 *)(puVar4 + -8) = 0;
      lVar2 = param_2[1] + -0x10;
      param_2[1] = lVar2;
      puVar4 = puVar3;
    } while (puVar3 != puVar1);
    puVar1 = (undefined1 *)*param_1;
  }
  *param_1 = lVar2;
  param_2[1] = puVar1;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



void __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
               (void)

{
                    // WARNING: Subroutine does not return
  __ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv();
}



long * __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                 (long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              ((byte *)(lVar2 + -0x10));
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



void __ZNKSt3__113__vector_baseIPN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISF_EEE20__throw_length_errorEv
               (void)

{
                    // WARNING: Subroutine does not return
  __ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv();
}



char * __ZNK8nlohmann6detail9iter_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEptEv
                 (long *param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 auStack_48 [3];
  
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\x02') {
    pcVar1 = (char *)param_1[2];
  }
  else if (*pcVar1 == '\x01') {
    pcVar1 = (char *)(param_1[1] + 0x38);
  }
  else if (param_1[3] != 0) {
    puVar2 = (undefined8 *)___cxa_allocate_exception(0x20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
              (auStack_48,"cannot get value");
    __ZN8nlohmann6detail16invalid_iterator6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
              (puVar2,0xd6,auStack_48);
                    // WARNING: Subroutine does not return
    ___cxa_throw(puVar2,&__ZTIN8nlohmann6detail16invalid_iteratorE,
                 __ZN8nlohmann6detail16invalid_iteratorD1Ev);
  }
  return pcVar1;
}



void __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5eraseINS_6detail9iter_implISD_EELi0EEET_SI_
               (undefined8 *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 auStack_78 [3];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((byte *)*param_3 != param_2) {
    puVar4 = (undefined8 *)___cxa_allocate_exception(0x20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
              (&local_60,"iterator does not fit current value");
    __ZN8nlohmann6detail16invalid_iterator6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
              (puVar4,0xca,&local_60);
                    // WARNING: Subroutine does not return
    ___cxa_throw(puVar4,&__ZTIN8nlohmann6detail16invalid_iteratorE,
                 __ZN8nlohmann6detail16invalid_iteratorD1Ev);
  }
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  bVar1 = *param_2;
  if (bVar1 == 2) {
    lVar7 = *(long *)(param_2 + 8);
    pbVar12 = *(byte **)(lVar7 + 8);
    param_1[2] = pbVar12;
    pbVar13 = (byte *)param_3[2];
    pbVar14 = pbVar13;
    pbVar3 = pbVar13 + 0x10;
    if (pbVar13 + 0x10 != pbVar12) {
      do {
        pbVar14 = pbVar3;
        bVar1 = *pbVar14;
        uVar11 = *(undefined8 *)(pbVar14 + 8);
        *pbVar14 = 0;
        pbVar14[8] = 0;
        pbVar14[9] = 0;
        pbVar14[10] = 0;
        pbVar14[0xb] = 0;
        pbVar14[0xc] = 0;
        pbVar14[0xd] = 0;
        pbVar14[0xe] = 0;
        pbVar14[0xf] = 0;
        bVar2 = pbVar14[-0x10];
        pbVar14[-0x10] = bVar1;
        local_60 = CONCAT71(local_60._1_7_,bVar2);
        uStack_58 = *(undefined8 *)(pbVar14 + -8);
        *(undefined8 *)(pbVar14 + -8) = uVar11;
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                  ((byte *)&local_60);
        pbVar3 = pbVar14 + 0x10;
      } while (pbVar14 + 0x10 != pbVar12);
      pbVar12 = *(byte **)(lVar7 + 8);
      if (pbVar14 == pbVar12) goto LAB_00013818;
    }
    do {
      pbVar12 = pbVar12 + -0x10;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (pbVar12);
    } while (pbVar12 != pbVar14);
LAB_00013818:
    *(byte **)(lVar7 + 8) = pbVar14;
    param_1[2] = pbVar13;
    return;
  }
  if (bVar1 == 1) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *plVar6 = (long)(puVar4 + 1);
    plVar5 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE5eraseENS_21__tree_const_iteratorISG_PNS_11__tree_nodeISG_PvEElEE
                       (puVar4,(long *)param_3[1]);
    *plVar6 = (long)plVar5;
    return;
  }
  param_1[3] = 1;
  uVar10 = (uint)bVar1;
  if (5 < uVar10 - 3) {
    puVar4 = (undefined8 *)___cxa_allocate_exception(0x20);
    if ((ulong)(long)(char)*param_2 < 10) {
      pcVar9 = *(char **)(&DAT_00028db0 + (long)(char)*param_2 * 8);
    }
    else {
      pcVar9 = "number";
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(auStack_78,pcVar9);
    puVar8 = (undefined8 *)
             __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                       (auStack_78,0,"cannot use erase() with ");
    uStack_58 = puVar8[1];
    local_60 = *puVar8;
    local_50 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
              (puVar4,0x133,&local_60);
                    // WARNING: Subroutine does not return
    ___cxa_throw(puVar4,&__ZTIN8nlohmann6detail10type_errorE,__ZN8nlohmann6detail10type_errorD1Ev);
  }
  if (param_3[3] != 0) {
    puVar4 = (undefined8 *)___cxa_allocate_exception(0x20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
              (&local_60,"iterator out of range");
    __ZN8nlohmann6detail16invalid_iterator6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
              (puVar4,0xcd,&local_60);
                    // WARNING: Subroutine does not return
    ___cxa_throw(puVar4,&__ZTIN8nlohmann6detail16invalid_iteratorE,
                 __ZN8nlohmann6detail16invalid_iteratorD1Ev);
  }
  if (uVar10 == 8) {
    plVar6 = *(long **)(param_2 + 8);
    lVar7 = *plVar6;
    if (lVar7 != 0) {
      plVar6[1] = lVar7;
LAB_00013838:
      __ZdlPv(lVar7);
      plVar6 = *(long **)(param_2 + 8);
    }
  }
  else {
    if (uVar10 != 3) goto LAB_00013848;
    plVar6 = *(long **)(param_2 + 8);
    if (*(char *)((long)plVar6 + 0x17) < '\0') {
      lVar7 = *plVar6;
      goto LAB_00013838;
    }
  }
  __ZdlPv(plVar6);
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
LAB_00013848:
  *param_2 = 0;
  return;
}



void __ZN8nlohmann6detail9iter_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEppEv
               (undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(char *)*param_1 == '\x02') {
    param_1[2] = param_1[2] + 0x10;
    return;
  }
  if (*(char *)*param_1 != '\x01') {
    param_1[3] = param_1[3] + 1;
    return;
  }
  lVar3 = param_1[1];
  plVar1 = *(long **)(lVar3 + 8);
  if (*(long **)(lVar3 + 8) == (long *)0x0) {
    while( true ) {
      plVar2 = *(long **)(lVar3 + 0x10);
      if (*plVar2 == lVar3) break;
      lVar3 = *(long *)(lVar3 + 0x10);
    }
  }
  else {
    do {
      plVar2 = plVar1;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
  param_1[1] = plVar2;
  return;
}



bool __ZNK8nlohmann6detail9iter_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEeqISG_LDn0EEEbRKT_
               (undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack_48 [3];
  
  if ((char *)*param_1 == (char *)*param_2) {
    cVar1 = *(char *)*param_1;
    if (cVar1 == '\x02') {
      lVar3 = param_1[2];
      lVar4 = param_2[2];
    }
    else if (cVar1 == '\x01') {
      lVar3 = param_1[1];
      lVar4 = param_2[1];
    }
    else {
      lVar3 = param_1[3];
      lVar4 = param_2[3];
    }
    return lVar3 == lVar4;
  }
  puVar2 = (undefined8 *)___cxa_allocate_exception(0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
            (auStack_48,"cannot compare iterators of different containers");
  __ZN8nlohmann6detail16invalid_iterator6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
            (puVar2,0xd4,auStack_48);
                    // WARNING: Subroutine does not return
  ___cxa_throw(puVar2,&__ZTIN8nlohmann6detail16invalid_iteratorE,
               __ZN8nlohmann6detail16invalid_iteratorD1Ev);
}



// WARNING: Removing unreachable block (ram,0x00013cc4)

void __ZN8nlohmann6detail16invalid_iterator6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  undefined8 **local_b8;
  ulong uStack_b0;
  byte local_a1;
  undefined8 local_a0 [2];
  char local_89;
  undefined8 local_88 [2];
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
            (local_a0,"invalid_iterator");
  __ZN8nlohmann6detail9exception4nameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi
            (local_88,local_a0,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(&local_b8,"");
  pppuVar2 = (undefined8 ***)local_b8;
  if (-1 < (char)local_a1) {
    uStack_b0 = (ulong)local_a1;
    pppuVar2 = &local_b8;
  }
  puVar3 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                     (local_88,pppuVar2,uStack_b0);
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  local_60 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  puVar3 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                     (&local_70,puVar3,uVar1);
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  local_40 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (local_60 < 0) {
    __ZdlPv(local_70);
  }
  if ((char)local_a1 < '\0') {
    __ZdlPv(local_b8);
  }
  if (local_71 < '\0') {
    __ZdlPv(local_88[0]);
  }
  if (local_89 < '\0') {
    __ZdlPv(local_a0[0]);
  }
  __ZN8nlohmann6detail9exceptionC2EiPKc(param_1,(int)param_2,&local_50);
  *param_1 = &DAT_00028930;
  return;
}



void __ZN8nlohmann6detail16invalid_iteratorD1Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028898;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(param_1);
  return;
}



void __ZN8nlohmann6detail16invalid_iteratorD0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028898;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(param_1);
  __ZdlPv();
  return;
}



// WARNING: Removing unreachable block (ram,0x00013ef4)

void __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  undefined8 **local_b8;
  ulong uStack_b0;
  byte local_a1;
  undefined8 local_a0 [2];
  char local_89;
  undefined8 local_88 [2];
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(local_a0,"type_error");
  __ZN8nlohmann6detail9exception4nameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi
            (local_88,local_a0,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(&local_b8,"");
  pppuVar2 = (undefined8 ***)local_b8;
  if (-1 < (char)local_a1) {
    uStack_b0 = (ulong)local_a1;
    pppuVar2 = &local_b8;
  }
  puVar3 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                     (local_88,pppuVar2,uStack_b0);
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  local_60 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  puVar3 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                     (&local_70,puVar3,uVar1);
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  local_40 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (local_60 < 0) {
    __ZdlPv(local_70);
  }
  if ((char)local_a1 < '\0') {
    __ZdlPv(local_b8);
  }
  if (local_71 < '\0') {
    __ZdlPv(local_88[0]);
  }
  if (local_89 < '\0') {
    __ZdlPv(local_a0[0]);
  }
  __ZN8nlohmann6detail9exceptionC2EiPKc(param_1,(int)param_2,&local_50);
  *param_1 = &DAT_00028970;
  return;
}



void __ZN8nlohmann6detail10type_errorD1Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028898;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(param_1);
  return;
}



long * __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE5eraseENS_21__tree_const_iteratorISG_PNS_11__tree_nodeISG_PvEElEE
                 (undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    plVar1 = param_2 + 2;
    plVar3 = (long *)*plVar1;
    if ((long *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  __ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_((long *)param_1[1],param_2);
  __ZNSt3__116allocator_traitsINS_9allocatorINS_11__tree_nodeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS1_IcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES8_bxydS1_NS9_14adl_serializerENSC_IhNS1_IhEEEEEEEEPvEEEEE7destroyINS_4pairIKS8_SG_EEvvEEvRSK_PT_
            (param_2 + 4);
  __ZdlPv(param_2);
  return plVar3;
}



void __ZNSt3__116allocator_traitsINS_9allocatorINS_11__tree_nodeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS1_IcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES8_bxydS1_NS9_14adl_serializerENSC_IhNS1_IhEEEEEEEEPvEEEEE7destroyINS_4pairIKS8_SG_EEvvEEvRSK_PT_
               (undefined8 *param_1)

{
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            ((byte *)(param_1 + 3));
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  __ZdlPv(*param_1);
  return;
}



void __ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if (plVar5 == (long *)0x0) {
LAB_000140b0:
    plVar5 = (long *)plVar7[1];
    if (plVar5 != (long *)0x0) goto LAB_000140c4;
    bVar1 = true;
  }
  else {
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar7 = plVar4;
        plVar4 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
      goto LAB_000140b0;
    }
LAB_000140c4:
    bVar1 = false;
    plVar5[2] = plVar7[2];
  }
  puVar3 = (undefined8 *)plVar7[2];
  if ((long *)*puVar3 == plVar7) {
    *puVar3 = plVar5;
    if (plVar7 == param_1) {
      plVar4 = (long *)0x0;
      param_1 = plVar5;
      goto LAB_00014104;
    }
    puVar3 = (undefined8 *)(plVar7[2] + 8);
  }
  else {
    puVar3[1] = plVar5;
    puVar3 = (undefined8 *)plVar7[2];
  }
  plVar4 = (long *)*puVar3;
LAB_00014104:
  lVar6 = plVar7[3];
  plVar2 = param_1;
  if (plVar7 != param_2) {
    lVar8 = param_2[2];
    plVar7[2] = lVar8;
    *(long **)(lVar8 + (ulong)(*(long **)param_2[2] != param_2) * 8) = plVar7;
    lVar8 = *param_2;
    *plVar7 = lVar8;
    *(long **)(lVar8 + 0x10) = plVar7;
    lVar8 = param_2[1];
    plVar7[1] = lVar8;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 0x10) = plVar7;
    }
    *(char *)(plVar7 + 3) = (char)param_2[3];
    plVar2 = plVar7;
    if (param_1 != param_2) {
      plVar2 = param_1;
    }
  }
  if (((char)lVar6 != '\0') && (plVar2 != (long *)0x0)) {
    if (bVar1) {
      while( true ) {
        puVar3 = (undefined8 *)plVar4[2];
        plVar7 = plVar2;
        if ((long *)*puVar3 == plVar4) break;
        if ((char)plVar4[3] == '\0') {
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(puVar3 + 3) = 0;
          lVar6 = plVar4[2];
          plVar7 = *(long **)(lVar6 + 8);
          lVar8 = *plVar7;
          *(long *)(lVar6 + 8) = lVar8;
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x10) = lVar6;
          }
          plVar7[2] = *(long *)(lVar6 + 0x10);
          (*(long **)(lVar6 + 0x10))[**(long **)(lVar6 + 0x10) != lVar6] = (long)plVar7;
          *plVar7 = lVar6;
          *(long **)(lVar6 + 0x10) = plVar7;
          plVar7 = plVar4;
          if (plVar2 != (long *)*plVar4) {
            plVar7 = plVar2;
          }
          plVar4 = (long *)((long *)*plVar4)[1];
        }
        lVar6 = *plVar4;
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x18) == '\0')) {
          lVar8 = plVar4[1];
          if (lVar8 != 0) goto LAB_000142e8;
LAB_000142f0:
          *(undefined1 *)(lVar6 + 0x18) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar7 = (long *)*plVar4;
          lVar6 = plVar7[1];
          *plVar4 = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar4;
          }
          plVar7[2] = plVar4[2];
          ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar7;
          plVar7[1] = (long)plVar4;
          plVar4[2] = (long)plVar7;
          plVar4 = plVar7;
LAB_0001433c:
          *(undefined1 *)(plVar4 + 3) = *(undefined1 *)(plVar4[2] + 0x18);
          *(undefined1 *)(plVar4[2] + 0x18) = 1;
          *(undefined1 *)(plVar4[1] + 0x18) = 1;
          plVar7 = (long *)plVar4[2];
          plVar5 = (long *)plVar7[1];
          lVar6 = *plVar5;
          plVar7[1] = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar7;
          }
          plVar5[2] = plVar7[2];
          ((undefined8 *)plVar7[2])[*(long **)plVar7[2] != plVar7] = plVar5;
          *plVar5 = (long)plVar7;
LAB_00014440:
          plVar7[2] = (long)plVar5;
          return;
        }
        lVar8 = plVar4[1];
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x18) == '\0')) {
LAB_000142e8:
          if (*(char *)(lVar8 + 0x18) != '\0') goto LAB_000142f0;
          goto LAB_0001433c;
        }
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar4 = (long *)plVar4[2];
        plVar5 = plVar7;
        if ((plVar4 == plVar7) || (plVar5 = plVar4, (char)plVar4[3] == '\0')) goto LAB_000142d4;
LAB_000142a0:
        plVar4 = (long *)((undefined8 *)plVar4[2])[*(long **)plVar4[2] == plVar4];
        plVar2 = plVar7;
      }
      if ((char)plVar4[3] == '\0') {
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(puVar3 + 3) = 0;
        plVar7 = (long *)plVar4[2];
        lVar6 = *plVar7;
        lVar8 = *(long *)(lVar6 + 8);
        *plVar7 = lVar8;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 0x10) = plVar7;
        }
        *(long *)(lVar6 + 0x10) = plVar7[2];
        ((undefined8 *)plVar7[2])[*(long **)plVar7[2] != plVar7] = lVar6;
        *(long **)(lVar6 + 8) = plVar7;
        plVar7[2] = lVar6;
        plVar7 = plVar4;
        if (plVar2 != (long *)plVar4[1]) {
          plVar7 = plVar2;
        }
        plVar4 = *(long **)plVar4[1];
      }
      lVar6 = *plVar4;
      if ((lVar6 == 0) || (*(char *)(lVar6 + 0x18) != '\0')) {
        lVar8 = plVar4[1];
        if ((lVar8 == 0) || (*(char *)(lVar8 + 0x18) != '\0')) {
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar4 = (long *)plVar4[2];
          plVar5 = plVar4;
          if ((char)plVar4[3] != '\0' && plVar4 != plVar7) goto LAB_000142a0;
LAB_000142d4:
          *(undefined1 *)(plVar5 + 3) = 1;
          return;
        }
        if ((lVar6 == 0) || (*(char *)(lVar6 + 0x18) != '\0')) {
          *(undefined1 *)(lVar8 + 0x18) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar7 = (long *)plVar4[1];
          lVar6 = *plVar7;
          plVar4[1] = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar4;
          }
          plVar7[2] = plVar4[2];
          ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar7;
          *plVar7 = (long)plVar4;
          plVar4[2] = (long)plVar7;
          plVar4 = plVar7;
        }
      }
      *(undefined1 *)(plVar4 + 3) = *(undefined1 *)(plVar4[2] + 0x18);
      *(undefined1 *)(plVar4[2] + 0x18) = 1;
      *(undefined1 *)(*plVar4 + 0x18) = 1;
      plVar7 = (long *)plVar4[2];
      plVar5 = (long *)*plVar7;
      lVar6 = plVar5[1];
      *plVar7 = lVar6;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 0x10) = plVar7;
      }
      plVar5[2] = plVar7[2];
      ((undefined8 *)plVar7[2])[*(long **)plVar7[2] != plVar7] = plVar5;
      plVar5[1] = (long)plVar7;
      goto LAB_00014440;
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}



void __ZN8nlohmann6detail10type_errorD0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028898;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(param_1);
  __ZdlPv();
  return;
}



void __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_value7destroyENS_6detail7value_tE
               (long *param_1,int param_2)

{
  byte ******ppppppbVar1;
  ulong uVar2;
  undefined1 *puVar3;
  byte *****pppppbVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  byte ******ppppppbVar8;
  long *plVar9;
  byte ******ppppppbVar10;
  byte *****pppppbVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  long *plVar16;
  byte ******ppppppbVar17;
  byte ****ppppbVar18;
  long *plVar19;
  byte ******ppppppbVar20;
  byte ****ppppbVar21;
  byte *****pppppbVar22;
  byte ****ppppbVar23;
  byte *****pppppbVar24;
  byte local_b0 [8];
  byte ****local_a8;
  byte *****local_a0;
  byte *****local_98;
  byte *****local_90;
  byte *****local_88;
  byte *****local_80;
  byte *****local_78;
  byte *****local_70;
  byte *****pppppbStack_68;
  
  if (param_2 - 1U < 2) {
    local_a0 = (byte *****)0x0;
    local_98 = (byte *****)0x0;
    local_90 = (byte *****)0x0;
    if (param_2 == 2) {
      __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE7reserveEm
                ((long *)&local_a0,((long *)*param_1)[1] - *(long *)*param_1 >> 4);
      puVar3 = (undefined1 *)((undefined8 *)*param_1)[1];
      local_88 = (byte *****)&local_a0;
      for (puVar15 = *(undefined1 **)*param_1; puVar15 != puVar3; puVar15 = puVar15 + 0x10) {
        __ZNSt3__120back_insert_iteratorINS_6vectorIN8nlohmann10basic_jsonINS_3mapES1_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS2_14adl_serializerENS1_IhNS8_IhEEEEEENS8_ISE_EEEEEaSEOSE_
                  (&local_88,puVar15);
      }
    }
    else {
      __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE7reserveEm
                ((long *)&local_a0,*(ulong *)(*param_1 + 0x10));
      plVar16 = (undefined8 *)*param_1 + 1;
      plVar19 = *(long **)*param_1;
      if (plVar19 != plVar16) {
        do {
          pppppbVar4 = local_90;
          ppppppbVar17 = (byte ******)local_98;
          pppppbVar24 = local_a0;
          if (local_98 < local_90) {
            *(char *)local_98 = (char)plVar19[7];
            local_98[1] = (byte ****)plVar19[8];
            *(undefined1 *)(plVar19 + 7) = 0;
            plVar19[8] = 0;
            local_98 = local_98 + 2;
          }
          else {
            lVar14 = (long)local_98 - (long)local_a0 >> 4;
            uVar2 = lVar14 + 1;
            if (uVar2 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
              __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                        ();
            }
            uVar13 = (long)local_90 - (long)local_a0 >> 3;
            if (uVar2 <= uVar13) {
              uVar2 = uVar13;
            }
            if (0x7fffffffffffffe < (ulong)((long)local_90 - (long)local_a0 >> 4)) {
              uVar2 = 0xfffffffffffffff;
            }
            local_70 = (byte *****)0x0;
            pppppbStack_68 = (byte *****)&local_90;
            if (uVar2 >> 0x3c != 0) {
              __ZNSt3__1L20__throw_length_errorEPKc();
LAB_00014a6c:
                    // WARNING: Does not return
              pcVar5 = (code *)SoftwareBreakpoint(1,0x14a70);
              (*pcVar5)();
            }
            lVar7 = __Znwm(uVar2 << 4);
            ppppppbVar8 = (byte ******)(lVar7 + lVar14 * 0x10);
            *(char *)ppppppbVar8 = (char)plVar19[7];
            ppppppbVar8[1] = (byte *****)plVar19[8];
            *(undefined1 *)(plVar19 + 7) = 0;
            plVar19[8] = 0;
            ppppppbVar1 = ppppppbVar8 + 2;
            local_88 = (byte *****)ppppppbVar17;
            local_78 = (byte *****)ppppppbVar17;
            local_70 = pppppbVar4;
            while (ppppppbVar17 != (byte ******)pppppbVar24) {
              ppppppbVar20 = ppppppbVar17 + -2;
              *(undefined1 *)(ppppppbVar8 + -2) = *(undefined1 *)ppppppbVar20;
              ppppppbVar8[-1] = ppppppbVar17[-1];
              *(undefined1 *)ppppppbVar20 = 0;
              ppppppbVar17[-1] = (byte *****)0x0;
              ppppppbVar8 = ppppppbVar8 + -2;
              ppppppbVar17 = ppppppbVar20;
              local_88 = local_a0;
              local_78 = local_98;
              local_70 = local_90;
            }
            local_a0 = (byte *****)ppppppbVar8;
            local_98 = (byte *****)ppppppbVar1;
            local_90 = (byte *****)(lVar7 + uVar2 * 0x10);
            local_80 = local_88;
            __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                      ((long *)&local_88);
          }
          plVar9 = (long *)plVar19[1];
          if ((long *)plVar19[1] == (long *)0x0) {
            plVar9 = plVar19 + 2;
            plVar12 = (long *)*plVar9;
            if ((long *)*plVar12 != plVar19) {
              do {
                lVar14 = *plVar9;
                plVar9 = (long *)(lVar14 + 0x10);
                plVar12 = (long *)*plVar9;
              } while (*plVar12 != lVar14);
            }
          }
          else {
            do {
              plVar12 = plVar9;
              plVar9 = (long *)*plVar12;
            } while ((long *)*plVar12 != (long *)0x0);
          }
          plVar19 = plVar12;
        } while (plVar12 != plVar16);
      }
    }
    if (local_a0 != local_98) {
      do {
        local_b0[0] = *(byte *)(local_98 + -2);
        local_a8 = local_98[-1];
        *(undefined1 *)(local_98 + -2) = 0;
        local_98[-1] = (byte ****)0x0;
        ppppppbVar17 = (byte ******)(local_98 + -2);
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                  ((byte *)ppppppbVar17);
        if (local_b0[0] == 1) {
          pppppbVar22 = (byte *****)(local_a8 + 1);
          pppppbVar24 = (byte *****)*local_a8;
          pppppbVar4 = (byte *****)local_a8;
          ppppppbVar1 = (byte ******)local_a0;
          ppppppbVar8 = (byte ******)local_90;
          while (local_a8 = (byte ****)pppppbVar4, local_a0 = (byte *****)ppppppbVar1,
                local_98 = (byte *****)ppppppbVar17, local_90 = (byte *****)ppppppbVar8,
                pppppbVar24 != pppppbVar22) {
            if (ppppppbVar17 < ppppppbVar8) {
              *(undefined1 *)ppppppbVar17 = *(undefined1 *)(pppppbVar24 + 7);
              ppppppbVar17[1] = (byte *****)pppppbVar24[8];
              *(undefined1 *)(pppppbVar24 + 7) = 0;
              pppppbVar24[8] = (byte ****)0x0;
              local_98 = (byte *****)(ppppppbVar17 + 2);
            }
            else {
              lVar14 = (long)ppppppbVar17 - (long)ppppppbVar1 >> 4;
              uVar2 = lVar14 + 1;
              if (uVar2 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
                __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                          ();
              }
              uVar13 = (long)ppppppbVar8 - (long)ppppppbVar1 >> 3;
              if (uVar2 <= uVar13) {
                uVar2 = uVar13;
              }
              if (0x7fffffffffffffe < (ulong)((long)ppppppbVar8 - (long)ppppppbVar1 >> 4)) {
                uVar2 = 0xfffffffffffffff;
              }
              local_70 = (byte *****)0x0;
              if (uVar2 >> 0x3c != 0) {
                pppppbStack_68 = (byte *****)&local_90;
                __ZNSt3__1L20__throw_length_errorEPKc();
                goto LAB_00014a6c;
              }
              pppppbStack_68 = (byte *****)&local_90;
              lVar7 = __Znwm(uVar2 << 4);
              ppppppbVar10 = (byte ******)(lVar7 + lVar14 * 0x10);
              *(undefined1 *)ppppppbVar10 = *(undefined1 *)(pppppbVar24 + 7);
              ppppppbVar10[1] = (byte *****)pppppbVar24[8];
              *(undefined1 *)(pppppbVar24 + 7) = 0;
              pppppbVar24[8] = (byte ****)0x0;
              ppppppbVar20 = ppppppbVar10 + 2;
              local_88 = (byte *****)ppppppbVar17;
              local_78 = (byte *****)ppppppbVar17;
              local_70 = (byte *****)ppppppbVar8;
              while (ppppppbVar17 != ppppppbVar1) {
                ppppppbVar8 = ppppppbVar17 + -2;
                *(undefined1 *)(ppppppbVar10 + -2) = *(undefined1 *)ppppppbVar8;
                ppppppbVar10[-1] = ppppppbVar17[-1];
                *(undefined1 *)ppppppbVar8 = 0;
                ppppppbVar17[-1] = (byte *****)0x0;
                ppppppbVar10 = ppppppbVar10 + -2;
                local_88 = local_a0;
                local_78 = local_98;
                local_70 = local_90;
                ppppppbVar17 = ppppppbVar8;
              }
              local_a0 = (byte *****)ppppppbVar10;
              local_98 = (byte *****)ppppppbVar20;
              local_90 = (byte *****)(lVar7 + uVar2 * 0x10);
              local_80 = local_88;
              __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                        ((long *)&local_88);
            }
            pppppbVar11 = (byte *****)pppppbVar24[1];
            ppppppbVar17 = (byte ******)local_98;
            pppppbVar4 = (byte *****)local_a8;
            ppppppbVar1 = (byte ******)local_a0;
            ppppppbVar8 = (byte ******)local_90;
            if ((byte *****)pppppbVar24[1] == (byte *****)0x0) {
              pppppbVar11 = pppppbVar24 + 2;
              bVar6 = (byte *****)**pppppbVar11 != pppppbVar24;
              pppppbVar24 = (byte *****)*pppppbVar11;
              if (bVar6) {
                do {
                  ppppbVar23 = *pppppbVar11;
                  pppppbVar11 = (byte *****)(ppppbVar23 + 2);
                  pppppbVar24 = (byte *****)*pppppbVar11;
                } while (*pppppbVar24 != ppppbVar23);
              }
            }
            else {
              do {
                pppppbVar24 = pppppbVar11;
                pppppbVar11 = (byte *****)*pppppbVar24;
              } while ((byte *****)*pppppbVar24 != (byte *****)0x0);
            }
          }
          pppppbVar24 = pppppbVar4 + 1;
          __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE
                    (pppppbVar4,*pppppbVar24);
          *pppppbVar4 = (byte ****)pppppbVar24;
          pppppbVar4[2] = (byte ****)0x0;
          *pppppbVar24 = (byte ****)0x0;
        }
        else {
          local_98 = (byte *****)ppppppbVar17;
          if (local_b0[0] == 2) {
            ppppbVar23 = (byte ****)*local_a8;
            pppppbVar24 = (byte *****)(local_a8 + 1);
            ppppbVar18 = *pppppbVar24;
            if (ppppbVar23 != ppppbVar18) {
              do {
                ppppbVar21 = ppppbVar23 + 2;
                if (local_98 < local_90) {
                  *(undefined1 *)local_98 = *(undefined1 *)ppppbVar23;
                  local_98[1] = (byte ****)ppppbVar23[1];
                  *(undefined1 *)ppppbVar23 = 0;
                  ppppbVar23[1] = (byte ***)0x0;
                  local_98 = local_98 + 2;
                }
                else {
                  lVar14 = (long)local_98 - (long)local_a0 >> 4;
                  uVar2 = lVar14 + 1;
                  if (uVar2 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
                    __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                              ();
                  }
                  uVar13 = (long)local_90 - (long)local_a0 >> 3;
                  if (uVar2 <= uVar13) {
                    uVar2 = uVar13;
                  }
                  if (0x7fffffffffffffe < (ulong)((long)local_90 - (long)local_a0 >> 4)) {
                    uVar2 = 0xfffffffffffffff;
                  }
                  local_70 = (byte *****)0x0;
                  if (uVar2 >> 0x3c != 0) {
                    pppppbStack_68 = (byte *****)&local_90;
                    __ZNSt3__1L20__throw_length_errorEPKc();
                    goto LAB_00014a6c;
                  }
                  pppppbStack_68 = (byte *****)&local_90;
                  local_88 = (byte *****)__Znwm(uVar2 << 4);
                  local_80 = (byte *****)((byte ******)local_88 + lVar14 * 2);
                  local_70 = (byte *****)((byte ******)local_88 + uVar2 * 2);
                  *(undefined1 *)local_80 = *(undefined1 *)ppppbVar23;
                  ((byte ******)local_80)[1] = (byte *****)ppppbVar23[1];
                  *(undefined1 *)ppppbVar23 = 0;
                  ppppbVar23[1] = (byte ***)0x0;
                  local_78 = (byte *****)((byte ******)local_80 + 2);
                  __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
                            ((long *)&local_a0,&local_88);
                  __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                            ((long *)&local_88);
                }
                ppppbVar23 = ppppbVar21;
              } while (ppppbVar21 != ppppbVar18);
              ppppbVar23 = (byte ****)*local_a8;
              pppppbVar24 = (byte *****)(local_a8 + 1);
              for (ppppbVar18 = *pppppbVar24; ppppbVar18 != ppppbVar23;
                  ppppbVar18 = (byte ****)
                               __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                                         ((byte *)(ppppbVar18 + -2))) {
              }
            }
            *pppppbVar24 = ppppbVar23;
          }
        }
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                  (local_b0);
      } while (local_a0 != local_98);
    }
    __ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEED2Ev
              ((long *)&local_a0);
  }
  switch(param_2 - 1U) {
  case 0:
    __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE
              (*param_1,*(undefined8 **)(*param_1 + 8));
    goto LAB_00014a0c;
  case 1:
    __ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEED2Ev
              ((long *)*param_1);
LAB_00014a0c:
    plVar19 = (long *)*param_1;
    break;
  case 2:
    plVar19 = (long *)*param_1;
    if (*(char *)((long)plVar19 + 0x17) < '\0') {
      lVar14 = *plVar19;
LAB_00014a08:
      __ZdlPv(lVar14);
      goto LAB_00014a0c;
    }
    break;
  default:
    goto switchD_000149c0_caseD_3;
  case 7:
    plVar19 = (long *)*param_1;
    lVar14 = *plVar19;
    if (lVar14 != 0) {
      plVar19[1] = lVar14;
      goto LAB_00014a08;
    }
  }
  __ZdlPv(plVar19);
switchD_000149c0_caseD_3:
  return;
}



void __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE7reserveEm
               (long *param_1,ulong param_2)

{
  _Unwind_Exception *exception_object;
  long lVar1;
  long lVar2;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long *local_38;
  
  lVar1 = *param_1;
  if ((ulong)(param_1[2] - lVar1 >> 4) < param_2) {
    local_38 = param_1 + 2;
    lVar2 = param_1[1];
    if (param_2 >> 0x3c != 0) {
      exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
      __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                (&local_58);
                    // WARNING: Subroutine does not return
      __Unwind_Resume(exception_object);
    }
    local_58 = __Znwm(param_2 << 4);
    lStack_50 = local_58 + (lVar2 - lVar1);
    lStack_40 = local_58 + param_2 * 0x10;
    local_48 = lStack_50;
    __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
              (param_1,&local_58);
    __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
              (&local_58);
  }
  return;
}



void __ZNSt3__120back_insert_iteratorINS_6vectorIN8nlohmann10basic_jsonINS_3mapES1_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS2_14adl_serializerENS1_IhNS8_IhEEEEEENS8_ISE_EEEEEaSEOSE_
               (undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  _Unwind_Exception *exception_object;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  long lStack_40;
  long *local_38;
  
  plVar5 = (long *)*param_1;
  puVar2 = (undefined1 *)plVar5[1];
  if (puVar2 < (undefined1 *)plVar5[2]) {
    *puVar2 = *param_2;
    *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    plVar5[1] = (long)(puVar2 + 0x10);
  }
  else {
    lVar6 = (long)puVar2 - *plVar5 >> 4;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
      __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                ();
    }
    local_38 = plVar5 + 2;
    lVar3 = plVar5[2] - *plVar5;
    uVar4 = lVar3 >> 3;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x7fffffffffffffe < (ulong)(lVar3 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 >> 0x3c != 0) {
      exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
      __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                (&local_58);
                    // WARNING: Subroutine does not return
      __Unwind_Resume(exception_object);
    }
    local_58 = __Znwm(uVar1 << 4);
    puStack_50 = (undefined1 *)(local_58 + lVar6 * 0x10);
    lStack_40 = local_58 + uVar1 * 0x10;
    *puStack_50 = *param_2;
    *(undefined8 *)(puStack_50 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    local_48 = puStack_50 + 0x10;
    __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
              (plVar5,&local_58);
    __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
              (&local_58);
  }
  return;
}



void __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE
               (undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE
              (param_1,(undefined8 *)*param_2);
    __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE
              (param_1,(undefined8 *)param_2[1]);
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              ((byte *)(param_2 + 7));
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      __ZdlPv(param_2[4]);
    }
    __ZdlPv(param_2);
    return;
  }
  return;
}



long * __ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEED2Ev
                 (long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_1;
  if (pbVar3 != (byte *)0x0) {
    pbVar1 = (byte *)param_1[1];
    pbVar2 = pbVar3;
    if (pbVar1 != pbVar3) {
      do {
        pbVar1 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                           (pbVar1 + -0x10);
      } while (pbVar1 != pbVar3);
      pbVar2 = (byte *)*param_1;
    }
    param_1[1] = (long)pbVar3;
    __ZdlPv(pbVar2);
  }
  return param_1;
}



undefined8
__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKS9_EEEPT_DpOT0_
          (undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __Znwm(0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_(uVar1,param_1);
  return uVar1;
}



undefined1  [16]
__ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_
          (long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  long *local_60 [3];
  long local_48;
  
  plVar2 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISR_EERKT_
                     ((long)param_1,&local_48,param_2);
  plVar3 = (long *)*plVar2;
  bVar1 = plVar3 == (long *)0x0;
  if (bVar1) {
    __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSR_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISG_PvEENS_22__tree_node_destructorINS5_ISZ_EEEEEEDpOT_
              ((long *)local_60,(long)param_1,param_3,param_4);
    __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSR_SR_
              (param_1,local_48,plVar2,local_60[0]);
    plVar3 = local_60[0];
    local_60[0] = (long *)0x0;
    __ZNSt3__110unique_ptrINS_11__tree_nodeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES8_bxydS6_NS9_14adl_serializerENSC_IhNS6_IhEEEEEEEEPvEENS_22__tree_node_destructorINS6_ISJ_EEEEED1Ev
              ((long *)local_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = plVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



long * __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISR_EERKT_
                 (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        uVar1 = __ZNKSt3__14lessIvEclIRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_EEDTltclsr3std3__1E7forwardIT_Efp_Eclsr3std3__1E7forwardIT0_Efp0_EEOSB_OSC_
                          (param_3,plVar4 + 4);
        if (uVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      uVar1 = __ZNKSt3__14lessIvEclIRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_EEDTltclsr3std3__1E7forwardIT_Efp_Eclsr3std3__1E7forwardIT0_Efp0_EEOSB_OSC_
                        (plVar4 + 4,param_3);
      if (uVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}



void __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSR_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISG_PvEENS_22__tree_node_destructorINS5_ISZ_EEEEEEDpOT_
               (long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = __Znwm(0x48);
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_(lVar1 + 0x20,*param_4);
  *(undefined1 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



void __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSR_SR_
               (long *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (long *)*param_3;
  }
  __ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_
            ((long *)param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



long * __ZNSt3__110unique_ptrINS_11__tree_nodeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES8_bxydS6_NS9_14adl_serializerENSC_IhNS6_IhEEEEEEEEPvEENS_22__tree_node_destructorINS6_ISJ_EEEEED1Ev
                 (long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] != '\0') {
      __ZNSt3__116allocator_traitsINS_9allocatorINS_11__tree_nodeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS1_IcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES8_bxydS1_NS9_14adl_serializerENSC_IhNS1_IhEEEEEEEEPvEEEEE7destroyINS_4pairIKS8_SG_EEvvEEvRSK_PT_
                ((undefined8 *)(lVar1 + 0x20));
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



uint __ZNKSt3__14lessIvEclIRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_EEDTltclsr3std3__1E7forwardIT_Efp_Eclsr3std3__1E7forwardIT0_Efp0_EEOSB_OSC_
               (undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (undefined8 *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (undefined8 *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_00015024;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_00015024:
  return uVar8 >> 0x1f;
}



undefined8 * __ZN8nlohmann6detail12out_of_rangeC1ERKS1_(undefined8 *param_1,long param_2)

{
  *param_1 = &DAT_00028898;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  __ZNSt13runtime_errorC1ERKS_(param_1 + 2,param_2 + 0x10);
  *param_1 = &DAT_00028998;
  return param_1;
}



void __ZN8nlohmann6detail12out_of_rangeD0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028898;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(param_1);
  __ZdlPv();
  return;
}



undefined1  [16]
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRdEENS3_4pairIbPSF_EEOT_b
          (long *param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  byte local_50 [8];
  undefined8 local_48;
  byte local_40 [8];
  undefined8 local_38;
  byte local_30 [8];
  undefined8 local_28;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar6 = 0;
    lVar7 = 0;
    goto LAB_0001522c;
  }
  local_30[0] = 0;
  local_28 = 0;
  __ZN8nlohmann6detail20external_constructorILNS0_7value_tE7EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_14number_float_tE
            (*param_2,local_30);
  if (((param_3 & 1) == 0) &&
     (uVar2 = __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
                        ((long)(param_1 + 0xc),(int)((ulong)(param_1[2] - param_1[1]) >> 3),5),
     (uVar2 & 1) == 0)) {
LAB_0001521c:
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    uVar6 = local_28;
    bVar1 = local_30[0];
    if (param_1[1] == param_1[2]) {
      local_30[0] = 0;
      local_28 = 0;
      pbVar5 = (byte *)*param_1;
      local_40[0] = *pbVar5;
      *pbVar5 = bVar1;
      local_38 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = uVar6;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_40);
      lVar7 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_0001521c;
      if (*pcVar3 == '\x02') {
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE12emplace_backIJSD_EEERSD_DpOT_
                  (*(long **)(pcVar3 + 8),local_30);
        lVar7 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar2 = param_1[8] - 1;
        uVar4 = *(ulong *)(param_1[7] + (uVar2 >> 3 & 0x1ffffffffffffff8));
        param_1[8] = uVar2;
        if ((uVar4 >> (uVar2 & 0x3f) & 1) == 0) goto LAB_0001521c;
        local_30[0] = 0;
        local_28 = 0;
        pbVar5 = (byte *)param_1[10];
        local_50[0] = *pbVar5;
        *pbVar5 = bVar1;
        local_48 = *(undefined8 *)(pbVar5 + 8);
        *(undefined8 *)(pbVar5 + 8) = uVar6;
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                  (local_50);
        lVar7 = param_1[10];
      }
    }
    uVar6 = 1;
  }
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_30);
LAB_0001522c:
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



undefined1  [16]
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRbEENS3_4pairIbPSF_EEOT_b
          (long *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  byte local_50 [8];
  undefined8 local_48;
  byte local_40 [8];
  undefined8 local_38;
  byte local_30 [8];
  undefined8 local_28;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar6 = 0;
    lVar7 = 0;
    goto LAB_000153d0;
  }
  local_30[0] = 0;
  local_28 = 0;
  __ZN8nlohmann6detail20external_constructorILNS0_7value_tE4EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_9boolean_tE
            (local_30,(ulong)*param_2);
  if (((param_3 & 1) == 0) &&
     (uVar2 = __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
                        ((long)(param_1 + 0xc),(int)((ulong)(param_1[2] - param_1[1]) >> 3),5),
     (uVar2 & 1) == 0)) {
LAB_000153c0:
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    uVar6 = local_28;
    bVar1 = local_30[0];
    if (param_1[1] == param_1[2]) {
      local_30[0] = 0;
      local_28 = 0;
      pbVar5 = (byte *)*param_1;
      local_40[0] = *pbVar5;
      *pbVar5 = bVar1;
      local_38 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = uVar6;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_40);
      lVar7 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_000153c0;
      if (*pcVar3 == '\x02') {
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE12emplace_backIJSD_EEERSD_DpOT_
                  (*(long **)(pcVar3 + 8),local_30);
        lVar7 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar2 = param_1[8] - 1;
        uVar4 = *(ulong *)(param_1[7] + (uVar2 >> 3 & 0x1ffffffffffffff8));
        param_1[8] = uVar2;
        if ((uVar4 >> (uVar2 & 0x3f) & 1) == 0) goto LAB_000153c0;
        local_30[0] = 0;
        local_28 = 0;
        pbVar5 = (byte *)param_1[10];
        local_50[0] = *pbVar5;
        *pbVar5 = bVar1;
        local_48 = *(undefined8 *)(pbVar5 + 8);
        *(undefined8 *)(pbVar5 + 8) = uVar6;
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                  (local_50);
        lVar7 = param_1[10];
      }
    }
    uVar6 = 1;
  }
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_30);
LAB_000153d0:
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



void __ZN8nlohmann6detail20external_constructorILNS0_7value_tE4EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_9boolean_tE
               (byte *param_1,ulong param_2)

{
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_value7destroyENS_6detail7value_tE
            ((long *)(param_1 + 8),(uint)*param_1);
  *param_1 = 4;
  *(ulong *)(param_1 + 8) = param_2 & 0xffffffff;
  return;
}



undefined1  [16]
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIDnEENS3_4pairIbPSF_EEOT_b
          (long *param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  byte local_50 [8];
  undefined8 local_48;
  byte local_40 [8];
  undefined8 local_38;
  byte local_30 [8];
  undefined8 local_28;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar6 = 0;
    lVar7 = 0;
    goto LAB_000155a0;
  }
  local_30[0] = 0;
  local_28 = 0;
  if (((param_3 & 1) == 0) &&
     (uVar2 = __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
                        ((long)(param_1 + 0xc),(int)((ulong)(param_1[2] - param_1[1]) >> 3),5),
     (uVar2 & 1) == 0)) {
LAB_00015590:
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    uVar6 = local_28;
    bVar1 = local_30[0];
    if (param_1[1] == param_1[2]) {
      local_30[0] = 0;
      local_28 = 0;
      pbVar5 = (byte *)*param_1;
      local_40[0] = *pbVar5;
      *pbVar5 = bVar1;
      local_38 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = uVar6;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_40);
      lVar7 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_00015590;
      if (*pcVar3 == '\x02') {
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE12emplace_backIJSD_EEERSD_DpOT_
                  (*(long **)(pcVar3 + 8),local_30);
        lVar7 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar2 = param_1[8] - 1;
        uVar4 = *(ulong *)(param_1[7] + (uVar2 >> 3 & 0x1ffffffffffffff8));
        param_1[8] = uVar2;
        if ((uVar4 >> (uVar2 & 0x3f) & 1) == 0) goto LAB_00015590;
        local_30[0] = 0;
        local_28 = 0;
        pbVar5 = (byte *)param_1[10];
        local_50[0] = *pbVar5;
        *pbVar5 = bVar1;
        local_48 = *(undefined8 *)(pbVar5 + 8);
        *(undefined8 *)(pbVar5 + 8) = uVar6;
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                  (local_50);
        lVar7 = param_1[10];
      }
    }
    uVar6 = 1;
  }
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_30);
LAB_000155a0:
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



undefined1  [16]
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRxEENS3_4pairIbPSF_EEOT_b
          (long *param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  byte local_50 [8];
  undefined8 local_48;
  byte local_40 [8];
  undefined8 local_38;
  byte local_30 [8];
  undefined8 local_28;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar6 = 0;
    lVar7 = 0;
    goto LAB_00015744;
  }
  local_30[0] = 0;
  local_28 = 0;
  __ZN8nlohmann6detail20external_constructorILNS0_7value_tE5EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_16number_integer_tE
            (local_30,*param_2);
  if (((param_3 & 1) == 0) &&
     (uVar2 = __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
                        ((long)(param_1 + 0xc),(int)((ulong)(param_1[2] - param_1[1]) >> 3),5),
     (uVar2 & 1) == 0)) {
LAB_00015734:
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    uVar6 = local_28;
    bVar1 = local_30[0];
    if (param_1[1] == param_1[2]) {
      local_30[0] = 0;
      local_28 = 0;
      pbVar5 = (byte *)*param_1;
      local_40[0] = *pbVar5;
      *pbVar5 = bVar1;
      local_38 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = uVar6;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_40);
      lVar7 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_00015734;
      if (*pcVar3 == '\x02') {
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE12emplace_backIJSD_EEERSD_DpOT_
                  (*(long **)(pcVar3 + 8),local_30);
        lVar7 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar2 = param_1[8] - 1;
        uVar4 = *(ulong *)(param_1[7] + (uVar2 >> 3 & 0x1ffffffffffffff8));
        param_1[8] = uVar2;
        if ((uVar4 >> (uVar2 & 0x3f) & 1) == 0) goto LAB_00015734;
        local_30[0] = 0;
        local_28 = 0;
        pbVar5 = (byte *)param_1[10];
        local_50[0] = *pbVar5;
        *pbVar5 = bVar1;
        local_48 = *(undefined8 *)(pbVar5 + 8);
        *(undefined8 *)(pbVar5 + 8) = uVar6;
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                  (local_50);
        lVar7 = param_1[10];
      }
    }
    uVar6 = 1;
  }
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_30);
LAB_00015744:
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



void __ZN8nlohmann6detail20external_constructorILNS0_7value_tE5EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_16number_integer_tE
               (byte *param_1,undefined8 param_2)

{
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_value7destroyENS_6detail7value_tE
            ((long *)(param_1 + 8),(uint)*param_1);
  *param_1 = 5;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



undefined1  [16]
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRSB_EENS3_4pairIbPSF_EEOT_b
          (long *param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  byte local_50 [8];
  undefined8 local_48;
  byte local_40 [8];
  undefined8 local_38;
  byte local_30 [8];
  undefined8 local_28;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar6 = 0;
    lVar7 = 0;
    goto LAB_00015920;
  }
  local_30[0] = 3;
  local_28 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKS9_EEEPT_DpOT0_
                       (param_2);
  if (((param_3 & 1) == 0) &&
     (uVar2 = __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
                        ((long)(param_1 + 0xc),(int)((ulong)(param_1[2] - param_1[1]) >> 3),5),
     (uVar2 & 1) == 0)) {
LAB_00015910:
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    uVar6 = local_28;
    bVar1 = local_30[0];
    if (param_1[1] == param_1[2]) {
      local_30[0] = 0;
      local_28 = 0;
      pbVar5 = (byte *)*param_1;
      local_40[0] = *pbVar5;
      *pbVar5 = bVar1;
      local_38 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = uVar6;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_40);
      lVar7 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_00015910;
      if (*pcVar3 == '\x02') {
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE12emplace_backIJSD_EEERSD_DpOT_
                  (*(long **)(pcVar3 + 8),local_30);
        lVar7 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar2 = param_1[8] - 1;
        uVar4 = *(ulong *)(param_1[7] + (uVar2 >> 3 & 0x1ffffffffffffff8));
        param_1[8] = uVar2;
        if ((uVar4 >> (uVar2 & 0x3f) & 1) == 0) goto LAB_00015910;
        local_30[0] = 0;
        local_28 = 0;
        pbVar5 = (byte *)param_1[10];
        local_50[0] = *pbVar5;
        *pbVar5 = bVar1;
        local_48 = *(undefined8 *)(pbVar5 + 8);
        *(undefined8 *)(pbVar5 + 8) = uVar6;
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                  (local_50);
        lVar7 = param_1[10];
      }
    }
    uVar6 = 1;
  }
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_30);
LAB_00015920:
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



undefined1  [16]
__ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRyEENS3_4pairIbPSF_EEOT_b
          (long *param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  byte local_50 [8];
  undefined8 local_48;
  byte local_40 [8];
  undefined8 local_38;
  byte local_30 [8];
  undefined8 local_28;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar6 = 0;
    lVar7 = 0;
    goto LAB_00015ac4;
  }
  local_30[0] = 0;
  local_28 = 0;
  __ZN8nlohmann6detail20external_constructorILNS0_7value_tE6EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_17number_unsigned_tE
            (local_30,*param_2);
  if (((param_3 & 1) == 0) &&
     (uVar2 = __ZNKSt3__18functionIFbiN8nlohmann6detail13parse_event_tERNS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerENS6_IhNSA_IhEEEEEEEEclEiS3_SH_
                        ((long)(param_1 + 0xc),(int)((ulong)(param_1[2] - param_1[1]) >> 3),5),
     (uVar2 & 1) == 0)) {
LAB_00015ab4:
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    uVar6 = local_28;
    bVar1 = local_30[0];
    if (param_1[1] == param_1[2]) {
      local_30[0] = 0;
      local_28 = 0;
      pbVar5 = (byte *)*param_1;
      local_40[0] = *pbVar5;
      *pbVar5 = bVar1;
      local_38 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = uVar6;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_40);
      lVar7 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_00015ab4;
      if (*pcVar3 == '\x02') {
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE12emplace_backIJSD_EEERSD_DpOT_
                  (*(long **)(pcVar3 + 8),local_30);
        lVar7 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar2 = param_1[8] - 1;
        uVar4 = *(ulong *)(param_1[7] + (uVar2 >> 3 & 0x1ffffffffffffff8));
        param_1[8] = uVar2;
        if ((uVar4 >> (uVar2 & 0x3f) & 1) == 0) goto LAB_00015ab4;
        local_30[0] = 0;
        local_28 = 0;
        pbVar5 = (byte *)param_1[10];
        local_50[0] = *pbVar5;
        *pbVar5 = bVar1;
        local_48 = *(undefined8 *)(pbVar5 + 8);
        *(undefined8 *)(pbVar5 + 8) = uVar6;
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                  (local_50);
        lVar7 = param_1[10];
      }
    }
    uVar6 = 1;
  }
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_30);
LAB_00015ac4:
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



void __ZN8nlohmann6detail20external_constructorILNS0_7value_tE6EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_17number_unsigned_tE
               (byte *param_1,undefined8 param_2)

{
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_value7destroyENS_6detail7value_tE
            ((long *)(param_1 + 8),(uint)*param_1);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



undefined8 * __ZN8nlohmann6detail11parse_errorC1ERKS1_(undefined8 *param_1,long param_2)

{
  *param_1 = &DAT_00028898;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  __ZNSt13runtime_errorC1ERKS_(param_1 + 2,param_2 + 0x10);
  *param_1 = &DAT_000289d8;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}



void __ZN8nlohmann6detail11parse_errorD0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028898;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(param_1);
  __ZdlPv();
  return;
}



// WARNING: Removing unreachable block (ram,0x00015c90)

void __ZN8nlohmann6detail11parse_error15position_stringERKNS0_10position_tE
               (undefined8 *param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *local_90;
  ulong uStack_88;
  byte local_79;
  undefined8 local_78 [2];
  char local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  __ZNSt3__19to_stringEm(local_78,*(long *)(param_2 + 0x10) + 1);
  puVar2 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                     (local_78,0," at line ");
  uStack_58 = puVar2[1];
  local_60 = *puVar2;
  local_50 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                     (&local_60,", column ");
  uStack_38 = puVar2[1];
  local_40 = *puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__19to_stringEm(&local_90,*(undefined8 *)(param_2 + 8));
  ppuVar1 = (undefined1 **)local_90;
  if (-1 < (char)local_79) {
    uStack_88 = (ulong)local_79;
    ppuVar1 = &local_90;
  }
  puVar2 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                     (&local_40,ppuVar1,uStack_88);
  uVar3 = *puVar2;
  param_1[1] = puVar2[1];
  *param_1 = uVar3;
  param_1[2] = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if ((char)local_79 < '\0') {
    __ZdlPv(local_90);
  }
  if (local_50 < 0) {
    __ZdlPv(local_60);
  }
  if (local_61 < '\0') {
    __ZdlPv(local_78[0]);
  }
  return;
}



char * __ZN8nlohmann6detail10lexer_baseINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE15token_type_nameENSG_10token_typeE
                 (uint param_1)

{
  if (param_1 < 0x11) {
    return *(char **)(&DAT_00028d28 + (long)(int)param_1 * 8);
  }
  return "unknown token";
}



long __ZN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEED2Ev
               (long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            ((byte *)(param_1 + 0x88));
  plVar1 = *(long **)(param_1 + 0x78);
  if ((long *)(param_1 + 0x60) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00015d94;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00015d94:
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



undefined8
__ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE11parse_errorINS0_12out_of_rangeEEEbmRKSB_RKT_
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(char *)(param_1 + 0x29) == '\0') {
    return 0;
  }
  puVar1 = (undefined8 *)___cxa_allocate_exception(0x20);
  puVar1 = __ZN8nlohmann6detail12out_of_rangeC1ERKS1_(puVar1,param_4);
                    // WARNING: Subroutine does not return
  ___cxa_throw(puVar1,&__ZTIN8nlohmann6detail12out_of_rangeE,__ZN8nlohmann6detail12out_of_rangeD1Ev)
  ;
}



long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueINS0_7value_tEEEPSF_OT_
               (long *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  _Unwind_Exception *exception_object;
  char *pcVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  byte local_88 [8];
  undefined8 local_80;
  byte local_78 [8];
  undefined8 local_70;
  long local_68;
  byte *pbStack_60;
  byte *local_58;
  long lStack_50;
  long *local_48;
  
  if (param_1[1] == param_1[2]) {
    local_78[0] = *param_2;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_valueC2ENS_6detail7value_tE
              (&local_70,(uint)local_78[0]);
    pbVar5 = (byte *)*param_1;
    bVar2 = *pbVar5;
    *pbVar5 = local_78[0];
    uVar7 = *(undefined8 *)(pbVar5 + 8);
    *(undefined8 *)(pbVar5 + 8) = local_70;
    local_78[0] = bVar2;
    local_70 = uVar7;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              (local_78);
    lVar3 = *param_1;
  }
  else {
    pcVar4 = *(char **)(param_1[2] + -8);
    if (*pcVar4 == '\x02') {
      plVar9 = *(long **)(pcVar4 + 8);
      pbVar5 = (byte *)plVar9[1];
      if (pbVar5 < (byte *)plVar9[2]) {
        bVar2 = *param_2;
        *pbVar5 = bVar2;
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_valueC2ENS_6detail7value_tE
                  ((undefined8 *)(pbVar5 + 8),(uint)bVar2);
        plVar9[1] = (long)(pbVar5 + 0x10);
      }
      else {
        lVar3 = (long)pbVar5 - *plVar9 >> 4;
        uVar1 = lVar3 + 1;
        if (uVar1 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
          __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                    ();
        }
        local_48 = plVar9 + 2;
        lVar6 = plVar9[2] - *plVar9;
        uVar8 = lVar6 >> 3;
        if (uVar1 <= uVar8) {
          uVar1 = uVar8;
        }
        if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 == 0) {
          local_68 = 0;
        }
        else {
          if (uVar1 >> 0x3c != 0) {
            exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
            plVar9[1] = lVar3;
                    // WARNING: Subroutine does not return
            __Unwind_Resume(exception_object);
          }
          local_68 = __Znwm(uVar1 << 4);
        }
        pbVar5 = (byte *)(local_68 + lVar3 * 0x10);
        lStack_50 = local_68 + uVar1 * 0x10;
        bVar2 = *param_2;
        *pbVar5 = bVar2;
        pbStack_60 = pbVar5;
        local_58 = pbVar5;
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_valueC2ENS_6detail7value_tE
                  ((undefined8 *)(pbVar5 + 8),(uint)bVar2);
        local_58 = pbVar5 + 0x10;
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
                  (plVar9,&local_68);
        __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                  (&local_68);
      }
      lVar3 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_88[0] = *param_2;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_valueC2ENS_6detail7value_tE
                (&local_80,(uint)local_88[0]);
      pbVar5 = (byte *)param_1[4];
      bVar2 = *pbVar5;
      *pbVar5 = local_88[0];
      uVar7 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = local_80;
      local_88[0] = bVar2;
      local_80 = uVar7;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_88);
      lVar3 = param_1[4];
    }
  }
  return lVar3;
}



long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRdEEPSF_OT_
               (long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  _Unwind_Exception *exception_object;
  char *pcVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  byte local_88 [8];
  undefined8 local_80;
  byte local_78 [8];
  undefined8 local_70;
  long local_68;
  byte *pbStack_60;
  byte *local_58;
  long local_50;
  long *local_48;
  
  if (param_1[1] == param_1[2]) {
    local_78[0] = 0;
    local_70 = 0;
    __ZN8nlohmann6detail20external_constructorILNS0_7value_tE7EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_14number_float_tE
              (*param_2,local_78);
    pbVar5 = (byte *)*param_1;
    bVar2 = *pbVar5;
    *pbVar5 = local_78[0];
    uVar7 = *(undefined8 *)(pbVar5 + 8);
    *(undefined8 *)(pbVar5 + 8) = local_70;
    local_78[0] = bVar2;
    local_70 = uVar7;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              (local_78);
    lVar3 = *param_1;
  }
  else {
    pcVar4 = *(char **)(param_1[2] + -8);
    if (*pcVar4 == '\x02') {
      plVar9 = *(long **)(pcVar4 + 8);
      pbVar5 = (byte *)plVar9[1];
      if (pbVar5 < (byte *)plVar9[2]) {
        *pbVar5 = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        __ZN8nlohmann6detail20external_constructorILNS0_7value_tE7EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_14number_float_tE
                  (*param_2,pbVar5);
        plVar9[1] = (long)(pbVar5 + 0x10);
      }
      else {
        lVar3 = (long)pbVar5 - *plVar9 >> 4;
        uVar1 = lVar3 + 1;
        if (uVar1 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
          __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                    ();
        }
        local_48 = plVar9 + 2;
        lVar6 = plVar9[2] - *plVar9;
        uVar8 = lVar6 >> 3;
        if (uVar1 <= uVar8) {
          uVar1 = uVar8;
        }
        if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 >> 0x3c != 0) {
          exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
          __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                    (&local_68);
                    // WARNING: Subroutine does not return
          __Unwind_Resume(exception_object);
        }
        local_68 = __Znwm(uVar1 << 4);
        pbVar5 = (byte *)(local_68 + lVar3 * 0x10);
        local_50 = local_68 + uVar1 * 0x10;
        *pbVar5 = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        pbStack_60 = pbVar5;
        __ZN8nlohmann6detail20external_constructorILNS0_7value_tE7EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_14number_float_tE
                  (*param_2,pbVar5);
        local_58 = pbVar5 + 0x10;
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
                  (plVar9,&local_68);
        __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                  (&local_68);
      }
      lVar3 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_88[0] = 0;
      local_80 = 0;
      __ZN8nlohmann6detail20external_constructorILNS0_7value_tE7EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_14number_float_tE
                (*param_2,local_88);
      pbVar5 = (byte *)param_1[4];
      bVar2 = *pbVar5;
      *pbVar5 = local_88[0];
      uVar7 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = local_80;
      local_88[0] = bVar2;
      local_80 = uVar7;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_88);
      lVar3 = param_1[4];
    }
  }
  return lVar3;
}



long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRbEEPSF_OT_
               (long *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  _Unwind_Exception *exception_object;
  char *pcVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  byte local_88 [8];
  undefined8 local_80;
  byte local_78 [8];
  undefined8 local_70;
  long local_68;
  byte *pbStack_60;
  byte *local_58;
  long local_50;
  long *local_48;
  
  if (param_1[1] == param_1[2]) {
    local_78[0] = 0;
    local_70 = 0;
    __ZN8nlohmann6detail20external_constructorILNS0_7value_tE4EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_9boolean_tE
              (local_78,(ulong)*param_2);
    pbVar5 = (byte *)*param_1;
    bVar2 = *pbVar5;
    *pbVar5 = local_78[0];
    uVar7 = *(undefined8 *)(pbVar5 + 8);
    *(undefined8 *)(pbVar5 + 8) = local_70;
    local_78[0] = bVar2;
    local_70 = uVar7;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              (local_78);
    lVar3 = *param_1;
  }
  else {
    pcVar4 = *(char **)(param_1[2] + -8);
    if (*pcVar4 == '\x02') {
      plVar9 = *(long **)(pcVar4 + 8);
      pbVar5 = (byte *)plVar9[1];
      if (pbVar5 < (byte *)plVar9[2]) {
        *pbVar5 = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        __ZN8nlohmann6detail20external_constructorILNS0_7value_tE4EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_9boolean_tE
                  (pbVar5,(ulong)*param_2);
        plVar9[1] = (long)(pbVar5 + 0x10);
      }
      else {
        lVar3 = (long)pbVar5 - *plVar9 >> 4;
        uVar1 = lVar3 + 1;
        if (uVar1 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
          __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                    ();
        }
        local_48 = plVar9 + 2;
        lVar6 = plVar9[2] - *plVar9;
        uVar8 = lVar6 >> 3;
        if (uVar1 <= uVar8) {
          uVar1 = uVar8;
        }
        if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 >> 0x3c != 0) {
          exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
          __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                    (&local_68);
                    // WARNING: Subroutine does not return
          __Unwind_Resume(exception_object);
        }
        local_68 = __Znwm(uVar1 << 4);
        pbVar5 = (byte *)(local_68 + lVar3 * 0x10);
        local_50 = local_68 + uVar1 * 0x10;
        *pbVar5 = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        pbStack_60 = pbVar5;
        __ZN8nlohmann6detail20external_constructorILNS0_7value_tE4EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_9boolean_tE
                  (pbVar5,(ulong)*param_2);
        local_58 = pbVar5 + 0x10;
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
                  (plVar9,&local_68);
        __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                  (&local_68);
      }
      lVar3 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_88[0] = 0;
      local_80 = 0;
      __ZN8nlohmann6detail20external_constructorILNS0_7value_tE4EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_9boolean_tE
                (local_88,(ulong)*param_2);
      pbVar5 = (byte *)param_1[4];
      bVar2 = *pbVar5;
      *pbVar5 = local_88[0];
      uVar7 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = local_80;
      local_88[0] = bVar2;
      local_80 = uVar7;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_88);
      lVar3 = param_1[4];
    }
  }
  return lVar3;
}



long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIDnEEPSF_OT_
               (long *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  _Unwind_Exception *exception_object;
  char *pcVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  byte local_78 [8];
  undefined8 local_70;
  byte local_68 [8];
  undefined8 local_60;
  long local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  long lStack_40;
  long *local_38;
  
  if (param_1[1] == param_1[2]) {
    pbVar5 = (byte *)*param_1;
    local_68[0] = *pbVar5;
    *pbVar5 = 0;
    local_60 = *(undefined8 *)(pbVar5 + 8);
    pbVar5[8] = 0;
    pbVar5[9] = 0;
    pbVar5[10] = 0;
    pbVar5[0xb] = 0;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              (local_68);
    lVar3 = *param_1;
  }
  else {
    pcVar4 = *(char **)(param_1[2] + -8);
    if (*pcVar4 == '\x02') {
      plVar8 = *(long **)(pcVar4 + 8);
      puVar2 = (undefined1 *)plVar8[1];
      if (puVar2 < (undefined1 *)plVar8[2]) {
        *puVar2 = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        plVar8[1] = (long)(puVar2 + 0x10);
      }
      else {
        lVar3 = (long)puVar2 - *plVar8 >> 4;
        uVar1 = lVar3 + 1;
        if (uVar1 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
          __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                    ();
        }
        local_38 = plVar8 + 2;
        lVar6 = plVar8[2] - *plVar8;
        uVar7 = lVar6 >> 3;
        if (uVar1 <= uVar7) {
          uVar1 = uVar7;
        }
        if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 >> 0x3c != 0) {
          exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
          __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                    (&local_58);
                    // WARNING: Subroutine does not return
          __Unwind_Resume(exception_object);
        }
        local_58 = __Znwm(uVar1 << 4);
        puStack_50 = (undefined1 *)(local_58 + lVar3 * 0x10);
        lStack_40 = local_58 + uVar1 * 0x10;
        *puStack_50 = 0;
        *(undefined8 *)(puStack_50 + 8) = 0;
        local_48 = puStack_50 + 0x10;
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
                  (plVar8,&local_58);
        __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                  (&local_58);
      }
      lVar3 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      pbVar5 = (byte *)param_1[4];
      local_78[0] = *pbVar5;
      *pbVar5 = 0;
      local_70 = *(undefined8 *)(pbVar5 + 8);
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_78);
      lVar3 = param_1[4];
    }
  }
  return lVar3;
}



long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRxEEPSF_OT_
               (long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  _Unwind_Exception *exception_object;
  char *pcVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  byte local_88 [8];
  undefined8 local_80;
  byte local_78 [8];
  undefined8 local_70;
  long local_68;
  byte *pbStack_60;
  byte *local_58;
  long local_50;
  long *local_48;
  
  if (param_1[1] == param_1[2]) {
    local_78[0] = 0;
    local_70 = 0;
    __ZN8nlohmann6detail20external_constructorILNS0_7value_tE5EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_16number_integer_tE
              (local_78,*param_2);
    pbVar5 = (byte *)*param_1;
    bVar2 = *pbVar5;
    *pbVar5 = local_78[0];
    uVar7 = *(undefined8 *)(pbVar5 + 8);
    *(undefined8 *)(pbVar5 + 8) = local_70;
    local_78[0] = bVar2;
    local_70 = uVar7;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              (local_78);
    lVar3 = *param_1;
  }
  else {
    pcVar4 = *(char **)(param_1[2] + -8);
    if (*pcVar4 == '\x02') {
      plVar9 = *(long **)(pcVar4 + 8);
      pbVar5 = (byte *)plVar9[1];
      if (pbVar5 < (byte *)plVar9[2]) {
        *pbVar5 = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        __ZN8nlohmann6detail20external_constructorILNS0_7value_tE5EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_16number_integer_tE
                  (pbVar5,*param_2);
        plVar9[1] = (long)(pbVar5 + 0x10);
      }
      else {
        lVar3 = (long)pbVar5 - *plVar9 >> 4;
        uVar1 = lVar3 + 1;
        if (uVar1 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
          __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                    ();
        }
        local_48 = plVar9 + 2;
        lVar6 = plVar9[2] - *plVar9;
        uVar8 = lVar6 >> 3;
        if (uVar1 <= uVar8) {
          uVar1 = uVar8;
        }
        if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 >> 0x3c != 0) {
          exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
          __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                    (&local_68);
                    // WARNING: Subroutine does not return
          __Unwind_Resume(exception_object);
        }
        local_68 = __Znwm(uVar1 << 4);
        pbVar5 = (byte *)(local_68 + lVar3 * 0x10);
        local_50 = local_68 + uVar1 * 0x10;
        *pbVar5 = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        pbStack_60 = pbVar5;
        __ZN8nlohmann6detail20external_constructorILNS0_7value_tE5EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_16number_integer_tE
                  (pbVar5,*param_2);
        local_58 = pbVar5 + 0x10;
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
                  (plVar9,&local_68);
        __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                  (&local_68);
      }
      lVar3 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_88[0] = 0;
      local_80 = 0;
      __ZN8nlohmann6detail20external_constructorILNS0_7value_tE5EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_16number_integer_tE
                (local_88,*param_2);
      pbVar5 = (byte *)param_1[4];
      bVar2 = *pbVar5;
      *pbVar5 = local_88[0];
      uVar7 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = local_80;
      local_88[0] = bVar2;
      local_80 = uVar7;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_88);
      lVar3 = param_1[4];
    }
  }
  return lVar3;
}



long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRSB_EEPSF_OT_
               (long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  _Unwind_Exception *exception_object;
  char *pcVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  byte local_88 [8];
  undefined8 local_80;
  byte local_78 [8];
  undefined8 local_70;
  long local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  long lStack_50;
  long *local_48;
  
  if (param_1[1] == param_1[2]) {
    uVar3 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKS9_EEEPT_DpOT0_
                      (param_2);
    pbVar6 = (byte *)*param_1;
    local_78[0] = *pbVar6;
    *pbVar6 = 3;
    local_70 = *(undefined8 *)(pbVar6 + 8);
    *(undefined8 *)(pbVar6 + 8) = uVar3;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              (local_78);
    lVar4 = *param_1;
  }
  else {
    pcVar5 = *(char **)(param_1[2] + -8);
    if (*pcVar5 == '\x02') {
      plVar9 = *(long **)(pcVar5 + 8);
      puVar2 = (undefined1 *)plVar9[1];
      if (puVar2 < (undefined1 *)plVar9[2]) {
        *(undefined8 *)(puVar2 + 8) = 0;
        *puVar2 = 3;
        uVar3 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKS9_EEEPT_DpOT0_
                          (param_2);
        *(undefined8 *)(puVar2 + 8) = uVar3;
        plVar9[1] = (long)(puVar2 + 0x10);
      }
      else {
        lVar4 = (long)puVar2 - *plVar9 >> 4;
        uVar1 = lVar4 + 1;
        if (uVar1 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
          __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                    ();
        }
        local_48 = plVar9 + 2;
        lVar7 = plVar9[2] - *plVar9;
        uVar8 = lVar7 >> 3;
        if (uVar1 <= uVar8) {
          uVar1 = uVar8;
        }
        if (0x7fffffffffffffe < (ulong)(lVar7 >> 4)) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 == 0) {
          local_68 = 0;
        }
        else {
          if (uVar1 >> 0x3c != 0) {
            exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
            plVar9[1] = lVar4;
                    // WARNING: Subroutine does not return
            __Unwind_Resume(exception_object);
          }
          local_68 = __Znwm(uVar1 << 4);
        }
        puVar2 = (undefined1 *)(local_68 + lVar4 * 0x10);
        lStack_50 = local_68 + uVar1 * 0x10;
        *(undefined8 *)(puVar2 + 8) = 0;
        *puVar2 = 3;
        puStack_60 = puVar2;
        local_58 = puVar2;
        uVar3 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKS9_EEEPT_DpOT0_
                          (param_2);
        *(undefined8 *)(puVar2 + 8) = uVar3;
        local_58 = puVar2 + 0x10;
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
                  (plVar9,&local_68);
        __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                  (&local_68);
      }
      lVar4 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      uVar3 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKS9_EEEPT_DpOT0_
                        (param_2);
      pbVar6 = (byte *)param_1[4];
      local_88[0] = *pbVar6;
      *pbVar6 = 3;
      local_80 = *(undefined8 *)(pbVar6 + 8);
      *(undefined8 *)(pbVar6 + 8) = uVar3;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_88);
      lVar4 = param_1[4];
    }
  }
  return lVar4;
}



long __ZN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12handle_valueIRyEEPSF_OT_
               (long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  _Unwind_Exception *exception_object;
  char *pcVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  byte local_88 [8];
  undefined8 local_80;
  byte local_78 [8];
  undefined8 local_70;
  long local_68;
  byte *pbStack_60;
  byte *local_58;
  long local_50;
  long *local_48;
  
  if (param_1[1] == param_1[2]) {
    local_78[0] = 0;
    local_70 = 0;
    __ZN8nlohmann6detail20external_constructorILNS0_7value_tE6EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_17number_unsigned_tE
              (local_78,*param_2);
    pbVar5 = (byte *)*param_1;
    bVar2 = *pbVar5;
    *pbVar5 = local_78[0];
    uVar7 = *(undefined8 *)(pbVar5 + 8);
    *(undefined8 *)(pbVar5 + 8) = local_70;
    local_78[0] = bVar2;
    local_70 = uVar7;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              (local_78);
    lVar3 = *param_1;
  }
  else {
    pcVar4 = *(char **)(param_1[2] + -8);
    if (*pcVar4 == '\x02') {
      plVar9 = *(long **)(pcVar4 + 8);
      pbVar5 = (byte *)plVar9[1];
      if (pbVar5 < (byte *)plVar9[2]) {
        *pbVar5 = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        __ZN8nlohmann6detail20external_constructorILNS0_7value_tE6EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_17number_unsigned_tE
                  (pbVar5,*param_2);
        plVar9[1] = (long)(pbVar5 + 0x10);
      }
      else {
        lVar3 = (long)pbVar5 - *plVar9 >> 4;
        uVar1 = lVar3 + 1;
        if (uVar1 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
          __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
                    ();
        }
        local_48 = plVar9 + 2;
        lVar6 = plVar9[2] - *plVar9;
        uVar8 = lVar6 >> 3;
        if (uVar1 <= uVar8) {
          uVar1 = uVar8;
        }
        if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 >> 0x3c != 0) {
          exception_object = (_Unwind_Exception *)__ZNSt3__1L20__throw_length_errorEPKc();
          __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                    (&local_68);
                    // WARNING: Subroutine does not return
          __Unwind_Resume(exception_object);
        }
        local_68 = __Znwm(uVar1 << 4);
        pbVar5 = (byte *)(local_68 + lVar3 * 0x10);
        local_50 = local_68 + uVar1 * 0x10;
        *pbVar5 = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        pbStack_60 = pbVar5;
        __ZN8nlohmann6detail20external_constructorILNS0_7value_tE6EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_17number_unsigned_tE
                  (pbVar5,*param_2);
        local_58 = pbVar5 + 0x10;
        __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE26__swap_out_circular_bufferERNS_14__split_bufferISD_RSE_EE
                  (plVar9,&local_68);
        __ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEERNS8_ISE_EEED2Ev
                  (&local_68);
      }
      lVar3 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_88[0] = 0;
      local_80 = 0;
      __ZN8nlohmann6detail20external_constructorILNS0_7value_tE6EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_17number_unsigned_tE
                (local_88,*param_2);
      pbVar5 = (byte *)param_1[4];
      bVar2 = *pbVar5;
      *pbVar5 = local_88[0];
      uVar7 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = local_80;
      local_88[0] = bVar2;
      local_80 = uVar7;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_88);
      lVar3 = param_1[4];
    }
  }
  return lVar3;
}



long * __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE4findIA3_cEENS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEERKT_
                 (long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      uVar1 = __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                        (plVar5 + 4,param_2);
      if (-1 < (int)uVar1) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[uVar1 >> 0x1f];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) &&
       (iVar2 = __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                          (plVar4 + 4,param_2), iVar2 < 1)) {
      return plVar4;
    }
  }
  return plVar3;
}



undefined1 *
__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ESt16initializer_listINS_6detail8json_refISD_EEEbNSF_7value_tE
          (undefined1 *param_1,char *param_2,long param_3,ulong param_4,int param_5)

{
  bool bVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  char *local_78;
  undefined8 local_70;
  char *local_68;
  long *local_60;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (param_3 != 0) {
    lVar6 = param_3 * 0x18;
    pcVar5 = param_2;
    do {
      pcVar2 = pcVar5;
      if (*(char **)(pcVar5 + 0x10) != (char *)0x0) {
        pcVar2 = *(char **)(pcVar5 + 0x10);
      }
      if (((*pcVar2 != '\x02') || ((*(long **)(pcVar2 + 8))[1] - **(long **)(pcVar2 + 8) != 0x20))
         || (pcVar2 = (char *)__ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixEm
                                        (pcVar2,0), *pcVar2 != '\x03')) {
        bVar1 = false;
        if ((param_4 & 1) != 0) goto LAB_00016c14;
        goto LAB_00016bfc;
      }
      pcVar5 = pcVar5 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  bVar1 = true;
  if ((param_4 & 1) == 0) {
LAB_00016bfc:
    bVar1 = (bool)(param_5 != 2 & bVar1);
    if ((param_5 == 1) && (!bVar1)) {
      puVar3 = (undefined8 *)___cxa_allocate_exception(0x20);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
                (&local_68,"cannot create object from initializer list");
      local_78 = (char *)((ulong)local_78 & 0xffffffffffffff00);
      local_70 = 0;
      __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
                (puVar3,0x12d,&local_68);
                    // WARNING: Subroutine does not return
      ___cxa_throw(puVar3,&__ZTIN8nlohmann6detail10type_errorE,__ZN8nlohmann6detail10type_errorD1Ev)
      ;
    }
  }
LAB_00016c14:
  if (bVar1) {
    *param_1 = 1;
    puVar3 = (undefined8 *)__Znwm(0x18);
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = puVar3 + 1;
    *(undefined8 **)(param_1 + 8) = puVar3;
    if (param_3 != 0) {
      lVar6 = param_3 * 0x18;
      pcVar5 = param_2 + 8;
      do {
        if (*(undefined1 **)(pcVar5 + 8) == (undefined1 *)0x0) {
          local_68 = (char *)CONCAT71(local_68._1_7_,pcVar5[-8]);
          local_60 = *(long **)pcVar5;
          pcVar5[-8] = '\0';
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5[4] = '\0';
          pcVar5[5] = '\0';
          pcVar5[6] = '\0';
          pcVar5[7] = '\0';
        }
        else {
          __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ERKSD_
                    ((undefined1 *)&local_68,*(undefined1 **)(pcVar5 + 8));
        }
        puVar3 = *(undefined8 **)(*local_60 + 8);
        __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JS7_SF_EEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_
                  (*(long **)(param_1 + 8),puVar3,puVar3,(undefined1 *)(*local_60 + 0x10));
        __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                  ((byte *)&local_68);
        pcVar5 = pcVar5 + 0x18;
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != 0);
    }
  }
  else {
    *param_1 = 2;
    local_78 = param_2 + param_3 * 0x18;
    local_68 = param_2;
    plVar4 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createINS3_ISD_NS7_ISD_EEEEJPKNS_6detail8json_refISD_EESL_EEEPT_DpOT0_
                       (&local_68,&local_78);
    *(long **)(param_1 + 8) = plVar4;
  }
  return param_1;
}



long * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createINS3_ISD_NS7_ISD_EEEEJPKNS_6detail8json_refISD_EESL_EEEPT_DpOT0_
                 (undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)__Znwm(0x18);
  __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEEC2IPKNS1_6detail8json_refISD_EEEET_NS_9enable_ifIXaasr27__is_cpp17_forward_iteratorISM_EE5valuesr16is_constructibleISD_NS_15iterator_traitsISM_E9referenceEEE5valueESM_E4typeE
            (plVar1,(byte *)*param_1,(byte *)*param_2);
  return plVar1;
}



long __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixEm
               (char *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 auStack_68 [3];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*param_1 == '\x02') {
    return **(long **)(param_1 + 8) + param_2 * 0x10;
  }
  puVar1 = (undefined8 *)___cxa_allocate_exception(0x20);
  if ((ulong)(long)*param_1 < 10) {
    pcVar3 = *(char **)(&DAT_00028db0 + (long)*param_1 * 8);
  }
  else {
    pcVar3 = "number";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(auStack_68,pcVar3);
  puVar2 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                     (auStack_68,0,"cannot use operator[] with a numeric argument with ");
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  local_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
            (puVar1,0x131,&local_50);
                    // WARNING: Subroutine does not return
  ___cxa_throw(puVar1,&__ZTIN8nlohmann6detail10type_errorE,__ZN8nlohmann6detail10type_errorD1Ev);
}



undefined1  [16]
__ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JS7_SF_EEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_
          (long *param_1,undefined8 *param_2,long *param_3,undefined1 *param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long local_60;
  long *local_58;
  undefined1 local_50;
  long local_48;
  
  plVar2 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISR_EERKT_
                     ((long)param_1,&local_48,param_2);
  plVar3 = (long *)*plVar2;
  bVar1 = plVar3 == (long *)0x0;
  if (bVar1) {
    plVar3 = (long *)__Znwm(0x48);
    lVar4 = *param_3;
    plVar3[5] = param_3[1];
    plVar3[4] = lVar4;
    plVar3[6] = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(plVar3 + 7) = *param_4;
    plVar3[8] = *(long *)(param_4 + 8);
    *param_4 = 0;
    *(undefined8 *)(param_4 + 8) = 0;
    local_50 = 1;
    local_58 = param_1 + 1;
    __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSR_SR_
              (param_1,local_48,plVar2,plVar3);
    local_60 = 0;
    __ZNSt3__110unique_ptrINS_11__tree_nodeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES8_bxydS6_NS9_14adl_serializerENSC_IhNS6_IhEEEEEEEEPvEENS_22__tree_node_destructorINS6_ISJ_EEEEED1Ev
              (&local_60);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = plVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



long * __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEEC2IPKNS1_6detail8json_refISD_EEEET_NS_9enable_ifIXaasr27__is_cpp17_forward_iteratorISM_EE5valuesr16is_constructibleISD_NS_15iterator_traitsISM_E9referenceEEE5valueESM_E4typeE
                 (long *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((long)param_3 - (long)param_2 != 0) {
    __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE11__vallocateEm
              (param_1,((long)param_3 - (long)param_2 >> 3) * -0x5555555555555555);
    pbVar1 = (byte *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 0x18) {
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC1INS_6detail8json_refISD_EELi0EEERKT_
                (pbVar1,param_2);
      pbVar1 = pbVar1 + 0x10;
    }
    param_1[1] = (long)pbVar1;
  }
  return param_1;
}



void __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE11__vallocateEm
               (long *param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = __Znwm(param_2 << 4);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0x10;
    return;
  }
                    // WARNING: Subroutine does not return
  __ZNKSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerENS4_IhNS8_IhEEEEEENS8_ISE_EEE20__throw_length_errorEv
            ();
}



byte * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC1INS_6detail8json_refISD_EELi0EEERKT_
                 (byte *param_1,byte *param_2)

{
  byte local_30 [8];
  undefined8 local_28;
  
  if (*(undefined1 **)(param_2 + 0x10) == (undefined1 *)0x0) {
    local_30[0] = *param_2;
    local_28 = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  else {
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ERKSD_
              (local_30,*(undefined1 **)(param_2 + 0x10));
  }
  *param_1 = local_30[0];
  *(undefined8 *)(param_1 + 8) = local_28;
  local_30[0] = 0;
  local_28 = 0;
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            (local_30);
  return param_1;
}



long * __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseD2Ev(long *param_1)

{
  if ((char)param_1[0x10] == '\0') {
    __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponse14finalize_replyEv(param_1)
    ;
  }
  if (param_1[0x42] != 0) {
    param_1[0x43] = param_1[0x42];
    __ZdlPv();
  }
  if (param_1[0x3f] != 0) {
    param_1[0x40] = param_1[0x3f];
    __ZdlPv();
  }
  __ZN20wvWavesV15_1_154_1975Utils10WCStMemObjD1Ev(param_1 + 0x19);
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            ((byte *)(param_1 + 0xe));
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
            ((byte *)(param_1 + 1));
  return param_1;
}



void __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponse14finalize_replyEv
               (long *param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  char *pcVar6;
  char ***pppcVar7;
  size_t sVar8;
  undefined8 uVar9;
  long *plVar10;
  char **local_78;
  ulong local_70;
  byte local_61;
  byte local_60 [8];
  undefined8 *local_58;
  byte local_50 [8];
  undefined8 local_48;
  byte local_40 [8];
  undefined8 local_38;
  
  if (*(int *)(*param_1 + 4) == 0) {
    __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE4dumpEicbNS_6detail15error_handler_tE
              (&local_78,(undefined1 *)(param_1 + 0xe),0xffffffff,0x20,0,0);
    uVar1 = local_70;
    if (-1 < (char)local_61) {
      uVar1 = (ulong)local_61;
    }
    lVar4 = *param_1;
    sVar8 = (size_t)*(uint *)(lVar4 + 0x20);
    if (sVar8 <= uVar1) {
      iVar3 = __ZNK20wvWavesV15_1_154_1975Utils15WCStConstMemObj5EmptyEv(lVar4 + 0x40);
      if (iVar3 == 0) {
        __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponse21set_error_and_messageEiPKc
                  (param_1,-0xfa5,
                   "no room for reply in m_call_params.m_reply_c_str and m_call_params.m_mem_obj is already full"
                  );
        __ZN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponse14finalize_replyEv
                  (param_1);
      }
      else {
        pppcVar7 = (char ***)local_78;
        if (-1 < (char)local_61) {
          local_70 = (ulong)local_61;
          pppcVar7 = &local_78;
        }
        __ZN20wvWavesV15_1_154_1975Utils10WCStMemObj6AssignEPKcm(*param_1 + 0x40,pppcVar7,local_70);
        **(undefined1 **)(*param_1 + 0x18) = 0;
      }
      goto LAB_0001740c;
    }
    pcVar6 = *(char **)(lVar4 + 0x18);
    pppcVar7 = (char ***)local_78;
    if (-1 < (char)local_61) {
      pppcVar7 = &local_78;
    }
  }
  else {
    plVar10 = param_1 + 0xe;
    if (((char)*plVar10 != '\x01') ||
       (lVar4 = __ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE13__count_multiIA6_cEEmRKT_
                          (param_1[0xf],"error"), lVar4 == 0)) {
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ESt16initializer_listINS_6detail8json_refISD_EEEbNSF_7value_tE
                (local_40,(char *)0x0,0,0,1);
      pbVar5 = (byte *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                                 ((char *)plVar10,"error");
      bVar2 = *pbVar5;
      *pbVar5 = local_40[0];
      uVar9 = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)(pbVar5 + 8) = local_38;
      local_40[0] = bVar2;
      local_38 = uVar9;
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                (local_40);
    }
    local_50[0] = 0;
    local_48 = 0;
    __ZN8nlohmann6detail20external_constructorILNS0_7value_tE5EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_16number_integer_tE
              (local_50,(long)*(int *)(*param_1 + 4));
    pcVar6 = (char *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                               ((char *)plVar10,"error");
    pbVar5 = (byte *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                               (pcVar6,"code");
    bVar2 = *pbVar5;
    *pbVar5 = local_50[0];
    uVar9 = *(undefined8 *)(pbVar5 + 8);
    *(undefined8 *)(pbVar5 + 8) = local_48;
    local_50[0] = bVar2;
    local_48 = uVar9;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              (local_50);
    local_78 = (char **)param_1[0x1c];
    local_60[0] = 3;
    local_58 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKPKcEEEPT_DpOT0_
                         (&local_78);
    pcVar6 = (char *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                               ((char *)plVar10,"error");
    pbVar5 = (byte *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEixIKcEERSD_PT_
                               (pcVar6,"message");
    local_60[0] = *pbVar5;
    *pbVar5 = 3;
    uVar9 = *(undefined8 *)(pbVar5 + 8);
    *(undefined8 **)(pbVar5 + 8) = local_58;
    local_58 = (undefined8 *)uVar9;
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
              (local_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(&local_78,"result");
    __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5eraseERKS9_
              ((char *)plVar10,&local_78);
    if ((char)local_61 < '\0') {
      __ZdlPv(local_78);
    }
    pcVar6 = *(char **)(*param_1 + 0x18);
    __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE4dumpEicbNS_6detail15error_handler_tE
              (&local_78,(undefined1 *)plVar10,0xffffffff,0x20,0,0);
    pppcVar7 = (char ***)local_78;
    if (-1 < (char)local_61) {
      pppcVar7 = &local_78;
    }
    sVar8 = (size_t)*(uint *)(*param_1 + 0x20);
  }
  _strncpy(pcVar6,(char *)pppcVar7,sVar8);
LAB_0001740c:
  if ((char)local_61 < '\0') {
    __ZdlPv(local_78);
  }
  return;
}



bool __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5eraseERKS9_
               (char *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 auStack_68 [3];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*param_1 == '\x01') {
    bVar1 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE14__erase_uniqueIS7_EEmRKT_
                      (*(undefined8 **)(param_1 + 8),param_2);
    return bVar1;
  }
  puVar2 = (undefined8 *)___cxa_allocate_exception(0x20);
  if ((ulong)(long)*param_1 < 10) {
    pcVar4 = *(char **)(&DAT_00028db0 + (long)*param_1 * 8);
  }
  else {
    pcVar4 = "number";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(auStack_68,pcVar4);
  puVar3 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                     (auStack_68,0,"cannot use erase() with ");
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  local_40 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
            (puVar2,0x133,&local_50);
                    // WARNING: Subroutine does not return
  ___cxa_throw(puVar2,&__ZTIN8nlohmann6detail10type_errorE,__ZN8nlohmann6detail10type_errorD1Ev);
}



void __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE4dumpEicbNS_6detail15error_handler_tE
               (undefined8 *param_1,undefined1 *param_2,undefined8 param_3,byte param_4,
               undefined8 param_5,undefined4 param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *local_2f8;
  long *local_2f0;
  undefined8 auStack_2e8 [80];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_00024040;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar3 = (long *)__Znwm(0x28);
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  plVar3[2] = 0;
  local_2f8 = plVar3 + 3;
  *local_2f8 = (long)&DAT_00028a50;
  *plVar3 = (long)&DAT_00028a00;
  plVar3[4] = (long)param_1;
  *plVar4 = *plVar4 + 1;
  local_2f0 = plVar3;
  __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEC2ENS3_10shared_ptrINS0_23output_adapter_protocolIcEEEEcNS0_15error_handler_tE
            (auStack_2e8,&local_2f8,param_4,param_6);
  plVar1 = local_2f0;
  if (local_2f0 != (long *)0x0) {
    LOAcquire();
    lVar2 = local_2f0[1];
    local_2f0[1] = lVar2 + -1;
    LORelease();
    if (lVar2 == 0) {
      (**(code **)(*local_2f0 + 0x10))(local_2f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  LOAcquire();
  lVar2 = *plVar4;
  *plVar4 = lVar2 + -1;
  LORelease();
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  }
  if ((int)param_3 < 0) {
    __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE4dumpERKSF_bbjj
              (auStack_2e8,param_2,0,param_5,0,0);
  }
  else {
    __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE4dumpERKSF_bbjj
              (auStack_2e8,param_2,1,param_5,param_3,0);
  }
  __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEED2Ev
            ((long)auStack_2e8);
  if (*(long *)PTR____stack_chk_guard_00024040 == local_68) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



long __ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE13__count_multiIA6_cEEmRKT_
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar1 = (long *)(param_1 + 8);
  plVar7 = (long *)*(long *)(param_1 + 8);
  do {
    if (plVar7 == (long *)0x0) goto LAB_00017850;
    iVar2 = __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                      (plVar7 + 4,param_2);
    plVar6 = plVar7;
    if (iVar2 < 1) {
      iVar2 = __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                        (plVar7 + 4,param_2);
      if (-1 < iVar2) {
        for (plVar8 = (long *)*plVar7; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[uVar3 >> 0x1f]
            ) {
          uVar3 = __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                            (plVar8 + 4,param_2);
          if (-1 < (int)uVar3) {
            plVar6 = plVar8;
          }
        }
        for (plVar7 = (long *)plVar7[1]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[iVar2 < 1])
        {
          iVar2 = __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                            (plVar7 + 4,param_2);
          plVar8 = plVar7;
          if (iVar2 < 1) {
            plVar8 = plVar1;
          }
          plVar1 = plVar8;
        }
        if (plVar6 == plVar1) {
LAB_00017850:
          lVar4 = 0;
        }
        else {
          lVar4 = 0;
          do {
            plVar7 = (long *)plVar6[1];
            if ((long *)plVar6[1] == (long *)0x0) {
              plVar7 = plVar6 + 2;
              plVar8 = (long *)*plVar7;
              if ((long *)*plVar8 != plVar6) {
                do {
                  lVar5 = *plVar7;
                  plVar7 = (long *)(lVar5 + 0x10);
                  plVar8 = (long *)*plVar7;
                } while (*plVar8 != lVar5);
              }
            }
            else {
              do {
                plVar8 = plVar7;
                plVar7 = (long *)*plVar8;
              } while ((long *)*plVar8 != (long *)0x0);
            }
            lVar4 = lVar4 + 1;
            plVar6 = plVar8;
          } while (plVar8 != plVar1);
        }
        return lVar4;
      }
      plVar6 = plVar7 + 1;
      plVar7 = plVar1;
    }
    plVar1 = plVar7;
    plVar7 = (long *)*plVar6;
  } while( true );
}



undefined8 *
__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKPKcEEEPT_DpOT0_
          (undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__Znwm(0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
            (puVar1,(char *)*param_1);
  return puVar1;
}



bool __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE14__erase_uniqueIS7_EEmRKT_
               (undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE4findIS7_EENS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEERKT_
                     ((long)param_1,param_2);
  if (param_1 + 1 != plVar1) {
    __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE5eraseENS_21__tree_const_iteratorISG_PNS_11__tree_nodeISG_PvEElEE
              (param_1,plVar1);
  }
  return param_1 + 1 != plVar1;
}



long * __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE4findIS7_EENS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEERKT_
                 (long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      uVar2 = __ZNKSt3__14lessIvEclIRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_EEDTltclsr3std3__1E7forwardIT_Efp_Eclsr3std3__1E7forwardIT0_Efp0_EEOSB_OSC_
                        (plVar5 + 4,param_2);
      lVar1 = 8;
      if (uVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) &&
       (uVar2 = __ZNKSt3__14lessIvEclIRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_EEDTltclsr3std3__1E7forwardIT_Efp_Eclsr3std3__1E7forwardIT0_Efp0_EEOSB_OSC_
                          (param_2,plVar4 + 4), uVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}



void __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE4dumpERKSF_bbjj
               (undefined8 *param_1,undefined1 *param_2,int param_3,undefined8 param_4,
               undefined8 param_5,ulong param_6)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  
  iVar16 = (int)param_5;
  iVar15 = (int)param_6;
  uVar8 = (uint)param_4;
  switch(*param_2) {
  case 0:
    plVar4 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 8);
    pcVar7 = "null";
    break;
  case 1:
    plVar4 = (long *)*param_1;
    if (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 8);
      pcVar7 = "{}";
      goto LAB_00017d1c;
    }
    if (param_3 != 0) {
      (**(code **)(*plVar4 + 8))(plVar4,"{\n",2);
      uVar1 = iVar15 + iVar16;
      uVar11 = (ulong)uVar1;
      plVar4 = param_1 + 0x4c;
      bVar2 = *(byte *)((long)param_1 + 0x277);
      if ((char)bVar2 < '\0') {
        uVar10 = param_1[0x4d];
        if (uVar10 < uVar1) goto LAB_00018464;
      }
      else {
        uVar10 = (ulong)bVar2;
        if (bVar2 < uVar1) {
LAB_00018464:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (plVar4,uVar10 << 1,0x20);
        }
      }
      plVar5 = (long *)**(undefined8 **)(param_2 + 8);
      if ((*(undefined8 **)(param_2 + 8))[2] != 1) {
        uVar10 = 0;
        plVar3 = plVar5;
        do {
          plVar5 = plVar4;
          if (*(char *)((long)param_1 + 0x277) < '\0') {
            plVar5 = (long *)*plVar4;
          }
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar5,uVar11);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
          __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_escapedERKSB_b
                    (param_1,plVar3 + 4,uVar8);
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"\": ",3);
          __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE4dumpERKSF_bbjj
                    (param_1,(undefined1 *)(plVar3 + 7),1,param_4,param_5,uVar11);
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,",\n",2);
          plVar13 = (long *)plVar3[1];
          if ((long *)plVar3[1] == (long *)0x0) {
            plVar13 = plVar3 + 2;
            plVar5 = (long *)*plVar13;
            if ((long *)*plVar5 != plVar3) {
              do {
                lVar14 = *plVar13;
                plVar13 = (long *)(lVar14 + 0x10);
                plVar5 = (long *)*plVar13;
              } while (*plVar5 != lVar14);
            }
          }
          else {
            do {
              plVar5 = plVar13;
              plVar13 = (long *)*plVar5;
            } while ((long *)*plVar5 != (long *)0x0);
          }
          uVar10 = uVar10 + 1;
          plVar3 = plVar5;
        } while (uVar10 < *(long *)(*(long *)(param_2 + 8) + 0x10) - 1U);
      }
      plVar3 = plVar4;
      if (*(char *)((long)param_1 + 0x277) < '\0') {
        plVar3 = (long *)*plVar4;
      }
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar3,uVar11);
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
      __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_escapedERKSB_b
                (param_1,plVar5 + 4,uVar8);
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"\": ",3);
      __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE4dumpERKSF_bbjj
                (param_1,(undefined1 *)(plVar5 + 7),1,param_4,param_5,uVar11);
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
      plVar5 = (long *)*param_1;
      if (*(char *)((long)param_1 + 0x277) < '\0') {
        plVar4 = (long *)*plVar4;
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 8);
      goto LAB_000182e0;
    }
    (**(code **)*plVar4)(plVar4,0x7b);
    plVar4 = (long *)**(undefined8 **)(param_2 + 8);
    if ((*(undefined8 **)(param_2 + 8))[2] != 1) {
      uVar11 = 0;
      plVar5 = plVar4;
      do {
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
        __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_escapedERKSB_b
                  (param_1,plVar5 + 4,uVar8);
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"\":",2);
        __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE4dumpERKSF_bbjj
                  (param_1,(undefined1 *)(plVar5 + 7),0,param_4,param_5,param_6);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
        plVar3 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          plVar3 = plVar5 + 2;
          plVar4 = (long *)*plVar3;
          if ((long *)*plVar4 != plVar5) {
            do {
              lVar14 = *plVar3;
              plVar3 = (long *)(lVar14 + 0x10);
              plVar4 = (long *)*plVar3;
            } while (*plVar4 != lVar14);
          }
        }
        else {
          do {
            plVar4 = plVar3;
            plVar3 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
        uVar11 = uVar11 + 1;
        plVar5 = plVar4;
      } while (uVar11 < *(long *)(*(long *)(param_2 + 8) + 0x10) - 1U);
    }
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
    __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_escapedERKSB_b
              (param_1,plVar4 + 4,uVar8);
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"\":",2);
    __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE4dumpERKSF_bbjj
              (param_1,(undefined1 *)(plVar4 + 7),0,param_4,param_5,param_6);
    goto LAB_000182e4;
  case 2:
    plVar4 = (long *)*param_1;
    if (**(long **)(param_2 + 8) != (*(long **)(param_2 + 8))[1]) {
      if (param_3 == 0) {
        (**(code **)*plVar4)(plVar4,0x5b);
        puVar6 = *(undefined8 **)(param_2 + 8);
        for (puVar17 = (undefined1 *)*puVar6; puVar17 != (undefined1 *)(puVar6[1] + -0x10);
            puVar17 = puVar17 + 0x10) {
          __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE4dumpERKSF_bbjj
                    (param_1,puVar17,0,param_4,param_5,param_6);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
          puVar6 = *(undefined8 **)(param_2 + 8);
        }
        __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE4dumpERKSF_bbjj
                  (param_1,puVar17,0,param_4,param_5,param_6);
      }
      else {
        (**(code **)(*plVar4 + 8))(plVar4,"[\n",2);
        uVar8 = iVar15 + iVar16;
        uVar11 = (ulong)uVar8;
        plVar4 = param_1 + 0x4c;
        bVar2 = *(byte *)((long)param_1 + 0x277);
        if ((char)bVar2 < '\0') {
          uVar10 = param_1[0x4d];
          if (uVar10 < uVar8) goto LAB_00018478;
        }
        else {
          uVar10 = (ulong)bVar2;
          if (bVar2 < uVar8) {
LAB_00018478:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (plVar4,uVar10 << 1,0x20);
          }
        }
        puVar17 = (undefined1 *)**(long **)(param_2 + 8);
        if (puVar17 != (undefined1 *)((*(long **)(param_2 + 8))[1] + -0x10)) {
          do {
            plVar5 = plVar4;
            if (*(char *)((long)param_1 + 0x277) < '\0') {
              plVar5 = (long *)*plVar4;
            }
            (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar5,uVar11);
            __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE4dumpERKSF_bbjj
                      (param_1,puVar17,1,param_4,param_5,uVar11);
            (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,",\n",2);
            puVar17 = puVar17 + 0x10;
          } while (puVar17 != (undefined1 *)(*(long *)(*(long *)(param_2 + 8) + 8) + -0x10));
        }
        plVar5 = plVar4;
        if (*(char *)((long)param_1 + 0x277) < '\0') {
          plVar5 = (long *)*plVar4;
        }
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar5,uVar11);
        __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE4dumpERKSF_bbjj
                  (param_1,(undefined1 *)(*(long *)(*(long *)(param_2 + 8) + 8) + -0x10),1,param_4,
                   param_5,uVar11);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
        if (*(char *)((long)param_1 + 0x277) < '\0') {
          plVar4 = (long *)*plVar4;
        }
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar4,param_6 & 0xffffffff);
      }
      puVar6 = (undefined8 *)*param_1;
      UNRECOVERED_JUMPTABLE_00 = *(code **)*puVar6;
      uVar9 = 0x5d;
      goto LAB_00018424;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 8);
    pcVar7 = "[]";
LAB_00017d1c:
    uVar9 = 2;
    goto LAB_00018048;
  case 3:
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
    __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_escapedERKSB_b
              (param_1,*(long **)(param_2 + 8),uVar8);
    puVar6 = (undefined8 *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)*puVar6;
    uVar9 = 0x22;
    goto LAB_00018424;
  case 4:
    plVar4 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 8);
    if (param_2[8] == '\0') {
      pcVar7 = "false";
LAB_00018044:
      uVar9 = 5;
      goto LAB_00018048;
    }
    pcVar7 = "true";
    break;
  case 5:
    __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIxLi0EEEvT_
              (param_1,*(ulong *)(param_2 + 8));
    return;
  case 6:
    __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIyLi0EEEvT_
              (param_1,*(ulong *)(param_2 + 8));
    return;
  case 7:
    __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE10dump_floatEd
              (*(double *)(param_2 + 8),param_1);
    return;
  case 8:
    plVar4 = (long *)*param_1;
    if (param_3 == 0) {
      (**(code **)(*plVar4 + 8))(plVar4,"{\"bytes\":[",10);
      pbVar18 = (byte *)**(long **)(param_2 + 8);
      pbVar12 = (byte *)(*(long **)(param_2 + 8))[1];
      if (pbVar18 != pbVar12) {
        for (; pbVar18 != pbVar12 + -1; pbVar18 = pbVar18 + 1) {
          __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIhLi0EEEvT_
                    (param_1,(uint)*pbVar18);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
          pbVar12 = *(byte **)(*(long *)(param_2 + 8) + 8);
        }
        __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIhLi0EEEvT_
                  (param_1,(uint)*pbVar18);
      }
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"],\"subtype\":",0xc);
      if (*(char *)(*(long *)(param_2 + 8) + 0x20) != '\0') {
        __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIyLi0EEEvT_
                  (param_1,*(ulong *)(*(long *)(param_2 + 8) + 0x18));
        goto LAB_000182e4;
      }
      plVar4 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 8);
      pcVar7 = "null}";
      goto LAB_00018044;
    }
    (**(code **)(*plVar4 + 8))(plVar4,"{\n",2);
    uVar8 = iVar15 + iVar16;
    plVar4 = param_1 + 0x4c;
    bVar2 = *(byte *)((long)param_1 + 0x277);
    plVar5 = plVar4;
    if ((char)bVar2 < '\0') {
      uVar11 = param_1[0x4d];
      if (uVar11 < uVar8) goto LAB_00018444;
      plVar3 = (long *)*param_1;
LAB_00017f68:
      plVar5 = (long *)*plVar4;
    }
    else {
      uVar11 = (ulong)bVar2;
      if (bVar2 < uVar8) {
LAB_00018444:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                  (plVar4,uVar11 << 1,0x20);
        plVar3 = (long *)*param_1;
        if (*(char *)((long)param_1 + 0x277) < '\0') goto LAB_00017f68;
      }
      else {
        plVar3 = (long *)*param_1;
      }
    }
    (**(code **)(*plVar3 + 8))(plVar3,plVar5,uVar8);
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"\"bytes\": [",10);
    pbVar18 = (byte *)**(long **)(param_2 + 8);
    pbVar12 = (byte *)(*(long **)(param_2 + 8))[1];
    if (pbVar18 != pbVar12) {
      pbVar19 = pbVar18;
      if (pbVar18 != pbVar12 + -1) {
        do {
          pbVar18 = pbVar19 + 1;
          __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIhLi0EEEvT_
                    (param_1,(uint)*pbVar19);
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,", ",2);
          pbVar19 = pbVar18;
        } while (pbVar18 != (byte *)(*(long *)(*(long *)(param_2 + 8) + 8) + -1));
      }
      __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIhLi0EEEvT_
                (param_1,(uint)*pbVar18);
    }
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"],\n",3);
    plVar5 = plVar4;
    if (*(char *)((long)param_1 + 0x277) < '\0') {
      plVar5 = (long *)*plVar4;
    }
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar5,uVar8);
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"\"subtype\": ",0xb);
    if (*(char *)(*(long *)(param_2 + 8) + 0x20) == '\0') {
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"null",4);
    }
    else {
      __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIyLi0EEEvT_
                (param_1,*(ulong *)(*(long *)(param_2 + 8) + 0x18));
    }
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
    plVar5 = (long *)*param_1;
    if (*(char *)((long)param_1 + 0x277) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 8);
LAB_000182e0:
    (*UNRECOVERED_JUMPTABLE_00)(plVar5,plVar4,param_6 & 0xffffffff);
LAB_000182e4:
    puVar6 = (undefined8 *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)*puVar6;
    uVar9 = 0x7d;
LAB_00018424:
                    // WARNING: Could not recover jumptable at 0x0001843c. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE_00)(puVar6,uVar9);
    return;
  case 9:
    plVar4 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 8);
    pcVar7 = "<discarded>";
    uVar9 = 0xb;
    goto LAB_00018048;
  default:
    return;
  }
  uVar9 = 4;
LAB_00018048:
                    // WARNING: Could not recover jumptable at 0x00018060. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE_00)(plVar4,pcVar7,uVar9);
  return;
}



void __ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEED1Ev
               (undefined8 *param_1)

{
  *param_1 = &DAT_00028a00;
  __ZNSt3__119__shared_weak_countD2Ev();
  return;
}



void __ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEED0Ev
               (undefined8 *param_1)

{
  *param_1 = &DAT_00028a00;
  __ZNSt3__119__shared_weak_countD2Ev();
  __ZdlPv();
  return;
}



void __ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv
               (long param_1)

{
                    // WARNING: Could not recover jumptable at 0x000184c4. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



void __ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv
               (void)

{
  __ZdlPv();
  return;
}



void __ZN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEE15write_characterEc
               (long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (*(undefined8 *)(param_1 + 8));
  return;
}



void __ZN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEE16write_charactersEPKcm
               (long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (*(undefined8 *)(param_1 + 8));
  return;
}



void __ZN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEED1Ev
               (void)

{
  return;
}



void __ZN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEED0Ev
               (void)

{
  __ZdlPv();
  return;
}



undefined8 *
__ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEC2ENS3_10shared_ptrINS0_23output_adapter_protocolIcEEEEcNS0_15error_handler_tE
          (undefined8 *param_1,undefined8 *param_2,byte param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  byte *pbVar3;
  long lVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  puVar1 = (undefined8 *)_localeconv();
  param_1[10] = puVar1;
  pbVar3 = (byte *)puVar1[1];
  if (pbVar3 != (byte *)0x0) {
    pbVar3 = (byte *)(ulong)*pbVar3;
  }
  *(char *)(param_1 + 0xb) = (char)pbVar3;
  pbVar3 = (byte *)*puVar1;
  if (pbVar3 != (byte *)0x0) {
    pbVar3 = (byte *)(ulong)*pbVar3;
  }
  *(undefined8 *)((long)param_1 + 0x62) = 0;
  *(undefined8 *)((long)param_1 + 0x5a) = 0;
  *(char *)((long)param_1 + 0x59) = (char)pbVar3;
  *(undefined8 *)((long)param_1 + 0x72) = 0;
  *(undefined8 *)((long)param_1 + 0x6a) = 0;
  *(undefined8 *)((long)param_1 + 0x82) = 0;
  *(undefined8 *)((long)param_1 + 0x7a) = 0;
  *(undefined8 *)((long)param_1 + 0x92) = 0;
  *(undefined8 *)((long)param_1 + 0x8a) = 0;
  *(undefined8 *)((long)param_1 + 0xa2) = 0;
  *(undefined8 *)((long)param_1 + 0x9a) = 0;
  *(undefined8 *)((long)param_1 + 0xb2) = 0;
  *(undefined8 *)((long)param_1 + 0xaa) = 0;
  *(undefined8 *)((long)param_1 + 0xc2) = 0;
  *(undefined8 *)((long)param_1 + 0xba) = 0;
  *(undefined8 *)((long)param_1 + 0xd2) = 0;
  *(undefined8 *)((long)param_1 + 0xca) = 0;
  *(undefined8 *)((long)param_1 + 0xe2) = 0;
  *(undefined8 *)((long)param_1 + 0xda) = 0;
  *(undefined8 *)((long)param_1 + 0xf2) = 0;
  *(undefined8 *)((long)param_1 + 0xea) = 0;
  *(undefined8 *)((long)param_1 + 0x102) = 0;
  *(undefined8 *)((long)param_1 + 0xfa) = 0;
  *(undefined8 *)((long)param_1 + 0x112) = 0;
  *(undefined8 *)((long)param_1 + 0x10a) = 0;
  *(undefined8 *)((long)param_1 + 0x122) = 0;
  *(undefined8 *)((long)param_1 + 0x11a) = 0;
  *(undefined8 *)((long)param_1 + 0x132) = 0;
  *(undefined8 *)((long)param_1 + 0x12a) = 0;
  *(undefined8 *)((long)param_1 + 0x142) = 0;
  *(undefined8 *)((long)param_1 + 0x13a) = 0;
  *(undefined8 *)((long)param_1 + 0x152) = 0;
  *(undefined8 *)((long)param_1 + 0x14a) = 0;
  *(undefined8 *)((long)param_1 + 0x162) = 0;
  *(undefined8 *)((long)param_1 + 0x15a) = 0;
  *(undefined8 *)((long)param_1 + 0x172) = 0;
  *(undefined8 *)((long)param_1 + 0x16a) = 0;
  *(undefined8 *)((long)param_1 + 0x182) = 0;
  *(undefined8 *)((long)param_1 + 0x17a) = 0;
  *(undefined8 *)((long)param_1 + 0x192) = 0;
  *(undefined8 *)((long)param_1 + 0x18a) = 0;
  *(undefined8 *)((long)param_1 + 0x1a2) = 0;
  *(undefined8 *)((long)param_1 + 0x19a) = 0;
  *(undefined8 *)((long)param_1 + 0x1b2) = 0;
  *(undefined8 *)((long)param_1 + 0x1aa) = 0;
  *(undefined8 *)((long)param_1 + 0x1c2) = 0;
  *(undefined8 *)((long)param_1 + 0x1ba) = 0;
  *(undefined8 *)((long)param_1 + 0x1d2) = 0;
  *(undefined8 *)((long)param_1 + 0x1ca) = 0;
  *(undefined8 *)((long)param_1 + 0x1e2) = 0;
  *(undefined8 *)((long)param_1 + 0x1da) = 0;
  *(undefined8 *)((long)param_1 + 0x1f2) = 0;
  *(undefined8 *)((long)param_1 + 0x1ea) = 0;
  *(undefined8 *)((long)param_1 + 0x202) = 0;
  *(undefined8 *)((long)param_1 + 0x1fa) = 0;
  *(undefined8 *)((long)param_1 + 0x212) = 0;
  *(undefined8 *)((long)param_1 + 0x20a) = 0;
  *(undefined8 *)((long)param_1 + 0x222) = 0;
  *(undefined8 *)((long)param_1 + 0x21a) = 0;
  *(undefined8 *)((long)param_1 + 0x232) = 0;
  *(undefined8 *)((long)param_1 + 0x22a) = 0;
  *(undefined8 *)((long)param_1 + 0x242) = 0;
  *(undefined8 *)((long)param_1 + 0x23a) = 0;
  *(undefined8 *)((long)param_1 + 0x252) = 0;
  *(undefined8 *)((long)param_1 + 0x24a) = 0;
  *(byte *)((long)param_1 + 0x25a) = param_3;
  plVar2 = (long *)__Znwm(0x210);
  param_1[0x4e] = 0x8000000000000210;
  param_1[0x4d] = 0x200;
  lVar4 = (ulong)param_3 * 0x101010101010101;
  param_1[0x4c] = plVar2;
  plVar2[1] = lVar4;
  *plVar2 = lVar4;
  plVar2[3] = lVar4;
  plVar2[2] = lVar4;
  plVar2[5] = lVar4;
  plVar2[4] = lVar4;
  plVar2[7] = lVar4;
  plVar2[6] = lVar4;
  plVar2[9] = lVar4;
  plVar2[8] = lVar4;
  plVar2[0xb] = lVar4;
  plVar2[10] = lVar4;
  plVar2[0xd] = lVar4;
  plVar2[0xc] = lVar4;
  plVar2[0xf] = lVar4;
  plVar2[0xe] = lVar4;
  plVar2[0x11] = lVar4;
  plVar2[0x10] = lVar4;
  plVar2[0x13] = lVar4;
  plVar2[0x12] = lVar4;
  plVar2[0x15] = lVar4;
  plVar2[0x14] = lVar4;
  plVar2[0x17] = lVar4;
  plVar2[0x16] = lVar4;
  plVar2[0x19] = lVar4;
  plVar2[0x18] = lVar4;
  plVar2[0x1b] = lVar4;
  plVar2[0x1a] = lVar4;
  plVar2[0x1d] = lVar4;
  plVar2[0x1c] = lVar4;
  plVar2[0x1f] = lVar4;
  plVar2[0x1e] = lVar4;
  plVar2[0x21] = lVar4;
  plVar2[0x20] = lVar4;
  plVar2[0x23] = lVar4;
  plVar2[0x22] = lVar4;
  plVar2[0x25] = lVar4;
  plVar2[0x24] = lVar4;
  plVar2[0x27] = lVar4;
  plVar2[0x26] = lVar4;
  plVar2[0x29] = lVar4;
  plVar2[0x28] = lVar4;
  plVar2[0x2b] = lVar4;
  plVar2[0x2a] = lVar4;
  plVar2[0x2d] = lVar4;
  plVar2[0x2c] = lVar4;
  plVar2[0x2f] = lVar4;
  plVar2[0x2e] = lVar4;
  plVar2[0x31] = lVar4;
  plVar2[0x30] = lVar4;
  plVar2[0x33] = lVar4;
  plVar2[0x32] = lVar4;
  plVar2[0x35] = lVar4;
  plVar2[0x34] = lVar4;
  plVar2[0x37] = lVar4;
  plVar2[0x36] = lVar4;
  plVar2[0x39] = lVar4;
  plVar2[0x38] = lVar4;
  plVar2[0x3b] = lVar4;
  plVar2[0x3a] = lVar4;
  plVar2[0x3d] = lVar4;
  plVar2[0x3c] = lVar4;
  plVar2[0x3f] = lVar4;
  plVar2[0x3e] = lVar4;
  *(undefined1 *)(plVar2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4f) = param_4;
  return param_1;
}



void __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorEv(void)

{
                    // WARNING: Subroutine does not return
  __ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv();
}



long __ZNSt3__110shared_ptrIN8nlohmann6detail23output_adapter_protocolIcEEED2Ev(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    LOAcquire();
    lVar1 = plVar2[1];
    plVar2[1] = lVar1 + -1;
    LORelease();
    if (lVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return param_1;
}



undefined8 *
__ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_escapedERKSB_b
          (undefined8 *param_1,long *param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long lVar12;
  undefined8 in_x3;
  code *UNRECOVERED_JUMPTABLE;
  uint in_w4;
  long lVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  ulong uVar16;
  undefined1 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  undefined8 ******local_210;
  ulong uStack_208;
  byte local_1f9;
  undefined1 auStack_1f8 [24];
  ulong local_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 auStack_180 [2];
  long local_170;
  uint auStack_168 [4];
  undefined8 auStack_158 [15];
  undefined4 auStack_e0 [32];
  
  uVar16 = 0;
  uVar21 = 0;
  lVar12 = 0;
  lVar13 = 0;
  uVar19 = 0;
  lVar20 = 0;
  pcVar11 = (char *)((long)param_1 + 0x5a);
  puVar8 = param_1;
  do {
    bVar5 = *(byte *)((long)param_2 + 0x17);
    if ((char)bVar5 < '\0') {
      if ((ulong)param_2[1] <= uVar19) goto LAB_00018998;
      plVar7 = (long *)*param_2;
    }
    else {
      plVar7 = param_2;
      if (bVar5 <= uVar19) {
LAB_00018998:
        if (uVar16 == 0) {
          if (lVar20 == 0) {
            return puVar8;
          }
          plVar7 = (long *)*param_1;
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 8);
          lVar12 = lVar20;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x4f);
          if (iVar2 == 1) {
            (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,pcVar11);
            plVar7 = (long *)*param_1;
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 8);
            if (param_3 == 0) {
              pcVar11 = s__000234c2;
              lVar12 = 3;
            }
            else {
              pcVar11 = "\\ufffd";
              lVar12 = 6;
            }
          }
          else {
            if (iVar2 != 2) {
              if (iVar2 != 0) {
                return puVar8;
              }
              __ZNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEC1Ev
                        (auStack_180);
              *(uint *)((long)auStack_168 + *(long *)(local_170 + -0x18)) =
                   *(uint *)((long)auStack_168 + *(long *)(local_170 + -0x18)) | 0x4000;
              *(undefined4 *)((long)auStack_e0 + *(long *)(local_170 + -0x18)) = 0x30;
              *(undefined8 *)((long)auStack_158 + *(long *)(local_170 + -0x18)) = 2;
              *(uint *)((long)auStack_168 + *(long *)(local_170 + -0x18)) =
                   *(uint *)((long)auStack_168 + *(long *)(local_170 + -0x18)) & 0xffffffb5 | 8;
              uVar19 = param_2[1];
              plVar7 = (long *)*param_2;
              if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
                uVar19 = (ulong)*(byte *)((long)param_2 + 0x17);
                plVar7 = param_2;
              }
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                        (&local_170,*(undefined1 *)((long)plVar7 + (uVar19 - 1)));
              puVar8 = (undefined8 *)___cxa_allocate_exception(0x20);
              __ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv
                        (&local_1c0,(long)auStack_168);
              puVar10 = (undefined8 *)
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                                  (&local_1c0,0,"incomplete UTF-8 string; last byte: 0x");
              uStack_198 = puVar10[1];
              local_1a0 = *puVar10;
              local_190 = puVar10[2];
              puVar10[1] = 0;
              puVar10[2] = 0;
              *puVar10 = 0;
              local_1e0 = local_1e0 & 0xffffffffffffff00;
              uStack_1d8 = 0;
              __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
                        (puVar8,0x13c,&local_1a0);
                    // WARNING: Subroutine does not return
              ___cxa_throw(puVar8,&__ZTIN8nlohmann6detail10type_errorE,
                           __ZN8nlohmann6detail10type_errorD1Ev);
            }
            plVar7 = (long *)*param_1;
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 8);
          }
        }
                    // WARNING: Could not recover jumptable at 0x000189d4. Too many branches
                    // WARNING: Treating indirect jump as call
        puVar8 = (undefined8 *)(*UNRECOVERED_JUMPTABLE)(plVar7,pcVar11,lVar12);
        return puVar8;
      }
    }
    bVar4 = *(byte *)((long)plVar7 + uVar19);
    uVar6 = uVar21 << 6;
    uVar21 = 0xffU >> (ulong)((byte)"N8nlohmann6detail23output_adapter_protocolIcEE"
                                    [(ulong)bVar4 + 0x2f] & 0x1f) & (uint)bVar4;
    if ((int)uVar16 != 0) {
      uVar21 = bVar4 & 0x3f | uVar6;
    }
    bVar3 = (&DAT_00020cab)
            [uVar16 * 0x10 +
             (ulong)(uint)(byte)"N8nlohmann6detail23output_adapter_protocolIcEE"
                                [(ulong)bVar4 + 0x2f]];
    uVar16 = (ulong)bVar3;
    if (bVar3 == 1) {
      iVar2 = *(int *)(param_1 + 0x4f);
      if (1 < iVar2 - 1U) {
        if (iVar2 == 0) {
          __ZNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEC1Ev(auStack_180);
          *(uint *)((long)auStack_168 + *(long *)(local_170 + -0x18)) =
               *(uint *)((long)auStack_168 + *(long *)(local_170 + -0x18)) | 0x4000;
          *(undefined4 *)((long)auStack_e0 + *(long *)(local_170 + -0x18)) = 0x30;
          *(undefined8 *)((long)auStack_158 + *(long *)(local_170 + -0x18)) = 2;
          *(uint *)((long)auStack_168 + *(long *)(local_170 + -0x18)) =
               *(uint *)((long)auStack_168 + *(long *)(local_170 + -0x18)) & 0xffffffb5 | 8;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&local_170,(ulong)bVar4);
          puVar8 = (undefined8 *)___cxa_allocate_exception(0x20);
          __ZNSt3__19to_stringEm(auStack_1f8,uVar19);
          puVar9 = (ulong *)__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                                      (auStack_1f8,0,"invalid UTF-8 byte at index ");
          uStack_1d8 = puVar9[1];
          local_1e0 = *puVar9;
          local_1d0 = puVar9[2];
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = 0;
          puVar10 = (undefined8 *)
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                              (&local_1e0,": 0x");
          uStack_1b8 = puVar10[1];
          local_1c0 = *puVar10;
          local_1b0 = puVar10[2];
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
          __ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv
                    (&local_210,(long)auStack_168);
          if (-1 < (char)local_1f9) {
            uStack_208 = (ulong)local_1f9;
            local_210 = &local_210;
          }
          puVar10 = (undefined8 *)
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (&local_1c0,local_210,uStack_208);
          uStack_198 = puVar10[1];
          local_1a0 = *puVar10;
          local_190 = puVar10[2];
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
          __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
                    (puVar8,0x13c,&local_1a0);
                    // WARNING: Subroutine does not return
          ___cxa_throw(puVar8,&__ZTIN8nlohmann6detail10type_errorE,
                       __ZN8nlohmann6detail10type_errorD1Ev);
        }
        uVar16 = 1;
        goto LAB_00018920;
      }
      uVar19 = uVar19 - (lVar13 != 0);
      if (iVar2 == 1) {
        lVar13 = lVar12 + 1;
        puVar1 = (undefined1 *)((long)param_1 + lVar12 + 0x5a);
        if (param_3 == 0) {
          *puVar1 = 0xef;
          uVar14 = 0xbd;
          uVar17 = 0xbf;
          lVar20 = 2;
          lVar18 = 3;
        }
        else {
          *(undefined1 *)((long)param_1 + lVar12 + 0x5b) = 0x75;
          lVar13 = lVar12 + 4;
          *puVar1 = 0x5c;
          *(undefined2 *)((long)param_1 + lVar12 + 0x5c) = 0x6666;
          uVar14 = 100;
          uVar17 = 0x66;
          lVar20 = 5;
          lVar18 = 6;
        }
        *(undefined1 *)((long)param_1 + lVar13 + 0x5a) = uVar17;
        *(undefined1 *)((long)param_1 + lVar12 + lVar20 + 0x5a) = uVar14;
        lVar12 = lVar12 + lVar18;
        goto LAB_000188e0;
      }
LAB_00018914:
      uVar16 = 0;
      lVar13 = 0;
      lVar20 = lVar12;
    }
    else if (bVar3 == 0) {
      switch(uVar21) {
      case 8:
        uVar15 = 0x625c;
        break;
      case 9:
        uVar15 = 0x745c;
        break;
      case 10:
        uVar15 = 0x6e5c;
        break;
      case 0xb:
switchD_00018774_caseD_b:
        if (uVar21 < 0x20) {
LAB_0001887c:
          uVar6 = _snprintf((char *)((long)param_1 + lVar20 + 0x5a),7,"\\u%04x",(uint)in_x3);
          puVar8 = (undefined8 *)(ulong)uVar6;
          lVar12 = lVar20 + 6;
        }
        else if ((param_3 == 0) || (uVar21 < 0x7f)) {
          plVar7 = (long *)*param_2;
          if (-1 < (char)bVar5) {
            plVar7 = param_2;
          }
          lVar12 = lVar20 + 1;
          *(undefined1 *)((long)param_1 + lVar20 + 0x5a) = *(undefined1 *)((long)plVar7 + uVar19);
        }
        else {
          if (uVar21 >> 0x10 == 0) goto LAB_0001887c;
          uVar6 = _snprintf((char *)((long)param_1 + lVar20 + 0x5a),0xd,"\\u%04x\\u%04x",(uint)in_x3
                            ,in_w4);
          puVar8 = (undefined8 *)(ulong)uVar6;
          lVar12 = lVar20 + 0xc;
        }
        goto LAB_000188e0;
      case 0xc:
        uVar15 = 0x665c;
        break;
      case 0xd:
        uVar15 = 0x725c;
        break;
      default:
        if (uVar21 == 0x22) {
          uVar15 = 0x225c;
        }
        else {
          if (uVar21 != 0x5c) goto switchD_00018774_caseD_b;
          uVar15 = 0x5c5c;
        }
      }
      *(undefined2 *)((long)param_1 + lVar20 + 0x5a) = uVar15;
      lVar12 = lVar20 + 2;
LAB_000188e0:
      if (0xc < 0x200U - lVar12) goto LAB_00018914;
      puVar8 = (undefined8 *)(**(code **)(*(long *)*param_1 + 8))((long *)*param_1,pcVar11);
      uVar16 = 0;
      lVar12 = 0;
      lVar13 = 0;
      lVar20 = 0;
    }
    else {
      lVar18 = lVar20;
      if ((param_3 & 1) == 0) {
        plVar7 = (long *)*param_2;
        if (-1 < (char)bVar5) {
          plVar7 = param_2;
        }
        lVar18 = lVar20 + 1;
        *(undefined1 *)((long)param_1 + lVar20 + 0x5a) = *(undefined1 *)((long)plVar7 + uVar19);
      }
      lVar13 = lVar13 + 1;
      lVar20 = lVar18;
    }
LAB_00018920:
    uVar19 = uVar19 + 1;
  } while( true );
}



void __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIhLi0EEEvT_
               (undefined8 *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == 0) {
                    // WARNING: Could not recover jumptable at 0x00018e98. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
    return;
  }
  if (param_2 < 10) {
    lVar2 = 1;
LAB_00018ea8:
    lVar3 = lVar2;
    if (9 < param_2) {
      *(undefined2 *)((long)param_1 + lVar2 + 0xe) =
           *(undefined2 *)
            (&
             __ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIhLi0EEEvT_E12digits_to_99
            + (ulong)param_2 * 2);
      goto LAB_00018f20;
    }
  }
  else {
    if (param_2 < 100) {
      lVar2 = 2;
      goto LAB_00018ea8;
    }
    uVar1 = (param_2 & 0xff) * 0x29 >> 0xc;
    *(undefined2 *)((long)param_1 + 0x11) =
         *(undefined2 *)
          (&
           __ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIhLi0EEEvT_E12digits_to_99
          + ((ulong)(param_2 + uVar1 * -100) & 0xff) * 2);
    lVar2 = 1;
    lVar3 = 3;
    param_2 = uVar1;
  }
  *(char *)((long)param_1 + lVar2 + 0xf) = (char)param_2 + '0';
LAB_00018f20:
                    // WARNING: Could not recover jumptable at 0x00018f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 2,lVar3);
  return;
}



void __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIyLi0EEEvT_
               (undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
                    // WARNING: Could not recover jumptable at 0x00018f60. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
    return;
  }
  if (param_2 < 10) {
    puVar3 = (undefined2 *)((long)param_1 + 0x11);
    uVar2 = 1;
  }
  else {
    uVar4 = param_2;
    uVar1 = 4;
    do {
      uVar2 = uVar1;
      if (uVar4 < 100) {
        uVar2 = uVar2 - 2;
        goto LAB_00018fc4;
      }
      if (uVar4 < 1000) {
        uVar2 = uVar2 - 1;
        goto LAB_00018fc4;
      }
      if (uVar4 >> 4 < 0x271) goto LAB_00018fc4;
      uVar5 = uVar4 >> 5;
      uVar4 = uVar4 / 10000;
      uVar1 = uVar2 + 4;
    } while (0xc34 < uVar5);
    uVar2 = uVar2 + 1;
LAB_00018fc4:
    puVar3 = (undefined2 *)((long)param_1 + (ulong)uVar2 + 0x10);
    if (99 < param_2) {
      do {
        uVar4 = param_2 / 100;
        puVar3 = puVar3 + -1;
        *puVar3 = *(undefined2 *)
                   (&
                    __ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIyLi0EEEvT_E12digits_to_99
                   + (param_2 % 100) * 2);
        uVar5 = param_2 >> 4;
        param_2 = uVar4;
      } while (0x270 < uVar5);
    }
    if (9 < param_2) {
      puVar3[-1] = *(undefined2 *)
                    (&
                     __ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIyLi0EEEvT_E12digits_to_99
                    + param_2 * 2);
      goto LAB_0001904c;
    }
  }
  *(char *)((long)puVar3 + -1) = (char)param_2 + '0';
LAB_0001904c:
                    // WARNING: Could not recover jumptable at 0x00019058. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 2,uVar2);
  return;
}



void __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE12dump_integerIxLi0EEEvT_
               (undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
                    // WARNING: Could not recover jumptable at 0x00019090. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
    return;
  }
  if ((long)param_2 < 0) {
    *(undefined1 *)(param_1 + 2) = 0x2d;
    param_2 = -param_2;
    if (param_2 < 10) {
      iVar4 = 1;
    }
    else {
      uVar7 = param_2;
      iVar2 = 4;
      do {
        iVar4 = iVar2;
        if (uVar7 < 100) {
          iVar4 = iVar4 + -2;
          goto LAB_00019184;
        }
        if (uVar7 < 1000) {
          iVar4 = iVar4 + -1;
          goto LAB_00019184;
        }
        if (uVar7 >> 4 < 0x271) goto LAB_00019184;
        bVar3 = 99999 < uVar7;
        uVar7 = uVar7 / 10000;
        iVar2 = iVar4 + 4;
      } while (bVar3);
      iVar4 = iVar4 + 1;
    }
LAB_00019184:
    uVar5 = iVar4 + 1;
LAB_00019188:
    puVar6 = (undefined2 *)((long)param_1 + (ulong)uVar5 + 0x10);
    if (99 < param_2) {
      do {
        uVar7 = param_2 / 100;
        puVar6 = puVar6 + -1;
        *puVar6 = *(undefined2 *)
                   (
                   "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   + (param_2 % 100) * 2);
        uVar8 = param_2 >> 4;
        param_2 = uVar7;
      } while (0x270 < uVar8);
    }
    if (9 < param_2) {
      puVar6[-1] = *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + param_2 * 2);
      goto LAB_00019210;
    }
  }
  else {
    if (9 < param_2) {
      uVar7 = param_2;
      uVar1 = 4;
      do {
        uVar5 = uVar1;
        if (uVar7 < 100) {
          uVar5 = uVar5 - 2;
          goto LAB_00019188;
        }
        if (uVar7 < 1000) {
          uVar5 = uVar5 - 1;
          goto LAB_00019188;
        }
        if (uVar7 >> 4 < 0x271) goto LAB_00019188;
        bVar3 = 99999 < uVar7;
        uVar7 = uVar7 / 10000;
        uVar1 = uVar5 + 4;
      } while (bVar3);
      uVar5 = uVar5 + 1;
      goto LAB_00019188;
    }
    puVar6 = (undefined2 *)((long)param_1 + 0x11);
    uVar5 = 1;
  }
  *(char *)((long)puVar6 + -1) = (char)param_2 + '0';
LAB_00019210:
                    // WARNING: Could not recover jumptable at 0x0001921c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 2,uVar5);
  return;
}



void __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEE10dump_floatEd
               (double param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined2 *puVar2;
  char *pcVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  double dVar5;
  
  dVar5 = ABS(param_1);
  if ((dVar5 < INFINITY) || (dVar5 != INFINITY && dVar5 >= INFINITY)) {
    pcVar3 = (char *)(param_2 + 2);
    puVar2 = __ZN8nlohmann6detail8to_charsIdEEPcS2_PKcT_(param_1,(undefined2 *)pcVar3);
    plVar1 = (long *)*param_2;
    lVar4 = (long)puVar2 - (long)pcVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 8);
  }
  else {
    plVar1 = (long *)*param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 8);
    pcVar3 = "null";
    lVar4 = 4;
  }
                    // WARNING: Could not recover jumptable at 0x00019294. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(plVar1,pcVar3,lVar4);
  return;
}



undefined8 *
__ZNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEC1Ev(undefined8 *param_1)

{
  param_1[0x10] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_00028c18;
  param_1[1] = 0;
  param_1[2] = &DAT_00028ad8;
  *param_1 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_00028bf0;
  __ZNSt3__18ios_base4initEPv(param_1 + 0x10,param_1 + 3);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *param_1 = &DAT_00028ab0;
  param_1[0x10] = &DAT_00028b00;
  param_1[2] = &DAT_00028ad8;
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEEC2Ev(param_1 + 3);
  param_1[3] = &DAT_00028ca0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x18;
  return param_1;
}



undefined8 *
__ZNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028ab0;
  param_1[0x10] = &DAT_00028b00;
  param_1[2] = &DAT_00028ad8;
  param_1[3] = &DAT_00028ca0;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(param_1 + 3);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(param_1,&DAT_00028b18);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



void __ZNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028ab0;
  param_1[0x10] = &DAT_00028b00;
  param_1[2] = &DAT_00028ad8;
  param_1[3] = &DAT_00028ca0;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(param_1 + 3);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(param_1,&DAT_00028b18);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



void __ZThn16_NSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
               (undefined8 *param_1)

{
  *param_1 = &DAT_00028ad8;
  param_1[-2] = &DAT_00028ab0;
  param_1[0xe] = &DAT_00028b00;
  param_1[1] = &DAT_00028ca0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(param_1 + 1);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(param_1 + -2,&DAT_00028b18);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0xe);
  return;
}



void __ZThn16_NSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &DAT_00028ad8;
  puVar1 = param_1 + -2;
  *puVar1 = &DAT_00028ab0;
  param_1[0xe] = &DAT_00028b00;
  param_1[1] = &DAT_00028ca0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(param_1 + 1);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(puVar1,&DAT_00028b18);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0xe);
  __ZdlPv(puVar1);
  return;
}



void __ZTv0_n24_NSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
               (long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &DAT_00028ab0;
  puVar1[0x10] = &DAT_00028b00;
  puVar1[2] = &DAT_00028ad8;
  puVar1[3] = &DAT_00028ca0;
  if (*(char *)((long)puVar1 + 0x6f) < '\0') {
    __ZdlPv(puVar1[0xb]);
  }
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(puVar1 + 3);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(puVar1,&DAT_00028b18);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(puVar1 + 0x10);
  return;
}



void __ZTv0_n24_NSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev
               (long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &DAT_00028ab0;
  puVar1[0x10] = &DAT_00028b00;
  puVar1[2] = &DAT_00028ad8;
  puVar1[3] = &DAT_00028ca0;
  if (*(char *)((long)puVar1 + 0x6f) < '\0') {
    __ZdlPv(puVar1[0xb]);
  }
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(puVar1 + 3);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(puVar1,&DAT_00028b18);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(puVar1 + 0x10);
  __ZdlPv(puVar1);
  return;
}



void __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028ca0;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(param_1);
  return;
}



void __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev(undefined8 *param_1)

{
  *param_1 = &DAT_00028ca0;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(param_1);
  __ZdlPv();
  return;
}



void __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj
               (undefined8 *param_1,long param_2,long param_3,int param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = *(ulong *)(param_2 + 0x30);
  uVar1 = *(ulong *)(param_2 + 0x58);
  if (*(ulong *)(param_2 + 0x58) < uVar2) {
    *(ulong *)(param_2 + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  if (((param_5 & 0x18) != 0) && (((param_5 & 0x18) != 0x18 || (param_4 != 1)))) {
    if (uVar1 == 0) {
      lVar4 = 0;
      if (param_4 != 0) goto LAB_000197b0;
LAB_000197d8:
      lVar6 = 0;
    }
    else {
      puVar3 = (undefined8 *)(param_2 + 0x40);
      if (*(char *)(param_2 + 0x57) < '\0') {
        puVar3 = (undefined8 *)*puVar3;
      }
      lVar4 = uVar1 - (long)puVar3;
      if (param_4 == 0) goto LAB_000197d8;
LAB_000197b0:
      lVar6 = lVar4;
      if (param_4 != 2) {
        if (param_4 != 1) goto LAB_0001981c;
        if ((param_5 >> 3 & 1) == 0) {
          lVar6 = uVar2 - *(long *)(param_2 + 0x28);
        }
        else {
          lVar6 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        }
      }
    }
    lVar6 = lVar6 + param_3;
    lVar5 = -1;
    if ((lVar6 < 0) || (lVar4 < lVar6)) goto LAB_00019820;
    if ((lVar6 == 0) ||
       ((((param_5 >> 3 & 1) == 0 || (*(long *)(param_2 + 0x18) != 0)) &&
        (((param_5 >> 4 & 1) == 0 || (uVar2 != 0)))))) {
      if ((param_5 >> 3 & 1) != 0) {
        *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x10) + lVar6;
        *(ulong *)(param_2 + 0x20) = uVar1;
      }
      lVar5 = lVar6;
      if ((param_5 >> 4 & 1) != 0) {
        *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x28) + (long)(int)lVar6;
      }
      goto LAB_00019820;
    }
  }
LAB_0001981c:
  lVar5 = -1;
LAB_00019820:
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x10] = lVar5;
  return;
}



void __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekposENS_4fposI11__mbstate_tEEj
               (long *param_1,long param_2,undefined8 param_3)

{
                    // WARNING: Could not recover jumptable at 0x00019878. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x20))(param_1,*(undefined8 *)(param_2 + 0x80),0,param_3);
  return;
}



ulong __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x30);
  pbVar1 = *(byte **)(param_1 + 0x58);
  if (*(byte **)(param_1 + 0x58) < pbVar2) {
    *(byte **)(param_1 + 0x58) = pbVar2;
    pbVar1 = pbVar2;
  }
  if ((*(byte *)(param_1 + 0x60) >> 3 & 1) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (*(byte **)(param_1 + 0x20) < pbVar1) {
      *(byte **)(param_1 + 0x20) = pbVar1;
      pbVar2 = pbVar1;
    }
    if (*(byte **)(param_1 + 0x18) < pbVar2) {
      return (ulong)**(byte **)(param_1 + 0x18);
    }
  }
  return 0xffffffff;
}



undefined8
__ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi
          (long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  uVar1 = *(ulong *)(param_1 + 0x58);
  if (*(ulong *)(param_1 + 0x58) < uVar2) {
    *(ulong *)(param_1 + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (*(ulong *)(param_1 + 0x10) < uVar2) {
    if ((int)param_2 == -1) {
      *(ulong *)(param_1 + 0x18) = uVar2 - 1;
      *(ulong *)(param_1 + 0x20) = uVar1;
      return 0;
    }
    if (((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0) || (*(char *)(uVar2 - 1) == (char)param_2)) {
      *(ulong *)(param_1 + 0x18) = uVar2 - 1;
      *(ulong *)(param_1 + 0x20) = uVar1;
      *(char *)(uVar2 - 1) = (char)param_2;
      return param_2;
    }
  }
  return 0xffffffff;
}



ulong __ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi
                (long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 == 0xffffffff) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    puVar8 = (undefined1 *)param_1[6];
    puVar5 = (undefined1 *)param_1[7];
    if (puVar8 == puVar5) {
      if ((*(byte *)(param_1 + 0xc) >> 4 & 1) == 0) {
        return 0xffffffff;
      }
      lVar9 = param_1[5];
      lVar10 = param_1[0xb];
      plVar7 = param_1 + 8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar7,0);
      if (*(char *)((long)param_1 + 0x57) < '\0') {
        lVar4 = (param_1[10] & 0x7fffffffffffffffU) - 1;
      }
      else {
        lVar4 = 0x16;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(plVar7,lVar4,0);
      if ((char)*(byte *)((long)param_1 + 0x57) < '\0') {
        plVar7 = (long *)param_1[8];
        uVar3 = param_1[9];
      }
      else {
        uVar3 = (ulong)*(byte *)((long)param_1 + 0x57);
      }
      puVar5 = (undefined1 *)((long)plVar7 + uVar3);
      puVar8 = (undefined1 *)((long)plVar7 + ((long)puVar8 - lVar9));
      param_1[5] = (long)plVar7;
      param_1[6] = (long)puVar8;
      param_1[7] = (long)puVar5;
      puVar6 = (undefined1 *)((long)plVar7 + (lVar10 - lVar9));
    }
    else {
      puVar6 = (undefined1 *)param_1[0xb];
    }
    if (puVar6 <= puVar8 + 1) {
      puVar6 = puVar8 + 1;
    }
    param_1[0xb] = (long)puVar6;
    if ((*(byte *)(param_1 + 0xc) >> 3 & 1) != 0) {
      plVar7 = param_1 + 8;
      if (*(char *)((long)param_1 + 0x57) < '\0') {
        plVar7 = (long *)*plVar7;
      }
      param_1[2] = (long)plVar7;
      param_1[3] = (long)plVar7 + (lVar2 - lVar1);
      param_1[4] = (long)puVar6;
    }
    if (puVar8 == puVar5) {
                    // WARNING: Could not recover jumptable at 0x00019a88. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xff);
      return uVar3;
    }
    param_1[6] = (long)(puVar8 + 1);
    *puVar8 = (char)param_2;
    uVar3 = (ulong)(param_2 & 0xff);
  }
  return uVar3;
}



void __ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv
               (undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  puVar1 = param_1;
  if ((*(uint *)(param_2 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x60) >> 3 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    puVar3 = *(undefined1 **)(param_2 + 0x10);
    puVar4 = *(undefined1 **)(param_2 + 0x20);
    uVar5 = (long)puVar4 - (long)puVar3;
    if (0xffffffffffffffef < uVar5) {
LAB_00019ba8:
                    // WARNING: Subroutine does not return
      __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorEv();
    }
    if (uVar5 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar5;
    }
    else {
      uVar2 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar1 = (undefined8 *)__Znwm(uVar2);
      param_1[1] = uVar5;
      param_1[2] = uVar2 | 0x8000000000000000;
      *param_1 = puVar1;
    }
    for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
      *(undefined1 *)puVar1 = *puVar3;
      puVar1 = (undefined8 *)((long)puVar1 + 1);
    }
  }
  else {
    puVar4 = *(undefined1 **)(param_2 + 0x30);
    puVar3 = *(undefined1 **)(param_2 + 0x58);
    if (*(undefined1 **)(param_2 + 0x58) < puVar4) {
      *(undefined1 **)(param_2 + 0x58) = puVar4;
      puVar3 = puVar4;
    }
    puVar4 = *(undefined1 **)(param_2 + 0x28);
    uVar5 = (long)puVar3 - (long)puVar4;
    if (0xffffffffffffffef < uVar5) goto LAB_00019ba8;
    if (uVar5 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar5;
    }
    else {
      uVar2 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar1 = (undefined8 *)__Znwm(uVar2);
      param_1[1] = uVar5;
      param_1[2] = uVar2 | 0x8000000000000000;
      *param_1 = puVar1;
    }
    for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
      *(undefined1 *)puVar1 = *puVar4;
      puVar1 = (undefined8 *)((long)puVar1 + 1);
    }
  }
  *(undefined1 *)puVar1 = 0;
  return;
}



undefined2 * __ZN8nlohmann6detail8to_charsIdEEPcS2_PKcT_(double param_1,undefined2 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  size_t sVar4;
  char cVar5;
  long lVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined2 *puVar9;
  int iVar10;
  int unaff_w24;
  int local_48 [2];
  
  puVar9 = param_2;
  if ((long)param_1 < 0) {
    param_1 = -param_1;
    puVar9 = (undefined2 *)((long)param_2 + 1);
    *(undefined1 *)param_2 = 0x2d;
  }
  if (param_1 == 0.0) {
    *puVar9 = 0x2e30;
    *(undefined1 *)(puVar9 + 1) = 0x30;
    return (undefined2 *)((long)puVar9 + 3);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  __ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_
            ((ulong)param_1,(long)puVar9,local_48 + 1,local_48);
  sVar4 = (size_t)unaff_w24;
  uVar1 = (long)local_48[0] + sVar4;
  iVar10 = (int)uVar1;
  if ((-1 < local_48[0]) && (iVar10 < 0x10)) {
    _memset((void *)((long)puVar9 + sVar4),0x30,uVar1 - sVar4);
    *(undefined2 *)((long)puVar9 + uVar1) = 0x302e;
    return (undefined2 *)((long)puVar9 + uVar1) + 1;
  }
  if (iVar10 - 1U < 0xf) {
    puVar2 = (undefined1 *)((long)puVar9 + (uVar1 & 0xffffffff));
    _memmove(puVar2 + 1,puVar2,sVar4 - (uVar1 & 0xffffffff));
    *puVar2 = 0x2e;
    return (undefined2 *)((long)puVar9 + sVar4 + 1);
  }
  if (iVar10 + 3U < 4) {
    lVar6 = (ulong)(uint)-iVar10 + 2;
    _memmove((void *)((long)puVar9 + lVar6),puVar9,sVar4);
    *puVar9 = 0x2e30;
    _memset(puVar9 + 1,0x30,(ulong)(uint)-iVar10);
    return (undefined2 *)((long)puVar9 + lVar6 + sVar4);
  }
  if (unaff_w24 == 1) {
    lVar6 = 1;
  }
  else {
    _memmove(puVar9 + 1,(void *)((long)puVar9 + 1),sVar4 - 1);
    *(undefined1 *)((long)puVar9 + 1) = 0x2e;
    lVar6 = sVar4 + 1;
  }
  puVar2 = (undefined1 *)((long)puVar9 + lVar6);
  *puVar2 = 0x65;
  uVar8 = 0x2d;
  uVar3 = 1 - iVar10;
  if (0 < iVar10) {
    uVar8 = 0x2b;
    uVar3 = iVar10 - 1U;
  }
  puVar2[1] = uVar8;
  if (uVar3 < 10) {
    puVar2[2] = 0x30;
    bVar7 = (char)uVar3 + 0x30;
  }
  else {
    if (99 < uVar3) {
      puVar2[2] = (char)(uVar3 / 100) + '0';
      bVar7 = (byte)((uVar3 % 100) / 10);
      puVar2[3] = bVar7 | 0x30;
      puVar2[4] = (char)(uVar3 % 100) + bVar7 * -10 | 0x30;
      lVar6 = 5;
      goto LAB_00019db8;
    }
    cVar5 = (char)((uVar3 & 0xff) / 10);
    puVar2[2] = cVar5 + '0';
    bVar7 = (char)uVar3 + cVar5 * -10 | 0x30;
  }
  puVar2[3] = bVar7;
  lVar6 = 4;
LAB_00019db8:
  return (undefined2 *)(puVar2 + lVar6);
}



void __ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_
               (ulong param_1,long param_2,int *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 in_x7;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined4 local_90;
  ulong local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 uStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_00024040;
  __ZN8nlohmann6detail9dtoa_impl18compute_boundariesIdEENS1_10boundariesET_(&local_c8,param_1);
  local_68 = local_b8;
  uStack_60 = uStack_b0;
  local_78 = local_c8;
  uStack_70 = uStack_c0;
  local_88 = local_a8;
  uStack_80 = uStack_a0;
  iVar5 = -0x3d - (int)uStack_a0;
  iVar4 = iVar5 * 0x13441;
  iVar2 = iVar4 + 0x3ffff;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  iVar2 = iVar2 >> 0x12;
  if (0 < iVar5) {
    iVar2 = iVar2 + 1;
  }
  lVar1 = (long)((int)((iVar2 + 0x133U + (iVar2 + 0x133U >> 0x1c & 7)) * 0x10000) >> 0x13) * 0x10;
  local_98 = *(ulong *)(&
                        __ZZN8nlohmann6detail9dtoa_impl36get_cached_power_for_binary_exponentEiE13kCachedPowers
                       + lVar1);
  uVar3 = *(undefined8 *)(&DAT_00021028 + lVar1);
  local_90 = (undefined4)uVar3;
  auVar6 = __ZN8nlohmann6detail9dtoa_impl5diyfp3mulERKS2_S4_(&local_78,&local_98);
  auVar7 = __ZN8nlohmann6detail9dtoa_impl5diyfp3mulERKS2_S4_(&local_68,&local_98);
  auVar8 = __ZN8nlohmann6detail9dtoa_impl5diyfp3mulERKS2_S4_(&local_88,&local_98);
  *param_4 = -(int)((ulong)uVar3 >> 0x20);
  __ZN8nlohmann6detail9dtoa_impl16grisu2_digit_genEPcRiS3_NS1_5diyfpES4_S4_
            (param_2,param_3,param_4,auVar7._0_8_ + 1,auVar7._8_8_ & 0xffffffff,auVar6._0_8_,
             auVar6._8_8_,in_x7,auVar8._0_8_ - 1,auVar8._8_4_);
  if (*(long *)PTR____stack_chk_guard_00024040 == local_58) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void __ZN8nlohmann6detail9dtoa_impl18compute_boundariesIdEENS1_10boundariesET_
               (ulong *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar5 = param_2 & 0xfffffffffffff | 0x10000000000000;
  uVar8 = (ulong)((uint)(param_2 >> 0x34) - 0x433);
  if (param_2 >> 0x34 == 0) {
    uVar8 = 0xfffffbce;
    uVar5 = param_2 & 0xfffffffffffff;
  }
  uVar4 = uVar5 << 1 | 1;
  iVar7 = (int)uVar8;
  iVar2 = iVar7 + -1;
  iVar3 = iVar2;
  do {
    uVar4 = uVar4 << 1;
    iVar3 = iVar3 + -1;
  } while (-1 < (long)uVar4);
  uVar6 = uVar5;
  do {
    uVar6 = uVar6 << 1;
    uVar8 = (ulong)((int)uVar8 - 1);
  } while (-1 < (long)uVar6);
  lVar1 = uVar5 << 2;
  iVar7 = iVar7 + -2;
  if (param_2 >> 0x35 == 0 || (param_2 & 0xfffffffffffff) != 0) {
    lVar1 = uVar5 << 1;
    iVar7 = iVar2;
  }
  *param_1 = uVar6;
  param_1[1] = uVar8;
  param_1[2] = lVar1 + -1 << ((ulong)(uint)(iVar7 - iVar3) & 0x3f);
  *(int *)(param_1 + 3) = iVar3;
  param_1[4] = uVar4;
  *(int *)(param_1 + 5) = iVar3;
  return;
}



undefined1  [16] __ZN8nlohmann6detail9dtoa_impl5diyfp3mulERKS2_S4_(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *param_1;
  uVar3 = *param_2;
  uVar2 = (uVar3 >> 0x20) * (uVar1 & 0xffffffff);
  uVar4 = (uVar3 & 0xffffffff) * (uVar1 >> 0x20);
  auVar5._8_4_ = (int)param_1[1] + (int)param_2[1] + 0x40;
  auVar5._0_8_ = (uVar3 >> 0x20) * (uVar1 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) +
                 (((uVar3 & 0xffffffff) * (uVar1 & 0xffffffff) >> 0x20) + (uVar2 & 0xffffffff) +
                  (uVar4 & 0xffffffff) + 0x80000000 >> 0x20);
  auVar5._12_4_ = 0;
  return auVar5;
}



void __ZN8nlohmann6detail9dtoa_impl16grisu2_digit_genEPcRiS3_NS1_5diyfpES4_S4_
               (long param_1,int *param_2,int *param_3,long param_4,undefined8 param_5,long param_6,
               undefined8 param_7,undefined8 param_8,ulong param_9,int param_10)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  
  uVar8 = param_9 - param_4;
  uVar5 = param_9 - param_6;
  uVar6 = (ulong)(uint)-param_10;
  uVar4 = 1L << (uVar6 & 0x3f);
  uVar10 = param_9 >> (uVar6 & 0x3f);
  uVar7 = uVar4 - 1 & param_9;
  uVar9 = (uint)uVar10;
  if (uVar9 < 1000000000) {
    if (uVar9 < 100000000) {
      if (uVar9 < 10000000) {
        if (uVar9 < 1000000) {
          uVar11 = 10;
          if (uVar9 < 10) {
            uVar11 = 1;
          }
          iVar18 = 1;
          if (9 < uVar9) {
            iVar18 = 2;
          }
          uVar3 = 100;
          if (uVar9 < 100) {
            uVar3 = uVar11;
          }
          iVar13 = 3;
          if (uVar9 < 100) {
            iVar13 = iVar18;
          }
          uVar11 = 1000;
          if (uVar9 < 1000) {
            uVar11 = uVar3;
          }
          iVar18 = 4;
          if (uVar9 < 1000) {
            iVar18 = iVar13;
          }
          uVar3 = 10000;
          if (uVar9 >> 4 < 0x271) {
            uVar3 = uVar11;
          }
          iVar13 = 5;
          if (uVar9 >> 4 < 0x271) {
            iVar13 = iVar18;
          }
          if (0xc34 < uVar9 >> 5) {
            uVar3 = 100000;
            iVar13 = 6;
          }
          uVar12 = (ulong)uVar3;
        }
        else {
          uVar12 = 1000000;
          iVar13 = 7;
        }
      }
      else {
        uVar12 = 10000000;
        iVar13 = 8;
      }
    }
    else {
      uVar12 = 100000000;
      iVar13 = 9;
    }
  }
  else {
    uVar12 = 1000000000;
    iVar13 = 10;
  }
  do {
    if (iVar13 < 1) {
      iVar18 = 0;
      do {
        uVar12 = uVar8;
        uVar10 = uVar5;
        iVar13 = *param_2;
        *param_2 = iVar13 + 1;
        *(char *)(param_1 + iVar13) = (char)(uVar7 * 10 >> (uVar6 & 0x3f)) + '0';
        uVar8 = uVar12 * 10;
        uVar5 = uVar10 * 10;
        iVar18 = iVar18 + -1;
        uVar7 = uVar4 - 1 & uVar7 * 10;
      } while (uVar8 < uVar7);
      *param_3 = *param_3 + iVar18;
      if ((uVar7 < uVar5) && (uVar4 <= uVar8 - uVar7)) {
        iVar18 = *param_2;
        lVar15 = -uVar7;
        while ((uVar7 = uVar4 + uVar7, uVar7 < uVar5 ||
               (uVar10 * -10 + uVar7 < uVar10 * 10 + lVar15))) {
          *(char *)(param_1 + (long)iVar18 + -1) = *(char *)(param_1 + (long)iVar18 + -1) + -1;
          if (uVar5 <= uVar7) {
            return;
          }
          uVar8 = (uVar12 * 10 - uVar4) + lVar15;
          lVar15 = lVar15 - uVar4;
          if (uVar8 < uVar4) {
            return;
          }
        }
      }
      return;
    }
    uVar9 = 0;
    uVar11 = (uint)uVar12;
    if (uVar11 != 0) {
      uVar9 = (uint)uVar10 / uVar11;
    }
    uVar10 = (ulong)((uint)uVar10 - uVar9 * uVar11);
    iVar18 = *param_2;
    *param_2 = iVar18 + 1;
    *(char *)(param_1 + iVar18) = (char)uVar9 + '0';
    iVar13 = iVar13 + -1;
    lVar15 = uVar10 << (uVar6 & 0x3f);
    uVar1 = lVar15 + uVar7;
    if (uVar8 < uVar1) {
      uVar12 = uVar12 / 10;
    }
    else {
      *param_3 = *param_3 + iVar13;
      uVar14 = uVar12 << (uVar6 & 0x3f);
      if (uVar5 <= uVar1 || uVar8 - uVar1 < uVar14) {
        return;
      }
      iVar18 = *param_2;
      uVar16 = uVar7 + lVar15 + uVar14;
      lVar15 = -uVar16;
      uVar17 = param_9;
      do {
        if (((uVar5 <= uVar16) && ((-uVar1 - param_6) + uVar17 <= (param_6 - param_9) + uVar16)) ||
           (*(char *)(param_1 + (long)iVar18 + -1) = *(char *)(param_1 + (long)iVar18 + -1) + -1,
           uVar5 <= uVar16)) break;
        uVar2 = (lVar15 - param_4) + uVar17;
        uVar17 = uVar17 - uVar14;
        uVar16 = uVar16 + uVar14;
      } while (uVar14 <= uVar2);
    }
    if (uVar1 <= uVar8) {
      return;
    }
  } while( true );
}



void __ZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEED2Ev
               (long param_1)

{
  if (*(char *)(param_1 + 0x277) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x260));
  }
  __ZNSt3__110shared_ptrIN8nlohmann6detail23output_adapter_protocolIcEEED2Ev(param_1);
  return;
}



byte * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEED2Ev
                 (byte *param_1)

{
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_value7destroyENS_6detail7value_tE
            ((long *)(param_1 + 8),(uint)*param_1);
  return param_1;
}



undefined1  [16]
__ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_
          (long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long *local_50;
  long *plStack_48;
  undefined1 local_40;
  long local_38;
  
  plVar2 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISR_EERKT_
                     ((long)param_1,&local_38,param_2);
  plVar5 = (long *)*plVar2;
  bVar1 = plVar5 == (long *)0x0;
  if (bVar1) {
    plVar5 = (long *)__Znwm(0x48);
    plVar3 = (long *)*param_4;
    lVar4 = plVar3[2];
    lVar6 = *plVar3;
    plVar5[5] = plVar3[1];
    plVar5[4] = lVar6;
    plVar5[6] = lVar4;
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = 0;
    *(undefined1 *)(plVar5 + 7) = 0;
    plVar5[8] = 0;
    local_40 = 1;
    local_50 = plVar5;
    plStack_48 = param_1 + 1;
    __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSR_SR_
              (param_1,local_38,plVar2,plVar5);
    local_50 = (long *)0x0;
    __ZNSt3__110unique_ptrINS_11__tree_nodeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES8_bxydS6_NS9_14adl_serializerENSC_IhNS6_IhEEEEEEEEPvEENS_22__tree_node_destructorINS6_ISJ_EEEEED1Ev
              ((long *)&local_50);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = plVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}



long * __ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
                 (long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  char local_68 [16];
  undefined1 auStack_58 [8];
  
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(local_68,param_1);
  if (local_68[0] != '\0') {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar6 = *(long **)(lVar1 + 0x28);
    uVar3 = *(uint *)(lVar1 + 8);
    iVar4 = *(int *)(lVar1 + 0x90);
    if (iVar4 == -1) {
      __ZNKSt3__18ios_base6getlocEv(auStack_58,lVar1);
      plVar5 = (long *)__ZNKSt3__16locale9use_facetERNS0_2idE
                                 (auStack_58,PTR___ZNSt3__15ctypeIcE2idE_00024010);
      iVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      __ZNSt3__16localeD1Ev(auStack_58);
      *(int *)(lVar1 + 0x90) = iVar4;
    }
    lVar2 = param_2 + param_3;
    if ((uVar3 & 0xb0) != 0x20) {
      lVar2 = param_2;
    }
    plVar6 = __ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
                       (plVar6,param_2,lVar2,param_2 + param_3,lVar1,(int)(char)iVar4);
    if (plVar6 == (long *)0x0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) | 5);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(local_68);
  return param_1;
}



long * __ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
                 (long *param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  long lVar5;
  undefined8 **local_68;
  ulong local_60;
  undefined8 uStack_58;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  uVar1 = *(long *)(param_5 + 0x18) - (param_4 - param_2);
  if (uVar1 == 0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
    uVar1 = 0;
  }
  lVar5 = param_3 - param_2;
  if ((lVar5 < 1) || (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar5), lVar2 == lVar5)
     ) {
    if (0 < (long)uVar1) {
      if (uVar1 < 0x17) {
        pppuVar3 = &local_68;
        uStack_58 = CONCAT17((char)uVar1,(undefined7)uStack_58);
      }
      else {
        uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
        pppuVar3 = (undefined8 ***)__Znwm(uVar4);
        uStack_58 = uVar4 | 0x8000000000000000;
        local_68 = pppuVar3;
        local_60 = uVar1;
      }
      _memset(pppuVar3,param_6,uVar1);
      *(undefined1 *)((long)pppuVar3 + uVar1) = 0;
      pppuVar3 = (undefined8 ***)local_68;
      if (-1 < (long)uStack_58) {
        pppuVar3 = &local_68;
      }
      uVar4 = (**(code **)(*param_1 + 0x60))(param_1,pppuVar3,uVar1);
      if ((long)uStack_58 < 0) {
        __ZdlPv(local_68);
      }
      if (uVar4 != uVar1) {
        return (long *)0x0;
      }
    }
    lVar5 = param_4 - param_3;
    if ((lVar5 < 1) ||
       (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_3,lVar5), lVar2 == lVar5)) {
      *(undefined8 *)(param_5 + 0x18) = 0;
      return param_1;
    }
  }
  return (long *)0x0;
}



undefined1 *
__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ERKSD_
          (undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  switch(uVar1) {
  case 1:
    plVar2 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createINS2_IS9_SD_NS1_4lessIvEENS7_INS1_4pairIKS9_SD_EEEEEEJRKSL_EEEPT_DpOT0_
                       (*(undefined8 **)(param_2 + 8));
    break;
  case 2:
    plVar2 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createINS3_ISD_NS7_ISD_EEEEJRKSG_EEEPT_DpOT0_
                       (*(long **)(param_2 + 8));
    break;
  case 3:
    plVar2 = (long *)__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKS9_EEEPT_DpOT0_
                               (*(undefined8 *)(param_2 + 8));
    break;
  case 4:
    plVar2 = (long *)(ulong)(byte)param_2[8];
    break;
  case 5:
  case 6:
  case 7:
    plVar2 = *(long **)(param_2 + 8);
    break;
  case 8:
    plVar2 = __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createINS_27byte_container_with_subtypeISC_EEJRKSG_EEEPT_DpOT0_
                       (*(long **)(param_2 + 8));
    break;
  default:
    goto switchD_0001a74c_caseD_8;
  }
  *(long **)(param_1 + 8) = plVar2;
switchD_0001a74c_caseD_8:
  return param_1;
}



long * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createINS2_IS9_SD_NS1_4lessIvEENS7_INS1_4pairIKS9_SD_EEEEEEJRKSL_EEEPT_DpOT0_
                 (undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar2 = (long *)__Znwm(0x18);
  plVar5 = plVar2 + 1;
  *plVar5 = 0;
  plVar2[2] = 0;
  *plVar2 = (long)plVar5;
  plVar6 = (long *)*param_1;
  while (plVar6 != param_1 + 1) {
    __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SF_EEEEENSO_INS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEENS_21__tree_const_iteratorISG_SX_lEERKT_DpOT0_
              (plVar2,plVar5,plVar6 + 4,(long)(plVar6 + 4));
    plVar3 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar3 = plVar6 + 2;
      bVar1 = *(long **)*plVar3 != plVar6;
      plVar6 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar6 = (long *)*plVar3;
        } while (*plVar6 != lVar4);
      }
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  return plVar2;
}



undefined1  [16]
__ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SF_EEEEENSO_INS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEENS_21__tree_const_iteratorISG_SX_lEERKT_DpOT0_
          (long *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  long *local_58 [3];
  long lStack_40;
  long local_38;
  
  plVar2 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISG_PNS_11__tree_nodeISG_SP_EElEERPNS_15__tree_end_nodeISR_EESS_RKT_
                     (param_1,param_2,&local_38,&lStack_40,param_3);
  plVar3 = (long *)*plVar2;
  bVar1 = plVar3 == (long *)0x0;
  if (bVar1) {
    __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE16__construct_nodeIJRKNS_4pairIKS7_SF_EEEEENS_10unique_ptrINS_11__tree_nodeISG_PvEENS_22__tree_node_destructorINS5_ISW_EEEEEEDpOT_
              ((long *)local_58,(long)param_1,param_4);
    __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSR_SR_
              (param_1,local_38,plVar2,local_58[0]);
    plVar3 = local_58[0];
    local_58[0] = (long *)0x0;
    __ZNSt3__110unique_ptrINS_11__tree_nodeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES8_bxydS6_NS9_14adl_serializerENSC_IhNS6_IhEEEEEEEEPvEENS_22__tree_node_destructorINS6_ISJ_EEEEED1Ev
              ((long *)local_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = plVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



long * __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISG_PNS_11__tree_nodeISG_SP_EElEERPNS_15__tree_end_nodeISR_EESS_RKT_
                 (long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 + 1 != param_2) {
    uVar2 = __ZNKSt3__14lessIvEclIRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_EEDTltclsr3std3__1E7forwardIT_Efp_Eclsr3std3__1E7forwardIT0_Efp0_EEOSB_OSC_
                      (param_5,param_2 + 4);
    if (uVar2 == 0) {
      uVar2 = __ZNKSt3__14lessIvEclIRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_EEDTltclsr3std3__1E7forwardIT_Efp_Eclsr3std3__1E7forwardIT0_Efp0_EEOSB_OSC_
                        (param_2 + 4,param_5);
      if (uVar2 == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar5 = (long *)*plVar3;
        if ((long *)*plVar5 != param_2) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar5 = (long *)*plVar3;
          } while (*plVar5 != lVar4);
        }
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((plVar5 == param_1 + 1) ||
         (uVar2 = __ZNKSt3__14lessIvEclIRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_EEDTltclsr3std3__1E7forwardIT_Efp_Eclsr3std3__1E7forwardIT0_Efp0_EEOSB_OSC_
                            (param_5,plVar5 + 4), uVar2 != 0)) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar5;
          return plVar5;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_0001aa64;
    }
  }
  plVar5 = (long *)*param_2;
  plVar3 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar1 = plVar5;
    if (plVar5 == (long *)0x0) {
      plVar3 = param_2 + 2;
      if (*(long **)*plVar3 == param_2) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
        } while (*(long *)*plVar3 == lVar4);
      }
      plVar3 = (long *)*plVar3;
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    uVar2 = __ZNKSt3__14lessIvEclIRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_EEDTltclsr3std3__1E7forwardIT_Efp_Eclsr3std3__1E7forwardIT0_Efp0_EEOSB_OSC_
                      (plVar3 + 4,param_5);
    if (uVar2 == 0) {
LAB_0001aa64:
      plVar3 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISR_EERKT_
                         ((long)param_1,param_3,param_5);
      return plVar3;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar3;
    param_2 = plVar3 + 1;
  }
  return param_2;
}



void __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE16__construct_nodeIJRKNS_4pairIKS7_SF_EEEEENS_10unique_ptrINS_11__tree_nodeISG_PvEENS_22__tree_node_destructorINS5_ISW_EEEEEEDpOT_
               (long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = __Znwm(0x48);
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  __ZNSt3__14pairIKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES6_bxydS4_NS8_14adl_serializerENSB_IhNS4_IhEEEEEEEC2ERKSG_
            (lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



undefined8
__ZNSt3__14pairIKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES6_bxydS4_NS8_14adl_serializerENSB_IhNS4_IhEEEEEEEC2ERKSG_
          (undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_();
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ERKSD_
            ((undefined1 *)(lVar1 + 0x18),(undefined1 *)(param_2 + 0x18));
  return param_1;
}



long * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createINS3_ISD_NS7_ISD_EEEEJRKSG_EEEPT_DpOT0_
                 (long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)__Znwm(0x18);
  __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEEC2ERKSF_
            (plVar1,param_1);
  return plVar1;
}



long * __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEEC2ERKSF_
                 (long *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE11__vallocateEm
              (param_1,param_2[1] - *param_2 >> 4);
    __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE18__construct_at_endIPSD_EENS_9enable_ifIXsr27__is_cpp17_forward_iteratorIT_EE5valueEvE4typeESJ_SJ_m
              ((long)param_1,*param_2,param_2[1]);
  }
  return param_1;
}



void __ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerENS0_IhNS7_IhEEEEEENS7_ISD_EEE18__construct_at_endIPSD_EENS_9enable_ifIXsr27__is_cpp17_forward_iteratorIT_EE5valueEvE4typeESJ_SJ_m
               (long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  if (param_2 != param_3) {
    do {
      __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEEC2ERKSD_
                (puVar1,(undefined1 *)param_2);
      param_2 = param_2 + 0x10;
      puVar1 = puVar1 + 0x10;
    } while (param_2 != param_3);
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



long * __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createINS_27byte_container_with_subtypeISC_EEJRKSG_EEEPT_DpOT0_
                 (long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)__Znwm(0x28);
  __ZNSt3__16vectorIhNS_9allocatorIhEEEC2ERKS3_(plVar1,param_1);
  plVar1[3] = param_1[3];
  *(char *)(plVar1 + 4) = (char)param_1[4];
  return plVar1;
}



long * __ZNSt3__16vectorIhNS_9allocatorIhEEEC2ERKS3_(long *param_1,long *param_2)

{
  void *pvVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    __ZNSt3__16vectorIhNS_9allocatorIhEEE11__vallocateEm(param_1,param_2[1] - *param_2);
    pvVar1 = (void *)param_1[1];
    sVar2 = param_2[1] - *param_2;
    if (0 < (long)sVar2) {
      _memcpy(pvVar1,(void *)*param_2,sVar2);
      pvVar1 = (void *)((long)pvVar1 + sVar2);
    }
    param_1[1] = (long)pvVar1;
  }
  return param_1;
}



void __ZNSt3__16vectorIhNS_9allocatorIhEEE11__vallocateEm(long *param_1,long param_2)

{
  long lVar1;
  
  if (-1 < param_2) {
    lVar1 = __Znwm(param_2);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2;
    return;
  }
                    // WARNING: Subroutine does not return
  __ZNKSt3__113__vector_baseIhNS_9allocatorIhEEE20__throw_length_errorEv();
}



void __ZNKSt3__113__vector_baseIhNS_9allocatorIhEEE20__throw_length_errorEv(void)

{
                    // WARNING: Subroutine does not return
  __ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv();
}



void __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE5valueIS9_Li0EEET_RKS9_RKSF_
               (undefined8 *param_1,char *param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  char *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*param_2 == '\x01') {
    uStack_38 = 0x8000000000000000;
    local_40 = 0;
    local_50 = param_2;
    plStack_48 = __ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerENSB_IhNS5_IhEEEEEEEENS_19__map_value_compareIS7_SG_NS_4lessIvEELb1EEENS5_ISG_EEE4findIS7_EENS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEERKT_
                           (*(long *)(param_2 + 8),param_3);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0x8000000000000000;
    if (*param_2 == '\x02') {
      local_60 = *(undefined8 *)(*(long *)(param_2 + 8) + 8);
    }
    else if (*param_2 == '\x01') {
      local_68 = *(long *)(param_2 + 8) + 8;
    }
    else {
      local_58 = 1;
    }
    local_70 = param_2;
    bVar1 = __ZNK8nlohmann6detail9iter_implIKNS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEeqISH_LDn0EEEbRKT_
                      (&local_50,&local_70);
    if (bVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_(param_1,param_4);
    }
    else {
      pcVar2 = __ZNK8nlohmann6detail9iter_implIKNS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEptEv
                         ((long *)&local_50);
      __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE8get_implIS9_Li0EEET_NS_6detail12priority_tagILj0EEE
                (param_1,pcVar2);
    }
    return;
  }
  puVar3 = (undefined8 *)___cxa_allocate_exception(0x20);
  if ((ulong)(long)*param_2 < 10) {
    pcVar2 = *(char **)(&DAT_00028db0 + (long)*param_2 * 8);
  }
  else {
    pcVar2 = "number";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(&local_70,pcVar2);
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                     (&local_70,0,"cannot use value() with ");
  plStack_48 = (long *)puVar4[1];
  local_50 = (char *)*puVar4;
  local_40 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
            (puVar3,0x132,&local_50);
                    // WARNING: Subroutine does not return
  ___cxa_throw(puVar3,&__ZTIN8nlohmann6detail10type_errorE,__ZN8nlohmann6detail10type_errorD1Ev);
}



char * __ZNK8nlohmann6detail9iter_implIKNS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEptEv
                 (long *param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 auStack_48 [3];
  
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\x02') {
    pcVar1 = (char *)param_1[2];
  }
  else if (*pcVar1 == '\x01') {
    pcVar1 = (char *)(param_1[1] + 0x38);
  }
  else if (param_1[3] != 0) {
    puVar2 = (undefined8 *)___cxa_allocate_exception(0x20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
              (auStack_48,"cannot get value");
    __ZN8nlohmann6detail16invalid_iterator6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
              (puVar2,0xd6,auStack_48);
                    // WARNING: Subroutine does not return
    ___cxa_throw(puVar2,&__ZTIN8nlohmann6detail16invalid_iteratorE,
                 __ZN8nlohmann6detail16invalid_iteratorD1Ev);
  }
  return pcVar1;
}



bool __ZNK8nlohmann6detail9iter_implIKNS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEeqISH_LDn0EEEbRKT_
               (undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack_48 [3];
  
  if ((char *)*param_1 == (char *)*param_2) {
    cVar1 = *(char *)*param_1;
    if (cVar1 == '\x02') {
      lVar3 = param_1[2];
      lVar4 = param_2[2];
    }
    else if (cVar1 == '\x01') {
      lVar3 = param_1[1];
      lVar4 = param_2[1];
    }
    else {
      lVar3 = param_1[3];
      lVar4 = param_2[3];
    }
    return lVar3 == lVar4;
  }
  puVar2 = (undefined8 *)___cxa_allocate_exception(0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
            (auStack_48,"cannot compare iterators of different containers");
  __ZN8nlohmann6detail16invalid_iterator6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
            (puVar2,0xd4,auStack_48);
                    // WARNING: Subroutine does not return
  ___cxa_throw(puVar2,&__ZTIN8nlohmann6detail16invalid_iteratorE,
               __ZN8nlohmann6detail16invalid_iteratorD1Ev);
}



void __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE8get_implIS9_Li0EEET_NS_6detail12priority_tagILj0EEE
               (undefined8 *param_1,char *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEEvRKT_RNSG_8string_tE
            (param_2,param_1);
  return;
}



void __ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEEEvRKT_RNSG_8string_tE
               (char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 auStack_68 [3];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*param_1 == '\x03') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2,*(undefined8 *)(param_1 + 8));
    return;
  }
  puVar1 = (undefined8 *)___cxa_allocate_exception(0x20);
  if ((ulong)(long)*param_1 < 10) {
    pcVar3 = *(char **)(&DAT_00028db0 + (long)*param_1 * 8);
  }
  else {
    pcVar3 = "number";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(auStack_68,pcVar3);
  puVar2 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                     (auStack_68,0,"type must be string, but is ");
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  local_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
            (puVar1,0x12e,&local_50);
                    // WARNING: Subroutine does not return
  ___cxa_throw(puVar1,&__ZTIN8nlohmann6detail10type_errorE,__ZN8nlohmann6detail10type_errorD1Ev);
}



ulong * __ZNSt3__113unordered_mapINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEENS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S9_EEEEEC2ESt16initializer_listISH_E
                  (ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x28;
  undefined2 uVar12;
  undefined8 uVar13;
  
  param_1[1] = 0;
  *param_1 = 0;
  puVar9 = param_1 + 2;
  param_1[3] = 0;
  *puVar9 = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    puVar5 = param_2 + param_3 * 3;
    do {
      uVar3 = __ZNKSt3__122__unordered_map_hasherINS_17basic_string_viewIcNS_11char_traitsIcEEEENS_17__hash_value_typeIS4_PFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_4hashIS4_EENS_8equal_toIS4_EELb1EEclERKS4_
                        (param_1 + 3,param_2);
      uVar11 = param_1[1];
      if (uVar11 == 0) {
LAB_0001b3e4:
        puVar4 = (ulong *)__Znwm(0x28);
        uVar6 = param_2[1];
        uVar7 = *param_2;
        puVar4[4] = param_2[2];
        puVar4[3] = uVar6;
        puVar4[2] = uVar7;
        *puVar4 = 0;
        puVar4[1] = uVar3;
        if (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1) || uVar11 == 0) {
          uVar7 = 1;
          if (2 < uVar11) {
            uVar7 = (ulong)((uVar11 & uVar11 - 1) != 0);
          }
          uVar7 = uVar7 | uVar11 << 1;
          uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar11 <= uVar7) {
            uVar11 = uVar7;
          }
          __ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_22__unordered_map_hasherIS5_SB_NS_4hashIS5_EENS_8equal_toIS5_EELb1EEENS_21__unordered_map_equalIS5_SB_SG_SE_Lb1EEENS_9allocatorISB_EEE6rehashEm
                    (param_1,uVar11);
          uVar11 = param_1[1];
          if ((uVar11 & uVar11 - 1) == 0) {
            unaff_x28 = uVar11 - 1 & uVar3;
          }
          else {
            unaff_x28 = uVar3;
            if (uVar11 <= uVar3) {
              uVar7 = 0;
              if (uVar11 != 0) {
                uVar7 = uVar3 / uVar11;
              }
              unaff_x28 = uVar3 - uVar7 * uVar11;
            }
          }
        }
        uVar3 = *param_1;
        puVar8 = *(ulong **)(uVar3 + unaff_x28 * 8);
        if (puVar8 == (ulong *)0x0) {
          *puVar4 = *puVar9;
          *puVar9 = (ulong)puVar4;
          *(ulong **)(uVar3 + unaff_x28 * 8) = puVar9;
          if (*puVar4 != 0) {
            uVar3 = *(ulong *)(*puVar4 + 8);
            if ((uVar11 & uVar11 - 1) == 0) {
              uVar3 = uVar3 & uVar11 - 1;
            }
            else if (uVar11 <= uVar3) {
              uVar7 = 0;
              if (uVar11 != 0) {
                uVar7 = uVar3 / uVar11;
              }
              uVar3 = uVar3 - uVar7 * uVar11;
            }
            *(ulong **)(*param_1 + uVar3 * 8) = puVar4;
          }
        }
        else {
          *puVar4 = *puVar8;
          *puVar8 = (ulong)puVar4;
        }
        param_1[3] = param_1[3] + 1;
      }
      else {
        uVar13 = NEON_cnt(uVar11,1);
        uVar12 = NEON_uaddlv(uVar13,1);
        uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
        if (uVar7 < 2) {
          unaff_x28 = uVar11 - 1 & uVar3;
        }
        else {
          unaff_x28 = uVar3;
          if (uVar11 <= uVar3) {
            uVar6 = 0;
            if (uVar11 != 0) {
              uVar6 = uVar3 / uVar11;
            }
            unaff_x28 = uVar3 - uVar6 * uVar11;
          }
        }
        plVar10 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar10 == (long *)0x0) goto LAB_0001b3e4;
        do {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_0001b3e4;
          uVar6 = plVar10[1];
          if (uVar6 != uVar3) {
            if (uVar7 < 2) {
              uVar6 = uVar6 & uVar11 - 1;
            }
            else if (uVar11 <= uVar6) {
              uVar1 = 0;
              if (uVar11 != 0) {
                uVar1 = uVar6 / uVar11;
              }
              uVar6 = uVar6 - uVar1 * uVar11;
            }
            if (uVar6 != unaff_x28) goto LAB_0001b3e4;
          }
          bVar2 = __ZNKSt3__18equal_toINS_17basic_string_viewIcNS_11char_traitsIcEEEEEclERKS4_S7_
                            (plVar10 + 2,param_2);
        } while (!bVar2);
      }
      param_2 = param_2 + 3;
    } while (param_2 != puVar5);
  }
  return param_1;
}



void __ZNKSt3__122__unordered_map_hasherINS_17basic_string_viewIcNS_11char_traitsIcEEEENS_17__hash_value_typeIS4_PFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_4hashIS4_EENS_8equal_toIS4_EELb1EEclERKS4_
               (undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_18 [8];
  
  __ZNSt3__121__murmur2_or_cityhashImLm64EEclEPKvm(auStack_18,(ulong *)*param_2,param_2[1]);
  return;
}



void __ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_22__unordered_map_hasherIS5_SB_NS_4hashIS5_EENS_8equal_toIS5_EELb1EEENS_21__unordered_map_equalIS5_SB_SG_SE_Lb1EEENS_9allocatorISB_EEE6rehashEm
               (ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = __ZNSt3__112__next_primeEm(param_2);
  }
  uVar2 = param_1[1];
  uVar1 = param_2;
  if (uVar2 < param_2) goto LAB_0001b638;
  if (uVar2 <= param_2) {
    return;
  }
  uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
  if (uVar2 < 3) {
LAB_0001b624:
    uVar1 = __ZNSt3__112__next_primeEm();
  }
  else {
    uVar4 = NEON_cnt(uVar2,1);
    uVar3 = NEON_uaddlv(uVar4,1);
    if (1 < (CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar3) & 0xffffffff)) goto LAB_0001b624;
    if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
  }
  if (uVar1 <= param_2) {
    uVar1 = param_2;
  }
  if (uVar2 <= uVar1) {
    return;
  }
LAB_0001b638:
  __ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_22__unordered_map_hasherIS5_SB_NS_4hashIS5_EENS_8equal_toIS5_EELb1EEENS_21__unordered_map_equalIS5_SB_SG_SE_Lb1EEENS_9allocatorISB_EEE8__rehashEm
            (param_1,uVar1);
  return;
}



ulong __ZNSt3__121__murmur2_or_cityhashImLm64EEclEPKvm
                (undefined8 param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (0x20 < param_3) {
    if (param_3 < 0x41) {
      uVar3 = __ZNSt3__121__murmur2_or_cityhashImLm64EE19__hash_len_33_to_64EPKcm
                        ((long *)param_2,param_3);
      return uVar3;
    }
    lVar4 = *(long *)((long)param_2 + (param_3 - 0x30));
    lVar6 = *(long *)((long)param_2 + (param_3 - 0x28));
    uVar10 = *(ulong *)((long)param_2 + (param_3 - 0x18));
    uVar3 = (uVar10 ^ lVar4 + param_3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar10 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar13 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    lVar1 = *(long *)((long)param_2 + (param_3 - 0x38));
    lVar12 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
    uVar3 = lVar6 + lVar12 + uVar13;
    uVar7 = lVar12 + lVar1 + lVar4;
    uVar9 = uVar7 + lVar6;
    uVar3 = (uVar7 >> 0x2c | uVar7 * 0x100000) + lVar12 + (uVar3 >> 0x15 | uVar3 << 0x2b);
    lVar4 = *(long *)((long)param_2 + (param_3 - 0x10));
    lVar2 = *(long *)((long)param_2 + (param_3 - 8));
    uVar7 = lVar1 + lVar4;
    lVar12 = uVar7 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
    uVar8 = lVar12 + lVar6 + lVar2;
    uVar10 = lVar12 + uVar10 + lVar4;
    uVar11 = uVar10 + lVar2;
    puVar5 = param_2 + 4;
    uVar14 = *param_2;
    uVar8 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar12 + (uVar8 >> 0x15 | uVar8 << 0x2b);
    lVar4 = uVar14 + lVar6 * -0x4b6d499041670d8d;
    lVar12 = -(param_3 - 1 & 0xffffffffffffffc0);
    while( true ) {
      lVar12 = lVar12 + 0x40;
      lVar4 = lVar4 + uVar9 + uVar7;
      uVar7 = uVar7 + uVar3 + puVar5[2];
      uVar7 = puVar5[1] + uVar9 + (uVar7 >> 0x2a | uVar7 * 0x400000) * -0x4b6d499041670d8d;
      uVar9 = lVar4 + puVar5[-3];
      uVar10 = uVar13 + uVar11;
      uVar13 = (uVar9 >> 0x25 | uVar9 * 0x8000000) * -0x4b6d499041670d8d ^ uVar8;
      lVar4 = (uVar10 >> 0x21 | uVar10 * 0x80000000) * -0x4b6d499041670d8d;
      lVar6 = uVar14 + uVar3 * -0x4b6d499041670d8d;
      uVar3 = lVar6 + uVar11 + uVar13 + puVar5[-1];
      uVar10 = lVar6 + puVar5[-3] + puVar5[-2];
      uVar9 = uVar10 + puVar5[-1];
      uVar3 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar6 + (uVar3 >> 0x15 | uVar3 << 0x2b);
      lVar6 = lVar4 + uVar8 + *puVar5;
      uVar8 = uVar7 + puVar5[-2] + lVar6 + puVar5[3];
      uVar10 = lVar6 + puVar5[1] + puVar5[2];
      uVar11 = uVar10 + puVar5[3];
      uVar8 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar6 + (uVar8 >> 0x15 | uVar8 << 0x2b);
      if (lVar12 == 0) break;
      uVar14 = puVar5[4];
      puVar5 = puVar5 + 8;
    }
    uVar9 = (uVar11 ^ uVar9) * -0x622015f714c7d297;
    uVar10 = (uVar9 ^ uVar11 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
    uVar3 = (uVar8 ^ uVar3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar8 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar9 = lVar4 + (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar3 = (uVar9 ^ uVar13 + (uVar7 ^ uVar7 >> 0x2f) * -0x4b6d499041670d8d +
                     (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar9 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    return (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
  }
  if (param_3 < 0x11) {
    uVar3 = __ZNSt3__121__murmur2_or_cityhashImLm64EE18__hash_len_0_to_16EPKcm(param_2,param_3);
    return uVar3;
  }
  uVar3 = __ZNSt3__121__murmur2_or_cityhashImLm64EE19__hash_len_17_to_32EPKcm
                    ((long *)param_2,param_3);
  return uVar3;
}



ulong __ZNSt3__121__murmur2_or_cityhashImLm64EE18__hash_len_0_to_16EPKcm
                (ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (8 < param_2) {
    uVar1 = *(ulong *)((long)param_1 + (param_2 - 8));
    uVar2 = uVar1 + param_2;
    uVar3 = uVar2 << ((ulong)(uint)-(int)param_2 & 0x3f) | uVar2 >> (param_2 & 0x3f);
    uVar2 = (uVar3 ^ *param_1) * -0x622015f714c7d297;
    uVar2 = (uVar2 ^ uVar3 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
    return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297 ^ uVar1;
  }
  if (3 < param_2) {
    uVar2 = (ulong)*(uint *)((long)param_1 + (param_2 - 4));
    uVar1 = ((uint)((int)*param_1 << 3) + param_2 ^ uVar2) * -0x622015f714c7d297;
    uVar2 = (uVar1 ^ uVar2 ^ uVar1 >> 0x2f) * -0x622015f714c7d297;
    return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
  }
  uVar2 = 0x9ae16a3b2f90404f;
  if (param_2 != 0) {
    uVar2 = (param_2 + (ulong)*(byte *)((long)param_1 + (param_2 - 1)) * 4) * -0x36b62838af619aa9 ^
            (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (param_2 >> 1)),(char)*param_1) *
            -0x651e95c4d06fbfb1;
    uVar2 = (uVar2 ^ uVar2 >> 0x2f) * -0x651e95c4d06fbfb1;
  }
  return uVar2;
}



long __ZNSt3__121__murmur2_or_cityhashImLm64EE19__hash_len_17_to_32EPKcm(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)((long)param_1 + param_2 + -8);
  uVar3 = lVar1 * -0x651e95c4d06fbfb1;
  uVar4 = *param_1 * -0x4b6d499041670d8d - param_1[1];
  uVar2 = param_1[1] ^ 0xc949d7c7509e6557;
  uVar2 = *param_1 * -0x4b6d499041670d8d + param_2 + (uVar2 >> 0x14 | uVar2 << 0x2c) +
          lVar1 * 0x651e95c4d06fbfb1;
  uVar3 = (uVar2 ^ (uVar3 >> 0x1e | uVar3 << 0x22) + (uVar4 >> 0x2b | uVar4 * 0x200000) +
                   *(long *)((long)param_1 + param_2 + -0x10) * -0x3c5a37a36834ced9) *
          -0x622015f714c7d297;
  uVar2 = (uVar3 ^ uVar2 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
  return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
}



long __ZNSt3__121__murmur2_or_cityhashImLm64EE19__hash_len_33_to_64EPKcm(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar7 = *(long *)((long)param_1 + param_2 + -0x10);
  uVar10 = *param_1 + (lVar7 + param_2) * -0x3c5a37a36834ced9;
  lVar8 = param_1[3];
  uVar9 = uVar10 + param_1[1];
  uVar1 = uVar9 + param_1[2];
  uVar2 = *(long *)((long)param_1 + param_2 + -0x20) + param_1[2];
  uVar3 = *(long *)((long)param_1 + param_2 + -0x18) + uVar2;
  lVar4 = *(long *)((long)param_1 + param_2 + -8) + lVar8;
  uVar5 = lVar4 + uVar2;
  uVar6 = uVar3 + lVar7;
  lVar7 = (uVar9 >> 7 | uVar9 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
          (uVar10 + lVar8 >> 0x34 | (uVar10 + lVar8) * 0x1000) + (uVar1 >> 0x1f | uVar1 << 0x21);
  uVar9 = (uVar6 + lVar4 + lVar7) * -0x3c5a37a36834ced9 +
          (uVar1 + lVar8 + (uVar2 >> 0x25 | uVar2 * 0x8000000) + (uVar3 >> 7 | uVar3 << 0x39) +
           (uVar5 >> 0x34 | uVar5 * 0x1000) + (uVar6 >> 0x1f | uVar6 << 0x21)) * -0x651e95c4d06fbfb1
  ;
  uVar9 = lVar7 + (uVar9 ^ uVar9 >> 0x2f) * -0x3c5a37a36834ced9;
  return (uVar9 ^ uVar9 >> 0x2f) * -0x651e95c4d06fbfb1;
}



bool __ZNKSt3__18equal_toINS_17basic_string_viewIcNS_11char_traitsIcEEEEEclERKS4_S7_
               (undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 local_20;
  ulong uStack_18;
  
  local_20 = *param_1;
  uStack_18 = param_1[1];
  if (uStack_18 == param_2[1]) {
    iVar2 = __ZNKSt3__117basic_string_viewIcNS_11char_traitsIcEEE7compareES3_
                      (&local_20,(void *)*param_2,uStack_18);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



int __ZNKSt3__117basic_string_viewIcNS_11char_traitsIcEEE7compareES3_
              (undefined8 *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = param_1[1];
  sVar2 = param_3;
  if (uVar4 <= param_3) {
    sVar2 = uVar4;
  }
  if ((sVar2 == 0) || (iVar3 = _memcmp((void *)*param_1,param_2,sVar2), iVar3 == 0)) {
    iVar1 = 1;
    if (uVar4 < param_3) {
      iVar1 = -1;
    }
    iVar3 = 0;
    if (uVar4 != param_3) {
      iVar3 = iVar1;
    }
  }
  return iVar3;
}



long * __ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_22__unordered_map_hasherIS5_SB_NS_4hashIS5_EENS_8equal_toIS5_EELb1EEENS_21__unordered_map_equalIS5_SB_SG_SE_Lb1EEENS_9allocatorISB_EEE8__rehashEm
                 (ulong *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  
  if (param_2 == 0) {
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)__ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar4 = (long *)__ZNSt3__1L20__throw_length_errorEPKc();
      plVar3 = (long *)plVar4[2];
      while (plVar3 != (long *)0x0) {
        plVar3 = (long *)*plVar3;
        __ZdlPv();
      }
      lVar5 = *plVar4;
      *plVar4 = 0;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      return plVar4;
    }
    uVar2 = __Znwm(param_2 << 3);
    plVar3 = (long *)*param_1;
    *param_1 = uVar2;
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)__ZdlPv();
    }
    uVar2 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar2 * 8) = 0;
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
    puVar8 = (ulong *)param_1[2];
    if (puVar8 != (ulong *)0x0) {
      uVar2 = puVar8[1];
      uVar14 = NEON_cnt(param_2,1);
      uVar13 = NEON_uaddlv(uVar14,1);
      uVar10 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
      if (uVar10 < 2) {
        uVar2 = uVar2 & param_2 - 1;
      }
      else if (param_2 <= uVar2) {
        uVar12 = 0;
        if (param_2 != 0) {
          uVar12 = uVar2 / param_2;
        }
        uVar2 = uVar2 - uVar12 * param_2;
      }
      *(ulong **)(*param_1 + uVar2 * 8) = param_1 + 2;
      if ((ulong *)*puVar8 != (ulong *)0x0) {
        puVar9 = (ulong *)*puVar8;
        do {
          uVar12 = puVar9[1];
          if (uVar10 < 2) {
            uVar12 = uVar12 & param_2 - 1;
          }
          else if (param_2 <= uVar12) {
            uVar7 = 0;
            if (param_2 != 0) {
              uVar7 = uVar12 / param_2;
            }
            uVar12 = uVar12 - uVar7 * param_2;
          }
          if (uVar12 != uVar2) {
            if (*(long *)(*param_1 + uVar12 * 8) == 0) {
              *(ulong **)(*param_1 + uVar12 * 8) = puVar8;
              uVar2 = uVar12;
            }
            else {
              uVar7 = *puVar9;
              puVar11 = puVar9;
              if (uVar7 == 0) {
                puVar6 = (ulong *)0x0;
              }
              else {
                do {
                  bVar1 = __ZNKSt3__18equal_toINS_17basic_string_viewIcNS_11char_traitsIcEEEEEclERKS4_S7_
                                    (puVar9 + 2,(undefined8 *)(uVar7 + 0x10));
                  plVar3 = (long *)(ulong)bVar1;
                  puVar6 = (ulong *)*puVar11;
                  if (!bVar1) goto LAB_0001bce0;
                  uVar7 = *puVar6;
                  puVar11 = puVar6;
                } while (uVar7 != 0);
                puVar6 = (ulong *)0x0;
              }
LAB_0001bce0:
              *puVar8 = (ulong)puVar6;
              *puVar11 = **(ulong **)(*param_1 + uVar12 * 8);
              **(ulong **)(*param_1 + uVar12 * 8) = (ulong)puVar9;
              puVar9 = puVar8;
            }
          }
          puVar11 = (ulong *)*puVar9;
          puVar8 = puVar9;
          puVar9 = puVar11;
        } while (puVar11 != (ulong *)0x0);
      }
    }
  }
  return plVar3;
}



long * __ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_22__unordered_map_hasherIS5_SB_NS_4hashIS5_EENS_8equal_toIS5_EELb1EEENS_21__unordered_map_equalIS5_SB_SG_SE_Lb1EEENS_9allocatorISB_EEED2Ev
                 (long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



long * __ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_22__unordered_map_hasherIS5_SB_NS_4hashIS5_EENS_8equal_toIS5_EELb1EEENS_21__unordered_map_equalIS5_SB_SG_SE_Lb1EEENS_9allocatorISB_EEE4findIS5_EENS_15__hash_iteratorIPNS_11__hash_nodeISB_PvEEEERKT_
                 (long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar3 = __ZNKSt3__122__unordered_map_hasherINS_17basic_string_viewIcNS_11char_traitsIcEEEENS_17__hash_value_typeIS4_PFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEEEENS_4hashIS4_EENS_8equal_toIS4_EELb1EEclERKS4_
                    (param_1 + 3,param_2);
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar11 = NEON_cnt(uVar7,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar8 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar3;
    }
    else {
      uVar9 = uVar3;
      if (uVar7 <= uVar3) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar3 / uVar7;
        }
        uVar9 = uVar3 - uVar9 * uVar7;
      }
    }
    puVar4 = *(undefined8 **)(*param_1 + uVar9 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      plVar6 = (long *)*puVar4;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      do {
        uVar5 = plVar6[1];
        if (uVar5 == uVar3) {
          bVar2 = __ZNKSt3__18equal_toINS_17basic_string_viewIcNS_11char_traitsIcEEEEEclERKS4_S7_
                            (plVar6 + 2,param_2);
          if (bVar2) {
            return plVar6;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar5 = uVar5 & uVar7 - 1;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar1 * uVar7;
          }
          if (uVar5 != uVar9) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



undefined8 *
__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRA5_KcEEEPT_DpOT0_
          (char *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__Znwm(0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(puVar1,param_1);
  return puVar1;
}



undefined8 *
__ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6createIS9_JRKNS1_17basic_string_viewIcS6_EEEEEPT_DpOT0_
          (undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  
  puVar1 = (undefined8 *)__Znwm(0x18);
  uVar3 = param_1[1];
  if (0xffffffffffffffef < uVar3) {
                    // WARNING: Subroutine does not return
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorEv();
  }
  pvVar4 = (void *)*param_1;
  if (uVar3 < 0x17) {
    *(char *)((long)puVar1 + 0x17) = (char)uVar3;
    puVar2 = puVar1;
    if (uVar3 == 0) goto LAB_0001bf2c;
  }
  else {
    uVar5 = uVar3 + 0x10 & 0xfffffffffffffff0;
    puVar2 = (undefined8 *)__Znwm(uVar5);
    puVar1[1] = uVar3;
    puVar1[2] = uVar5 | 0x8000000000000000;
    *puVar1 = puVar2;
  }
  _memcpy(puVar2,pvVar4,uVar3);
LAB_0001bf2c:
  *(undefined1 *)((long)puVar2 + uVar3) = 0;
  return puVar1;
}



void __ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEEiLi0EEEvRKT_RT0_
               (char *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 auStack_68 [3];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  switch(*param_1) {
  case '\x04':
    uVar4 = (uint)(byte)param_1[8];
    break;
  case '\x05':
  case '\x06':
    uVar4 = *(uint *)(param_1 + 8);
    break;
  case '\a':
    uVar4 = (uint)*(double *)(param_1 + 8);
    break;
  default:
    puVar1 = (undefined8 *)___cxa_allocate_exception(0x20);
    if ((ulong)(long)*param_1 < 10) {
      pcVar3 = *(char **)(&DAT_00028db0 + (long)*param_1 * 8);
    }
    else {
      pcVar3 = "number";
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc(auStack_68,pcVar3);
    puVar2 = (undefined8 *)
             __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                       (auStack_68,0,"type must be number, but is ");
    uStack_48 = puVar2[1];
    local_50 = *puVar2;
    local_40 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    __ZN8nlohmann6detail10type_error6createINS_10basic_jsonINSt3__13mapENS4_6vectorENS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEbxydSA_NS_14adl_serializerENS6_IhNSA_IhEEEEEEEES1_iRKSC_RKT_
              (puVar1,0x12e,&local_50);
                    // WARNING: Subroutine does not return
    ___cxa_throw(puVar1,&__ZTIN8nlohmann6detail10type_errorE,__ZN8nlohmann6detail10type_errorD1Ev);
  }
  *param_2 = uVar4;
  return;
}



void __ZN8nlohmann6detail20external_constructorILNS0_7value_tE7EE9constructINS_10basic_jsonINSt3__13mapENS6_6vectorENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEbxydSC_NS_14adl_serializerENS8_IhNSC_IhEEEEEEEEvRT_NSJ_14number_float_tE
               (undefined8 param_1,byte *param_2)

{
  __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE10json_value7destroyENS_6detail7value_tE
            ((long *)(param_2 + 8),(uint)*param_2);
  *param_2 = 7;
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



void __ZNSt3__1L17__call_once_proxyINS_5tupleIJOZN20wvWavesV15_1_154_19717WavesAPI3Internal30AddPluginSpecificAPI3FunctionsERNS2_41WCWavesAPI3_PluginSide_RequestAndResponseEE3__0EEEEEvPv
               (undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(*(long *)**(undefined8 **)*param_1 + 8) + 0x748);
                    // WARNING: Could not recover jumptable at 0x0001c134. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar1 + 0x8a8))(plVar1,&_simple_func_map);
  return;
}



void ___cxx_global_var_init_14(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_15(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_API_Plugin_New_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  ulong auStack_db8 [432];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00024040;
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  uRam000000000002f700 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_0002f728 = &DAT_0002f730;
  uRam000000000002f738 = 0;
  _DAT_0002f730 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_0002f730;
  DAT_0002f720 = 0x7f;
  uRam000000000002f748 = 0;
  _DAT_0002f740 = 0;
  uRam000000000002f758 = 0;
  _DAT_0002f750 = 0;
  uRam000000000002f768 = 0;
  _DAT_0002f760 = 0;
  uRam000000000002f778 = 0;
  _DAT_0002f770 = 0;
  uRam000000000002f788 = 0;
  _DAT_0002f780 = 0;
  uRam000000000002f798 = 0;
  _DAT_0002f790 = 0;
  uRam000000000002f7a8 = 0;
  _DAT_0002f7a0 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_0002f728 + 1;
    *DAT_0002f728 = cVar4;
    DAT_0002f728 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002f728 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_0002f720);
  *DAT_0002f728 = '\0';
  DAT_0002f7c0 = &DAT_0002f7c8;
  uRam000000000002f7d0 = 0;
  _DAT_0002f7c8 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE = &DAT_0002f7c8;
  DAT_0002f7b8 = 0xff;
  uRam000000000002f7e0 = 0;
  _DAT_0002f7d8 = 0;
  uRam000000000002f7f0 = 0;
  _DAT_0002f7e8 = 0;
  uRam000000000002f800 = 0;
  _DAT_0002f7f8 = 0;
  uRam000000000002f810 = 0;
  _DAT_0002f808 = 0;
  uRam000000000002f820 = 0;
  _DAT_0002f818 = 0;
  uRam000000000002f830 = 0;
  _DAT_0002f828 = 0;
  uRam000000000002f840 = 0;
  _DAT_0002f838 = 0;
  uRam000000000002f850 = 0;
  _DAT_0002f848 = 0;
  uRam000000000002f860 = 0;
  _DAT_0002f858 = 0;
  uRam000000000002f870 = 0;
  _DAT_0002f868 = 0;
  uRam000000000002f880 = 0;
  _DAT_0002f878 = 0;
  uRam000000000002f890 = 0;
  _DAT_0002f888 = 0;
  uRam000000000002f8a0 = 0;
  _DAT_0002f898 = 0;
  cVar4 = 'I';
  lVar3 = 1;
  uRam000000000002f8b0 = 0;
  _DAT_0002f8a8 = 0;
  uRam000000000002f8c0 = 0;
  _DAT_0002f8b8 = 0;
  do {
    pcVar1 = DAT_0002f7c0 + 1;
    *DAT_0002f7c0 = cVar4;
    DAT_0002f7c0 = pcVar1;
    if (lVar3 == 0x10) break;
    cVar4 = "Initial Settings"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002f7c0 <
           __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE + DAT_0002f7b8);
  *DAT_0002f7c0 = '\0';
  DAT_0002f8d8 = &DAT_0002f8e0;
  uRam000000000002f8e8 = 0;
  _DAT_0002f8e0 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE = &DAT_0002f8e0;
  DAT_0002f8d0 = 0xff;
  uRam000000000002f8f8 = 0;
  _DAT_0002f8f0 = 0;
  uRam000000000002f908 = 0;
  _DAT_0002f900 = 0;
  uRam000000000002f918 = 0;
  _DAT_0002f910 = 0;
  uRam000000000002f928 = 0;
  _DAT_0002f920 = 0;
  uRam000000000002f938 = 0;
  _DAT_0002f930 = 0;
  uRam000000000002f948 = 0;
  _DAT_0002f940 = 0;
  uRam000000000002f958 = 0;
  _DAT_0002f950 = 0;
  uRam000000000002f968 = 0;
  _DAT_0002f960 = 0;
  uRam000000000002f978 = 0;
  _DAT_0002f970 = 0;
  uRam000000000002f988 = 0;
  _DAT_0002f980 = 0;
  uRam000000000002f998 = 0;
  _DAT_0002f990 = 0;
  uRam000000000002f9a8 = 0;
  _DAT_0002f9a0 = 0;
  uRam000000000002f9b8 = 0;
  _DAT_0002f9b0 = 0;
  cVar4 = 'L';
  lVar3 = 1;
  uRam000000000002f9c8 = 0;
  _DAT_0002f9c0 = 0;
  uRam000000000002f9d8 = 0;
  _DAT_0002f9d0 = 0;
  do {
    pcVar1 = DAT_0002f8d8 + 1;
    *DAT_0002f8d8 = cVar4;
    DAT_0002f8d8 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "Load Preset: "[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002f8d8 <
           __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE + DAT_0002f8d0);
  *DAT_0002f8d8 = '\0';
  DAT_0002f9f0 = &DAT_0002f9f8;
  uRam000000000002fa00 = 0;
  _DAT_0002f9f8 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE = &DAT_0002f9f8;
  DAT_0002f9e8 = 0xff;
  uRam000000000002fa10 = 0;
  _DAT_0002fa08 = 0;
  uRam000000000002fa20 = 0;
  _DAT_0002fa18 = 0;
  uRam000000000002fa30 = 0;
  _DAT_0002fa28 = 0;
  uRam000000000002fa40 = 0;
  _DAT_0002fa38 = 0;
  uRam000000000002fa50 = 0;
  _DAT_0002fa48 = 0;
  uRam000000000002fa60 = 0;
  _DAT_0002fa58 = 0;
  uRam000000000002fa70 = 0;
  _DAT_0002fa68 = 0;
  uRam000000000002fa80 = 0;
  _DAT_0002fa78 = 0;
  uRam000000000002fa90 = 0;
  _DAT_0002fa88 = 0;
  uRam000000000002faa0 = 0;
  _DAT_0002fa98 = 0;
  uRam000000000002fab0 = 0;
  _DAT_0002faa8 = 0;
  uRam000000000002fac0 = 0;
  _DAT_0002fab8 = 0;
  uRam000000000002fad0 = 0;
  _DAT_0002fac8 = 0;
  cVar4 = 'S';
  lVar3 = 1;
  uRam000000000002fae0 = 0;
  _DAT_0002fad8 = 0;
  uRam000000000002faf0 = 0;
  _DAT_0002fae8 = 0;
  do {
    pcVar1 = DAT_0002f9f0 + 1;
    *DAT_0002f9f0 = cVar4;
    DAT_0002f9f0 = pcVar1;
    if (lVar3 == 0xc) break;
    cVar4 = "Switch Setup"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002f9f0 <
           __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE + DAT_0002f9e8);
  lVar3 = 0;
  *DAT_0002f9f0 = '\0';
  DAT_0002fb08 = &DAT_0002fb10;
  uRam000000000002fb18 = 0;
  _DAT_0002fb10 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE = &DAT_0002fb10;
  DAT_0002fb00 = 0xff;
  uRam000000000002fb28 = 0;
  _DAT_0002fb20 = 0;
  uRam000000000002fb38 = 0;
  _DAT_0002fb30 = 0;
  uRam000000000002fb48 = 0;
  _DAT_0002fb40 = 0;
  uRam000000000002fb58 = 0;
  _DAT_0002fb50 = 0;
  uRam000000000002fb68 = 0;
  _DAT_0002fb60 = 0;
  uRam000000000002fb78 = 0;
  _DAT_0002fb70 = 0;
  uRam000000000002fb88 = 0;
  _DAT_0002fb80 = 0;
  uRam000000000002fb98 = 0;
  _DAT_0002fb90 = 0;
  uRam000000000002fba8 = 0;
  _DAT_0002fba0 = 0;
  uRam000000000002fbb8 = 0;
  _DAT_0002fbb0 = 0;
  uRam000000000002fbc8 = 0;
  _DAT_0002fbc0 = 0;
  uRam000000000002fbd8 = 0;
  _DAT_0002fbd0 = 0;
  uRam000000000002fbe8 = 0;
  _DAT_0002fbe0 = 0;
  cVar4 = 'R';
  uRam000000000002fbf8 = 0;
  _DAT_0002fbf0 = 0;
  uRam000000000002fc08 = 0;
  _DAT_0002fc00 = 0;
  do {
    pcVar1 = DAT_0002fb08 + 1;
    *DAT_0002fb08 = cVar4;
    DAT_0002fb08 = pcVar1;
    if (lVar3 == 4) break;
    cVar4 = "Reset"[lVar3 + 1];
    lVar3 = lVar3 + 1;
  } while (DAT_0002fb08 < __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE + DAT_0002fb00);
  *DAT_0002fb08 = '\0';
  _memcpy(auStack_db8,&DAT_00027af0,0xd80);
  __ZNSt3__113unordered_mapINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEENS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S9_EEEEEC2ESt16initializer_listISH_E
            ((ulong *)&_simple_func_map,auStack_db8,0x90);
  ___cxa_atexit(__ZNSt3__113unordered_mapINS_17basic_string_viewIcNS_11char_traitsIcEEEEPFiRN20wvWavesV15_1_154_19741WCWavesAPI3_PluginSide_RequestAndResponseEENS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S9_EEEEED1Ev
                ,&_simple_func_map,0);
  if (*(long *)PTR____stack_chk_guard_00024040 == local_38) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



void _WP_LoadFromBuffer(long param_1,undefined8 param_2,undefined4 param_3)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM19LoadSetupFromBufferEPi8WCFourCCi
            (*(undefined8 *)(param_1 + 0x748),param_2,param_3);
  return;
}



undefined8 _WP_SetActiveSetupType(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0xffffffff;
  if (param_2 == 0x73657442) {
    uVar1 = 1;
  }
  uVar2 = 0;
  if (param_2 != 0x73657441) {
    uVar2 = uVar1;
  }
  (**(code **)(**(long **)(param_1 + 0x748) + 0x460))(*(long **)(param_1 + 0x748),uVar2);
  return 0;
}



undefined8 _WP_GetActiveSetupType(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x73657441;
  iVar1 = __ZNK20wvWavesV15_1_154_19710cALGORITHM14GetActiveSetupEv
                    (*(undefined8 *)(param_1 + 0x748));
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return 0xffffffff;
    }
    uVar2 = 0x73657442;
  }
  *param_2 = uVar2;
  return 0;
}



undefined8 _WP_GetNumChunks(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x748) + 0x530))();
  *param_2 = uVar1;
  return 0;
}



void _WP_GetChunkSize(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = 0;
                    // WARNING: Could not recover jumptable at 0x0001c800. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x578))
            (*(long **)(param_1 + 0x748),param_4,param_3,param_2);
  return;
}



void _WP_GetChunk(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001c810. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x540))();
  return;
}



void _WP_SetChunk(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001c820. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x538))();
  return;
}



undefined8 _WP_CopySetup(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x748) + 0xb8))();
  return 0;
}



void ___cxx_global_var_init_14(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_15(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_API_PluginSetup_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  uRam000000000002fdf8 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_0002fe20 = &DAT_0002fe28;
  uRam000000000002fe30 = 0;
  _DAT_0002fe28 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_0002fe28;
  DAT_0002fe18 = 0x7f;
  uRam000000000002fe40 = 0;
  _DAT_0002fe38 = 0;
  uRam000000000002fe50 = 0;
  _DAT_0002fe48 = 0;
  uRam000000000002fe60 = 0;
  _DAT_0002fe58 = 0;
  uRam000000000002fe70 = 0;
  _DAT_0002fe68 = 0;
  uRam000000000002fe80 = 0;
  _DAT_0002fe78 = 0;
  uRam000000000002fe90 = 0;
  _DAT_0002fe88 = 0;
  uRam000000000002fea0 = 0;
  _DAT_0002fe98 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_0002fe20 + 1;
    *DAT_0002fe20 = cVar4;
    DAT_0002fe20 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002fe20 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_0002fe18);
  *DAT_0002fe20 = '\0';
  DAT_0002feb8 = &DAT_0002fec0;
  uRam000000000002fec8 = 0;
  _DAT_0002fec0 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE = &DAT_0002fec0;
  DAT_0002feb0 = 0xff;
  uRam000000000002fed8 = 0;
  _DAT_0002fed0 = 0;
  uRam000000000002fee8 = 0;
  _DAT_0002fee0 = 0;
  uRam000000000002fef8 = 0;
  _DAT_0002fef0 = 0;
  uRam000000000002ff08 = 0;
  _DAT_0002ff00 = 0;
  uRam000000000002ff18 = 0;
  _DAT_0002ff10 = 0;
  uRam000000000002ff28 = 0;
  _DAT_0002ff20 = 0;
  uRam000000000002ff38 = 0;
  _DAT_0002ff30 = 0;
  uRam000000000002ff48 = 0;
  _DAT_0002ff40 = 0;
  uRam000000000002ff58 = 0;
  _DAT_0002ff50 = 0;
  uRam000000000002ff68 = 0;
  _DAT_0002ff60 = 0;
  uRam000000000002ff78 = 0;
  _DAT_0002ff70 = 0;
  uRam000000000002ff88 = 0;
  _DAT_0002ff80 = 0;
  uRam000000000002ff98 = 0;
  _DAT_0002ff90 = 0;
  cVar4 = 'I';
  lVar3 = 1;
  uRam000000000002ffa8 = 0;
  _DAT_0002ffa0 = 0;
  uRam000000000002ffb8 = 0;
  _DAT_0002ffb0 = 0;
  do {
    pcVar1 = DAT_0002feb8 + 1;
    *DAT_0002feb8 = cVar4;
    DAT_0002feb8 = pcVar1;
    if (lVar3 == 0x10) break;
    cVar4 = "Initial Settings"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002feb8 <
           __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE + DAT_0002feb0);
  *DAT_0002feb8 = '\0';
  DAT_0002ffd0 = &DAT_0002ffd8;
  uRam000000000002ffe0 = 0;
  _DAT_0002ffd8 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE = &DAT_0002ffd8;
  DAT_0002ffc8 = 0xff;
  uRam000000000002fff0 = 0;
  _DAT_0002ffe8 = 0;
  _DAT_00030000 = 0;
  _DAT_0002fff8 = 0;
  uRam0000000000030010 = 0;
  _DAT_00030008 = 0;
  uRam0000000000030020 = 0;
  _DAT_00030018 = 0;
  uRam0000000000030030 = 0;
  _DAT_00030028 = 0;
  uRam0000000000030040 = 0;
  _DAT_00030038 = 0;
  uRam0000000000030050 = 0;
  _DAT_00030048 = 0;
  uRam0000000000030060 = 0;
  _DAT_00030058 = 0;
  uRam0000000000030070 = 0;
  _DAT_00030068 = 0;
  uRam0000000000030080 = 0;
  _DAT_00030078 = 0;
  uRam0000000000030090 = 0;
  _DAT_00030088 = 0;
  uRam00000000000300a0 = 0;
  _DAT_00030098 = 0;
  uRam00000000000300b0 = 0;
  _DAT_000300a8 = 0;
  cVar4 = 'L';
  lVar3 = 1;
  uRam00000000000300c0 = 0;
  _DAT_000300b8 = 0;
  uRam00000000000300d0 = 0;
  _DAT_000300c8 = 0;
  do {
    pcVar1 = DAT_0002ffd0 + 1;
    *DAT_0002ffd0 = cVar4;
    DAT_0002ffd0 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "Load Preset: "[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_0002ffd0 <
           __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE + DAT_0002ffc8);
  *DAT_0002ffd0 = '\0';
  DAT_000300e8 = &DAT_000300f0;
  uRam00000000000300f8 = 0;
  _DAT_000300f0 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE = &DAT_000300f0;
  DAT_000300e0 = 0xff;
  uRam0000000000030108 = 0;
  _DAT_00030100 = 0;
  uRam0000000000030118 = 0;
  _DAT_00030110 = 0;
  uRam0000000000030128 = 0;
  _DAT_00030120 = 0;
  uRam0000000000030138 = 0;
  _DAT_00030130 = 0;
  uRam0000000000030148 = 0;
  _DAT_00030140 = 0;
  uRam0000000000030158 = 0;
  _DAT_00030150 = 0;
  uRam0000000000030168 = 0;
  _DAT_00030160 = 0;
  uRam0000000000030178 = 0;
  _DAT_00030170 = 0;
  uRam0000000000030188 = 0;
  _DAT_00030180 = 0;
  uRam0000000000030198 = 0;
  _DAT_00030190 = 0;
  uRam00000000000301a8 = 0;
  _DAT_000301a0 = 0;
  uRam00000000000301b8 = 0;
  _DAT_000301b0 = 0;
  uRam00000000000301c8 = 0;
  _DAT_000301c0 = 0;
  cVar4 = 'S';
  lVar3 = 1;
  uRam00000000000301d8 = 0;
  _DAT_000301d0 = 0;
  uRam00000000000301e8 = 0;
  _DAT_000301e0 = 0;
  do {
    pcVar1 = DAT_000300e8 + 1;
    *DAT_000300e8 = cVar4;
    DAT_000300e8 = pcVar1;
    if (lVar3 == 0xc) break;
    cVar4 = "Switch Setup"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_000300e8 <
           __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE + DAT_000300e0);
  lVar3 = 0;
  *DAT_000300e8 = '\0';
  DAT_00030200 = &DAT_00030208;
  uRam0000000000030210 = 0;
  _DAT_00030208 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE = &DAT_00030208;
  DAT_000301f8 = 0xff;
  uRam0000000000030220 = 0;
  _DAT_00030218 = 0;
  uRam0000000000030230 = 0;
  _DAT_00030228 = 0;
  uRam0000000000030240 = 0;
  _DAT_00030238 = 0;
  uRam0000000000030250 = 0;
  _DAT_00030248 = 0;
  uRam0000000000030260 = 0;
  _DAT_00030258 = 0;
  uRam0000000000030270 = 0;
  _DAT_00030268 = 0;
  uRam0000000000030280 = 0;
  _DAT_00030278 = 0;
  uRam0000000000030290 = 0;
  _DAT_00030288 = 0;
  uRam00000000000302a0 = 0;
  _DAT_00030298 = 0;
  uRam00000000000302b0 = 0;
  _DAT_000302a8 = 0;
  uRam00000000000302c0 = 0;
  _DAT_000302b8 = 0;
  uRam00000000000302d0 = 0;
  _DAT_000302c8 = 0;
  uRam00000000000302e0 = 0;
  _DAT_000302d8 = 0;
  cVar4 = 'R';
  uRam00000000000302f0 = 0;
  _DAT_000302e8 = 0;
  uRam0000000000030300 = 0;
  _DAT_000302f8 = 0;
  do {
    pcVar1 = DAT_00030200 + 1;
    *DAT_00030200 = cVar4;
    DAT_00030200 = pcVar1;
    if (lVar3 == 4) break;
    cVar4 = "Reset"[lVar3 + 1];
    lVar3 = lVar3 + 1;
  } while (DAT_00030200 < __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE + DAT_000301f8);
  *DAT_00030200 = '\0';
  return;
}



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



ulong _WP_CreateInstance(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = __ZN20wvWavesV15_1_154_1972RM18AttachResContainerEP18WTNativeDLLRefTypeRP18WTResContainerTypej
                    (*(undefined8 *)(param_1 + 0x740),param_1 + 0x750,0);
  uVar4 = __ZNK20wvWavesV15_1_154_19721WCPluginInstanceProxy18GetDemoModeEnabledEv
                    (*(undefined8 *)(param_1 + 0x778));
  if ((int)uVar3 == 0) {
    uVar5 = __Znwm(&DAT_00001238);
    __ZN20wvWavesV15_1_154_19721WCPluginRedisReporterC1ERNS_18WavesComponentInfoEPNS_10cALGORITHME
              (uVar5,param_1,0);
    *(undefined8 *)(param_1 + 0x770) = uVar5;
    uVar2 = __Z23CheckCanSubComponentRunRN20wvWavesV15_1_154_19714PluginInstanceE(param_1);
    uVar3 = (ulong)uVar2;
    uVar1 = (uint)uVar4 & (uint)(uVar2 == 0xffffd8ee);
    if ((uVar1 != 0) || (uVar2 == 0)) {
      uVar5 = __Z9CreateAlgRKN20wvWavesV15_1_154_19718WavesComponentInfoERP18WTResContainerType
                        (param_1);
      *(undefined8 *)(param_1 + 0x748) = uVar5;
      __ZN20wvWavesV15_1_154_19721WCPluginRedisReporter7set_algEPNS_10cALGORITHME
                (*(undefined8 *)(param_1 + 0x770),uVar5);
      *(undefined8 *)(&DAT_00002080 + *(long *)(param_1 + 0x748)) = *(undefined8 *)(param_1 + 0x770)
      ;
      *(undefined8 *)(&DAT_00002088 + *(long *)(param_1 + 0x748)) = *(undefined8 *)(param_1 + 0x778)
      ;
      uVar3 = __ZN20wvWavesV15_1_154_19710cALGORITHM12FinishCreateEv
                        (*(undefined8 *)(param_1 + 0x748));
      if ((int)uVar3 == 0) {
        if (uVar1 != 0) {
          __ZN20wvWavesV15_1_154_19710cALGORITHM19SetPluginValue_boolEPKcb
                    (*(undefined8 *)(param_1 + 0x748),"IsPluginLicensed",0);
        }
        __ZN20wvWavesV15_1_154_19710cALGORITHM19SetPluginValue_boolEPKcb
                  (*(undefined8 *)(param_1 + 0x748),"isDemoModeEnabled",uVar4);
        return 0;
      }
      if (*(long **)(param_1 + 0x748) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x748) + 8))();
        *(undefined8 *)(param_1 + 0x748) = 0;
      }
      __ZN20wvWavesV15_1_154_19710cALGORITHM19SetPluginValue_boolEPKcb(0,"isDemoModeEnabled",uVar4);
    }
  }
  if (*(long **)(param_1 + 0x770) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x770) + 8))();
    *(undefined8 *)(param_1 + 0x770) = 0;
  }
  __ZN20wvWavesV15_1_154_1972RM18DetachResContainerERP18WTResContainerType(param_1 + 0x750);
  return uVar3;
}



undefined8 _WP_DeleteInstance(long param_1)

{
  if (*(long *)(param_1 + 0x748) != 0) {
    __ZN20wvWavesV15_1_154_19710cALGORITHM7DisposeEv();
    if (*(long **)(param_1 + 0x748) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x748) + 8))();
      *(undefined8 *)(param_1 + 0x748) = 0;
    }
  }
  if (*(long **)(param_1 + 0x770) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x770) + 8))();
    *(undefined8 *)(param_1 + 0x770) = 0;
  }
  __ZN20wvWavesV15_1_154_1972RM18DetachResContainerERP18WTResContainerType(param_1 + 0x750);
  return 0;
}



void _WP_DisposeGUI(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x748) + 0x650))();
  (**(code **)(**(long **)(param_1 + 0x748) + 0x640))(*(long **)(param_1 + 0x748),"Primary");
  __ZN20wvWavesV15_1_154_1972RM18DetachResContainerERP18WTResContainerType(param_1 + 0x760);
  return;
}



undefined8 _WP_CreateGUI(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  char *pcVar5;
  char *local_460;
  long lStack_458;
  char *local_450;
  char local_448 [1024];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_00024040;
  lVar1 = __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc
                    (*(undefined8 *)(param_1 + 0x748),"Primary");
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x748) + 0x640))(*(long **)(param_1 + 0x748),"Primary");
  }
  uVar2 = __ZN20wvWavesV15_1_154_1972RM18AttachResContainerEP18WTNativeDLLRefTypeRP18WTResContainerTypej
                    (*(undefined8 *)(param_1 + 0x740),param_1 + 0x760,0);
  lVar3 = (**(code **)(**(long **)(param_1 + 0x748) + 0x620))
                    (*(long **)(param_1 + 0x748),param_1 + 0x760,"Primary");
  lStack_458 = 0x3ff;
  local_460 = local_448;
  _bzero(local_448,0x400);
  cVar4 = 'P';
  lVar1 = 1;
  pcVar5 = local_448;
  do {
    local_450 = pcVar5 + 1;
    *pcVar5 = cVar4;
    if (lVar1 == 7) break;
    cVar4 = "Primary"[lVar1];
    lVar1 = lVar1 + 1;
    pcVar5 = local_450;
  } while (local_450 < local_460 + lStack_458);
  *local_450 = '\0';
  __ZN13WCFixedStringILm15EEaSERKS0_((long *)(lVar3 + 0x198),(long *)&local_460);
  __ZN20wvWavesV15_1_154_19710cALGORITHM13SetGUIPointerEPKcPNS_14CStandardGUI_XE
            (*(undefined8 *)(param_1 + 0x748),"Primary",lVar3);
  if (*(long *)PTR____stack_chk_guard_00024040 == local_48) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void _WP_CreateAdditionalGUIs(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001d10c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x648))();
  return;
}



void _WP_DisposeAdditionalGUIs(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001d11c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(long **)(param_1 + 0x748) + 0x650))();
  return;
}



void _WP_TextCommand(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x748);
  if (plVar1 != (long *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001d134. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x870))(plVar1,param_2,0);
    return;
  }
  return;
}



void _WP_TextCommandWithReply(long param_1)

{
  if (*(long **)(param_1 + 0x748) != (long *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001d14c. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(**(long **)(param_1 + 0x748) + 0x870))();
    return;
  }
  return;
}



void ___cxx_global_var_init_14(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_15(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_API_PluginStatic_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  uRam00000000000304e8 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_00030510 = &DAT_00030518;
  uRam0000000000030520 = 0;
  _DAT_00030518 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_00030518;
  DAT_00030508 = 0x7f;
  uRam0000000000030530 = 0;
  _DAT_00030528 = 0;
  uRam0000000000030540 = 0;
  _DAT_00030538 = 0;
  uRam0000000000030550 = 0;
  _DAT_00030548 = 0;
  uRam0000000000030560 = 0;
  _DAT_00030558 = 0;
  uRam0000000000030570 = 0;
  _DAT_00030568 = 0;
  uRam0000000000030580 = 0;
  _DAT_00030578 = 0;
  uRam0000000000030590 = 0;
  _DAT_00030588 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_00030510 + 1;
    *DAT_00030510 = cVar4;
    DAT_00030510 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_00030510 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_00030508);
  *DAT_00030510 = '\0';
  DAT_000305a8 = &DAT_000305b0;
  uRam00000000000305b8 = 0;
  _DAT_000305b0 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE = &DAT_000305b0;
  DAT_000305a0 = 0xff;
  uRam00000000000305c8 = 0;
  _DAT_000305c0 = 0;
  uRam00000000000305d8 = 0;
  _DAT_000305d0 = 0;
  uRam00000000000305e8 = 0;
  _DAT_000305e0 = 0;
  uRam00000000000305f8 = 0;
  _DAT_000305f0 = 0;
  uRam0000000000030608 = 0;
  _DAT_00030600 = 0;
  uRam0000000000030618 = 0;
  _DAT_00030610 = 0;
  uRam0000000000030628 = 0;
  _DAT_00030620 = 0;
  uRam0000000000030638 = 0;
  _DAT_00030630 = 0;
  uRam0000000000030648 = 0;
  _DAT_00030640 = 0;
  uRam0000000000030658 = 0;
  _DAT_00030650 = 0;
  uRam0000000000030668 = 0;
  _DAT_00030660 = 0;
  uRam0000000000030678 = 0;
  _DAT_00030670 = 0;
  uRam0000000000030688 = 0;
  _DAT_00030680 = 0;
  cVar4 = 'I';
  lVar3 = 1;
  uRam0000000000030698 = 0;
  _DAT_00030690 = 0;
  uRam00000000000306a8 = 0;
  _DAT_000306a0 = 0;
  do {
    pcVar1 = DAT_000305a8 + 1;
    *DAT_000305a8 = cVar4;
    DAT_000305a8 = pcVar1;
    if (lVar3 == 0x10) break;
    cVar4 = "Initial Settings"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_000305a8 <
           __ZN20wvWavesV15_1_154_1974UndoL32kUndoCommandName_InitialSettingsE + DAT_000305a0);
  *DAT_000305a8 = '\0';
  DAT_000306c0 = &DAT_000306c8;
  uRam00000000000306d0 = 0;
  _DAT_000306c8 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE = &DAT_000306c8;
  DAT_000306b8 = 0xff;
  uRam00000000000306e0 = 0;
  _DAT_000306d8 = 0;
  uRam00000000000306f0 = 0;
  _DAT_000306e8 = 0;
  uRam0000000000030700 = 0;
  _DAT_000306f8 = 0;
  uRam0000000000030710 = 0;
  _DAT_00030708 = 0;
  uRam0000000000030720 = 0;
  _DAT_00030718 = 0;
  uRam0000000000030730 = 0;
  _DAT_00030728 = 0;
  uRam0000000000030740 = 0;
  _DAT_00030738 = 0;
  uRam0000000000030750 = 0;
  _DAT_00030748 = 0;
  uRam0000000000030760 = 0;
  _DAT_00030758 = 0;
  uRam0000000000030770 = 0;
  _DAT_00030768 = 0;
  uRam0000000000030780 = 0;
  _DAT_00030778 = 0;
  uRam0000000000030790 = 0;
  _DAT_00030788 = 0;
  uRam00000000000307a0 = 0;
  _DAT_00030798 = 0;
  cVar4 = 'L';
  lVar3 = 1;
  uRam00000000000307b0 = 0;
  _DAT_000307a8 = 0;
  uRam00000000000307c0 = 0;
  _DAT_000307b8 = 0;
  do {
    pcVar1 = DAT_000306c0 + 1;
    *DAT_000306c0 = cVar4;
    DAT_000306c0 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "Load Preset: "[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_000306c0 <
           __ZN20wvWavesV15_1_154_1974UndoL27kUndoCommandName_LoadPresetE + DAT_000306b8);
  *DAT_000306c0 = '\0';
  DAT_000307d8 = &DAT_000307e0;
  uRam00000000000307e8 = 0;
  _DAT_000307e0 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE = &DAT_000307e0;
  DAT_000307d0 = 0xff;
  uRam00000000000307f8 = 0;
  _DAT_000307f0 = 0;
  uRam0000000000030808 = 0;
  _DAT_00030800 = 0;
  uRam0000000000030818 = 0;
  _DAT_00030810 = 0;
  uRam0000000000030828 = 0;
  _DAT_00030820 = 0;
  uRam0000000000030838 = 0;
  _DAT_00030830 = 0;
  uRam0000000000030848 = 0;
  _DAT_00030840 = 0;
  uRam0000000000030858 = 0;
  _DAT_00030850 = 0;
  uRam0000000000030868 = 0;
  _DAT_00030860 = 0;
  uRam0000000000030878 = 0;
  _DAT_00030870 = 0;
  uRam0000000000030888 = 0;
  _DAT_00030880 = 0;
  uRam0000000000030898 = 0;
  _DAT_00030890 = 0;
  uRam00000000000308a8 = 0;
  _DAT_000308a0 = 0;
  uRam00000000000308b8 = 0;
  _DAT_000308b0 = 0;
  cVar4 = 'S';
  lVar3 = 1;
  uRam00000000000308c8 = 0;
  _DAT_000308c0 = 0;
  uRam00000000000308d8 = 0;
  _DAT_000308d0 = 0;
  do {
    pcVar1 = DAT_000307d8 + 1;
    *DAT_000307d8 = cVar4;
    DAT_000307d8 = pcVar1;
    if (lVar3 == 0xc) break;
    cVar4 = "Switch Setup"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_000307d8 <
           __ZN20wvWavesV15_1_154_1974UndoL28kUndoCommandName_SwitchSetupE + DAT_000307d0);
  lVar3 = 0;
  *DAT_000307d8 = '\0';
  DAT_000308f0 = &DAT_000308f8;
  uRam0000000000030900 = 0;
  _DAT_000308f8 = 0;
  __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE = &DAT_000308f8;
  DAT_000308e8 = 0xff;
  uRam0000000000030910 = 0;
  _DAT_00030908 = 0;
  uRam0000000000030920 = 0;
  _DAT_00030918 = 0;
  uRam0000000000030930 = 0;
  _DAT_00030928 = 0;
  uRam0000000000030940 = 0;
  _DAT_00030938 = 0;
  uRam0000000000030950 = 0;
  _DAT_00030948 = 0;
  uRam0000000000030960 = 0;
  _DAT_00030958 = 0;
  uRam0000000000030970 = 0;
  _DAT_00030968 = 0;
  uRam0000000000030980 = 0;
  _DAT_00030978 = 0;
  uRam0000000000030990 = 0;
  _DAT_00030988 = 0;
  uRam00000000000309a0 = 0;
  _DAT_00030998 = 0;
  uRam00000000000309b0 = 0;
  _DAT_000309a8 = 0;
  uRam00000000000309c0 = 0;
  _DAT_000309b8 = 0;
  uRam00000000000309d0 = 0;
  _DAT_000309c8 = 0;
  cVar4 = 'R';
  uRam00000000000309e0 = 0;
  _DAT_000309d8 = 0;
  uRam00000000000309f0 = 0;
  _DAT_000309e8 = 0;
  do {
    pcVar1 = DAT_000308f0 + 1;
    *DAT_000308f0 = cVar4;
    DAT_000308f0 = pcVar1;
    if (lVar3 == 4) break;
    cVar4 = "Reset"[lVar3 + 1];
    lVar3 = lVar3 + 1;
  } while (DAT_000308f0 < __ZN20wvWavesV15_1_154_1974UndoL22kUndoCommandName_ResetE + DAT_000308e8);
  *DAT_000308f0 = '\0';
  __ZL29kGetPluginInfoType_IsBypassOn = 0x62797073;
  __ZL32kGetPluginInfoType_PresetChanged = 0x50724368;
  __ZL34kGetPluginInfoType_IsProcessActive = 0x70616374;
  __ZL34kGetPluginInfoType_IsTempoListener = 0x6973746c;
  __ZL36kGetPluginInfoType_IsMidiBroadcaster = 0x69736d62;
  __ZL33kGetPluginInfoType_IsMidiListener = 0x69736d6c;
  __ZL33kGetPluginInfoType_IsMidiRealtime = 0x69736d72;
  __ZL32kGetPluginInfoType_IsStickyTouch = 0x69537454;
  __ZL38kGetPluginInfoType_IsTrackInfoListener = 0x69737469;
  __ZL37kGetPluginInfoType_IsBeatInfoListener = 0x69736265;
  __ZL34kGetPluginInfoType_CanProcessVarIO = 0x5056696f;
  __ZL45kGetPluginInfoType_DoesntExportFactoryPresets = 0x64654650;
  __ZL33kGetPluginInfoType_HasStemSupport = 0x68737370;
  __ZL45kGetPluginInfoType_IsToolbarControlUnderPoint = 0x74757074;
  __ZL31kGetPluginInfoType_bool_Private = 0x70727674;
  __ZL40kGetPluginInfoType_HasGlobalDataInPreset = 0x67707374;
  __ZL39kGetPluginInfoType_ShouldSuspendProcess = 0x73757370;
  __ZL31kGetPluginInfoType_IsNKSSupport = 0x69736e6b;
  __ZL32kGetPluginInfoType_IsSampleBased = 0x69737362;
  __ZL44kGetPluginInfoType_IsNeedOwnAutomationThread = 0x6e617468;
  __ZL45kGetPluginInfoType_IsNeedDynamicLatencyChange = 0x6e646c63;
  __ZL34kGetPluginInfoType_IsNotBypassable = 0x69736270;
  __ZL43kGetPluginInfoType_AAX_ApplyDefaultSettings = 0x61616473;
  __ZL38kGetPluginInfoType_ParamRealWorldValue = 0x70727776;
  __ZL33kGetPluginInfoType_ParamNumStates = 0x706e7374;
  __ZL51kGetPluginInfoType_ParameterStateFromRealWorldValue = 0x70736672;
  __ZL51kGetPluginInfoType_ParameterRealWorldValueFromState = 0x70726673;
  __ZL34kGetPluginInfoType_MeterResetValue = 0x4d527374;
  __ZL49kGetPluginInfoType_ControlStateFromRealWorldValue = 0x63736672;
  __ZL49kGetPluginInfoType_ControlRealWorldValueFromState = 0x63726673;
  __ZL33kGetPluginInfoType_double_Private = 0x70727674;
  __ZL36kGetPluginInfoType_ControlUnderPoint = 0x75706e74;
  __ZL40kGetPluginInfoType_GetControlIndexByName = 0x4966724e;
  __ZL34kGetPluginInfoType_ActualOutInSize = 0x616f6973;
  __ZL23kGetPluginInfoType_Tail = 0x7461696c;
  __ZL24kGetPluginInfoType_Delay = 0x646c6179;
  __ZL28kGetPluginInfoType_InputStem = 0x6973746d;
  __ZL29kGetPluginInfoType_OutputStem = 0x6f73746d;
  __ZL32kGetPluginInfoType_SidechainStem = 0x7373746d;
  __ZL27kGetPluginInfoType_CoefsOfs = 0x634f6673;
  __ZL32kGetPluginInfoType_MaxSampleRate = 0x6d617872;
  __ZL37kGetPluginInfoType_TheSelectedControl = 0x4374726c;
  __ZL30kGetPluginInfoType_GetNumCoefs = 0x676e6366;
  __ZL37kGetPluginInfoType_NumSideChainInputs = 0x6e736369;
  __ZL31kGetPluginInfoType_GetNumInputs = 0x696e7075;
  __ZL32kGetPluginInfoType_GetNumOutputs = 0x6f757470;
  __ZL38kGetPluginInfoType_GetMaxNumOfChannels = 0x6d6e6368;
  __ZL41kGetPluginInfoType_ControlLedStateFromMap = 0x434c664d;
  __ZL34kGetPluginInfoType_int32_t_Private = 0x70727674;
  __ZL34kGetPluginInfoType_NextToggleState = 0x6e544773;
  __ZL45kGetPluginInfoType_NextToggleStateByControlID = 0x5473434f;
  __ZL37kGetPluginInfoType_GetParamIDFromName = 0x7069666e;
  __ZL38kGetPluginInfoType_FactoryPresetsCount = 0x46635043;
  __ZL44kGetPluginInfoType_ControlAutomationInfoSize = 0x63616973;
  __ZL36kGetPluginInfoType_LeadParam_ParamID = 0x4c50726d;
  __ZL33kGetPluginInfoType_size_t_Private = 0x70727674;
  __ZL35kGetPluginInfoType_UserPresetsCount = 0x55735043;
  __ZL47kGetPluginInfoType_MeterIndexFromMeterParameter = 0x62797073;
  __ZL31kGetPluginInfoType_GetNumMeters = 0x4d657472;
  __ZL37kGetPluginInfoType_OptimalRefreshRate = 0x4f727274;
  __ZL33kGetPluginInfoType_GetNumControls = 0x636f6e74;
  __ZL36kGetPluginInfoType_GetNumGuiControls = 0x67436f6e;
  __ZL43kGetPluginInfoType_GetNumAutomationControls = 0x61436f6e;
  __ZL41kGetPluginInfoType_GetNumSelectedControls = 0x73656c63;
  __ZL35kGetPluginInfoType_uint32_t_Private = 0x70727674;
  __ZL28kGetPluginInfoType_MeterInfo = 0x4d496e66;
  __ZL40kGetPluginInfoType_ControlAutomationInfo = 0x63617569;
  __ZL28kGetPluginInfoType_DSPReqRes = 0x72657152;
  __ZL40kGetPluginInfoType_processMemoryRequests = 0x506d5271;
  __ZL33kGetPluginInfoType_ParamGraphData = 0x67726461;
  __ZL33kGetPluginInfoType_struct_Private = 0x70727674;
  __ZL26kGetPluginInfoType_AlgName = 0x73416c4e;
  __ZL34kGetPluginInfoType_AlgNameOfLength = 0x73416c4c;
  __ZL38kGetPluginInfoType_ProcessFunctionName = 0x7350464e;
  __ZL35kGetPluginInfoType_PathToProcessDLL = 0x73505450;
  __ZL26kGetPluginInfoType_AlgType = 0x616c6754;
  __ZL30kGetPluginInfoType_chunkOSType = 0x636f7374;
  __ZL36kGetPluginInfoType_FactoryPresetName = 0x4663504e;
  __ZL33kGetPluginInfoType_UserPresetName = 0x5573504e;
  __ZL33kGetPluginInfoType_PathToIconFile = 0x69636e66;
  __ZL40kGetPluginInfoType_WCFixedString_Private = 0x70727674;
  __ZL40kGetPluginInfoType_ProcessCodeManagerXML = 0x70636d58;
  __ZL30kGetPluginInfoType_GetDAEFlags = 0x64616566;
  __ZL36kGetPluginInfoType_GetPlugInCategory = 0x70636174;
  __ZL33kGetPluginInfoType_GetAlgResource = 0x416c6752;
  __ZL44kGetPluginInfoType_GetControlMappingResource = 0x58504754;
  __ZL29kSetPluginInfoType_DirectText = 0x73747874;
  __ZL46kSetPluginInfoType_GUIEditorModeMoveController = 0x67656d63;
  __ZL38kSetPluginInfoType_GUIEditorModeResize = 0x67657263;
  __ZL36kSetPluginInfoType_GUIEditorModeExit = 0x67756564;
  __ZL42kSetPluginInfoType_SetOffloadParam_Private = 0x736f6670;
  __ZL38kSetPluginInfoType_HostUsesFirstPreset = 0x68756670;
  __ZL39kSetPluginInfoType_UseTouchFriendlyMenu = 0x7574666d;
  __ZL25kSetPluginInfoType_GoHome = 0x67686f6d;
  __ZL31kSetPluginInfoType_bool_Private = 0x70727674;
  __ZL34kSetPluginInfoType_LowMemorySystem = 0x6c6d656d;
  __ZL44kSetPluginInfoType_NotifyOnLinkedParamChange = 0x6e6c7063;
  __ZL42kSetPluginInfoType_StartingPresetChunkLoad = 0x7370636c;
  __ZL38kSetPluginInfoType_DeSelectAllControls = 0x64736163;
  __ZL35KSetPluginInfoType_ResizeInProgress = 0x72736970;
  __ZL39kGetPluginInfoType_UpdateUserPresetsVec = 0x75757076;
  __ZL42kSetPluginInfoType_LoadFactoryPresetByName = 0x6c667073;
  __ZL33kSetPluginInfoType_SetDefaultSkin = 0x64736b6e;
  __ZL32kSetPluginInfoType_c_str_Private = 0x70727674;
  __ZL43kSetPluginInfoType_SetAutomatableControlStr = 0x73616373;
  __ZL34kSetPluginInfoType_SetStatesOffset = 0x736f6673;
  __ZL33kSetPluginInfoType_SetCoefsOffset = 0x636f6673;
  __ZL24kSetPluginInfoType_Delay = 0x73646c79;
  __ZL34kSetPluginInfoType_int32_t_Private = 0x70727674;
  __ZL43kSetPluginInfoType_LoadFactoryPresetByIndex = 0x6c667069;
  __ZL33kSetPluginInfoType_size_t_Private = 0x70727674;
  __ZL28kSetPluginInfo_ProcessorSpec = 0x70727373;
  __ZL27kSetPluginInfo_TimeCodeData = 0x74636461;
  __ZL34kSetPluginInfoType_ExternalBuffers = 0x65786266;
  __ZL31kSetPluginInfoType_SetMusicInfo = 0x6d757370;
  __ZL33kSetPluginInfoType_struct_Private = 0x70727674;
  __ZL40KSetPluginInfoType_AdditionalGuiPosition = 0x61644770;
  __ZL41kSetPluginInfoType_TouchFriendlyMenuStyle = 0x74666d73;
  __ZL31kSetPluginInfoType_SideChainNum = 0x73696465;
  __ZL32kSetPluginInfoType_SelectControl = 0x73637472;
  __ZL35kSetPluginInfoType_uint32_t_Private = 0x70727674;
  return;
}



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



undefined8 _WP_ProcessMidi(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM16MidiProcessInputERNS_4MIDI11WCMidiEventE
            (*(undefined8 *)(param_1 + 0x748));
  return 0;
}



void ___cxx_global_var_init_14(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_15(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_API_PluginMidi_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  uRam0000000000030dc0 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_00030de8 = &DAT_00030df0;
  uRam0000000000030df8 = 0;
  _DAT_00030df0 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_00030df0;
  DAT_00030de0 = 0x7f;
  uRam0000000000030e08 = 0;
  _DAT_00030e00 = 0;
  uRam0000000000030e18 = 0;
  _DAT_00030e10 = 0;
  uRam0000000000030e28 = 0;
  _DAT_00030e20 = 0;
  uRam0000000000030e38 = 0;
  _DAT_00030e30 = 0;
  uRam0000000000030e48 = 0;
  _DAT_00030e40 = 0;
  uRam0000000000030e58 = 0;
  _DAT_00030e50 = 0;
  uRam0000000000030e68 = 0;
  _DAT_00030e60 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_00030de8 + 1;
    *DAT_00030de8 = cVar4;
    DAT_00030de8 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_00030de8 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_00030de0);
  *DAT_00030de8 = '\0';
  return;
}



void __ZNSt3__112shared_mutexD1Ev(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1);
  return;
}



long __ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
               (long param_1)

{
  __ZNSt3__16__treeINS_12__value_typeINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsEEENS_19__map_value_compareISC_SF_NS_4lessISC_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE
            (param_1,*(undefined8 **)(param_1 + 8));
  return param_1;
}



void _WP_GetPluginInfo_bool(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z18GetPluginInfo_boolRN20wvWavesV15_1_154_19714PluginInstanceEjRbl_0002c018)();
  return;
}



void _WP_GetPluginInfo_double(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4f0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z20GetPluginInfo_doubleRN20wvWavesV15_1_154_19714PluginInstanceEjRdl_0002c038)();
  return;
}



void _WP_GetPluginInfo_int32_t(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e520. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z21GetPluginInfo_int32_tRN20wvWavesV15_1_154_19714PluginInstanceEjRil_0002c058)();
  return;
}



void _WP_GetPluginInfo_size_t(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4fc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z20GetPluginInfo_size_tRN20wvWavesV15_1_154_19714PluginInstanceEjRml_0002c040)();
  return;
}



void _WP_GetPluginInfo_struct(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e508. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z20GetPluginInfo_structRN20wvWavesV15_1_154_19714PluginInstanceEjPvl_0002c048)();
  return;
}



void _WP_GetPluginInfo_uint32_t(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e538. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z22GetPluginInfo_uint32_tRN20wvWavesV15_1_154_19714PluginInstanceEjRjl_0002c068)()
  ;
  return;
}



void _WP_GetPluginInfo_WCFixedString(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e550. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___Z27GetPluginInfo_WCFixedStringRN20wvWavesV15_1_154_19714PluginInstanceEjR17WCFixedStringBasel_0002c078
  )();
  return;
}



void _WP_SetPluginInfo_bool(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z18SetPluginInfo_boolRN20wvWavesV15_1_154_19714PluginInstanceEjbl_0002c020)();
  return;
}



void _WP_SetPluginInfo_c_str(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z19SetPluginInfo_c_strRN20wvWavesV15_1_154_19714PluginInstanceEjPKcl_0002c028)();
  return;
}



undefined8 _WP_SetPluginInfo_double(void)

{
  return 0xffffffe7;
}



void _WP_SetPluginInfo_int32_t(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e52c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z21SetPluginInfo_int32_tRN20wvWavesV15_1_154_19714PluginInstanceEjil_0002c060)();
  return;
}



void _WP_SetPluginInfo_struct(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e514. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z20SetPluginInfo_structRN20wvWavesV15_1_154_19714PluginInstanceEjPvl_0002c050)();
  return;
}



void _WP_SetPluginInfo_uint32_t(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e544. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z22SetPluginInfo_uint32_tRN20wvWavesV15_1_154_19714PluginInstanceEjjl_0002c070)();
  return;
}



void _WP_SetPluginValueBinary(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM20SetPluginValueBinaryEPKcPKvm
            (*(undefined8 *)(param_1 + 0x748));
  return;
}



undefined8 _WP_UpdateAlgBuf(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x748) + 0x98))(*(long **)(param_1 + 0x748),0);
  *param_2 = uVar1;
  return 0;
}



void _WP_SetPluginValueStr(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM17SetPluginValueStrEPKcS2_(*(undefined8 *)(param_1 + 0x748))
  ;
  return;
}



void _WP_GetPluginValueBinary(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM20GetPluginValueBinaryEPKcPvm
            (*(undefined8 *)(param_1 + 0x748));
  return;
}



void _WP_GetPluginValueStr(long param_1)

{
  __ZN20wvWavesV15_1_154_19710cALGORITHM17GetPluginValueStrEPKcR17WCFixedStringBase
            (*(undefined8 *)(param_1 + 0x748));
  return;
}



void ___cxx_global_var_init_14(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE & 1) == 0) &&
     (iVar1 = ___cxa_guard_acquire
                        (&
                         __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE
                        ), iVar1 != 0)) {
    __ZNSt3__119__shared_mutex_baseC1Ev
              (&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    ___cxa_atexit(__ZNSt3__112shared_mutexD1Ev,
                  &__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE,0);
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject13s_textBox_mtxE);
    return;
  }
  return;
}



void ___cxx_global_var_init_15(void)

{
  int iVar1;
  
  if (((__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE & 1) == 0)
     && (iVar1 = ___cxa_guard_acquire
                           (&
                            __ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE
                           ), iVar1 != 0)) {
    DAT_0002c640 = 0;
    DAT_0002c638 = 0;
    __ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE = &DAT_0002c638;
    ___cxa_atexit(__ZNSt3__13mapINS_5tupleIJN20wvWavesV15_1_154_19717PluginViewManager17WCFontDescriptionENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEE8WCSize2DIsENS_4lessISB_EENS8_INS_4pairIKSB_SD_EEEEED1Ev
                  ,&__ZN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE,0)
    ;
    ___cxa_guard_release
              (&__ZGVN20wvWavesV15_1_154_19717PluginViewManager12WCTextObject15s_textBox_cacheE);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __GLOBAL__sub_I_API_PluginInfo_cpp(void)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  
  __ZN8WCFourCCC2EPKc(&__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE,(byte *)"Wave");
  __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL20eMRXSFileType_FourCCE,
                      (byte *)".mrxs");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPSFileTypeMapE,"XPS files","xps",
             0x58507374,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  puVar2 = __ZN8WCFourCCC2EPKc((uint *)&__ZN20wvWavesV15_1_154_1976PresetL19eXMLFileType_FourCCE,
                               (byte *)"xml");
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXMLFileTypeMapE,"XML files","xml",*puVar2
             ,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  __ZN10WCFileTypeC2EPKcS1_8WCFourCCS2_
            ((long *)&__ZN20wvWavesV15_1_154_1976PresetL15kXPMFileTypeMapE,"XPM files","xpm",
             0x58506d64,__ZN20wvWavesV15_1_154_1976PresetL14creator_FourCCE);
  uRam0000000000031050 = 0;
  ___ZL28kGraphicStreamCurrentVersion = 1;
  __ZN20wvWavesV15_1_154_19717PluginViewManagerL18kIllegalMousePointE = 0x46fffe0046fffe00;
  __ZL24kInvalidPointCoordinates = NEON_fmov(0xc1200000,4);
  DAT_00031078 = &DAT_00031080;
  uRam0000000000031088 = 0;
  _DAT_00031080 = 0;
  __ZL40kDefaultAcceptableCharactersForTextEntry = &DAT_00031080;
  DAT_00031070 = 0x7f;
  uRam0000000000031098 = 0;
  _DAT_00031090 = 0;
  uRam00000000000310a8 = 0;
  _DAT_000310a0 = 0;
  uRam00000000000310b8 = 0;
  _DAT_000310b0 = 0;
  uRam00000000000310c8 = 0;
  _DAT_000310c0 = 0;
  uRam00000000000310d8 = 0;
  _DAT_000310d0 = 0;
  uRam00000000000310e8 = 0;
  _DAT_000310e0 = 0;
  uRam00000000000310f8 = 0;
  _DAT_000310f0 = 0;
  cVar4 = '0';
  lVar3 = 1;
  do {
    pcVar1 = DAT_00031078 + 1;
    *DAT_00031078 = cVar4;
    DAT_00031078 = pcVar1;
    if (lVar3 == 0xd) break;
    cVar4 = "0123456789.+-"[lVar3];
    lVar3 = lVar3 + 1;
  } while (DAT_00031078 < __ZL40kDefaultAcceptableCharactersForTextEntry + DAT_00031070);
  *DAT_00031078 = '\0';
  return;
}



void __ZN14cDuganAgentAlg30PrepareDisplayFunctionsMapSelfERNSt3__13mapI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyENS0_4lessIS3_EENS0_9allocatorINS0_4pairIKS3_S5_EEEEEE_cold_1
               (long *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = (long *)*param_1;
  if ((long *)(param_2 + 8) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
  return;
}



void __ZN14cDuganAgentAlg30PrepareDisplayFunctionsMapSelfERNSt3__13mapI13WCFixedStringILm127EEN20wvWavesV15_1_154_19720DisplayFunctionProxyENS0_4lessIS3_EENS0_9allocatorINS0_4pairIKS3_S5_EEEEEE_cold_2
               (long *param_1)

{
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  return;
}



void FUN_0001e3c4(long *param_1)

{
  (**(code **)(*param_1 + 0x28))();
  return;
}



void _WP_InitGUI_cold_1(long *param_1)

{
  long lVar1;
  
  LOAcquire();
  lVar1 = param_1[1];
  param_1[1] = lVar1 + -1;
  LORelease();
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x10))();
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



void __ZN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE6parserINS_6detail22iterator_input_adapterIPKcEEEENSF_6parserISD_T_EESL_NS1_8functionIFbiNSF_13parse_event_tERSD_EEEbb_cold_1
               (long *param_1)

{
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  return;
}



void FUN_0001e424(long *param_1)

{
  (**(code **)(*param_1 + 0x28))();
  return;
}



void __ZN8nlohmann6detail6parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS0_22iterator_input_adapterIPKcEEEC2EOSJ_NS3_8functionIFbiNS0_13parse_event_tERSF_EEEbb_cold_1
               (long *param_1)

{
  if (param_1 != (long *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001e44c. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x28))();
    return;
  }
  return;
}



void __ZNK8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerENS3_IhNS7_IhEEEEE4dumpEicbNS_6detail15error_handler_tE_cold_1
               (long *param_1)

{
  long lVar1;
  
  LOAcquire();
  lVar1 = param_1[1];
  param_1[1] = lVar1 + -1;
  LORelease();
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x10))();
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __Unwind_Resume(_Unwind_Exception *exception_object)

{
                    // WARNING: Could not recover jumptable at 0x0001e49c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Unwind_Resume_0002c000)();
  return;
}



void __Z11msToDspCoefdd(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z11msToDspCoefdd_0002c008)();
  return;
}



void __Z13O1_Allp_90degd(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4b4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z13O1_Allp_90degd_0002c010)();
  return;
}



void __Z18GetPluginInfo_boolRN20wvWavesV15_1_154_19714PluginInstanceEjRbl(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z18GetPluginInfo_boolRN20wvWavesV15_1_154_19714PluginInstanceEjRbl_0002c018)();
  return;
}



void __Z18SetPluginInfo_boolRN20wvWavesV15_1_154_19714PluginInstanceEjbl(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z18SetPluginInfo_boolRN20wvWavesV15_1_154_19714PluginInstanceEjbl_0002c020)();
  return;
}



void __Z19SetPluginInfo_c_strRN20wvWavesV15_1_154_19714PluginInstanceEjPKcl(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z19SetPluginInfo_c_strRN20wvWavesV15_1_154_19714PluginInstanceEjPKcl_0002c028)();
  return;
}



void __Z19Translate_Frequencydi(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z19Translate_Frequencydi_0002c030)();
  return;
}



void __Z20GetPluginInfo_doubleRN20wvWavesV15_1_154_19714PluginInstanceEjRdl(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4f0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z20GetPluginInfo_doubleRN20wvWavesV15_1_154_19714PluginInstanceEjRdl_0002c038)();
  return;
}



void __Z20GetPluginInfo_size_tRN20wvWavesV15_1_154_19714PluginInstanceEjRml(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e4fc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z20GetPluginInfo_size_tRN20wvWavesV15_1_154_19714PluginInstanceEjRml_0002c040)();
  return;
}



void __Z20GetPluginInfo_structRN20wvWavesV15_1_154_19714PluginInstanceEjPvl(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e508. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z20GetPluginInfo_structRN20wvWavesV15_1_154_19714PluginInstanceEjPvl_0002c048)();
  return;
}



void __Z20SetPluginInfo_structRN20wvWavesV15_1_154_19714PluginInstanceEjPvl(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e514. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z20SetPluginInfo_structRN20wvWavesV15_1_154_19714PluginInstanceEjPvl_0002c050)();
  return;
}



void __Z21GetPluginInfo_int32_tRN20wvWavesV15_1_154_19714PluginInstanceEjRil(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e520. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z21GetPluginInfo_int32_tRN20wvWavesV15_1_154_19714PluginInstanceEjRil_0002c058)();
  return;
}



void __Z21SetPluginInfo_int32_tRN20wvWavesV15_1_154_19714PluginInstanceEjil(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e52c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z21SetPluginInfo_int32_tRN20wvWavesV15_1_154_19714PluginInstanceEjil_0002c060)();
  return;
}



void __Z22GetPluginInfo_uint32_tRN20wvWavesV15_1_154_19714PluginInstanceEjRjl(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e538. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z22GetPluginInfo_uint32_tRN20wvWavesV15_1_154_19714PluginInstanceEjRjl_0002c068)()
  ;
  return;
}



void __Z22SetPluginInfo_uint32_tRN20wvWavesV15_1_154_19714PluginInstanceEjjl(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e544. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z22SetPluginInfo_uint32_tRN20wvWavesV15_1_154_19714PluginInstanceEjjl_0002c070)();
  return;
}



void __Z27GetPluginInfo_WCFixedStringRN20wvWavesV15_1_154_19714PluginInstanceEjR17WCFixedStringBasel
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e550. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___Z27GetPluginInfo_WCFixedStringRN20wvWavesV15_1_154_19714PluginInstanceEjR17WCFixedStringBasel_0002c078
  )();
  return;
}



void __Z8dbToGaind(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e55c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Z8dbToGaind_0002c080)();
  return;
}



void __ZN12WCLinkGroupsC1ERNSt3__16vectorI14sCONTROL_PARAMNS0_9allocatorIS2_EEEERK12EPluginSetup
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e568. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN12WCLinkGroupsC1ERNSt3__16vectorI14sCONTROL_PARAMNS0_9allocatorIS2_EEEERK12EPluginSetup_0002c088
  )();
  return;
}



void __ZN14WCMeterManager11ReadFromDSPEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e574. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN14WCMeterManager11ReadFromDSPEv_0002c090)();
  return;
}



void __ZN14WCMeterManager12GetMeterInfoEjRN20wvWavesV15_1_154_19714WavesMeterInfoE(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e580. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN14WCMeterManager12GetMeterInfoEjRN20wvWavesV15_1_154_19714WavesMeterInfoE_0002c098)();
  return;
}



void __ZN14WCMeterManager13GetMeterIndexEm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e58c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN14WCMeterManager13GetMeterIndexEm_0002c0a0)();
  return;
}



void __ZN14WCMeterManager13GetMeterValueEjPdPi(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e598. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN14WCMeterManager13GetMeterValueEjPdPi_0002c0a8)();
  return;
}



void __ZN14WCMeterManager14ReadMetersSendEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e5a4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN14WCMeterManager14ReadMetersSendEv_0002c0b0)();
  return;
}



void __ZN14WCMeterManager17ReadMetersReceiveEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e5b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN14WCMeterManager17ReadMetersReceiveEv_0002c0b8)();
  return;
}



void __ZN14WCMeterManager18SetMeterReadOffsetEjj(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e5bc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN14WCMeterManager18SetMeterReadOffsetEjj_0002c0c0)();
  return;
}



void __ZN14WCMeterManager9ResetClipEj(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e5c8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN14WCMeterManager9ResetClipEj_0002c0c8)();
  return;
}



void __ZN15CSelectableHome19BuildSelectableListEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e5d4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN15CSelectableHome19BuildSelectableListEv_0002c0d0)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM11PreScanDataEPN20WPAPI_PROCESS_MEMORY13WavesSoundBufEiiPcS4_PNS1_12ExternStructEPNS1_16sNativeShellInfoE
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e5e0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19710cALGORITHM11PreScanDataEPN20WPAPI_PROCESS_MEMORY13WavesSoundBufEiiPcS4_PNS1_12ExternStructEPNS1_16sNativeShellInfoE_0002c0d8
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM12FinishCreateEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e5ec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM12FinishCreateEv_0002c0e0)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM12SetNumInputsEi(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e5f8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM12SetNumInputsEi_0002c0e8)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM13GetSampleRateEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e604. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM13GetSampleRateEv_0002c0f0)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM13SetGUIPointerEPKcPNS_14CStandardGUI_XE(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e610. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19710cALGORITHM13SetGUIPointerEPKcPNS_14CStandardGUI_XE_0002c0f8)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM13SetNumOutputsEi(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e61c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM13SetNumOutputsEi_0002c100)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM13SetSampleRateEi(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e628. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM13SetSampleRateEi_0002c108)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM15InitProcessCodeEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e634. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM15InitProcessCodeEv_0002c110)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM15SetExecCallBackEPFiilPvS1_S1_El(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e640. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM15SetExecCallBackEPFiilPvS1_S1_El_0002c118)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM15TransportChangeEbbbii(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e64c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM15TransportChangeEbbbii_0002c120)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM16ChangeSampleRateEi(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e658. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM16ChangeSampleRateEi_0002c128)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM16GetNSProcessSizeE13ProcessorType7EOSType(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e664. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19710cALGORITHM16GetNSProcessSizeE13ProcessorType7EOSType_0002c130)()
  ;
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e670. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM16GetPointerToCoefEii_0002c138)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM16InitInstanceDataEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e67c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM16InitInstanceDataEv_0002c140)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM16MidiProcessInputERNS_4MIDI11WCMidiEventE(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e688. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19710cALGORITHM16MidiProcessInputERNS_4MIDI11WCMidiEventE_0002c148)()
  ;
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM16SetProcessActiveEb(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e694. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM16SetProcessActiveEb_0002c150)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM16UpdateParamStateEmdb(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e6a0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM16UpdateParamStateEmdb_0002c158)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM17GetPluginValueStrEPKcR17WCFixedStringBase(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e6ac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19710cALGORITHM17GetPluginValueStrEPKcR17WCFixedStringBase_0002c160)
            ();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM17SetPluginValueStrEPKcS2_(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e6b8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM17SetPluginValueStrEPKcS2__0002c168)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM18SendAndFreeBuffersERPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADEREib
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e6c4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19710cALGORITHM18SendAndFreeBuffersERPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADEREib_0002c170
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM19LoadSetupFromBufferEPi8WCFourCCi(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e6d0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM19LoadSetupFromBufferEPi8WCFourCCi_0002c178)()
  ;
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM19SetPluginValue_boolEPKcb(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e6dc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM19SetPluginValue_boolEPKcb_0002c180)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM20GetPluginValueBinaryEPKcPvm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e6e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM20GetPluginValueBinaryEPKcPvm_0002c188)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM20SetPluginValueBinaryEPKcPKvm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e6f4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM20SetPluginValueBinaryEPKcPKvm_0002c190)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM21RetrieveNSProcessCodeE13ProcessorType7EOSTypePc(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e700. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19710cALGORITHM21RetrieveNSProcessCodeE13ProcessorType7EOSTypePc_0002c198
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM22GetPointerToBypassCoefEii(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e70c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM22GetPointerToBypassCoefEii_0002c1a0)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM24GetProcessSemaphoreIDPtrEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e718. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM24GetProcessSemaphoreIDPtrEv_0002c1a8)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM7DisposeEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e724. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM7DisposeEv_0002c1b0)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM7InitAlgEb(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e730. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM7InitAlgEb_0002c1b8)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM7SetMuteEb(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e73c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM7SetMuteEb_0002c1c0)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM8GetParamEm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e748. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM8GetParamEm_0002c1c8)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM8InitDataEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e754. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM8InitDataEv_0002c1d0)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM9ChainBufsEPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADERES3_
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e760. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19710cALGORITHM9ChainBufsEPN20WPAPI_PROCESS_MEMORY13BUFFER_HEADERES3__0002c1d8
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e76c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM9GetGUIPtrEPKc_0002c1e0)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e778. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM9NewBufferEiiiiil_0002c1e8)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHM9SetBypassEb(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e784. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHM9SetBypassEb_0002c1f0)();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHMC2ERKNS_18WavesComponentInfoERP18WTResContainerType(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e790. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19710cALGORITHMC2ERKNS_18WavesComponentInfoERP18WTResContainerType_0002c1f8
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e79c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19710cALGORITHMD2Ev_0002c200)();
  return;
}



void __ZN20wvWavesV15_1_154_19711WCWLEClient22CheckAuthForSingleItemERKNS_13AuthCheckItemE(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e7a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19711WCWLEClient22CheckAuthForSingleItemERKNS_13AuthCheckItemE_0002c208
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19711WCWLEClientC1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e7b4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19711WCWLEClientC1Ev_0002c210)();
  return;
}



void __ZN20wvWavesV15_1_154_19711WCWLEClientD1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e7c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19711WCWLEClientD1Ev_0002c218)();
  return;
}



void __ZN20wvWavesV15_1_154_19713AuthCheckItemC1ERK13WCFixedStringILm63EERKNS_9WCVersionERK8WCFourCC
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e7cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19713AuthCheckItemC1ERK13WCFixedStringILm63EERKNS_9WCVersionERK8WCFourCC_0002c220
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19713DisplayFloat1EddR17WCFixedStringBase(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e7d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19713DisplayFloat1EddR17WCFixedStringBase_0002c228)();
  return;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_X11DoMouseDownEPNS_17PluginViewManager11WCEventDataE
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e7e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19714CStandardGUI_X11DoMouseDownEPNS_17PluginViewManager11WCEventDataE_0002c230
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_X13DoMouseUpBaseEPNS_17PluginViewManager11WCEventDataE
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e7f0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19714CStandardGUI_X13DoMouseUpBaseEPNS_17PluginViewManager11WCEventDataE_0002c238
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_X15DoMouseDownBaseEPNS_17PluginViewManager11WCEventDataE
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e7fc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19714CStandardGUI_X15DoMouseDownBaseEPNS_17PluginViewManager11WCEventDataE_0002c240
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_X15DoMouseMoveBaseEPNS_17PluginViewManager11WCEventDataE
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e808. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19714CStandardGUI_X15DoMouseMoveBaseEPNS_17PluginViewManager11WCEventDataE_0002c248
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_X16DoMouseWheelBaseEPNS_17PluginViewManager11WCEventDataE
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e814. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19714CStandardGUI_X16DoMouseWheelBaseEPNS_17PluginViewManager11WCEventDataE_0002c250
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_X19ClearTouchEventsMapEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e820. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19714CStandardGUI_X19ClearTouchEventsMapEv_0002c258)();
  return;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_X20InitGuiWithoutImagesEPNS_10cALGORITHMER8WCResKey
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e82c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19714CStandardGUI_X20InitGuiWithoutImagesEPNS_10cALGORITHMER8WCResKey_0002c260
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_X42ConvertToControlIndexFromAutomationControlEi(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e838. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19714CStandardGUI_X42ConvertToControlIndexFromAutomationControlEi_0002c268
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_X7InitGuiEPNS_10cALGORITHMER8WCResKey(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e844. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19714CStandardGUI_X7InitGuiEPNS_10cALGORITHMER8WCResKey_0002c270)();
  return;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_X9DoMouseUpEPNS_17PluginViewManager11WCEventDataE
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e850. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19714CStandardGUI_X9DoMouseUpEPNS_17PluginViewManager11WCEventDataE_0002c278
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e85c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19714CStandardGUI_XD2Ev_0002c280)();
  return;
}



void __ZN20wvWavesV15_1_154_19721WCPluginRedisReporter7set_algEPNS_10cALGORITHME(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e868. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_19721WCPluginRedisReporter7set_algEPNS_10cALGORITHME_0002c288
  )();
  return;
}



void __ZN20wvWavesV15_1_154_19721WCPluginRedisReporterC1ERNS_18WavesComponentInfoEPNS_10cALGORITHME
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e874. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_19721WCPluginRedisReporterC1ERNS_18WavesComponentInfoEPNS_10cALGORITHME_0002c290
  )();
  return;
}



void __ZN20wvWavesV15_1_154_1972RM18AttachResContainerEP18WTNativeDLLRefTypeRP18WTResContainerTypej
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001e880. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN20wvWavesV15_1_154_1972RM18AttachResContainerEP18WTNativeDLLRefTypeRP18WTResContainerTypej_0002c298
  )();
  return;
}



void __ZN20wvWavesV15_1_154_1972RM18DetachResContainerERP18WTResContainerType(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e88c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_1972RM18DetachResContainerERP18WTResContainerType_0002c2a0)()
  ;
  return;
}



void __ZN20wvWavesV15_1_154_1975Utils10WCStMemObj6AssignEPKcm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e898. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_1975Utils10WCStMemObj6AssignEPKcm_0002c2a8)();
  return;
}



void __ZN20wvWavesV15_1_154_1975Utils10WCStMemObjC1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e8a4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_1975Utils10WCStMemObjC1Ev_0002c2b0)();
  return;
}



void __ZN20wvWavesV15_1_154_1975Utils10WCStMemObjD1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e8b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_1975Utils10WCStMemObjD1Ev_0002c2b8)();
  return;
}



void __ZN20wvWavesV15_1_154_1978wvThread17ThreadMutexInited6obtainEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e8bc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_1978wvThread17ThreadMutexInited6obtainEv_0002c2c0)();
  return;
}



void __ZN20wvWavesV15_1_154_1978wvThread17ThreadMutexInited7releaseEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e8c8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_1978wvThread17ThreadMutexInited7releaseEv_0002c2c8)();
  return;
}



void __ZN20wvWavesV15_1_154_1979WCVersionC1EPKc(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e8d4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN20wvWavesV15_1_154_1979WCVersionC1EPKc_0002c2d0)();
  return;
}



void __ZN4wvGS27WCGraphicStreamBinaryWriterC1ERN20wvWavesV15_1_154_1975Utils10WCStMemObjEm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e8e0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZN4wvGS27WCGraphicStreamBinaryWriterC1ERN20wvWavesV15_1_154_1975Utils10WCStMemObjEm_0002c2d8
  )();
  return;
}



void __ZN4wvGS27WCGraphicStreamBinaryWriterD1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e8ec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN4wvGS27WCGraphicStreamBinaryWriterD1Ev_0002c2e0)();
  return;
}



void __ZN8WCResKeyC1ERK13WCFixedStringILm31EERKs(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e8f8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZN8WCResKeyC1ERK13WCFixedStringILm31EERKs_0002c2e8)();
  return;
}



void __ZNK20wvWavesV15_1_154_19710cALGORITHM10GetAlgNameEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e904. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNK20wvWavesV15_1_154_19710cALGORITHM10GetAlgNameEv_0002c2f0)();
  return;
}



void __ZNK20wvWavesV15_1_154_19710cALGORITHM13GetParamStateEm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e910. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNK20wvWavesV15_1_154_19710cALGORITHM13GetParamStateEm_0002c2f8)();
  return;
}



void __ZNK20wvWavesV15_1_154_19710cALGORITHM14GetActiveSetupEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e91c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNK20wvWavesV15_1_154_19710cALGORITHM14GetActiveSetupEv_0002c300)();
  return;
}



void __ZNK20wvWavesV15_1_154_19710cALGORITHM16GetProcessActiveEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e928. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNK20wvWavesV15_1_154_19710cALGORITHM16GetProcessActiveEv_0002c308)();
  return;
}



void __ZNK20wvWavesV15_1_154_19710cALGORITHM19GetParamValueStringEmR17WCFixedStringBase(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e934. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZNK20wvWavesV15_1_154_19710cALGORITHM19GetParamValueStringEmR17WCFixedStringBase_0002c310)
            ();
  return;
}



void __ZNK20wvWavesV15_1_154_19710cALGORITHM19GetPluginValue_boolEPKcb(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e940. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNK20wvWavesV15_1_154_19710cALGORITHM19GetPluginValue_boolEPKcb_0002c318)();
  return;
}



void __ZNK20wvWavesV15_1_154_19710cALGORITHM9GetBypassEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e94c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNK20wvWavesV15_1_154_19710cALGORITHM9GetBypassEv_0002c320)();
  return;
}



void __ZNK20wvWavesV15_1_154_19712WCParam_Base16RealWorldToStateEd(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e958. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNK20wvWavesV15_1_154_19712WCParam_Base16RealWorldToStateEd_0002c328)();
  return;
}



void __ZNK20wvWavesV15_1_154_19717PluginViewManager11WCEventData21GetMouseButtonPressedEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e964. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZNK20wvWavesV15_1_154_19717PluginViewManager11WCEventData21GetMouseButtonPressedEv_0002c330
  )();
  return;
}



void __ZNK20wvWavesV15_1_154_19721WCPluginInstanceProxy18GetDemoModeEnabledEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e970. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNK20wvWavesV15_1_154_19721WCPluginInstanceProxy18GetDemoModeEnabledEv_0002c338)()
  ;
  return;
}



void __ZNK20wvWavesV15_1_154_1975Utils15WCStConstMemObj5EmptyEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e97c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNK20wvWavesV15_1_154_1975Utils15WCStConstMemObj5EmptyEv_0002c340)();
  return;
}



void __ZNKSt13runtime_error4whatEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e988. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNKSt13runtime_error4whatEv_0002c348)();
  return;
}



void __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e994. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc_0002c350)();
  return;
}



void __ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e9a0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv_0002c358)();
  return;
}



void __ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e9ac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv_0002c360)();
  return;
}



void __ZNKSt3__16locale9use_facetERNS0_2idE(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e9b8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNKSt3__16locale9use_facetERNS0_2idE_0002c368)();
  return;
}



void __ZNKSt3__18ios_base6getlocEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e9c4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNKSt3__18ios_base6getlocEv_0002c370)();
  return;
}



void __ZNSt11logic_errorC2EPKc(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e9d0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt11logic_errorC2EPKc_0002c378)();
  return;
}



void __ZNSt13runtime_errorC1EPKc(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e9dc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt13runtime_errorC1EPKc_0002c380)();
  return;
}



void __ZNSt13runtime_errorC1ERKS_(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e9e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt13runtime_errorC1ERKS__0002c388)();
  return;
}



void __ZNSt13runtime_errorD1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001e9f4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt13runtime_errorD1Ev_0002c390)();
  return;
}



void __ZNSt3__111__call_onceERVmPvPFvS2_E(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__111__call_onceERVmPvPFvS2_E_0002c398)();
  return;
}



void __ZNSt3__112__next_primeEm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__112__next_primeEm_0002c3a0)();
  return;
}



void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc_0002c3a8
  )();
  return;
}



void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_0002c3b0)();
  return;
}



void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc_0002c3b8)();
  return;
}



void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc_0002c3c0)
            ();
  return;
}



void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_0002c3c8)();
  return;
}



void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5__0002c3d0)()
  ;
  return;
}



void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__0002c3d8)()
  ;
  return;
}



void __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc_0002c3e0)();
  return;
}



void __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv_0002c3e8)();
  return;
}



void __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3__0002c3f0)();
  return;
}



void __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev_0002c3f8)();
  return;
}



void __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ea9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi_0002c400)();
  return;
}



void __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eaa8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev_0002c408)();
  return;
}



void __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEEC2Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eab4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__115basic_streambufIcNS_11char_traitsIcEEEC2Ev_0002c410)();
  return;
}



void __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eac0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev_0002c418)();
  return;
}



void __ZNSt3__118condition_variableD1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eacc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__118condition_variableD1Ev_0002c420)();
  return;
}



void __ZNSt3__119__shared_mutex_baseC1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ead8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__119__shared_mutex_baseC1Ev_0002c428)();
  return;
}



void __ZNSt3__119__shared_weak_count14__release_weakEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eae4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_0002c430)();
  return;
}



void __ZNSt3__119__shared_weak_countD2Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eaf0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_0002c438)();
  return;
}



void __ZNSt3__15mutexD1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eafc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__15mutexD1Ev_0002c440)();
  return;
}



void __ZNSt3__16localeD1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__16localeD1Ev_0002c448)();
  return;
}



void __ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv_0002c450)();
  return;
}



void __ZNSt3__18ios_base4initEPv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__18ios_base4initEPv_0002c458)();
  return;
}



void __ZNSt3__18ios_base5clearEj(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__18ios_base5clearEj_0002c460)();
  return;
}



void __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev_0002c468)();
  return;
}



void __ZNSt3__19to_stringEi(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__19to_stringEi_0002c470)();
  return;
}



void __ZNSt3__19to_stringEm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt3__19to_stringEm_0002c478)();
  return;
}



void __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
               (void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)
    PTR___ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9__0002c480
  )();
  return;
}



void __ZNSt9exceptionD2Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZNSt9exceptionD2Ev_0002c488)();
  return;
}



void __ZSt9terminatev(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZSt9terminatev_0002c490)();
  return;
}



void __ZdlPv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZdlPv_0002c498)();
  return;
}



void __ZltRK17WCFixedStringBaseS1_(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___ZltRK17WCFixedStringBaseS1__0002c4a0)();
  return;
}



void __Znwm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eb98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Znwm_0002c4a8)();
  return;
}



void ___cxa_allocate_exception(void)

{
                    // WARNING: Could not recover jumptable at 0x0001eba4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____cxa_allocate_exception_0002c4b0)();
  return;
}



void ___cxa_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ebb0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____cxa_atexit_0002c4b8)();
  return;
}



void ___cxa_begin_catch(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ebbc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____cxa_begin_catch_0002c4c0)();
  return;
}



void ___cxa_end_catch(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ebc8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____cxa_end_catch_0002c4c8)();
  return;
}



void ___cxa_free_exception(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ebd4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____cxa_free_exception_0002c4d0)();
  return;
}



void ___cxa_guard_abort(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ebe0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____cxa_guard_abort_0002c4d8)();
  return;
}



void ___cxa_guard_acquire(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ebec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____cxa_guard_acquire_0002c4e0)();
  return;
}



void ___cxa_guard_release(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ebf8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____cxa_guard_release_0002c4e8)();
  return;
}



void ___cxa_throw(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ec04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____cxa_throw_0002c4f0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * ___error(void)

{
  int *piVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001ec10. Too many branches
                    // WARNING: Treating indirect jump as call
  piVar1 = (int *)(*(code *)PTR____error_0002c4f8)();
  return piVar1;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ec1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_0002c500)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x0001ec28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_0002c508)();
  return;
}



void _localeconv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ec34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__localeconv_0002c510)();
  return;
}



void _log10(void)

{
                    // WARNING: Could not recover jumptable at 0x0001ec40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log10_0002c518)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001ec4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__memcmp_0002c520)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001ec58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_0002c528)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memmove(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001ec64. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memmove_0002c530)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001ec70. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_0002c538)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _snprintf(char *param_1,size_t param_2,char *param_3,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001ec7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__snprintf_0002c540)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001ec88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_0002c548)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001ec94. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_0002c550)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strncpy(char *param_1,char *param_2,size_t param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001eca0. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strncpy_0002c558)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _strtod(char *param_1,char **param_2)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001ecac. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__strtod_0002c560)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

longlong _strtoll(char *param_1,char **param_2,int param_3)

{
  longlong lVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001ecb8. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtoll_0002c568)(param_1,param_2,param_3);
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ulonglong _strtoull(char *param_1,char **param_2,int param_3)

{
  ulonglong uVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001ecc4. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__strtoull_0002c570)(param_1,param_2,param_3);
  return uVar1;
}



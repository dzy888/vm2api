// 005df7d0 parse_initialize_capabilities

/* craggemini_core[66f3c71560d70857]::acp_backend::parse_initialize_capabilities */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::parse_initialize_capabilities
          (undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  char cVar7;
  char cVar8;
  longlong unaff_R13;
  char *pcVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 uStack_34;
  
  local_68 = -1;
  lStack_50 = -1;
  lVar5 = (*(code *)PTR_index_into_00799300)(0,param_2);
  uVar10 = extraout_XMM0_Da;
  if ((lVar5 != 0) ||
     (lVar5 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,param_2),
     uVar10 = extraout_XMM0_Da_00, lVar5 != 0)) {
    pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(uVar10,lVar5);
    local_68 = -1;
    uVar10 = extraout_XMM0_Da_01;
    if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x03')) {
      local_68 = *(longlong *)(pcVar6 + 0x18);
      if (local_68 < 0) goto LAB_005df915;
      if (local_68 == 0) {
        unaff_R13 = 1;
        local_68 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        unaff_R13 = (*(code *)PTR___rust_alloc_00799000)();
        if (unaff_R13 == 0) goto LAB_005df915;
        uVar10 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,local_68);
      }
    }
    pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(uVar10,lVar5);
    lStack_50 = -1;
    uVar10 = extraout_XMM0_Da_03;
    if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x03')) {
      lStack_50 = *(longlong *)(pcVar6 + 0x18);
      if (lStack_50 < 0) {
LAB_005df915:
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (lStack_50 == 0) {
        lVar5 = 1;
        lStack_50 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar5 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar5 == 0) goto LAB_005df915;
        uVar10 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_08,lStack_50);
      }
    }
    lStack_60 = unaff_R13;
    local_58 = local_68;
    local_48 = lVar5;
    lStack_40 = lStack_50;
  }
  pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(uVar10,param_2);
  uVar10 = extraout_XMM0_Da_04;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_04,param_2);
    uVar10 = extraout_XMM0_Da_05;
  }
  pcVar9 = "";
  if (pcVar6 != (char *)0x0) {
    pcVar9 = pcVar6;
  }
  lVar5 = (*(code *)PTR_index_into_00799300)(uVar10,pcVar9);
  uVar10 = extraout_XMM0_Da_06;
  if ((lVar5 == 0) &&
     (lVar5 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_06,pcVar9),
     uVar10 = extraout_XMM0_Da_07, lVar5 == 0)) {
    bVar2 = true;
    lVar5 = 0;
LAB_005dfa25:
    cVar7 = '\0';
  }
  else {
    pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(uVar10,lVar5);
    if (pcVar6 == (char *)0x0) {
      bVar2 = false;
      goto LAB_005dfa25;
    }
    if (*pcVar6 == '\x05') {
      cVar7 = '\x01';
LAB_005df9dd:
      bVar2 = false;
    }
    else {
      cVar7 = '\0';
      bVar2 = false;
      if (*pcVar6 == '\x01') {
        cVar7 = pcVar6[1];
        goto LAB_005df9dd;
      }
    }
  }
  pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(cVar7,pcVar9);
  if (pcVar6 != (char *)0x0) {
    cVar8 = '\x01';
    if ((*pcVar6 == '\x05') || ((*pcVar6 == '\x01' && (pcVar6[1] != '\0')))) goto LAB_005dfac4;
  }
  pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_09,pcVar9);
  if (pcVar6 == (char *)0x0) {
LAB_005dfa8c:
    if (!bVar2) {
LAB_005dfa91:
      pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_10,lVar5);
      if (pcVar6 != (char *)0x0) {
        if (*pcVar6 == '\x05') goto LAB_005dfac2;
        if (*pcVar6 == '\x01') {
          cVar8 = pcVar6[1];
          goto LAB_005dfac4;
        }
      }
    }
    cVar8 = '\0';
  }
  else {
    if (*pcVar6 != '\x05') {
      if (*pcVar6 != '\x01') goto LAB_005dfa8c;
      cVar8 = pcVar6[1];
      if (bVar2 || cVar8 != '\0') goto LAB_005dfac4;
      goto LAB_005dfa91;
    }
LAB_005dfac2:
    cVar8 = '\x01';
  }
LAB_005dfac4:
  lVar5 = (*(code *)PTR_index_into_00799300)(cVar8,pcVar9);
  uVar10 = extraout_XMM0_Da_11;
  if ((((lVar5 == 0) ||
       (lVar5 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_11,lVar5),
       uVar10 = extraout_XMM0_Da_12, lVar5 == 0)) ||
      (lVar5 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_12,lVar5),
      uVar10 = extraout_XMM0_Da_13, lVar5 == 0)) ||
     ((pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_13,lVar5),
      uVar10 = extraout_XMM0_Da_14, pcVar6 == (char *)0x0 || (*pcVar6 != '\x01')))) {
    cVar3 = '\0';
  }
  else {
    cVar3 = pcVar6[1];
  }
  lVar5 = (*(code *)PTR_index_into_00799300)(uVar10,pcVar9);
  uVar10 = extraout_XMM0_Da_15;
  if (((lVar5 == 0) &&
      (lVar5 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_15,pcVar9),
      uVar10 = extraout_XMM0_Da_16, lVar5 == 0)) ||
     ((pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(uVar10,lVar5), pcVar6 == (char *)0x0 ||
      (*pcVar6 != '\x01')))) {
    cVar4 = '\0';
  }
  else {
    cVar4 = pcVar6[1];
  }
  param_1[10] = local_48;
  param_1[0xb] = lStack_40;
  param_1[8] = local_58;
  param_1[9] = lStack_50;
  param_1[6] = local_68;
  param_1[7] = lStack_60;
  param_1[4] = 8;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  param_1[0xc] = CONCAT44(uStack_34,CONCAT13(cVar4,CONCAT12(cVar3,CONCAT11(cVar8,cVar7))));
  return param_1;
}



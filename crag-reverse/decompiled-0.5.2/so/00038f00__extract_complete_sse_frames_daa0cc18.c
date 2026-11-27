// 00038f00 extract_complete_sse_frames

/* agy_bridge[64a9e9deac6c45ce]::extract_complete_sse_frames */

void __rustcall
agy_bridge[64a9e9deac6c45ce]::extract_complete_sse_frames
          (longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char *pcVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  char *local_78;
  longlong *local_70;
  ulonglong local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  
  local_a0 = 0;
  lStack_98 = 8;
  local_90 = 0;
  pcVar13 = *(char **)(param_2 + 8);
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  pcVar1 = pcVar13 + uVar3;
  uVar12 = 0;
  local_78 = pcVar13;
  local_70 = param_1;
  do {
    uVar7 = uVar12;
    do {
      while( true ) {
        do {
          uVar5 = uVar7;
          uVar11 = 0;
          pcVar6 = pcVar13;
          do {
            if (pcVar6 == pcVar1) goto LAB_000390a5;
            pcVar13 = pcVar6 + 1;
            uVar11 = uVar11 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar2 != '\n');
          uVar7 = uVar5 - uVar11;
        } while (uVar5 < uVar12 || uVar5 - uVar12 == 0);
        if ((uVar7 - 1 < uVar5) || (uVar3 < uVar7 - 1)) {
          (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s_adapter_lib_rs_000bfb18,uVar3);
          goto LAB_00039143;
        }
        param_4 = ~uVar11;
        if (param_4 == 1) break;
        if (param_4 == 0) goto LAB_00038fab;
      }
    } while (local_78[uVar5] != '\r');
LAB_00038fab:
    local_68 = uVar5 - uVar11;
    if (uVar3 <= local_68 - 1) {
      ppuVar10 = &PTR_s_adapter_lib_rs_000bfb00;
      goto LAB_00039116;
    }
    (*(code *)PTR_from_utf8_000c3bd8)(param_4,(uVar5 - uVar12) - uVar11);
    if (local_60 == 1) {
      local_48 = local_58;
      uStack_44 = uStack_54;
      uStack_40 = uStack_50;
      iStack_3c = iStack_4c;
      lVar9 = <core[c0acaeba6ab4c2e0]::io::error::Error>::new::
              <core[c0acaeba6ab4c2e0]::str::error::Utf8Error>(0x29,&local_48);
      local_70[1] = lVar9;
      *local_70 = -1;
      uVar14 = <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(&local_a0);
      if (local_a0 == 0) {
        return;
      }
      (*(code *)PTR___rust_dealloc_000c3aa0)(uVar14,8);
      return;
    }
    lVar9 = CONCAT44(iStack_4c,uStack_50);
    if (iStack_4c < 0) {
LAB_00039105:
      (*(code *)PTR_handle_error_000c3a98)();
      goto LAB_00039143;
    }
    if (lVar9 == 0) {
      local_88 = 1;
    }
    else {
      local_80 = CONCAT44(uStack_54,local_58);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      lVar8 = (*(code *)PTR___rust_alloc_000c3a90)();
      if (lVar8 == 0) goto LAB_00039105;
      local_88 = lVar8;
      (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Da,lVar9);
    }
    local_80 = local_90;
    if (local_90 == local_a0) {
      (*(code *)PTR_grow_one_000c3c48)();
    }
    param_4 = local_80 * 3;
    *(longlong *)(lStack_98 + local_80 * 0x18) = lVar9;
    *(longlong *)(lStack_98 + 8 + local_80 * 0x18) = local_88;
    *(longlong *)(lStack_98 + 0x10 + local_80 * 0x18) = lVar9;
    local_90 = local_80 + 1;
    uVar12 = local_68;
  } while (local_80 < 0x1f);
  uVar12 = uVar5 - uVar11;
LAB_000390a5:
  if (uVar3 < uVar12) {
    ppuVar10 = &anon_a5ba4df77f1b4a3fe3c10524a13d0962_9_llvm_10773032595843144328;
LAB_00039116:
    (*(code *)PTR_slice_index_fail_000c3bb0)(ppuVar10,uVar3);
LAB_00039143:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (uVar12 == 0) {
    if (uVar3 == 0) goto LAB_000390de;
  }
  else {
    if (uVar3 == uVar12) goto LAB_000390de;
    (*(code *)PTR_memmove_000c3c50)(param_4,uVar3 - uVar12);
  }
  *(ulonglong *)(param_2 + 0x10) = uVar3 - uVar12;
LAB_000390de:
  local_70[2] = local_90;
  *local_70 = local_a0;
  local_70[1] = lStack_98;
  return;
}



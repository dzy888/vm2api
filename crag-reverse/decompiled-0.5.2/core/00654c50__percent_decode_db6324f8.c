// 00654c50 percent_decode

/* craggemini_core[66f3c71560d70857]::binding::percent_decode */

void __rustcall
craggemini_core[66f3c71560d70857]::binding::percent_decode
          (undefined8 *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined *puVar9;
  char cVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 uVar16;
  char *local_50;
  int local_48;
  char *local_40;
  ulonglong local_38;
  
  uVar16 = param_3 == (char *)0x0;
  if (-1 < (longlong)param_3) goto LAB_00654c75;
  puVar3 = (undefined8 *)0x0;
  do {
    param_1 = puVar3;
    uVar16 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = param_3;
LAB_00654c75:
    if ((bool)uVar16) {
      pcVar6 = (char *)0x1;
      local_50 = (char *)0x0;
      param_3 = (char *)0x0;
      goto LAB_00654f6e;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    puVar3 = (undefined8 *)0x1;
  } while (pcVar6 == (char *)0x0);
  local_50 = (char *)0x0;
  pcVar14 = (char *)0x0;
  pcVar15 = local_50;
  do {
    while (local_50 = pcVar15, cVar10 = param_2[(longlong)pcVar14], cVar10 != '%') {
      if (local_50 == param_3) {
        (*(code *)PTR_grow_one_007993d0)();
      }
      pcVar6[(longlong)local_50] = cVar10;
      pcVar14 = pcVar14 + 1;
      pcVar15 = local_50 + 1;
      if (param_3 <= pcVar14) goto LAB_00654eb5;
    }
    if (param_3 <= pcVar14 + 2) {
      *param_1 = 0xffffffffffffffff;
      param_1[1] = &DAT_001a3872;
      uVar8 = 0x2f;
      puVar9 = &DAT_001a38cf;
      goto LAB_00654efd;
    }
    pcVar1 = pcVar14 + 3;
    if (((char *)0xfffffffffffffffc < pcVar14) || (param_3 < pcVar1)) {
      (*(code *)PTR_slice_index_fail_007993c8)
                (&PTR_anon_63b06cc94833867f683611f039574387_122_llvm_6903579140370050947_00790820,
                 param_3);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (*(code *)PTR_from_utf8_00799468)();
    if (local_48 == 1) {
LAB_00654ec4:
      *param_1 = 0xffffffffffffffff;
      *(undefined1 *)(param_1 + 1) = 0x72;
      *(undefined1 *)((longlong)param_1 + 0xf) = 0;
      *(undefined2 *)((longlong)param_1 + 0xd) = 0;
      *(undefined4 *)((longlong)param_1 + 9) = 0x1a38;
      uVar8 = 0x27;
      puVar9 = &DAT_001a38a8;
LAB_00654efd:
      param_1[2] = 0x11;
      param_1[3] = 0xffffffffffffffff;
      param_1[4] = puVar9;
      param_1[5] = uVar8;
      param_1[6] = 0;
      *(undefined4 *)(param_1 + 7) = 0x6020190;
      if (param_3 == (char *)0x0) {
        return;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(puVar9,1);
      return;
    }
    if (local_38 == 1) {
      cVar10 = *local_40;
      if ((cVar10 != '+') && (cVar10 != '-')) goto LAB_00654d95;
      goto LAB_00654ec4;
    }
    if (local_38 == 0) goto LAB_00654ec4;
    cVar10 = *local_40;
LAB_00654d95:
    uVar12 = (ulonglong)(cVar10 == '+');
    pbVar7 = (byte *)(local_40 + uVar12);
    if (local_38 - uVar12 < 3) {
      if (local_38 != uVar12) {
        bVar4 = *pbVar7;
        uVar13 = bVar4 - 0x30;
        if (0x39 < bVar4) {
          uVar13 = (bVar4 - 0x41 & 0xffffffdf) + 10;
        }
        if (uVar13 < 0x10) {
          if (local_38 - uVar12 == 1) goto LAB_00654e70;
          bVar4 = pbVar7[1];
          uVar5 = bVar4 - 0x30;
          if (0x39 < bVar4) {
            uVar5 = (bVar4 - 0x41 & 0xffffffdf) + 10;
          }
          if (uVar5 < 0x10) {
            bVar4 = (byte)uVar5 | (char)uVar13 << 4;
            goto joined_r0x00654e7a;
          }
        }
        goto LAB_00654ec4;
      }
      bVar4 = 0;
    }
    else {
      lVar11 = 0;
      uVar13 = 0;
      do {
        if (0xf < (byte)uVar13) goto LAB_00654ec4;
        bVar4 = pbVar7[lVar11];
        uVar5 = bVar4 - 0x30;
        if (0x39 < bVar4) {
          uVar5 = (bVar4 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar5) goto LAB_00654ec4;
        uVar13 = (uint)(byte)((byte)uVar5 | (byte)uVar13 << 4);
        lVar11 = lVar11 + 1;
      } while (lVar11 != local_38 - uVar12);
LAB_00654e70:
      bVar4 = (byte)uVar13;
    }
joined_r0x00654e7a:
    if (local_50 == param_3) {
      (*(code *)PTR_grow_one_007993d0)();
    }
    pcVar6[(longlong)local_50] = bVar4;
    pcVar14 = pcVar1;
    pcVar15 = local_50 + 1;
  } while (pcVar1 < param_3);
LAB_00654eb5:
  local_50 = local_50 + 1;
LAB_00654f6e:
  (*(code *)PTR_from_utf8_00799468)();
  pcVar14 = local_50;
  pcVar15 = pcVar6;
  if ((char)local_48 != '\0') {
    if (param_3 != (char *)0xffffffffffffffff) {
      if (param_3 != (char *)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *param_1 = 0xffffffffffffffff;
      param_1[1] = &DAT_001a3872;
      param_1[2] = 0x11;
      param_1[3] = 0xffffffffffffffff;
      param_1[4] = &DAT_001a3883;
      param_1[5] = 0x25;
      param_1[6] = 0;
      *(undefined4 *)(param_1 + 7) = 0x6020190;
      return;
    }
    pcVar14 = local_40;
    pcVar15 = local_50;
    param_3 = pcVar6;
  }
  param_1[1] = param_3;
  param_1[2] = pcVar15;
  param_1[3] = pcVar14;
  *param_1 = 0xfffffffffffffffe;
  return;
}



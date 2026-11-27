// 005326d0 evict_settled_if_needed

/* <craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::evict_settled_if_needed */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::evict_settled_if_needed
          (longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *pcVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 local_1d8 [208];
  longlong local_108 [27];
  
  uVar16 = *(ulonglong *)(param_1 + 0x28);
  uVar2 = *(ulonglong *)(param_1 + 0x30);
  if (uVar2 < uVar16) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar17 = uVar16 * 0xd8;
    do {
      puVar6 = PTR_memcpy_00799008;
      uVar17 = uVar17 - 0xd8;
      lVar10 = uVar16 * 0xd8 + lVar3;
      uVar8 = 0;
      uVar9 = uVar17;
      pcVar12 = (char *)(lVar3 + 0x285);
      lVar13 = lVar3;
      while( true ) {
        lVar1 = lVar13 + 0xd8;
        uVar11 = uVar8 + 1;
        if (*(char *)(lVar13 + 0xd5) != '\0') break;
        pcVar12 = pcVar12 + 0xd8;
        uVar9 = uVar9 - 0xd8;
        uVar8 = uVar11;
        lVar13 = lVar1;
        if (lVar1 == lVar10) {
          return;
        }
      }
      if (lVar1 != lVar10) {
        uVar15 = *(ulonglong *)(lVar13 + 200);
        if ((lVar10 - lVar1) - 0xd8U < 0xd8) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            uVar14 = uVar15;
            if (pcVar12[-0xd8] != '\0') {
              uVar4 = *(ulonglong *)(pcVar12 + -0xe5);
              if (uVar4 <= uVar15) {
                uVar14 = uVar4;
              }
              if (uVar4 < uVar15) {
                uVar8 = uVar11;
              }
            }
            uVar15 = uVar14;
            if (*pcVar12 != '\0') {
              uVar4 = *(ulonglong *)(pcVar12 + -0xd);
              if (uVar4 <= uVar14) {
                uVar15 = uVar4;
              }
              if (uVar4 < uVar14) {
                uVar8 = uVar11 + 1;
              }
            }
            uVar11 = uVar11 + 2;
            uVar7 = uVar7 + 2;
            pcVar12 = pcVar12 + 0x1b0;
          } while ((uVar9 / 0xd8 & 0xfffffffffffffffe) != uVar7);
          if (((ulonglong)(lVar10 - lVar1) / 0xd8 & 1) == 0) goto LAB_00532859;
        }
        if ((*(char *)(lVar13 + 0x1ad + uVar7 * 0xd8) != '\0') &&
           (*(ulonglong *)(lVar1 + uVar7 * 0xd8 + 200) < uVar15)) {
          uVar8 = uVar11;
        }
      }
LAB_00532859:
      if (uVar16 <= uVar8) {
LAB_00532949:
        (*(code *)PTR_assert_failed_00799718)();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar13 = *(longlong *)(lVar3 + uVar8 * 0xd8);
      (*(code *)PTR_memcpy_00799008)(PTR_memcpy_00799008,0xd0);
      (*(code *)PTR_memmove_00799258)();
      uVar16 = uVar16 - 1;
      *(ulonglong *)(param_1 + 0x28) = uVar16;
      if (lVar13 == -1) goto LAB_00532949;
      local_108[0] = lVar13;
      (*(code *)puVar6)();
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>(local_108,local_1d8);
    } while (uVar2 < uVar16);
  }
  return;
}



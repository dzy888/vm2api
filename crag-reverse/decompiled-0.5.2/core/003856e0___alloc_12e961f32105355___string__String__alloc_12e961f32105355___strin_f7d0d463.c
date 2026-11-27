// 003856e0 <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::<alloc[12e961f32105355]::string::String,
   <alloc[12e961f32105355]::string::String as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (undefined4 param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_40;
  
  if (param_3 <= param_4 - 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (param_4 != param_3) {
    local_40 = param_4 * 0x18;
    puVar15 = param_2 + param_4 * 3;
    do {
      uVar2 = puVar15[1];
      uVar3 = puVar15[2];
      uVar4 = puVar15[-1];
      uVar13 = uVar4;
      if (uVar3 < uVar4) {
        uVar13 = uVar3;
      }
      iVar10 = (*(code *)PTR_memcmp_00799528)(param_1,uVar13);
      lVar14 = uVar3 - uVar4;
      if (iVar10 != 0) {
        lVar14 = (longlong)iVar10;
      }
      param_1 = extraout_XMM0_Da;
      if (lVar14 < 0) {
        uVar5 = *puVar15;
        lVar14 = local_40;
        do {
          lVar12 = lVar14;
          *(undefined8 *)((longlong)param_2 + lVar12 + 0x10) =
               *(undefined8 *)((longlong)param_2 + lVar12 + -8);
          puVar1 = (undefined4 *)((longlong)param_2 + lVar12 + -0x18);
          param_1 = *puVar1;
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          puVar1 = (undefined4 *)((longlong)param_2 + lVar12);
          *puVar1 = param_1;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          if (lVar12 == 0x18) {
            puVar11 = param_2;
            goto LAB_00385729;
          }
          uVar4 = *(ulonglong *)((longlong)param_2 + lVar12 + -0x20);
          uVar13 = uVar4;
          if (uVar3 < uVar4) {
            uVar13 = uVar3;
          }
          iVar10 = (*(code *)PTR_memcmp_00799528)(param_1,uVar13);
          lVar16 = uVar3 - uVar4;
          if (iVar10 != 0) {
            lVar16 = (longlong)iVar10;
          }
          lVar14 = lVar12 + -0x18;
        } while (lVar16 < 0);
        puVar11 = (undefined8 *)(lVar12 + -0x18 + (longlong)param_2);
        param_1 = extraout_XMM0_Da_00;
LAB_00385729:
        *puVar11 = uVar5;
        *(undefined8 *)((longlong)param_2 + lVar12 + -0x10) = uVar2;
        *(ulonglong *)((longlong)param_2 + lVar12 + -8) = uVar3;
      }
      puVar15 = puVar15 + 3;
      local_40 = local_40 + 0x18;
    } while (puVar15 != param_2 + param_3 * 3);
  }
  return;
}



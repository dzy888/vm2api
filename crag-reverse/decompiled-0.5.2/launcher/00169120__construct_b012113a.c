// 00169120 construct

/* WARNING: Switch with 1 destination removed at 0x00169226 */
/* <craggemini[b21da2d71f2da7a3]::license::LicenseGate>::construct */

void __rustcall
<craggemini[b21da2d71f2da7a3]::license::LicenseGate>::construct
          (undefined4 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
          longlong *param_5,longlong *param_6,longlong *param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  
  lVar1 = param_3[1];
  uVar2 = param_3[2];
  if (uVar2 - 1 < 0x100) {
    if (uVar2 < 0x10) {
      uVar17 = 0;
      do {
        if (*(char *)(lVar1 + uVar17) == '\0') goto LAB_001691ab;
        uVar17 = uVar17 + 1;
      } while (uVar2 != uVar17);
    }
    else {
      lVar18 = (*(code *)PTR_memchr_aligned_00219d40)(param_5,uVar2);
      param_1 = extraout_XMM0_Da;
      if (lVar18 == 1) goto LAB_001691ab;
    }
    param_1 = <str>::trim_matches::<<char>::is_whitespace>(lVar1,uVar2);
    if ((extraout_RDX == uVar2) &&
       (iVar16 = (*(code *)PTR_bcmp_00219d38)(param_1,uVar2), param_1 = extraout_XMM0_Da_00,
       iVar16 == 0)) {
      lVar1 = param_3[2];
      lVar5 = *param_3;
      lVar6 = param_3[1];
      lVar18 = param_4[2];
      lVar7 = *param_4;
      lVar8 = param_4[1];
      lVar3 = param_5[2];
      lVar9 = *param_5;
      lVar10 = param_5[1];
      lVar11 = *param_6;
      lVar12 = param_6[1];
      lVar4 = param_6[2];
      lVar13 = param_7[1];
      lVar14 = param_7[2];
      lVar15 = param_7[3];
      param_2[0x47] = *param_7;
      param_2[0x48] = lVar13;
      param_2[0x49] = lVar14;
      param_2[0x4a] = lVar15;
      *(char *)(param_2 + 0x4b) = (char)param_7[4];
      *param_2 = lVar5;
      param_2[1] = lVar6;
      param_2[2] = lVar1;
      param_2[3] = lVar7;
      param_2[4] = lVar8;
      param_2[5] = lVar18;
      param_2[6] = lVar9;
      param_2[7] = lVar10;
      param_2[8] = lVar3;
      param_2[9] = lVar11;
      param_2[10] = lVar12;
      param_2[0xb] = lVar4;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined1 *)((longlong)param_2 + 100) = 0;
      param_2[0xd] = 2;
      return;
    }
  }
LAB_001691ab:
  *(undefined1 *)(param_2 + 1) = 3;
  *param_2 = -1;
  if (*param_6 != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00219c40)(param_1,1);
  }
  if (*param_5 != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00219c40)(param_1,1);
  }
  if (*param_4 != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00219c40)(param_1,1);
  }
  if (*param_3 == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_1,1);
  return;
}



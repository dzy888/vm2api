// 003f0bc0 <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value), <[(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
          (longlong *param_1,ulonglong param_2,longlong *param_3,ulonglong param_4,int param_5,
          longlong *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined *puVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  code *pcVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar21;
  int local_9c;
  longlong *local_68;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_2 < 0x21) {
LAB_003f0bed:
    plVar13 = param_1;
LAB_003f0bf0:
    shared::smallsort::small_sort_general_with_scratch::
    <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
              (plVar13,param_2,param_3,param_4,param_7);
    return;
  }
  local_9c = param_5;
  local_68 = param_6;
LAB_003f0c1e:
  uVar18 = param_2;
  do {
    puVar4 = PTR_memcmp_00799528;
    if (local_9c == 0) {
      drift::sort::
      <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                (param_1,uVar18,param_3,param_4,1,param_7);
      return;
    }
    uVar10 = uVar18 >> 3;
    plVar13 = param_1 + uVar10 * 8;
    plVar12 = param_1 + uVar10 * 0xe;
    if (uVar18 < 0x40) {
      uVar10 = *(ulonglong *)(*param_1 + 0x10);
      uVar16 = *(ulonglong *)(*plVar13 + 0x10);
      uVar9 = uVar16;
      if (uVar10 < uVar16) {
        uVar9 = uVar10;
      }
      iVar5 = (*(code *)PTR_memcmp_00799528)(*plVar13,uVar9);
      uVar9 = uVar10 - uVar16;
      if (iVar5 != 0) {
        uVar9 = (longlong)iVar5;
      }
      uVar7 = *(ulonglong *)(*plVar12 + 0x10);
      uVar14 = uVar10;
      if (uVar7 <= uVar10) {
        uVar14 = uVar7;
      }
      iVar5 = (*(code *)puVar4)(extraout_XMM0_Da,uVar14);
      uVar10 = uVar10 - uVar7;
      if (iVar5 != 0) {
        uVar10 = (longlong)iVar5;
      }
      plVar6 = param_1;
      if (-1 < (longlong)(uVar10 ^ uVar9)) {
        uVar10 = uVar7;
        if (uVar16 < uVar7) {
          uVar10 = uVar16;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_00,uVar10);
        uVar10 = uVar16 - uVar7;
        if (iVar5 != 0) {
          uVar10 = (longlong)iVar5;
        }
        plVar6 = plVar13;
        if ((longlong)(uVar10 ^ uVar9) < 0) {
          plVar6 = plVar12;
        }
      }
    }
    else {
      plVar6 = (longlong *)
               shared::pivot::median3_rec::
               <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                         (param_1,plVar13,plVar12,uVar10,param_7);
    }
    local_9c = local_9c + -1;
    uVar10 = (longlong)plVar6 - (longlong)param_1;
    local_48 = (undefined4)*plVar6;
    uStack_44 = *(undefined4 *)((longlong)plVar6 + 4);
    uStack_40 = (undefined4)plVar6[1];
    uStack_3c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if (local_68 != (longlong *)0x0) {
      uVar16 = *(ulonglong *)(*local_68 + 0x10);
      uVar9 = *(ulonglong *)(*plVar6 + 0x10);
      uVar7 = uVar9;
      if (uVar16 < uVar9) {
        uVar7 = uVar16;
      }
      iVar5 = (*(code *)PTR_memcmp_00799528)(uVar16,uVar7);
      lVar19 = uVar16 - uVar9;
      if (iVar5 != 0) {
        lVar19 = (longlong)iVar5;
      }
      if (-1 < lVar19) break;
    }
    if (param_4 < uVar18) goto LAB_003f15b6;
    plVar12 = param_3 + uVar18 * 2;
    param_2 = 0;
    uVar16 = uVar10 >> 4;
    plVar13 = param_1;
    plVar6 = plVar12;
    while( true ) {
      puVar4 = PTR_memcmp_00799528;
      lVar19 = 0;
      if (2 < uVar16) {
        lVar19 = uVar16 - 3;
      }
      plVar11 = param_1 + lVar19 * 2;
      for (; plVar13 < plVar11; plVar13 = plVar13 + 8) {
        uVar9 = *(ulonglong *)(*plVar13 + 0x10);
        uVar7 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar10) + 0x10);
        uVar14 = uVar7;
        if (uVar9 < uVar7) {
          uVar14 = uVar9;
        }
        iVar5 = (*(code *)puVar4)(*(longlong *)((longlong)param_1 + uVar10),uVar14);
        lVar19 = uVar9 - uVar7;
        if (iVar5 != 0) {
          lVar19 = (longlong)iVar5;
        }
        plVar8 = plVar6 + -2;
        if (lVar19 < 0) {
          plVar8 = param_3;
        }
        uVar21 = *(undefined4 *)((longlong)plVar13 + 4);
        lVar20 = plVar13[1];
        uVar1 = *(undefined4 *)((longlong)plVar13 + 0xc);
        plVar8 = plVar8 + param_2 * 2;
        *(int *)plVar8 = (int)*plVar13;
        *(undefined4 *)((longlong)plVar8 + 4) = uVar21;
        *(int *)(plVar8 + 1) = (int)lVar20;
        *(undefined4 *)((longlong)plVar8 + 0xc) = uVar1;
        lVar19 = param_2 - (lVar19 >> 0x3f);
        uVar9 = *(ulonglong *)(plVar13[2] + 0x10);
        uVar7 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar10) + 0x10);
        uVar14 = uVar7;
        if (uVar9 < uVar7) {
          uVar14 = uVar9;
        }
        iVar5 = (*(code *)puVar4)(*(longlong *)((longlong)param_1 + uVar10),uVar14);
        lVar20 = uVar9 - uVar7;
        if (iVar5 != 0) {
          lVar20 = (longlong)iVar5;
        }
        plVar8 = plVar6 + -4;
        if (lVar20 < 0) {
          plVar8 = param_3;
        }
        uVar21 = *(undefined4 *)((longlong)plVar13 + 0x14);
        lVar3 = plVar13[3];
        uVar1 = *(undefined4 *)((longlong)plVar13 + 0x1c);
        plVar8 = plVar8 + lVar19 * 2;
        *(int *)plVar8 = (int)plVar13[2];
        *(undefined4 *)((longlong)plVar8 + 4) = uVar21;
        *(int *)(plVar8 + 1) = (int)lVar3;
        *(undefined4 *)((longlong)plVar8 + 0xc) = uVar1;
        lVar19 = lVar19 - (lVar20 >> 0x3f);
        uVar9 = *(ulonglong *)(plVar13[4] + 0x10);
        uVar7 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar10) + 0x10);
        uVar14 = uVar7;
        if (uVar9 < uVar7) {
          uVar14 = uVar9;
        }
        iVar5 = (*(code *)puVar4)(*(longlong *)((longlong)param_1 + uVar10),uVar14);
        lVar20 = uVar9 - uVar7;
        if (iVar5 != 0) {
          lVar20 = (longlong)iVar5;
        }
        plVar8 = plVar6 + -6;
        if (lVar20 < 0) {
          plVar8 = param_3;
        }
        uVar21 = *(undefined4 *)((longlong)plVar13 + 0x24);
        lVar3 = plVar13[5];
        uVar1 = *(undefined4 *)((longlong)plVar13 + 0x2c);
        plVar8 = plVar8 + lVar19 * 2;
        *(int *)plVar8 = (int)plVar13[4];
        *(undefined4 *)((longlong)plVar8 + 4) = uVar21;
        *(int *)(plVar8 + 1) = (int)lVar3;
        *(undefined4 *)((longlong)plVar8 + 0xc) = uVar1;
        lVar19 = lVar19 - (lVar20 >> 0x3f);
        uVar9 = *(ulonglong *)(plVar13[6] + 0x10);
        uVar7 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar10) + 0x10);
        uVar14 = uVar7;
        if (uVar9 < uVar7) {
          uVar14 = uVar9;
        }
        iVar5 = (*(code *)puVar4)(*(longlong *)((longlong)param_1 + uVar10),uVar14);
        lVar20 = uVar9 - uVar7;
        if (iVar5 != 0) {
          lVar20 = (longlong)iVar5;
        }
        plVar6 = plVar6 + -8;
        plVar8 = plVar6;
        if (lVar20 < 0) {
          plVar8 = param_3;
        }
        uVar21 = *(undefined4 *)((longlong)plVar13 + 0x34);
        lVar3 = plVar13[7];
        uVar1 = *(undefined4 *)((longlong)plVar13 + 0x3c);
        plVar8 = plVar8 + lVar19 * 2;
        *(int *)plVar8 = (int)plVar13[6];
        *(undefined4 *)((longlong)plVar8 + 4) = uVar21;
        *(int *)(plVar8 + 1) = (int)lVar3;
        *(undefined4 *)((longlong)plVar8 + 0xc) = uVar1;
        param_2 = lVar19 - (lVar20 >> 0x3f);
      }
      for (; plVar13 < param_1 + uVar16 * 2; plVar13 = plVar13 + 2) {
        uVar9 = *(ulonglong *)(*plVar13 + 0x10);
        uVar7 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar10) + 0x10);
        uVar14 = uVar7;
        if (uVar9 < uVar7) {
          uVar14 = uVar9;
        }
        iVar5 = (*(code *)puVar4)(*(longlong *)((longlong)param_1 + uVar10),uVar14);
        lVar19 = uVar9 - uVar7;
        if (iVar5 != 0) {
          lVar19 = (longlong)iVar5;
        }
        plVar6 = plVar6 + -2;
        plVar8 = plVar6;
        if (lVar19 < 0) {
          plVar8 = param_3;
        }
        plVar11 = (longlong *)(param_2 * 0x10);
        uVar21 = *(undefined4 *)((longlong)plVar13 + 4);
        lVar20 = plVar13[1];
        uVar1 = *(undefined4 *)((longlong)plVar13 + 0xc);
        plVar8 = plVar8 + param_2 * 2;
        *(int *)plVar8 = (int)*plVar13;
        *(undefined4 *)((longlong)plVar8 + 4) = uVar21;
        *(int *)(plVar8 + 1) = (int)lVar20;
        *(undefined4 *)((longlong)plVar8 + 0xc) = uVar1;
        param_2 = param_2 - (lVar19 >> 0x3f);
      }
      if (uVar16 == uVar18) break;
      uVar21 = *(undefined4 *)((longlong)plVar13 + 4);
      lVar19 = plVar13[1];
      uVar1 = *(undefined4 *)((longlong)plVar13 + 0xc);
      plVar11 = plVar6 + param_2 * 2 + -2;
      *(int *)plVar11 = (int)*plVar13;
      *(undefined4 *)((longlong)plVar11 + 4) = uVar21;
      *(int *)(plVar11 + 1) = (int)lVar19;
      *(undefined4 *)((longlong)plVar11 + 0xc) = uVar1;
      plVar6 = plVar6 + -2;
      plVar13 = plVar13 + 2;
      uVar16 = uVar18;
    }
    uVar21 = (*(code *)PTR_memcpy_00799008)(plVar11,param_2 * 0x10);
    uVar16 = uVar18 - param_2;
    if (uVar16 != 0) {
      if (uVar18 == param_2 + 1) {
        uVar7 = 0;
      }
      else {
        plVar13 = param_1 + param_2 * 2 + 2;
        plVar6 = param_3 + uVar18 * 2 + -2;
        uVar9 = 0;
        do {
          lVar19 = plVar6[1];
          plVar13[-2] = *plVar6;
          plVar13[-1] = lVar19;
          uVar7 = uVar9 + 2;
          plVar11 = plVar12 + (uVar9 ^ 0xffffffffffffffe) * 2;
          uVar21 = (undefined4)*plVar11;
          uVar1 = *(undefined4 *)((longlong)plVar11 + 4);
          lVar19 = plVar11[1];
          uVar2 = *(undefined4 *)((longlong)plVar11 + 0xc);
          *(undefined4 *)plVar13 = uVar21;
          *(undefined4 *)((longlong)plVar13 + 4) = uVar1;
          *(int *)(plVar13 + 1) = (int)lVar19;
          *(undefined4 *)((longlong)plVar13 + 0xc) = uVar2;
          plVar13 = plVar13 + 4;
          plVar6 = plVar6 + -4;
          uVar9 = uVar7;
        } while ((uVar16 & 0xfffffffffffffffe) != uVar7);
        if ((uVar16 & 1) == 0) goto LAB_003f114c;
      }
      plVar12 = plVar12 + ~uVar7 * 2;
      uVar21 = (undefined4)*plVar12;
      uVar1 = *(undefined4 *)((longlong)plVar12 + 4);
      lVar19 = plVar12[1];
      uVar2 = *(undefined4 *)((longlong)plVar12 + 0xc);
      plVar12 = param_1 + param_2 * 2 + uVar7 * 2;
      *(undefined4 *)plVar12 = uVar21;
      *(undefined4 *)((longlong)plVar12 + 4) = uVar1;
      *(int *)(plVar12 + 1) = (int)lVar19;
      *(undefined4 *)((longlong)plVar12 + 0xc) = uVar2;
    }
LAB_003f114c:
    if (param_2 == 0) break;
    if (uVar18 < param_2) {
      (*(code *)PTR_panic_fmt_007991a8)(uVar21,&PTR_s__rustc_48a229ceaefd4985c50990b14_00788008);
      goto LAB_003f15d1;
    }
    <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
              (param_1 + param_2 * 2,uVar16,param_3,param_4,local_9c,&local_48,param_7);
    uVar18 = param_2;
    if (param_2 < 0x21) goto LAB_003f0bed;
  } while( true );
  if (param_4 < uVar18) {
LAB_003f15b6:
                    /* WARNING: Does not return */
    pcVar17 = (code *)invalidInstructionException();
    (*pcVar17)();
  }
  plVar12 = param_3 + uVar18 * 2;
  uVar16 = 0;
  uVar9 = uVar10 >> 4;
  plVar13 = plVar12;
  plVar6 = param_1;
  while( true ) {
    lVar19 = 0;
    if (2 < uVar9) {
      lVar19 = uVar9 - 3;
    }
    plVar11 = param_1 + lVar19 * 2;
    if (plVar6 < plVar11) {
      do {
        uVar7 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar10) + 0x10);
        uVar14 = *(ulonglong *)(*plVar6 + 0x10);
        uVar15 = uVar14;
        if (uVar7 < uVar14) {
          uVar15 = uVar7;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(uVar7,uVar15);
        lVar19 = uVar7 - uVar14;
        if (iVar5 != 0) {
          lVar19 = (longlong)iVar5;
        }
        plVar8 = plVar13 + -2;
        if (-1 < lVar19) {
          plVar8 = param_3;
        }
        uVar21 = *(undefined4 *)((longlong)plVar6 + 4);
        lVar20 = plVar6[1];
        uVar1 = *(undefined4 *)((longlong)plVar6 + 0xc);
        plVar8 = plVar8 + uVar16 * 2;
        *(int *)plVar8 = (int)*plVar6;
        *(undefined4 *)((longlong)plVar8 + 4) = uVar21;
        *(int *)(plVar8 + 1) = (int)lVar20;
        *(undefined4 *)((longlong)plVar8 + 0xc) = uVar1;
        lVar19 = (-1 < lVar19) + uVar16;
        uVar16 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar10) + 0x10);
        uVar7 = *(ulonglong *)(plVar6[2] + 0x10);
        uVar14 = uVar7;
        if (uVar16 < uVar7) {
          uVar14 = uVar16;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(uVar16,uVar14);
        lVar20 = uVar16 - uVar7;
        if (iVar5 != 0) {
          lVar20 = (longlong)iVar5;
        }
        plVar8 = plVar13 + -4;
        if (-1 < lVar20) {
          plVar8 = param_3;
        }
        uVar21 = *(undefined4 *)((longlong)plVar6 + 0x14);
        lVar3 = plVar6[3];
        uVar1 = *(undefined4 *)((longlong)plVar6 + 0x1c);
        plVar8 = plVar8 + lVar19 * 2;
        *(int *)plVar8 = (int)plVar6[2];
        *(undefined4 *)((longlong)plVar8 + 4) = uVar21;
        *(int *)(plVar8 + 1) = (int)lVar3;
        *(undefined4 *)((longlong)plVar8 + 0xc) = uVar1;
        lVar19 = (ulonglong)(-1 < lVar20) + lVar19;
        uVar16 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar10) + 0x10);
        uVar7 = *(ulonglong *)(plVar6[4] + 0x10);
        uVar14 = uVar7;
        if (uVar16 < uVar7) {
          uVar14 = uVar16;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(uVar16,uVar14);
        lVar20 = uVar16 - uVar7;
        if (iVar5 != 0) {
          lVar20 = (longlong)iVar5;
        }
        plVar8 = plVar13 + -6;
        if (-1 < lVar20) {
          plVar8 = param_3;
        }
        uVar21 = *(undefined4 *)((longlong)plVar6 + 0x24);
        lVar3 = plVar6[5];
        uVar1 = *(undefined4 *)((longlong)plVar6 + 0x2c);
        plVar8 = plVar8 + lVar19 * 2;
        *(int *)plVar8 = (int)plVar6[4];
        *(undefined4 *)((longlong)plVar8 + 4) = uVar21;
        *(int *)(plVar8 + 1) = (int)lVar3;
        *(undefined4 *)((longlong)plVar8 + 0xc) = uVar1;
        lVar19 = (ulonglong)(-1 < lVar20) + lVar19;
        uVar16 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar10) + 0x10);
        uVar7 = *(ulonglong *)(plVar6[6] + 0x10);
        uVar14 = uVar7;
        if (uVar16 < uVar7) {
          uVar14 = uVar16;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(uVar16,uVar14);
        pcVar17 = (code *)PTR_memcmp_00799528;
        lVar20 = uVar16 - uVar7;
        if (iVar5 != 0) {
          lVar20 = (longlong)iVar5;
        }
        plVar13 = plVar13 + -8;
        plVar8 = plVar13;
        if (-1 < lVar20) {
          plVar8 = param_3;
        }
        uVar21 = *(undefined4 *)((longlong)plVar6 + 0x34);
        lVar3 = plVar6[7];
        uVar1 = *(undefined4 *)((longlong)plVar6 + 0x3c);
        plVar8 = plVar8 + lVar19 * 2;
        *(int *)plVar8 = (int)plVar6[6];
        *(undefined4 *)((longlong)plVar8 + 4) = uVar21;
        *(int *)(plVar8 + 1) = (int)lVar3;
        *(undefined4 *)((longlong)plVar8 + 0xc) = uVar1;
        uVar16 = (ulonglong)(-1 < lVar20) + lVar19;
        plVar6 = plVar6 + 8;
      } while (plVar6 < plVar11);
    }
    else {
      pcVar17 = (code *)PTR_memcmp_00799528;
    }
    for (; plVar6 < param_1 + uVar9 * 2; plVar6 = plVar6 + 2) {
      uVar7 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar10) + 0x10);
      uVar14 = *(ulonglong *)(*plVar6 + 0x10);
      uVar15 = uVar14;
      if (uVar7 < uVar14) {
        uVar15 = uVar7;
      }
      iVar5 = (*pcVar17)(uVar7,uVar15);
      lVar19 = uVar7 - uVar14;
      if (iVar5 != 0) {
        lVar19 = (longlong)iVar5;
      }
      plVar13 = plVar13 + -2;
      plVar11 = plVar13;
      if (-1 < lVar19) {
        plVar11 = param_3;
      }
      uVar21 = *(undefined4 *)((longlong)plVar6 + 4);
      lVar20 = plVar6[1];
      uVar1 = *(undefined4 *)((longlong)plVar6 + 0xc);
      plVar8 = plVar11 + uVar16 * 2;
      *(int *)plVar8 = (int)*plVar6;
      *(undefined4 *)((longlong)plVar8 + 4) = uVar21;
      *(int *)(plVar8 + 1) = (int)lVar20;
      *(undefined4 *)((longlong)plVar8 + 0xc) = uVar1;
      uVar16 = uVar16 + (-1 < lVar19);
    }
    if (uVar9 == uVar18) break;
    plVar13 = plVar13 + -2;
    uVar21 = *(undefined4 *)((longlong)plVar6 + 4);
    lVar19 = plVar6[1];
    uVar1 = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar11 = param_3 + uVar16 * 2;
    *(int *)plVar11 = (int)*plVar6;
    *(undefined4 *)((longlong)plVar11 + 4) = uVar21;
    *(int *)(plVar11 + 1) = (int)lVar19;
    *(undefined4 *)((longlong)plVar11 + 0xc) = uVar1;
    uVar16 = uVar16 + 1;
    plVar6 = plVar6 + 2;
    uVar9 = uVar18;
  }
  (*(code *)PTR_memcpy_00799008)(plVar11,uVar16 * 0x10);
  param_2 = uVar18 - uVar16;
  if (param_2 == 0) {
    plVar13 = param_1 + uVar18 * 2;
    param_2 = 0;
    goto LAB_003f0bf0;
  }
  plVar13 = param_1 + uVar16 * 2;
  if (uVar18 == uVar16 + 1) {
    uVar9 = 0;
  }
  else {
    param_1 = param_1 + uVar16 * 2 + 2;
    plVar6 = param_3 + uVar18 * 2 + -2;
    uVar10 = 0;
    do {
      lVar19 = plVar6[1];
      param_1[-2] = *plVar6;
      param_1[-1] = lVar19;
      uVar9 = uVar10 + 2;
      plVar11 = plVar12 + (uVar10 ^ 0xffffffffffffffe) * 2;
      uVar21 = *(undefined4 *)((longlong)plVar11 + 4);
      lVar19 = plVar11[1];
      uVar1 = *(undefined4 *)((longlong)plVar11 + 0xc);
      *(int *)param_1 = (int)*plVar11;
      *(undefined4 *)((longlong)param_1 + 4) = uVar21;
      *(int *)(param_1 + 1) = (int)lVar19;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
      param_1 = param_1 + 4;
      plVar6 = plVar6 + -4;
      uVar10 = uVar9;
    } while ((param_2 & 0xfffffffffffffffe) != uVar9);
    if ((param_2 & 1) == 0) goto LAB_003f1548;
  }
  plVar12 = plVar12 + ~uVar9 * 2;
  uVar21 = *(undefined4 *)((longlong)plVar12 + 4);
  lVar19 = plVar12[1];
  uVar1 = *(undefined4 *)((longlong)plVar12 + 0xc);
  plVar6 = plVar13 + uVar9 * 2;
  *(int *)plVar6 = (int)*plVar12;
  *(undefined4 *)((longlong)plVar6 + 4) = uVar21;
  *(int *)(plVar6 + 1) = (int)lVar19;
  *(undefined4 *)((longlong)plVar6 + 0xc) = uVar1;
LAB_003f1548:
  if (uVar18 < uVar16) {
LAB_003f15d1:
    (*(code *)PTR_slice_index_fail_007993c8)
              (&PTR_s__rustc_48a229ceaefd4985c50990b14_00788020,uVar18);
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  local_68 = (longlong *)0x0;
  param_1 = plVar13;
  if (param_2 < 0x21) goto LAB_003f0bf0;
  goto LAB_003f0c1e;
}



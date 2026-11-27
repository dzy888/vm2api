// 003ebbe0 <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   <[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
          (longlong *param_1,ulonglong param_2,longlong *param_3,ulonglong param_4,int param_5,
          longlong *param_6,undefined8 param_7)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  longlong *local_b0;
  longlong *local_60;
  longlong local_38;
  
  if (param_2 < 0x21) {
LAB_003ebc0a:
    shared::smallsort::small_sort_general_with_scratch::
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
              (param_1,param_2,param_3,param_4,param_7);
    return;
  }
  local_60 = param_6;
LAB_003ebc46:
  uVar20 = param_2;
  do {
    puVar4 = PTR_memcmp_00799528;
    if (param_5 == 0) {
      drift::sort::
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                (param_1,uVar20,param_3,param_4,1,param_7);
      return;
    }
    plVar8 = param_1 + (uVar20 >> 3) * 4;
    if (uVar20 < 0x40) {
      uVar9 = *(ulonglong *)(*param_1 + 0xf8);
      uVar16 = *(ulonglong *)(*plVar8 + 0xf8);
      uVar21 = uVar16;
      if (uVar9 < uVar16) {
        uVar21 = uVar9;
      }
      iVar5 = (*(code *)PTR_memcmp_00799528)(*plVar8,uVar21);
      uVar21 = uVar9 - uVar16;
      if (iVar5 != 0) {
        uVar21 = (longlong)iVar5;
      }
      uVar10 = *(ulonglong *)(param_1[(uVar20 >> 3) * 7] + 0xf8);
      uVar11 = uVar9;
      if (uVar10 <= uVar9) {
        uVar11 = uVar10;
      }
      iVar5 = (*(code *)puVar4)(extraout_XMM0_Qa,uVar11);
      uVar9 = uVar9 - uVar10;
      if (iVar5 != 0) {
        uVar9 = (longlong)iVar5;
      }
      plVar6 = param_1;
      uVar22 = extraout_XMM0_Qa_00;
      if (-1 < (longlong)(uVar9 ^ uVar21)) {
        uVar9 = uVar10;
        if (uVar16 < uVar10) {
          uVar9 = uVar16;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Qa_00,uVar9);
        uVar9 = uVar16 - uVar10;
        if (iVar5 != 0) {
          uVar9 = (longlong)iVar5;
        }
        plVar6 = plVar8;
        if ((longlong)(uVar9 ^ uVar21) < 0) {
          plVar6 = param_1 + (uVar20 >> 3) * 7;
        }
        uVar22 = extraout_XMM0_Qa_01;
      }
    }
    else {
      plVar6 = (longlong *)
               shared::pivot::median3_rec::
               <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                         (param_1,plVar8);
      uVar22 = extraout_XMM0_Qa_02;
    }
    param_5 = param_5 + -1;
    uVar9 = (longlong)plVar6 - (longlong)param_1;
    local_38 = *plVar6;
    if (local_60 != (longlong *)0x0) {
      uVar16 = *(ulonglong *)(*local_60 + 0xf8);
      uVar21 = *(ulonglong *)(local_38 + 0xf8);
      uVar10 = uVar21;
      if (uVar16 < uVar21) {
        uVar10 = uVar16;
      }
      iVar5 = (*(code *)PTR_memcmp_00799528)(uVar16,uVar10);
      lVar17 = uVar16 - uVar21;
      if (iVar5 != 0) {
        lVar17 = (longlong)iVar5;
      }
      uVar22 = extraout_XMM0_Qa_03;
      if (-1 < lVar17) break;
    }
    if (param_4 < uVar20) goto LAB_003ec5d8;
    local_b0 = param_3 + uVar20;
    param_2 = 0;
    uVar16 = uVar9 >> 3;
    plVar8 = param_1;
    while( true ) {
      lVar17 = 0;
      if (2 < uVar16) {
        lVar17 = uVar16 - 3;
      }
      if (plVar8 < param_1 + lVar17) {
        uVar21 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar9) + 0xf8);
        do {
          lVar18 = *plVar8;
          uVar10 = *(ulonglong *)(lVar18 + 0xf8);
          uVar11 = uVar10;
          if (uVar21 <= uVar10) {
            uVar11 = uVar21;
          }
          iVar5 = (*(code *)PTR_memcmp_00799528)(uVar22,uVar11);
          lVar19 = uVar10 - uVar21;
          if (iVar5 != 0) {
            lVar19 = (longlong)iVar5;
          }
          plVar6 = param_3;
          if (-1 < lVar19) {
            plVar6 = local_b0 + -1;
          }
          plVar6[param_2] = lVar18;
          lVar18 = plVar8[1];
          uVar10 = *(ulonglong *)(lVar18 + 0xf8);
          lVar15 = uVar10 - uVar21;
          if (uVar21 <= uVar10) {
            uVar10 = uVar21;
          }
          iVar5 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Qa_04,uVar10);
          if (iVar5 != 0) {
            lVar15 = (longlong)iVar5;
          }
          plVar6 = param_3;
          if (-1 < lVar15) {
            plVar6 = local_b0 + -2;
          }
          lVar19 = param_2 - (lVar19 >> 0x3f);
          plVar6[lVar19] = lVar18;
          lVar18 = plVar8[2];
          uVar10 = *(ulonglong *)(lVar18 + 0xf8);
          lVar14 = uVar10 - uVar21;
          if (uVar21 <= uVar10) {
            uVar10 = uVar21;
          }
          iVar5 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Qa_05,uVar10);
          if (iVar5 != 0) {
            lVar14 = (longlong)iVar5;
          }
          plVar6 = param_3;
          if (-1 < lVar14) {
            plVar6 = local_b0 + -3;
          }
          lVar19 = lVar19 - (lVar15 >> 0x3f);
          plVar6[lVar19] = lVar18;
          lVar18 = plVar8[3];
          uVar10 = *(ulonglong *)(lVar18 + 0xf8);
          lVar15 = uVar10 - uVar21;
          if (uVar21 <= uVar10) {
            uVar10 = uVar21;
          }
          iVar5 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Qa_06,uVar10);
          if (iVar5 != 0) {
            lVar15 = (longlong)iVar5;
          }
          local_b0 = local_b0 + -4;
          plVar6 = param_3;
          if (-1 < lVar15) {
            plVar6 = local_b0;
          }
          lVar19 = lVar19 - (lVar14 >> 0x3f);
          plVar6[lVar19] = lVar18;
          param_2 = lVar19 - (lVar15 >> 0x3f);
          plVar8 = plVar8 + 4;
          uVar22 = extraout_XMM0_Qa_07;
        } while (plVar8 < param_1 + lVar17);
      }
      if (plVar8 < param_1 + uVar16) {
        uVar21 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar9) + 0xf8);
        do {
          lVar17 = *plVar8;
          uVar10 = *(ulonglong *)(lVar17 + 0xf8);
          uVar11 = uVar10;
          if (uVar21 <= uVar10) {
            uVar11 = uVar21;
          }
          iVar5 = (*(code *)PTR_memcmp_00799528)(uVar22,uVar11);
          lVar18 = uVar10 - uVar21;
          if (iVar5 != 0) {
            lVar18 = (longlong)iVar5;
          }
          local_b0 = local_b0 + -1;
          plVar6 = param_3;
          if (-1 < lVar18) {
            plVar6 = local_b0;
          }
          plVar6[param_2] = lVar17;
          param_2 = param_2 - (lVar18 >> 0x3f);
          plVar8 = plVar8 + 1;
          uVar22 = extraout_XMM0_Qa_08;
        } while (plVar8 < param_1 + uVar16);
      }
      if (uVar16 == uVar20) break;
      local_b0[param_2 - 1] = *plVar8;
      local_b0 = local_b0 + -1;
      plVar8 = plVar8 + 1;
      uVar16 = uVar20;
    }
    (*(code *)PTR_memcpy_00799008)(uVar22,param_2 * 8);
    uVar16 = uVar20 - param_2;
    if (uVar16 != 0) {
      if (uVar16 < 4) {
        uVar21 = 0;
      }
      else {
        uVar21 = uVar16 & 0xfffffffffffffffc;
        pauVar13 = (undefined1 (*) [16])(param_1 + param_2 + 2);
        lVar17 = 0;
        do {
          auVar2 = *(undefined1 (*) [16])(param_3 + uVar20 + lVar17 + -4);
          auVar23 = *(undefined1 (*) [16])(param_3 + uVar20 + lVar17 + -2);
          auVar25._8_4_ = auVar23._0_4_;
          auVar25._0_8_ = auVar23._8_8_;
          auVar25._12_4_ = auVar23._4_4_;
          auVar23._8_4_ = auVar2._0_4_;
          auVar23._0_8_ = auVar2._8_8_;
          auVar23._12_4_ = auVar2._4_4_;
          pauVar13[-1] = auVar25;
          *pauVar13 = auVar23;
          lVar17 = lVar17 + -4;
          pauVar13 = pauVar13 + 2;
        } while (-lVar17 != uVar21);
        if (uVar16 == uVar21) goto LAB_003ec183;
      }
      uVar10 = uVar21 + param_2;
      plVar8 = param_3 + uVar20 + (-1 - uVar21);
      do {
        param_1[uVar10] = *plVar8;
        uVar10 = uVar10 + 1;
        plVar8 = plVar8 + -1;
      } while (uVar20 != uVar10);
    }
LAB_003ec183:
    if (param_2 == 0) break;
    if (uVar20 < param_2) {
      (*(code *)PTR_panic_fmt_007991a8)();
      goto LAB_003ec5f3;
    }
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
              (param_1 + param_2,uVar16,param_3,param_4,param_5,&local_38,param_7);
    uVar20 = param_2;
    if (param_2 < 0x21) goto LAB_003ebc0a;
  } while( true );
  if (param_4 < uVar20) {
LAB_003ec5d8:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  plVar8 = param_3 + uVar20;
  uVar21 = 0;
  uVar16 = uVar9 >> 3;
  plVar6 = param_1;
  while( true ) {
    lVar17 = 0;
    if (2 < uVar16) {
      lVar17 = uVar16 - 3;
    }
    plVar1 = param_1 + lVar17;
    if (plVar6 < plVar1) {
      uVar10 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar9) + 0xf8);
      do {
        puVar4 = PTR_memcmp_00799528;
        lVar17 = *plVar6;
        uVar11 = *(ulonglong *)(lVar17 + 0xf8);
        uVar12 = uVar11;
        if (uVar10 < uVar11) {
          uVar12 = uVar10;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(plVar1,uVar12);
        lVar18 = uVar10 - uVar11;
        if (iVar5 != 0) {
          lVar18 = (longlong)iVar5;
        }
        plVar7 = plVar8 + -1;
        if (-1 < lVar18) {
          plVar7 = param_3;
        }
        plVar7[uVar21] = lVar17;
        lVar18 = (-1 < lVar18) + uVar21;
        lVar17 = plVar6[1];
        uVar21 = *(ulonglong *)(lVar17 + 0xf8);
        uVar11 = uVar21;
        if (uVar10 < uVar21) {
          uVar11 = uVar10;
        }
        iVar5 = (*(code *)puVar4)(extraout_XMM0_Qa_09,uVar11);
        lVar19 = uVar10 - uVar21;
        if (iVar5 != 0) {
          lVar19 = (longlong)iVar5;
        }
        plVar7 = plVar8 + -2;
        if (-1 < lVar19) {
          plVar7 = param_3;
        }
        plVar7[lVar18] = lVar17;
        lVar18 = (ulonglong)(-1 < lVar19) + lVar18;
        lVar17 = plVar6[2];
        uVar21 = *(ulonglong *)(lVar17 + 0xf8);
        uVar11 = uVar21;
        if (uVar10 < uVar21) {
          uVar11 = uVar10;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Qa_10,uVar11);
        lVar19 = uVar10 - uVar21;
        if (iVar5 != 0) {
          lVar19 = (longlong)iVar5;
        }
        plVar7 = plVar8 + -3;
        if (-1 < lVar19) {
          plVar7 = param_3;
        }
        plVar7[lVar18] = lVar17;
        lVar18 = (ulonglong)(-1 < lVar19) + lVar18;
        lVar17 = plVar6[3];
        uVar21 = *(ulonglong *)(lVar17 + 0xf8);
        uVar11 = uVar21;
        if (uVar10 < uVar21) {
          uVar11 = uVar10;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Qa_11,uVar11);
        lVar19 = uVar10 - uVar21;
        if (iVar5 != 0) {
          lVar19 = (longlong)iVar5;
        }
        plVar8 = plVar8 + -4;
        plVar7 = plVar8;
        if (-1 < lVar19) {
          plVar7 = param_3;
        }
        plVar7[lVar18] = lVar17;
        uVar21 = (ulonglong)(-1 < lVar19) + lVar18;
        plVar6 = plVar6 + 4;
      } while (plVar6 < plVar1);
    }
    plVar1 = param_1 + uVar16;
    if (plVar6 < plVar1) {
      plVar7 = *(longlong **)(*(longlong *)((longlong)param_1 + uVar9) + 0xf0);
      uVar10 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar9) + 0xf8);
      do {
        lVar17 = *plVar6;
        uVar11 = *(ulonglong *)(lVar17 + 0xf8);
        uVar12 = uVar11;
        if (uVar10 < uVar11) {
          uVar12 = uVar10;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(plVar7,uVar12);
        lVar18 = uVar10 - uVar11;
        if (iVar5 != 0) {
          lVar18 = (longlong)iVar5;
        }
        plVar8 = plVar8 + -1;
        plVar7 = param_3;
        if (-1 >= lVar18) {
          plVar7 = plVar8;
        }
        plVar7[uVar21] = lVar17;
        uVar21 = (-1 < lVar18) + uVar21;
        plVar6 = plVar6 + 1;
      } while (plVar6 < plVar1);
    }
    else {
      plVar7 = plVar1;
    }
    if (uVar16 == uVar20) break;
    plVar8 = plVar8 + -1;
    param_3[uVar21] = *plVar6;
    uVar21 = uVar21 + 1;
    plVar6 = plVar6 + 1;
    uVar16 = uVar20;
  }
  (*(code *)PTR_memcpy_00799008)(plVar7,uVar21 * 8);
  param_2 = uVar20 - uVar21;
  if (param_2 == 0) {
    param_1 = param_1 + uVar20;
    param_2 = 0;
    goto LAB_003ebc0a;
  }
  if (param_2 < 4) {
    uVar9 = 0;
  }
  else {
    uVar9 = param_2 & 0xfffffffffffffffc;
    pauVar13 = (undefined1 (*) [16])(param_1 + uVar21 + 2);
    lVar17 = 0;
    do {
      auVar2 = *(undefined1 (*) [16])(param_3 + uVar20 + lVar17 + -4);
      auVar23 = *(undefined1 (*) [16])(param_3 + uVar20 + lVar17 + -2);
      auVar26._8_4_ = auVar23._0_4_;
      auVar26._0_8_ = auVar23._8_8_;
      auVar26._12_4_ = auVar23._4_4_;
      auVar24._8_4_ = auVar2._0_4_;
      auVar24._0_8_ = auVar2._8_8_;
      auVar24._12_4_ = auVar2._4_4_;
      pauVar13[-1] = auVar26;
      *pauVar13 = auVar24;
      lVar17 = lVar17 + -4;
      pauVar13 = pauVar13 + 2;
    } while (-lVar17 != uVar9);
    if (param_2 == uVar9) goto LAB_003ec573;
  }
  uVar16 = uVar9 + uVar21;
  plVar8 = param_3 + ((uVar20 - 1) - uVar9);
  do {
    param_1[uVar16] = *plVar8;
    uVar16 = uVar16 + 1;
    plVar8 = plVar8 + -1;
  } while (uVar20 != uVar16);
LAB_003ec573:
  if (uVar20 < uVar21) {
LAB_003ec5f3:
    (*(code *)PTR_slice_index_fail_007993c8)
              (&PTR_s__rustc_48a229ceaefd4985c50990b14_00788020,uVar20);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1 = param_1 + uVar21;
  local_60 = (longlong *)0x0;
  if (param_2 < 0x21) goto LAB_003ebc0a;
  goto LAB_003ebc46;
}



// 00475ec0 <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   <[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
          (longlong param_1,ulonglong param_2,longlong *param_3,ulonglong param_4,char param_5,
          undefined8 param_6)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong *plVar23;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar24;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulonglong local_2c8;
  byte abStack_283 [67];
  ulonglong auStack_240 [66];
  
  if (param_2 < 2) {
    return;
  }
  lVar4 = (0x4000000000000000 / param_2 + 1) - (ulonglong)(0x4000000000000000U % param_2 == 0);
  if (param_2 < 0x1001) {
    uVar7 = param_2 - (param_2 >> 1);
    uVar5 = 0x40;
    if (uVar7 < 0x40) {
      uVar5 = uVar7;
    }
  }
  else {
    uVar5 = (*(code *)PTR_sqrt_approx_007999c8)();
  }
  uVar16 = 0;
  uVar17 = 0;
  uVar7 = 1;
  do {
    plVar1 = (longlong *)(param_1 + uVar16 * 8);
    local_2c8 = param_2 - uVar16;
    if (param_2 < uVar16 || local_2c8 == 0) {
      bVar9 = 0;
      local_2c8 = 1;
    }
    else {
      if (local_2c8 < uVar5) {
LAB_00475fb2:
        if (param_5 == '\0') {
          if (uVar5 <= local_2c8) {
            local_2c8 = uVar5;
          }
          local_2c8 = local_2c8 * 2;
        }
        else {
          if (0x1f < local_2c8) {
            local_2c8 = 0x20;
          }
          quicksort::quicksort::
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                    (plVar1,local_2c8,param_3,param_4,0,0,param_6);
          local_2c8 = (local_2c8 & 0xffffffff) * 2 + 1;
        }
      }
      else {
        if (local_2c8 < 2) {
          uVar20 = local_2c8;
        }
        else {
          uVar6 = *(ulonglong *)(plVar1[1] + 0xf8);
          uVar20 = *(ulonglong *)(*plVar1 + 0xf8);
          uVar12 = uVar20;
          if (uVar6 < uVar20) {
            uVar12 = uVar6;
          }
          iVar3 = (*(code *)PTR_memcmp_00799528)(plVar1[1],uVar12);
          lVar10 = uVar6 - uVar20;
          if (iVar3 != 0) {
            lVar10 = (longlong)iVar3;
          }
          if (lVar10 < 0) {
            if (local_2c8 != 2) {
              uVar20 = 2;
              uVar24 = extraout_XMM0_Qa;
              do {
                uVar12 = *(ulonglong *)(plVar1[uVar20] + 0xf8);
                uVar22 = uVar6;
                if (uVar12 < uVar6) {
                  uVar22 = uVar12;
                }
                iVar3 = (*(code *)PTR_memcmp_00799528)(uVar24,uVar22);
                lVar14 = uVar12 - uVar6;
                if (iVar3 != 0) {
                  lVar14 = (longlong)iVar3;
                }
                if (-1 < lVar14) goto LAB_00476198;
                uVar20 = uVar20 + 1;
                uVar6 = uVar12;
                uVar24 = extraout_XMM0_Qa_01;
              } while (local_2c8 != uVar20);
              goto LAB_00476195;
            }
            uVar20 = 2;
            uVar6 = 1;
LAB_004761cf:
            if (uVar6 < 4) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar6 & 0xfffffffffffffffc;
              pauVar13 = (undefined1 (*) [16])(param_1 + 0x10 + uVar16 * 8);
              lVar10 = uVar20 * 8 + uVar16 * 8 + param_1 + -0x10;
              lVar14 = 0;
              do {
                auVar26 = pauVar13[-1];
                auVar2 = *pauVar13;
                auVar25 = *(undefined1 (*) [16])(lVar10 + -0x10 + lVar14 * 8);
                auVar27 = *(undefined1 (*) [16])(lVar10 + lVar14 * 8);
                auVar28._8_4_ = auVar27._0_4_;
                auVar28._0_8_ = auVar27._8_8_;
                auVar28._12_4_ = auVar27._4_4_;
                auVar27._8_4_ = auVar25._0_4_;
                auVar27._0_8_ = auVar25._8_8_;
                auVar27._12_4_ = auVar25._4_4_;
                pauVar13[-1] = auVar28;
                *pauVar13 = auVar27;
                auVar25._8_4_ = auVar26._0_4_;
                auVar25._0_8_ = auVar26._8_8_;
                auVar25._12_4_ = auVar26._4_4_;
                auVar26._8_4_ = auVar2._0_4_;
                auVar26._0_8_ = auVar2._8_8_;
                auVar26._12_4_ = auVar2._4_4_;
                *(undefined1 (*) [16])(lVar10 + lVar14 * 8) = auVar25;
                *(undefined1 (*) [16])(lVar10 + -0x10 + lVar14 * 8) = auVar26;
                lVar14 = lVar14 + -4;
                pauVar13 = pauVar13 + 2;
              } while (-lVar14 != uVar12);
              if (uVar6 == uVar12) goto LAB_004762b0;
            }
            lVar10 = -uVar12;
            puVar8 = (undefined8 *)(uVar12 * 8 + uVar16 * 8 + param_1);
            lVar14 = uVar16 * 8 + uVar20 * 8 + param_1 + -8;
            do {
              uVar24 = *puVar8;
              *puVar8 = *(undefined8 *)(lVar14 + lVar10 * 8);
              *(undefined8 *)(lVar14 + lVar10 * 8) = uVar24;
              lVar10 = lVar10 + -1;
              puVar8 = puVar8 + 1;
            } while (-lVar10 != uVar6);
          }
          else {
            uVar20 = 2;
            uVar24 = extraout_XMM0_Qa;
            if (local_2c8 != 2) {
              do {
                uVar12 = *(ulonglong *)(plVar1[uVar20] + 0xf8);
                uVar22 = uVar6;
                if (uVar12 < uVar6) {
                  uVar22 = uVar12;
                }
                iVar3 = (*(code *)PTR_memcmp_00799528)(uVar24,uVar22);
                lVar14 = uVar12 - uVar6;
                if (iVar3 != 0) {
                  lVar14 = (longlong)iVar3;
                }
                if (lVar14 < 0) goto LAB_00476198;
                uVar20 = uVar20 + 1;
                uVar6 = uVar12;
                uVar24 = extraout_XMM0_Qa_00;
              } while (local_2c8 != uVar20);
LAB_00476195:
              uVar20 = local_2c8;
LAB_00476198:
              if (uVar20 < uVar5) goto LAB_00475fb2;
              if ((lVar10 < 0) && (uVar6 = uVar20 >> 1, uVar6 != 0)) goto LAB_004761cf;
            }
          }
        }
LAB_004762b0:
        local_2c8 = uVar20 * 2 + 1;
      }
      uVar6 = ((local_2c8 >> 1) + uVar16 * 2) * lVar4 ^ (uVar16 * 2 - (uVar7 >> 1)) * lVar4;
      lVar10 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      bVar9 = (byte)lVar10 ^ 0x3f;
    }
    if (1 < uVar17) {
      do {
        while( true ) {
          if (abStack_283[uVar17] < bVar9) goto LAB_00476616;
          uVar17 = uVar17 - 1;
          uVar20 = auStack_240[uVar17];
          uVar12 = uVar20 >> 1;
          uVar22 = uVar7 >> 1;
          uVar6 = uVar22 + uVar12;
          if ((param_4 < uVar6) || ((((uint)uVar20 | (uint)uVar7) & 1) != 0)) break;
          uVar7 = uVar6 * 2;
          if (uVar17 < 2) goto LAB_00476610;
        }
        plVar15 = (longlong *)(param_1 + (uVar16 - uVar6) * 8);
        if ((uVar20 & 1) == 0) {
          lVar10 = 0x3f;
          if ((uVar12 | 1) != 0) {
            for (; (uVar12 | 1) >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          quicksort::quicksort::
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                    (plVar15,uVar12,param_3,param_4,((uint)lVar10 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
        }
        if ((uVar7 & 1) == 0) {
          lVar10 = 0x3f;
          if ((uVar22 | 1) != 0) {
            for (; (uVar22 | 1) >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          quicksort::quicksort::
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                    (plVar15 + uVar12,uVar22,param_3,param_4,((uint)lVar10 ^ 0x3f) * 2 ^ 0x7e,0,
                     param_6);
        }
        if ((uVar22 != 0) && (uVar12 != 0)) {
          uVar7 = uVar12;
          if (uVar22 < uVar12) {
            uVar7 = uVar22;
          }
          if (uVar7 <= param_4) {
            plVar18 = plVar15 + uVar12;
            uVar24 = (*(code *)PTR_memcpy_00799008)();
            plVar19 = param_3 + uVar7;
            plVar21 = param_3;
            if (uVar22 < uVar12) {
              plVar23 = (longlong *)(param_1 + -8 + uVar16 * 8);
              do {
                lVar10 = plVar19[-1];
                lVar14 = plVar18[-1];
                uVar7 = *(ulonglong *)(lVar10 + 0xf8);
                uVar20 = *(ulonglong *)(lVar14 + 0xf8);
                uVar12 = uVar20;
                if (uVar7 < uVar20) {
                  uVar12 = uVar7;
                }
                iVar3 = (*(code *)PTR_memcmp_00799528)(uVar24,uVar12);
                lVar11 = uVar7 - uVar20;
                if (iVar3 != 0) {
                  lVar11 = (longlong)iVar3;
                }
                if (-1 < lVar11) {
                  lVar14 = lVar10;
                }
                *plVar23 = lVar14;
                plVar18 = plVar18 + ((ulonglong)(-1 < lVar11) - 1);
                plVar19 = plVar19 + (-1 - (lVar11 >> 0x3f));
                if (plVar18 == plVar15) break;
                plVar23 = plVar23 + -1;
                uVar24 = extraout_XMM0_Qa_02;
              } while (plVar19 != param_3);
              uVar24 = extraout_XMM0_Qa_02;
            }
            else {
              do {
                lVar10 = *plVar18;
                lVar14 = *plVar21;
                uVar7 = *(ulonglong *)(lVar10 + 0xf8);
                uVar20 = *(ulonglong *)(lVar14 + 0xf8);
                uVar12 = uVar20;
                if (uVar7 < uVar20) {
                  uVar12 = uVar7;
                }
                iVar3 = (*(code *)PTR_memcmp_00799528)(uVar24,uVar12);
                lVar11 = uVar7 - uVar20;
                if (iVar3 != 0) {
                  lVar11 = (longlong)iVar3;
                }
                if (-1 < lVar11) {
                  lVar10 = lVar14;
                }
                *plVar15 = lVar10;
                plVar21 = plVar21 + (-1 < lVar11);
                plVar15 = plVar15 + 1;
                if (plVar21 == plVar19) break;
                plVar18 = plVar18 + -(lVar11 >> 0x3f);
                uVar24 = extraout_XMM0_Qa_03;
              } while (plVar18 != plVar1);
              uVar24 = extraout_XMM0_Qa_03;
            }
            (*(code *)PTR_memcpy_00799008)(uVar24,(longlong)plVar19 - (longlong)plVar21);
          }
        }
        uVar7 = uVar6 * 2 + 1;
      } while (1 < uVar17);
LAB_00476610:
      uVar17 = 1;
    }
LAB_00476616:
    auStack_240[uVar17] = uVar7;
    abStack_283[uVar17 + 1] = bVar9;
    if (param_2 <= uVar16) {
      if ((uVar7 & 1) != 0) {
        return;
      }
      lVar4 = 0x3f;
      if ((param_2 | 1) != 0) {
        for (; (param_2 | 1) >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      quicksort::quicksort::
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                (param_1,param_2,param_3,param_4,((uint)lVar4 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
      return;
    }
    uVar17 = uVar17 + 1;
    uVar16 = uVar16 + (local_2c8 >> 1);
    uVar7 = local_2c8;
  } while( true );
}



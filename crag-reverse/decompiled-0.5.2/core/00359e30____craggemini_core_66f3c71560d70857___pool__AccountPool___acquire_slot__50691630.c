// 00359e30 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_slot::{closure#0}::{closure#5}>

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>>::retain::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_slot::{closure#0}::{closure#5}>
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>>
::retain::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_slot::_closure_0_::_closure_5_>
          (undefined4 param_1,ulonglong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  ulonglong local_c0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  uVar35 = param_2[3];
  if (uVar35 == 0) {
    local_c0 = 0;
    uVar32 = 0;
LAB_00359ed9:
    if (uVar32 != local_c0) {
LAB_0035a0ed:
      if (local_c0 < uVar35) {
        uVar32 = *param_2;
        uVar33 = uVar32;
        if (param_2[2] < uVar32) {
          uVar33 = 0;
        }
        uVar29 = param_2[1];
        lVar31 = param_2[2] - uVar33;
        uVar33 = lVar31 + uVar35;
        if (uVar32 - lVar31 < uVar35) {
          uVar33 = uVar32;
        }
        uVar33 = uVar33 - lVar31;
        param_2[3] = local_c0;
        if (local_c0 < uVar33 || local_c0 - uVar33 == 0) {
          lVar31 = local_c0 * 0x68 + uVar29 + lVar31 * 0x68;
          for (lVar36 = (uVar33 - local_c0) + 1; lVar36 != 1; lVar36 = lVar36 + -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>(lVar31);
            lVar31 = lVar31 + 0x68;
          }
          for (lVar31 = (uVar35 - uVar33) + 1; lVar31 != 1; lVar31 = lVar31 + -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>(uVar29);
            uVar29 = uVar29 + 0x68;
          }
        }
        else {
          lVar31 = uVar29 + (local_c0 - uVar33) * 0x68;
          for (lVar36 = (uVar35 - local_c0) + 1; lVar36 != 1; lVar36 = lVar36 + -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>(lVar31);
            lVar31 = lVar31 + 0x68;
          }
        }
      }
    }
  }
  else {
    uVar32 = param_2[2];
    uVar33 = *param_2;
    lVar31 = *(longlong *)(param_3 + 8);
    lVar36 = uVar32 * 0x68 + param_2[1] + 0x10;
    local_c0 = 0;
    do {
      uVar29 = 0;
      if (uVar33 <= uVar32 + local_c0) {
        uVar29 = uVar33;
      }
      if ((*(longlong *)(lVar36 + uVar29 * -0x68) == lVar31) &&
         (iVar28 = (*(code *)PTR_bcmp_00799020)(param_1,lVar31), param_1 = extraout_XMM0_Da,
         iVar28 == 0)) {
        uVar32 = local_c0 + 1;
        if (uVar32 < uVar35) {
          uVar33 = param_2[2];
          uVar29 = *param_2;
          uVar2 = param_2[1];
          lVar31 = *(longlong *)(param_3 + 8);
          local_98 = extraout_XMM0_Da;
          do {
            lVar36 = (uVar33 + uVar32) * 0x68 + uVar2;
            uVar37 = uVar32;
            while( true ) {
              uVar30 = uVar29;
              if (uVar33 + uVar37 < uVar29) {
                uVar30 = 0;
              }
              if ((*(longlong *)(lVar36 + 0x10 + uVar30 * -0x68) != lVar31) ||
                 (iVar28 = (*(code *)PTR_bcmp_00799020)(), local_98 = extraout_XMM0_Da_00,
                 iVar28 != 0)) break;
              uVar37 = uVar37 + 1;
              lVar36 = lVar36 + 0x68;
              if (uVar35 <= uVar37) {
                uVar37 = uVar32 + 1;
                if (uVar32 + 1 < uVar35) {
                  uVar37 = uVar35;
                }
                goto LAB_0035a0df;
              }
            }
            if (uVar35 <= local_c0) {
              (*(code *)PTR_panic_00799338)
                        (local_98,&anon_869a44742910931491f4b62d80901a16_71_llvm_763634721200370616)
              ;
              while (uVar35 = uVar35 - 1, uVar35 != 0) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>(uVar37);
                uVar37 = uVar37 + 0x68;
              }
                    /* WARNING: Subroutine does not return */
              _Unwind_Resume();
            }
            puVar34 = (undefined8 *)(lVar36 + uVar30 * -0x68);
            uVar32 = 0;
            if (uVar29 <= local_c0 + uVar33) {
              uVar32 = uVar29;
            }
            lVar36 = ((local_c0 + uVar33) - uVar32) * 0x68;
            uVar3 = *(undefined8 *)(uVar2 + 0x60 + lVar36);
            puVar1 = (undefined8 *)(uVar2 + 0x50 + lVar36);
            uVar5 = *puVar1;
            uVar6 = puVar1[1];
            puVar1 = (undefined8 *)(uVar2 + 0x40 + lVar36);
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            uVar9 = *(undefined8 *)(uVar2 + lVar36);
            uVar10 = ((undefined8 *)(uVar2 + lVar36))[1];
            puVar1 = (undefined8 *)(uVar2 + 0x10 + lVar36);
            uVar11 = *puVar1;
            uVar12 = puVar1[1];
            puVar1 = (undefined8 *)(uVar2 + 0x20 + lVar36);
            uVar13 = *puVar1;
            uVar14 = puVar1[1];
            puVar1 = (undefined8 *)(uVar2 + 0x30 + lVar36);
            uVar15 = *puVar1;
            uVar16 = puVar1[1];
            uVar4 = puVar34[0xc];
            uVar17 = puVar34[10];
            uVar18 = puVar34[0xb];
            uVar19 = puVar34[8];
            uVar20 = puVar34[9];
            uVar21 = puVar34[1];
            uVar22 = puVar34[2];
            uVar23 = puVar34[3];
            uVar24 = puVar34[4];
            uVar25 = puVar34[5];
            uVar26 = puVar34[6];
            uVar27 = puVar34[7];
            *(undefined8 *)(uVar2 + lVar36) = *puVar34;
            ((undefined8 *)(uVar2 + lVar36))[1] = uVar21;
            puVar1 = (undefined8 *)(uVar2 + 0x10 + lVar36);
            *puVar1 = uVar22;
            puVar1[1] = uVar23;
            puVar1 = (undefined8 *)(uVar2 + 0x20 + lVar36);
            *puVar1 = uVar24;
            puVar1[1] = uVar25;
            puVar1 = (undefined8 *)(uVar2 + 0x30 + lVar36);
            *puVar1 = uVar26;
            puVar1[1] = uVar27;
            puVar1 = (undefined8 *)(uVar2 + 0x40 + lVar36);
            *puVar1 = uVar19;
            puVar1[1] = uVar20;
            puVar1 = (undefined8 *)(uVar2 + 0x50 + lVar36);
            *puVar1 = uVar17;
            puVar1[1] = uVar18;
            *(undefined8 *)(uVar2 + 0x60 + lVar36) = uVar4;
            puVar34[0xc] = uVar3;
            puVar34[10] = uVar5;
            puVar34[0xb] = uVar6;
            puVar34[8] = uVar7;
            puVar34[9] = uVar8;
            local_98 = (undefined4)uVar9;
            uStack_94 = (undefined4)((ulonglong)uVar9 >> 0x20);
            uStack_90 = (undefined4)uVar10;
            uStack_8c = (undefined4)((ulonglong)uVar10 >> 0x20);
            puVar34[6] = uVar15;
            puVar34[7] = uVar16;
            puVar34[4] = uVar13;
            puVar34[5] = uVar14;
            puVar34[2] = uVar11;
            puVar34[3] = uVar12;
            *(undefined4 *)puVar34 = local_98;
            *(undefined4 *)((longlong)puVar34 + 4) = uStack_94;
            *(undefined4 *)(puVar34 + 1) = uStack_90;
            *(undefined4 *)((longlong)puVar34 + 0xc) = uStack_8c;
            uVar32 = uVar37 + 1;
            local_c0 = local_c0 + 1;
          } while (uVar32 < uVar35);
          uVar37 = uVar37 + 1;
LAB_0035a0df:
          if (uVar37 == local_c0) {
            return;
          }
          goto LAB_0035a0ed;
        }
        goto LAB_00359ed9;
      }
      local_c0 = local_c0 + 1;
      lVar36 = lVar36 + 0x68;
    } while (uVar35 != local_c0);
  }
  return;
}



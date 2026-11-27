// 0035a290 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_acp_permit::{closure#0}::{closure#0}>

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>>::retain::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_acp_permit::{closure#0}::{closure#0}>
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>>
::retain::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_acp_permit::_closure_0_::_closure_0_>
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
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  ulonglong local_90;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  uVar23 = param_2[3];
  if (uVar23 == 0) {
    local_90 = 0;
    uVar20 = 0;
LAB_0035a339:
    if (uVar20 != local_90) {
LAB_0035a4db:
      if (local_90 < uVar23) {
        uVar20 = *param_2;
        uVar21 = uVar20;
        if (param_2[2] < uVar20) {
          uVar21 = 0;
        }
        uVar17 = param_2[1];
        lVar19 = param_2[2] - uVar21;
        uVar21 = lVar19 + uVar23;
        if (uVar20 - lVar19 < uVar23) {
          uVar21 = uVar20;
        }
        uVar21 = uVar21 - lVar19;
        param_2[3] = local_90;
        if (local_90 < uVar21 || local_90 - uVar21 == 0) {
          lVar19 = local_90 * 0x38 + uVar17 + lVar19 * 0x38;
          for (lVar24 = (uVar21 - local_90) + 1; lVar24 != 1; lVar24 = lVar24 + -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>(lVar19);
            lVar19 = lVar19 + 0x38;
          }
          for (lVar19 = (uVar23 - uVar21) + 1; lVar19 != 1; lVar19 = lVar19 + -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>(uVar17);
            uVar17 = uVar17 + 0x38;
          }
        }
        else {
          lVar19 = uVar17 + (local_90 - uVar21) * 0x38;
          for (lVar24 = (uVar23 - local_90) + 1; lVar24 != 1; lVar24 = lVar24 + -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>(lVar19);
            lVar19 = lVar19 + 0x38;
          }
        }
      }
    }
  }
  else {
    uVar20 = param_2[2];
    uVar21 = *param_2;
    lVar19 = *(longlong *)(param_3 + 8);
    lVar24 = uVar20 * 0x38 + param_2[1] + 0x10;
    local_90 = 0;
    do {
      uVar17 = 0;
      if (uVar21 <= uVar20 + local_90) {
        uVar17 = uVar21;
      }
      if ((*(longlong *)(lVar24 + uVar17 * -0x38) == lVar19) &&
         (iVar16 = (*(code *)PTR_bcmp_00799020)(param_1,lVar19), param_1 = extraout_XMM0_Da,
         iVar16 == 0)) {
        uVar20 = local_90 + 1;
        if (uVar20 < uVar23) {
          uVar21 = param_2[2];
          uVar17 = *param_2;
          uVar2 = param_2[1];
          lVar19 = *(longlong *)(param_3 + 8);
          local_68 = extraout_XMM0_Da;
          do {
            lVar24 = (uVar21 + uVar20) * 0x38 + uVar2;
            uVar25 = uVar20;
            while( true ) {
              uVar18 = uVar17;
              if (uVar21 + uVar25 < uVar17) {
                uVar18 = 0;
              }
              if ((*(longlong *)(lVar24 + 0x10 + uVar18 * -0x38) != lVar19) ||
                 (iVar16 = (*(code *)PTR_bcmp_00799020)(), local_68 = extraout_XMM0_Da_00,
                 iVar16 != 0)) break;
              uVar25 = uVar25 + 1;
              lVar24 = lVar24 + 0x38;
              if (uVar23 <= uVar25) {
                uVar25 = uVar20 + 1;
                if (uVar20 + 1 < uVar23) {
                  uVar25 = uVar23;
                }
                goto LAB_0035a4cd;
              }
            }
            if (uVar23 <= local_90) {
              (*(code *)PTR_panic_00799338)
                        (local_68,&anon_869a44742910931491f4b62d80901a16_71_llvm_763634721200370616)
              ;
              while (uVar23 = uVar23 - 1, uVar23 != 0) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>(uVar25);
                uVar25 = uVar25 + 0x38;
              }
                    /* WARNING: Subroutine does not return */
              _Unwind_Resume();
            }
            puVar22 = (undefined8 *)(lVar24 + uVar18 * -0x38);
            uVar20 = 0;
            if (uVar17 <= local_90 + uVar21) {
              uVar20 = uVar17;
            }
            lVar24 = ((local_90 + uVar21) - uVar20) * 0x38;
            uVar3 = *(undefined8 *)(uVar2 + 0x30 + lVar24);
            uVar5 = *(undefined8 *)(uVar2 + lVar24);
            uVar6 = ((undefined8 *)(uVar2 + lVar24))[1];
            puVar1 = (undefined8 *)(uVar2 + 0x10 + lVar24);
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            puVar1 = (undefined8 *)(uVar2 + 0x20 + lVar24);
            uVar9 = *puVar1;
            uVar10 = puVar1[1];
            uVar4 = puVar22[6];
            uVar11 = puVar22[1];
            uVar12 = puVar22[2];
            uVar13 = puVar22[3];
            uVar14 = puVar22[4];
            uVar15 = puVar22[5];
            *(undefined8 *)(uVar2 + lVar24) = *puVar22;
            ((undefined8 *)(uVar2 + lVar24))[1] = uVar11;
            *(undefined8 *)(uVar2 + 0x30 + lVar24) = uVar4;
            puVar1 = (undefined8 *)(uVar2 + 0x20 + lVar24);
            *puVar1 = uVar14;
            puVar1[1] = uVar15;
            puVar1 = (undefined8 *)(uVar2 + 0x10 + lVar24);
            *puVar1 = uVar12;
            puVar1[1] = uVar13;
            puVar22[6] = uVar3;
            local_68 = (undefined4)uVar5;
            uStack_64 = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_60 = (undefined4)uVar6;
            uStack_5c = (undefined4)((ulonglong)uVar6 >> 0x20);
            puVar22[4] = uVar9;
            puVar22[5] = uVar10;
            puVar22[2] = uVar7;
            puVar22[3] = uVar8;
            *(undefined4 *)puVar22 = local_68;
            *(undefined4 *)((longlong)puVar22 + 4) = uStack_64;
            *(undefined4 *)(puVar22 + 1) = uStack_60;
            *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_5c;
            uVar20 = uVar25 + 1;
            local_90 = local_90 + 1;
          } while (uVar20 < uVar23);
          uVar25 = uVar25 + 1;
LAB_0035a4cd:
          if (uVar25 == local_90) {
            return;
          }
          goto LAB_0035a4db;
        }
        goto LAB_0035a339;
      }
      local_90 = local_90 + 1;
      lVar24 = lVar24 + 0x38;
    } while (uVar23 != local_90);
  }
  return;
}



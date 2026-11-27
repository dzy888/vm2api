// 0035a680 <<craggemini_core[66f3c71560d70857]::server::Runtime>::admit::{closure#0}>

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>::retain::<<craggemini_core[66f3c71560d70857]::server::Runtime>::admit::{closure#0}>
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>
::retain::<<craggemini_core[66f3c71560d70857]::server::Runtime>::admit::_closure_0_>
          (ulonglong *param_1)

{
  undefined *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  puVar1 = PTR_is_cancelled_00799260;
  uVar10 = param_1[3];
  if (uVar10 == 0) {
    uVar5 = 0;
    uVar3 = 0;
LAB_0035a713:
    if (uVar3 != uVar5) {
LAB_0035a841:
      if (uVar5 < uVar10) {
        uVar3 = *param_1;
        uVar6 = uVar3;
        if (param_1[2] < uVar3) {
          uVar6 = 0;
        }
        uVar7 = param_1[1];
        lVar4 = param_1[2] - uVar6;
        uVar6 = lVar4 + uVar10;
        if (uVar3 - lVar4 < uVar10) {
          uVar6 = uVar3;
        }
        uVar6 = uVar6 - lVar4;
        param_1[3] = uVar5;
        if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
          lVar4 = uVar5 * 0x3b0 + uVar7 + lVar4 * 0x3b0;
          for (lVar9 = (uVar6 - uVar5) + 1; lVar9 != 1; lVar9 = lVar9 + -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::server::Turn>(lVar4);
            lVar4 = lVar4 + 0x3b0;
          }
          for (lVar4 = (uVar10 - uVar6) + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::server::Turn>(uVar7);
            uVar7 = uVar7 + 0x3b0;
          }
        }
        else {
          lVar4 = uVar7 + (uVar5 - uVar6) * 0x3b0;
          for (lVar9 = (uVar10 - uVar5) + 1; lVar9 != 1; lVar9 = lVar9 + -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::server::Turn>(lVar4);
            lVar4 = lVar4 + 0x3b0;
          }
        }
      }
    }
  }
  else {
    uVar5 = 0;
    do {
      cVar2 = (*(code *)puVar1)();
      if (cVar2 != '\0') {
        uVar3 = uVar5 + 1;
        if (uVar3 < uVar10) {
          uVar6 = param_1[2];
          uVar7 = *param_1;
          do {
            while( true ) {
              uVar8 = uVar3;
              uVar3 = uVar7;
              if (uVar6 + uVar8 < uVar7) {
                uVar3 = 0;
              }
              cVar2 = (*(code *)PTR_is_cancelled_00799260)();
              if (cVar2 == '\0') break;
              uVar3 = uVar8 + 1;
              if (uVar10 <= uVar8 + 1) goto LAB_0035a835;
            }
            if (uVar10 <= uVar5) {
              (*(code *)PTR_panic_00799338)();
              lVar4 = uVar3 * -0x3b0;
              while (uVar10 = uVar10 - 1, uVar10 != 0) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <craggemini_core[66f3c71560d70857]::server::Turn>(lVar4);
                lVar4 = lVar4 + 0x3b0;
              }
                    /* WARNING: Subroutine does not return */
              _Unwind_Resume();
            }
            uVar3 = 0;
            if (uVar7 <= uVar6 + uVar5) {
              uVar3 = uVar7;
            }
            (*(code *)PTR_memcpy_00799008)(uVar3,0x3b0);
            (*(code *)PTR_memmove_00799258)();
            (*(code *)PTR_memcpy_00799008)();
            uVar3 = uVar8 + 1;
            uVar5 = uVar5 + 1;
          } while (uVar3 < uVar10);
LAB_0035a835:
          if (uVar8 + 1 == uVar5) {
            return;
          }
          goto LAB_0035a841;
        }
        goto LAB_0035a713;
      }
      uVar5 = uVar5 + 1;
    } while (uVar10 != uVar5);
  }
  return;
}



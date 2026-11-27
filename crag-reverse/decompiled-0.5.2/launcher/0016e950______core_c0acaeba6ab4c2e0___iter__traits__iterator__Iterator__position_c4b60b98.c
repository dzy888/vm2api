// 0016e950 <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::position::check<&[u8],craggemini[b21da2d71f2da7a3]::mcp_stdio::unix_http_json_sync::{closure#0}>::{closure#0},core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<usize>>

/* <core[c0acaeba6ab4c2e0]::slice::iter::Windows<u8> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::try_fold::<(),
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::position::check<&[u8],
   craggemini[b21da2d71f2da7a3]::mcp_stdio::unix_http_json_sync::{closure#0}>::{closure#0},
   core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<usize>> */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::slice::iter::Windows<u8>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::try_fold::
<(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::position::check<&[u8],craggemini[b21da2d71f2da7a3]::mcp_stdio::unix_http_json_sync::_closure_0_>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<usize>>
          (void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *in_RSI;
  undefined8 *in_RDI;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar7 = in_RDI[1];
  uVar1 = in_RDI[2];
  if (uVar7 < uVar1) {
    return 0;
  }
  lVar4 = *in_RSI;
  piVar3 = (int *)*in_RDI;
  if (uVar1 == 4) {
    do {
      piVar6 = (int *)((longlong)piVar3 + 1);
      if (*piVar3 == 0xa0d0a0d) {
        *in_RDI = piVar6;
        in_RDI[1] = uVar7 - 1;
        return 1;
      }
      uVar7 = uVar7 - 1;
      lVar4 = lVar4 + 1;
      *in_RSI = lVar4;
      piVar3 = piVar6;
    } while (3 < uVar7);
    *in_RDI = piVar6;
    in_RDI[1] = 3;
    return 0;
  }
  uVar2 = (uVar7 - uVar1) + 1;
  if (3 < uVar2) {
    uVar8 = uVar2 & 0xfffffffffffffffc;
    uVar7 = uVar7 - uVar8;
    piVar3 = (int *)((longlong)piVar3 + uVar8);
    lVar11 = 0;
    lVar9 = 0;
    lVar10 = 0;
    uVar5 = uVar8;
    do {
      lVar4 = lVar4 + 1;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 1;
      uVar5 = uVar5 - 4;
    } while (uVar5 != 0);
    lVar4 = lVar10 + lVar11 + lVar9 + lVar4;
    if (uVar2 == uVar8) goto LAB_0016ea25;
  }
  lVar9 = 0;
  do {
    lVar10 = uVar7 + lVar9;
    lVar9 = lVar9 + -1;
  } while (uVar1 <= lVar10 - 1U);
  piVar3 = (int *)((longlong)piVar3 - lVar9);
  lVar4 = lVar4 - lVar9;
LAB_0016ea25:
  *in_RSI = lVar4;
  *in_RDI = piVar3;
  in_RDI[1] = uVar1 - 1;
  return 0;
}



// 0039a370 <craggemini_core[66f3c71560d70857]::tools::filter_sse_for_client::{closure#1}>

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>::retain::<craggemini_core[66f3c71560d70857]::tools::filter_sse_for_client::{closure#1}>
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>::retain::
<craggemini_core[66f3c71560d70857]::tools::filter_sse_for_client::_closure_1_>
          (longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char cVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 8);
    uVar10 = 0;
    puVar11 = puVar2;
    do {
      cVar9 = <craggemini_core[66f3c71560d70857]::tools::filter_sse_for_client::{closure#1}>::
              _closure_0_(param_2,puVar11);
      if (cVar9 == '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (puVar11);
        uVar8 = uVar10;
        while (uVar8 = uVar8 + 1, uVar8 < uVar1) {
          puVar12 = puVar11 + 8;
          cVar9 = <craggemini_core[66f3c71560d70857]::tools::filter_sse_for_client::{closure#1}>::
                  _closure_0_(param_2,puVar12);
          if (cVar9 == '\0') {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (puVar12);
            puVar11 = puVar12;
          }
          else {
            uVar3 = *puVar12;
            uVar4 = puVar11[9];
            uVar5 = puVar11[10];
            uVar6 = puVar11[0xb];
            uVar7 = *(undefined8 *)(puVar11 + 0xe);
            *(undefined8 *)(puVar2 + uVar10 * 8 + 4) = *(undefined8 *)(puVar11 + 0xc);
            *(undefined8 *)((longlong)(puVar2 + uVar10 * 8 + 4) + 8) = uVar7;
            puVar11 = puVar2 + uVar10 * 8;
            *puVar11 = uVar3;
            puVar11[1] = uVar4;
            puVar11[2] = uVar5;
            puVar11[3] = uVar6;
            uVar10 = uVar10 + 1;
            puVar11 = puVar12;
          }
        }
        *(ulonglong *)(param_1 + 0x10) = uVar10;
        return;
      }
      uVar10 = uVar10 + 1;
      puVar11 = puVar11 + 8;
    } while (uVar1 != uVar10);
  }
  return;
}



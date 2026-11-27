// 0039a670 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::{closure#0}::{closure#1}>

/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>>::retain::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::{closure#0}::{closure#1}>
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>>
::retain::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::_closure_0_::_closure_1_>
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  char cVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar16;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  if (uVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar14 = 0x20;
    uVar13 = 0;
    local_40 = param_2;
    local_38 = param_3;
    do {
      lVar15 = lVar5 + lVar14 + -0x20;
      cVar11 = <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::{closure#0}::{closure#1}>
               ::_closure_0_(&local_40,lVar15);
      if (cVar11 == '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>
                  (lVar15);
        uVar12 = uVar13;
        while (uVar12 = uVar12 + 1, uVar12 < uVar4) {
          lVar5 = *(longlong *)(param_1 + 8);
          puVar2 = (undefined8 *)(lVar5 + lVar14);
          cVar11 = <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::{closure#0}::{closure#1}>
                   ::_closure_0_(&local_40,puVar2);
          if (cVar11 == '\0') {
            plVar6 = (longlong *)*puVar2;
            LOCK();
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            uVar16 = extraout_XMM0_Da;
            if (*plVar6 == 0) {
              uVar16 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
                       ::drop_slow(puVar2);
            }
            lVar5 = *(longlong *)(lVar5 + 8 + lVar14);
            if ((lVar5 != -1) && (lVar5 != 0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
            }
          }
          else {
            uVar16 = *(undefined4 *)puVar2;
            uVar7 = *(undefined4 *)((longlong)puVar2 + 4);
            uVar8 = *(undefined4 *)(puVar2 + 1);
            uVar9 = *(undefined4 *)((longlong)puVar2 + 0xc);
            uVar10 = puVar2[3];
            puVar3 = (undefined8 *)(lVar5 + 0x10 + uVar13 * 0x20);
            *puVar3 = puVar2[2];
            puVar3[1] = uVar10;
            puVar1 = (undefined4 *)(lVar5 + uVar13 * 0x20);
            *puVar1 = uVar16;
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            uVar13 = uVar13 + 1;
          }
          lVar14 = lVar14 + 0x20;
        }
        *(ulonglong *)(param_1 + 0x10) = uVar13;
        return;
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x20;
    } while (uVar4 != uVar13);
  }
  return;
}



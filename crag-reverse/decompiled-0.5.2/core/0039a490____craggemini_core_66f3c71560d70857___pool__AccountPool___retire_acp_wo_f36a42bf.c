// 0039a490 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0}::{closure#0}>

/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>>::retain::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0}::{closure#0}>
   <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>>::retain::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::{closure#0}::{closure#3}>
   <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>>::retain::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_stale_proxy_slots::{closure#0}::{closure#0}>
   <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>>::retain::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::prewarm_acp_worker_if_needed::{closure#0}::{closure#1}>
   <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>>::retain::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_all_idle::{closure#0}::{closure#0}>
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>>
::retain::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::_closure_0_::_closure_0_>
          (undefined4 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar16;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if (uVar3 != 0) {
    lVar4 = *(longlong *)(param_2 + 8);
    uVar5 = *(undefined8 *)(param_3 + 8);
    lVar6 = *(longlong *)(param_3 + 0x10);
    lVar15 = 0x20;
    uVar14 = 0;
    do {
      if ((*(longlong *)(*(longlong *)(lVar4 + -0x20 + lVar15) + 0x1a0) == lVar6) &&
         (iVar12 = (*(code *)PTR_bcmp_00799020)(param_1,lVar6), param_1 = extraout_XMM0_Da,
         iVar12 == 0)) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>
                  (lVar4 + lVar15 + -0x20,uVar5);
        uVar13 = uVar14;
        while (uVar13 = uVar13 + 1, uVar13 < uVar3) {
          lVar4 = *(longlong *)(param_2 + 8);
          puVar1 = (undefined4 *)(lVar4 + lVar15);
          plVar7 = *(longlong **)(lVar4 + lVar15);
          if ((plVar7[0x34] == lVar6) &&
             (iVar12 = (*(code *)PTR_bcmp_00799020)(uVar13,lVar6), iVar12 == 0)) {
            LOCK();
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            uVar16 = extraout_XMM0_Da_00;
            if (*plVar7 == 0) {
              uVar16 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
                       ::drop_slow(puVar1,uVar5);
            }
            lVar4 = *(longlong *)(lVar4 + 8 + lVar15);
            if ((lVar4 != -1) && (lVar4 != 0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
            }
          }
          else {
            uVar16 = *puVar1;
            uVar8 = puVar1[1];
            uVar9 = puVar1[2];
            uVar10 = puVar1[3];
            uVar11 = *(undefined8 *)(puVar1 + 6);
            puVar2 = (undefined8 *)(lVar4 + 0x10 + uVar14 * 0x20);
            *puVar2 = *(undefined8 *)(puVar1 + 4);
            puVar2[1] = uVar11;
            puVar1 = (undefined4 *)(lVar4 + uVar14 * 0x20);
            *puVar1 = uVar16;
            puVar1[1] = uVar8;
            puVar1[2] = uVar9;
            puVar1[3] = uVar10;
            uVar14 = uVar14 + 1;
          }
          lVar15 = lVar15 + 0x20;
        }
        *(ulonglong *)(param_2 + 0x10) = uVar14;
        return;
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x20;
    } while (uVar3 != uVar14);
  }
  return;
}



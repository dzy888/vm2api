// 003b0300 {closure#0}

/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>>::retain::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::{closure#0}::{closure#1}>::{closure#0}
    */

undefined8 __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>>
::retain::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::{closure#0}::{closure#1}>
::_closure_0_(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 uVar10;
  
  plVar2 = (longlong *)*param_1;
  plVar6 = (longlong *)param_1[1];
  lVar4 = *param_2;
  cVar1 = *(char *)(*(longlong *)(lVar4 + 0x240) + 0x10);
  if (cVar1 == '\0') {
    plVar3 = *(longlong **)(lVar4 + 0x1a0);
    uVar10 = plVar3 == (longlong *)0x0;
    plVar7 = plVar6;
    if (-1 < (longlong)plVar3) goto LAB_003b0355;
    do {
      uVar10 = 1;
      lVar4 = (*(code *)PTR_handle_error_00798ff0)();
      plVar7 = plVar6;
      param_2 = plVar3;
LAB_003b0355:
      if ((bool)uVar10) {
        lVar5 = 1;
        lVar8 = plVar2[2];
        plVar9 = param_2;
        if (lVar8 != *plVar2) goto LAB_003b03c4;
        goto LAB_003b03bb;
      }
      plVar9 = *(longlong **)(lVar4 + 0x198);
      plVar6 = plVar7;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar5 = (*(code *)PTR___rust_alloc_00799000)();
    } while (lVar5 == 0);
    (*(code *)PTR_memcpy_00799008)();
    lVar8 = plVar2[2];
    if (lVar8 == *plVar2) {
LAB_003b03bb:
      (*(code *)PTR_grow_one_00799328)();
    }
LAB_003b03c4:
    lVar4 = plVar2[1];
    *(longlong **)(lVar4 + lVar8 * 0x18) = plVar3;
    *(longlong *)(lVar4 + 8 + lVar8 * 0x18) = lVar5;
    *(longlong **)(lVar4 + 0x10 + lVar8 * 0x18) = plVar3;
    plVar2[2] = lVar8 + 1;
    if (param_2[1] != -1) {
      plVar2 = (longlong *)param_2[3];
      uVar10 = plVar2 == (longlong *)0x0;
      if (-1 < (longlong)plVar2) goto LAB_003b0412;
      do {
        uVar10 = 1;
        (*(code *)PTR_handle_error_00798ff0)();
        plVar9 = plVar2;
LAB_003b0412:
        if ((bool)uVar10) {
          lVar5 = 1;
          lVar8 = plVar7[2];
          if (lVar8 != *plVar7) goto LAB_003b046d;
          goto LAB_003b0465;
        }
        plVar9 = (longlong *)param_2[2];
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar5 = (*(code *)PTR___rust_alloc_00799000)();
      } while (lVar5 == 0);
      (*(code *)PTR_memcpy_00799008)();
      lVar8 = plVar7[2];
      if (lVar8 == *plVar7) {
LAB_003b0465:
        <alloc[12e961f32105355]::raw_vec::RawVec<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
        ::grow_one(plVar7,plVar9);
      }
LAB_003b046d:
      lVar4 = plVar7[1];
      *(longlong **)(lVar4 + lVar8 * 0x18) = plVar2;
      *(longlong *)(lVar4 + 8 + lVar8 * 0x18) = lVar5;
      *(longlong **)(lVar4 + 0x10 + lVar8 * 0x18) = plVar2;
      plVar7[2] = lVar8 + 1;
    }
  }
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),cVar1 != '\0');
}



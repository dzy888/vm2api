// 0038c480 set_tools

/* <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::set_tools */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::set_tools
          (longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  int *local_48;
  int *local_40;
  byte local_38;
  
  uVar11 = <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::ClientTool>,<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec_as_core[c0acaeba6ab4c2e0]::convert::From<&craggemini_core[66f3c71560d70857]::tools::ClientTool>>::from>>>
           ::from_iter(&local_68,param_2,param_3 * 0xa8 + param_2);
  piVar1 = (int *)(param_1 + 0x60);
  LOCK();
  bVar10 = *(int *)(param_1 + 0x60) == 0;
  if (bVar10) {
    *(int *)(param_1 + 0x60) = 1;
  }
  UNLOCK();
  if (!bVar10) {
    uVar11 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
    cVar4 = *(char *)(param_1 + 100);
    pcVar3 = (code *)PTR_bcmp_00799020;
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
    cVar4 = *(char *)(param_1 + 100);
    uVar11 = extraout_XMM0_Da_02;
    pcVar3 = (code *)PTR_bcmp_00799020;
  }
  PTR_bcmp_00799020 = pcVar3;
  if (cVar4 != '\0') {
    local_40 = piVar1;
    local_38 = bVar5;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_869a44742910931491f4b62d80901a16_50_llvm_763634721200370616,&local_40,
               &PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_00787910);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar7 = *(longlong *)(param_1 + 0x78);
  local_48 = piVar1;
  if (lVar7 == local_58) {
    if (lVar7 != 0) {
      lVar8 = CONCAT44(uStack_5c,uStack_60) + -0x20;
      lVar9 = *(longlong *)(param_1 + 0x70) + 0x60;
      do {
        if ((((*(longlong *)(lVar9 + -0x38) != *(longlong *)(lVar8 + 0x48)) ||
             (iVar6 = (*pcVar3)(), uVar11 = extraout_XMM0_Da, iVar6 != 0)) ||
            (*(longlong *)(lVar9 + -8) != *(longlong *)(lVar8 + 0x78))) ||
           (iVar6 = (*pcVar3)(), uVar11 = extraout_XMM0_Da_00, iVar6 != 0)) goto LAB_0038c573;
        lVar8 = lVar8 + 0x80;
        cVar4 = <serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>
                ::eq(lVar9,lVar8);
        uVar11 = extraout_XMM0_Da_01;
        if (cVar4 == '\0') goto LAB_0038c573;
        lVar9 = lVar9 + 0x80;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(ulonglong *)(param_1 + 0x10) <= *(ulonglong *)(param_1 + 0x18)) {
      lVar7 = *(longlong *)(param_1 + 0x10);
      if (((bVar5 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), uVar11 = extraout_XMM0_Da_03,
         cVar4 == '\0')) {
        *(undefined1 *)(param_1 + 100) = 1;
      }
      LOCK();
      iVar6 = *local_48;
      *local_48 = 0;
      UNLOCK();
      if (iVar6 == 2) {
        uVar11 = (*(code *)PTR_wake_00799010)();
      }
      lVar8 = CONCAT44(uStack_5c,uStack_60);
      for (lVar9 = local_58 + 1; lVar9 != 1; lVar9 = lVar9 + -1) {
        uVar11 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <craggemini_core[66f3c71560d70857]::mcp::McpToolSpec>(lVar8);
        lVar8 = lVar8 + 0x80;
      }
      if (CONCAT44(uStack_64,local_68) == 0) {
        return lVar7;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
      return lVar7;
    }
  }
LAB_0038c573:
  lVar7 = *(longlong *)(param_1 + 0x70);
  for (lVar8 = *(longlong *)(param_1 + 0x78) + 1; lVar8 != 1; lVar8 = lVar8 + -1) {
    uVar11 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
             <craggemini_core[66f3c71560d70857]::mcp::McpToolSpec>(lVar7);
    lVar7 = lVar7 + 0x80;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
  }
  *(longlong *)(param_1 + 0x78) = local_58;
  *(undefined4 *)(param_1 + 0x68) = local_68;
  *(undefined4 *)(param_1 + 0x6c) = uStack_64;
  *(undefined4 *)(param_1 + 0x70) = uStack_60;
  *(undefined4 *)(param_1 + 0x74) = uStack_5c;
  LOCK();
  plVar2 = (longlong *)(param_1 + 0x10);
  lVar7 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (((bVar5 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
    *(undefined1 *)(param_1 + 100) = 1;
  }
  LOCK();
  iVar6 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = 0;
  UNLOCK();
  if (iVar6 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  (*(code *)PTR_notify_waiters_00799550)();
  return lVar7 + 1;
}



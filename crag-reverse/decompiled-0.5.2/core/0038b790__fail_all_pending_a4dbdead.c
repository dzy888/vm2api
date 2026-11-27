// 0038b790 fail_all_pending

/* <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::fail_all_pending */

void __rustcall
<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::fail_all_pending
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined *puVar9;
  char cVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  int *local_70;
  byte local_68;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  piVar1 = (int *)(param_1 + 0x60);
  LOCK();
  bVar16 = *(int *)(param_1 + 0x60) == 0;
  if (bVar16) {
    *(int *)(param_1 + 0x60) = 1;
  }
  UNLOCK();
  local_88 = param_2;
  local_80 = param_3;
  if (!bVar16) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar9 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_68 = 0;
    cVar10 = *(char *)(param_1 + 100);
  }
  else {
    local_68 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_68 = local_68 ^ 1;
    cVar10 = *(char *)(param_1 + 100);
  }
  if (cVar10 != '\0') {
    local_70 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_869a44742910931491f4b62d80901a16_50_llvm_763634721200370616,&local_70,
               &PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_00787880);
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  plVar13 = *(longlong **)(param_1 + 0x88);
  lVar4 = *(longlong *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 8;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (((local_68 == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) &&
     (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
    *(undefined1 *)(param_1 + 100) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  plVar11 = plVar13 + lVar4 * 10;
  local_a8 = plVar13;
  local_a0 = plVar13;
  local_98 = uVar3;
  local_90 = plVar11;
  if (lVar4 != 0) {
    do {
      plVar15 = plVar13 + 10;
      lVar4 = *plVar13;
      if (lVar4 == -1) goto LAB_0038b9cf;
      lVar5 = plVar13[3];
      lVar6 = plVar13[6];
      lVar7 = plVar13[9];
      local_78 = lVar7;
      <craggemini_core[66f3c71560d70857]::mcp::McpToolResult>::text::<&str>
                (&local_70,local_88,local_80,1);
      <tokio[d7d91d38da47d894]::sync::oneshot::Sender<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>
      ::send(&local_50,lVar7,&local_70);
      lVar7 = local_50;
      if (local_50 != -1) {
        lVar12 = local_48;
        for (lVar14 = local_40 + 1; lVar14 != 1; lVar14 = lVar14 + -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (lVar12);
          lVar12 = lVar12 + 0x20;
        }
        if (lVar7 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      if (lVar4 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (lVar5 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (lVar6 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      plVar13 = plVar15;
    } while (plVar15 != plVar11);
    plVar15 = plVar11;
LAB_0038b9cf:
    local_a0 = plVar15;
  }
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::ParkedCall>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_a8);
  return;
}



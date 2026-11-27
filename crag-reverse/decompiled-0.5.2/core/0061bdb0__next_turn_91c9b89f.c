// 0061bdb0 next_turn

/* <craggemini_core[66f3c71560d70857]::server::Runtime>::next_turn */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::server::Runtime>::next_turn
          (undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined *puVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  bool bVar13;
  longlong local_b38 [113];
  longlong local_7b0;
  uint local_7a8;
  longlong *local_7a0;
  undefined8 local_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined8 local_778;
  undefined1 local_3d8 [936];
  
  piVar1 = (int *)(param_2 + 0x310);
  LOCK();
  bVar13 = *(int *)(param_2 + 0x310) == 0;
  if (bVar13) {
    *(int *)(param_2 + 0x310) = 1;
  }
  UNLOCK();
  if (!bVar13) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar12 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar7 = *(char *)(param_2 + 0x314);
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
    cVar7 = *(char *)(param_2 + 0x314);
  }
  if (cVar7 != '\0') {
    uVar10 = (uint)uStack_780 >> 8;
    uStack_780 = CONCAT31((int3)uVar10,bVar8);
    local_788 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_282_llvm_10049508496007902178,&local_788,
               &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_476_llvm_10049508496007902178);
LAB_0061c172:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  cVar7 = (*(code *)PTR_is_cancelled_00799260)();
  puVar6 = PTR_memcpy_00799008;
  if ((cVar7 == '\0') && (*(int *)(param_2 + 1000) != 0)) {
    lVar9 = *(longlong *)(param_2 + 0x348);
    if (lVar9 != 0) {
      do {
        lVar3 = *(longlong *)(param_2 + 0x340);
        uVar11 = *(ulonglong *)(param_2 + 0x330);
        if (lVar3 + 1U < uVar11) {
          uVar11 = 0;
        }
        *(ulonglong *)(param_2 + 0x340) = (lVar3 - uVar11) + 1;
        *(longlong *)(param_2 + 0x348) = lVar9 + -1;
        lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x338) + lVar3 * 0x3b0);
        (*(code *)puVar6)(lVar3,0x3a8);
        if (lVar9 == 2) break;
        uVar10 = 0x3a8;
        local_b38[0] = lVar9;
        (*(code *)puVar6)();
        cVar7 = (*(code *)PTR_is_cancelled_00799260)();
        if (cVar7 == '\0') {
          lVar9 = (*(code *)PTR_now_00799170)();
          if (lVar9 == local_7b0) {
            if (local_7a8 <= uVar10) {
LAB_0061bf59:
              (*(code *)puVar6)(local_7b0,0x3b0);
              <craggemini_core[66f3c71560d70857]::server::Turn>::settle_err
                        (&local_788,
                         &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_395_llvm_10049508496007902178);
              goto LAB_0061be88;
            }
          }
          else if (local_7b0 <= lVar9) goto LAB_0061bf59;
          (*(code *)PTR_clone_00798fd0)();
          <craggemini_core[66f3c71560d70857]::admission::BoundedSeen>::insert
                    (param_2 + 0x370,&local_788);
          (*(code *)PTR_clone_00798fd0)();
          LOCK();
          lVar9 = *local_7a0;
          *local_7a0 = *local_7a0 + 1;
          UNLOCK();
          if (*local_7a0 == 0 || SCARRY8(lVar9,1) != *local_7a0 < 0) goto LAB_0061c172;
          if (*(longlong *)(param_2 + 0x3c8) != -1) {
            if (*(longlong *)(param_2 + 0x3c8) != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)((undefined4)local_788,1);
            }
            plVar4 = *(longlong **)(param_2 + 0x3e0);
            LOCK();
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
              <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
              ::drop_slow(param_2 + 0x3e0);
            }
          }
          *(undefined8 *)(param_2 + 0x3d8) = local_778;
          *(undefined4 *)(param_2 + 0x3c8) = (undefined4)local_788;
          *(undefined4 *)(param_2 + 0x3cc) = local_788._4_4_;
          *(undefined4 *)(param_2 + 0x3d0) = uStack_780;
          *(undefined4 *)(param_2 + 0x3d4) = uStack_77c;
          *(longlong **)(param_2 + 0x3e0) = local_7a0;
          (*(code *)PTR_memcpy_00799008)((undefined4)local_788,0x3b0);
          puVar12 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
          if (bVar8 != 0) goto LAB_0061bf94;
          goto LAB_0061bf87;
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::Turn>
                  (local_b38,local_3d8);
LAB_0061be88:
        lVar9 = *(longlong *)(param_2 + 0x348);
      } while (lVar9 != 0);
    }
    *param_1 = 2;
    if (((bVar8 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
      *(undefined1 *)(param_2 + 0x314) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
  }
  else {
    *param_1 = 2;
    if (bVar8 == 0) {
LAB_0061bf87:
      if (((*puVar12 & 0x7fffffffffffffff) != 0) &&
         (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
        *(undefined1 *)(param_2 + 0x314) = 1;
      }
    }
LAB_0061bf94:
    LOCK();
    iVar2 = *(int *)(param_2 + 0x310);
    *(int *)(param_2 + 0x310) = 0;
    UNLOCK();
  }
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return param_1;
}



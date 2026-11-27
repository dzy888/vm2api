// 007594f0 vars_os

/* WARNING: Removing unreachable block (ram,0x0075961a) */
/* WARNING: Removing unreachable block (ram,0x00759515) */
/* std[6c98fd8553dbae28]::env::vars_os */

undefined8 * __rustcall std[6c98fd8553dbae28]::env::vars_os(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_48;
  longlong local_38;
  
  if (sys::env::unix::ENV_LOCK < 0x3ffffffe) {
    sys::env::unix::ENV_LOCK = sys::env::unix::ENV_LOCK + 1;
    LOCK();
    UNLOCK();
  }
  else {
    (*(code *)PTR_read_contended_0079ad80)();
  }
  plVar8 = *(longlong **)PTR_environ_0079ae78;
  if (plVar8 == (longlong *)0x0) {
    local_48 = 0;
  }
  else {
    lVar7 = *plVar8;
    if (lVar7 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = 0;
      pcVar4 = (code *)PTR_strlen_0079aa38;
      do {
        uVar3 = (*pcVar4)();
        if (uVar3 != 0) {
          lVar5 = uVar3 - 1;
          if (uVar3 < 0x11) {
            lVar9 = 0;
            if (lVar5 != 0) {
              do {
                if (*(char *)(lVar7 + 1 + lVar9) == '=') goto LAB_00759650;
                lVar9 = lVar9 + 1;
              } while (lVar5 != lVar9);
            }
          }
          else {
            lVar7 = (*(code *)PTR_memchr_aligned_00799490)();
            lVar9 = lVar5;
            if (lVar7 == 1) {
LAB_00759650:
              uVar1 = lVar9 + 1;
              if (uVar3 < uVar1) {
                (*(code *)PTR_slice_index_fail_007993c8)
                          (&PTR_s__rustc_48a229ceaefd4985c50990b14_007966a8,uVar3);
                goto LAB_00759826;
              }
              if (uVar1 == 0) {
                local_38 = 1;
                if (uVar3 != 0) {
LAB_007596b6:
                  lVar7 = uVar3 - (lVar9 + 2);
                  if (lVar7 == 0) {
                    lVar5 = 1;
                    lVar7 = 0;
                  }
                  else {
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    lVar5 = (*(code *)PTR___rust_alloc_00799000)();
                    if (lVar5 == 0) {
                      (*(code *)PTR_handle_error_00798ff0)();
                      goto LAB_00759826;
                    }
                    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar7);
                  }
                  if (local_48 == 0) {
                    (*(code *)PTR_grow_one_0079abe8)();
                  }
                  lVar9 = local_48 * 0x30;
                  uStack_98 = (undefined4)local_38;
                  uStack_94 = (undefined4)((ulonglong)local_38 >> 0x20);
                  *(longlong *)(lVar9 + 0x28) = lVar5;
                  *(longlong *)(lVar9 + 0x30) = lVar7;
                  *(ulonglong *)(lVar9 + 0x18) = uVar1;
                  *(longlong *)(lVar9 + 0x20) = lVar7;
                  *(ulonglong *)(lVar9 + 8) = uVar1;
                  *(undefined4 *)(lVar9 + 0x10) = uStack_98;
                  *(undefined4 *)(lVar9 + 0x14) = uStack_94;
                  local_48 = local_48 + 1;
                  pcVar4 = (code *)PTR_strlen_0079aa38;
                  goto LAB_007595ca;
                }
              }
              else {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                local_38 = (*(code *)PTR___rust_alloc_00799000)();
                if (local_38 == 0) {
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_00759826;
                }
                (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,uVar1);
                if (uVar1 < uVar3) goto LAB_007596b6;
              }
              (*(code *)PTR_slice_index_fail_007993c8)
                        (&PTR_s__rustc_48a229ceaefd4985c50990b14_00796690,uVar3);
LAB_00759826:
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
          }
        }
LAB_007595ca:
        lVar7 = plVar8[1];
        plVar8 = plVar8 + 1;
      } while (lVar7 != 0);
    }
  }
  LOCK();
  iVar2 = sys::env::unix::ENV_LOCK - 1;
  UNLOCK();
  uVar6 = sys::env::unix::ENV_LOCK - 1;
  sys::env::unix::ENV_LOCK = iVar2;
  if (SBORROW4(0,uVar6 & 0xbfffffff)) {
    (*(code *)PTR_wake_writer_or_readers_0079a7c8)();
  }
  *param_1 = 8;
  param_1[1] = 8;
  param_1[2] = 0;
  param_1[3] = local_48 * 0x30 + 8;
  return param_1;
}



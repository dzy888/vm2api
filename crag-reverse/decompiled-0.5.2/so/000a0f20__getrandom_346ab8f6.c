// 000a0f20 getrandom

/* std[6c98fd8553dbae28]::sys::random::linux::getrandom */

void __rustcall
std[6c98fd8553dbae28]::sys::random::linux::getrandom
          (ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined **ppuVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  undefined **unaff_R12;
  undefined **ppuVar13;
  bool bVar14;
  uint local_1f0;
  undefined2 uStack_1ec;
  undefined1 uStack_1ea;
  uint uStack_1e9;
  undefined1 uStack_1e5;
  uint uStack_1e4;
  int *local_1e0;
  code *local_1d8;
  int local_70 [2];
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined **local_48;
  int local_40;
  uint local_3c;
  undefined1 *local_38;
  
  puVar4 = PTR_getrandom_000c44a8;
  puVar3 = PTR_syscall_000c4110;
  ppuVar13 = (undefined **)(param_3 & 0xffffffff);
  if (getrandom::GETRANDOM_AVAILABLE != '\0') {
    if (param_2 != 0) {
      uVar10 = param_1;
      if ((char)ppuVar13 == '\0') {
        if (PTR_getrandom_000c44a8 == (undefined *)0x0) {
          do {
            local_40 = 0;
            uVar10 = (*(code *)puVar3)(0,param_2);
            if (uVar10 == 0xffffffffffffffff) {
              unaff_R12 = (undefined **)(*(code *)PTR___errno_location_000c3cf0)();
LAB_000a11a0:
              param_1 = 0x13e;
              iVar6 = *(int *)unaff_R12;
              uVar10 = (ulonglong)(iVar6 - 1U);
              param_4 = uVar10;
              if (iVar6 - 1U < 0x26) {
                param_4 = (longlong)&switchD_000a11be::switchdataD_00015478 +
                          (longlong)(int)(&switchD_000a11be::switchdataD_00015478)[uVar10];
                switch(uVar10) {
                case 0:
                case 0x25:
                  goto switchD_000a0fc0_caseD_0;
                default:
                  break;
                case 3:
                  goto switchD_000a11be_caseD_3;
                case 10:
                  goto switchD_000a0fc0_caseD_a;
                }
              }
              goto switchD_000a0fc0_caseD_1;
            }
LAB_000a1181:
            if (param_2 < uVar10) goto LAB_000a1413;
            param_2 = param_2 - uVar10;
          } while (param_2 != 0);
        }
        else {
          do {
            local_40 = 0;
            uVar10 = (*(code *)puVar4)();
            if (uVar10 == 0xffffffffffffffff) {
              unaff_R12 = (undefined **)(*(code *)PTR___errno_location_000c3cf0)();
LAB_000a1121:
              iVar6 = *(int *)unaff_R12;
              uVar10 = (ulonglong)(iVar6 - 1U);
              param_4 = uVar10;
              if (iVar6 - 1U < 0x26) {
                param_4 = (longlong)&switchD_000a113f::switchdataD_000153e0 +
                          (longlong)(int)(&switchD_000a113f::switchdataD_000153e0)[uVar10];
                switch(uVar10) {
                case 0:
                case 0x25:
                  goto switchD_000a0fc0_caseD_0;
                default:
                  break;
                case 3:
                  goto switchD_000a113f_caseD_3;
                case 10:
                  goto switchD_000a0fc0_caseD_a;
                }
              }
              goto switchD_000a0fc0_caseD_1;
            }
LAB_000a1102:
            if (param_2 < uVar10) goto LAB_000a1413;
            param_1 = param_1 + uVar10;
            param_2 = param_2 - uVar10;
          } while (param_2 != 0);
        }
      }
      else {
        do {
          if (PTR_getrandom_000c44a8 == (undefined *)0x0) {
            bVar14 = getrandom::GRND_INSECURE_AVAILABLE == '\0';
            local_40 = (uint)!bVar14 * 3 + 1;
            uVar7 = (*(code *)PTR_syscall_000c4110)(local_40,param_2);
            if (uVar7 == 0xffffffffffffffff) {
              ppuVar9 = (undefined **)(*(code *)PTR___errno_location_000c3cf0)();
              do {
                param_1 = 0x13e;
                iVar6 = *(int *)ppuVar9;
                uVar7 = (ulonglong)(iVar6 - 1U);
                param_4 = uVar7;
                if (0x25 < iVar6 - 1U) goto switchD_000a0fc0_caseD_1;
                param_4 = (longlong)&switchD_000a1086::switchdataD_000155a8 +
                          (longlong)(int)(&switchD_000a1086::switchdataD_000155a8)[uVar7];
                switch(uVar7) {
                case 0:
                case 0x25:
                  goto switchD_000a0fc0_caseD_0;
                default:
                  goto switchD_000a0fc0_caseD_1;
                case 3:
                  break;
                case 10:
                  goto switchD_000a0fc0_caseD_a;
                case 0x15:
                  if (bVar14) goto LAB_000a1472;
                  getrandom::GRND_INSECURE_AVAILABLE = '\0';
                }
                bVar14 = getrandom::GRND_INSECURE_AVAILABLE == '\0';
                local_40 = (uint)!bVar14 * 3 + 1;
                local_48 = ppuVar9;
                uVar7 = (*(code *)PTR_syscall_000c4110)(local_40,param_2);
                ppuVar9 = local_48;
              } while (uVar7 == 0xffffffffffffffff);
            }
          }
          else {
            bVar14 = getrandom::GRND_INSECURE_AVAILABLE == '\0';
            local_40 = (uint)!bVar14 * 3 + 1;
            uVar7 = (*(code *)PTR_getrandom_000c44a8)();
            if (uVar7 == 0xffffffffffffffff) {
              piVar8 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
              do {
                iVar6 = *piVar8;
                uVar7 = (ulonglong)(iVar6 - 1U);
                param_4 = uVar7;
                if (0x25 < iVar6 - 1U) goto switchD_000a0fc0_caseD_1;
                param_4 = (longlong)&switchD_000a0fc0::switchdataD_00015510 +
                          (longlong)(int)(&switchD_000a0fc0::switchdataD_00015510)[uVar7];
                param_1 = uVar10;
                switch(uVar7) {
                case 0:
                case 0x25:
                  goto switchD_000a0fc0_caseD_0;
                default:
                  goto switchD_000a0fc0_caseD_1;
                case 3:
                  break;
                case 10:
                  goto switchD_000a0fc0_caseD_a;
                case 0x15:
                  if (bVar14) goto LAB_000a1472;
                  getrandom::GRND_INSECURE_AVAILABLE = '\0';
                }
                bVar14 = getrandom::GRND_INSECURE_AVAILABLE == '\0';
                local_40 = (uint)!bVar14 * 3 + 1;
                uVar7 = (*(code *)PTR_getrandom_000c44a8)();
                unaff_R12 = ppuVar13;
              } while (uVar7 == 0xffffffffffffffff);
            }
          }
          if (param_2 < uVar7) goto LAB_000a1413;
          param_2 = param_2 - uVar7;
          uVar10 = uVar10 + uVar7;
        } while (param_2 != 0);
      }
    }
    return;
  }
LAB_000a11f4:
  if (((char)ppuVar13 != '\0') || (getrandom::URANDOM_READY != '\0')) {
LAB_000a1302:
    if (getrandom::DEVICE != 0) goto LAB_000a13fc;
LAB_000a1310:
    puVar3 = PTR_read_000c3d20;
    if (param_2 == 0) {
      return;
    }
    local_48 = &PTR_DAT_000c1508;
    do {
      param_1 = (*(code *)puVar3)();
      if (param_1 == 0xffffffffffffffff) {
        puVar11 = (uint *)(*(code *)PTR___errno_location_000c3cf0)();
        uVar1 = *puVar11;
        if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
          (*(code *)PTR_set_functions_inner_000c3d08)();
        }
        unaff_R12 = (undefined **)((ulonglong)uVar1 << 0x20 | 2);
        local_1f0 = 1;
        uStack_1ec = 0;
        uStack_1ea = 0;
        uStack_1e9 = 0x200;
        uStack_1e5 = 0;
        uStack_1e4 = uVar1;
        lVar12 = (*(code *)PTR_get_os_functions_000c3c18)();
        cVar5 = (**(code **)(lVar12 + 0x10))();
        if (cVar5 == '\0') goto LAB_000a14c7;
      }
      else {
        if (param_1 == 0) goto LAB_000a14cb;
        if (param_2 < param_1) goto LAB_000a13e6;
        param_2 = param_2 - param_1;
      }
      if (param_2 == 0) {
        return;
      }
    } while( true );
  }
  local_58 = 0x1b600000000;
  local_4c = 0;
  local_50 = 1;
  local_1f0 = 0x7665642f;
  uStack_1ec = 0x722f;
  uStack_1ea = 0x61;
  uStack_1e9 = 0x6d6f646e;
  uStack_1e5 = 0;
  (*(code *)PTR_from_bytes_with_nul_000c40a8)(param_4,0xc);
  if (local_70[0] == 1) {
    local_38 = &DAT_000c1618;
  }
  else {
    <std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c(&local_40,local_68,&local_58);
    puVar3 = PTR_poll_000c3c20;
    if (local_40 != 1) {
      local_1f0 = local_3c;
      uStack_1ec = 1;
      uStack_1ea = 0;
      uStack_1e9 = uStack_1e9 & 0xffffff00;
      do {
        if (getrandom::URANDOM_READY != '\0') {
LAB_000a12f9:
          param_1 = (ulonglong)local_3c;
          (*(code *)PTR_close_000c3ab8)();
          goto LAB_000a1302;
        }
        iVar6 = (*(code *)puVar3)();
        if (iVar6 != -1) {
          if (iVar6 == 1) {
            if (CONCAT11((undefined1)uStack_1e9,uStack_1ea) == 1) {
              getrandom::URANDOM_READY = '\x01';
              goto LAB_000a12f9;
            }
            (*(code *)PTR_<i16,i16>_000c4140)(0,&DAT_000164a4);
            goto LAB_000a153a;
          }
          break;
        }
        piVar8 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
      } while (*piVar8 == 4);
LAB_000a1429:
      (*(code *)PTR_panic_fmt_000c3e90)();
      goto LAB_000a153a;
    }
  }
  local_1f0 = (uint)local_38;
  uStack_1ec = (undefined2)((ulonglong)local_38 >> 0x20);
  uStack_1ea = (undefined1)((ulonglong)local_38 >> 0x30);
  uStack_1e9._0_1_ = (undefined1)((ulonglong)local_38 >> 0x38);
  (*(code *)PTR_unwrap_failed_000c3c78)
            (&PTR_<core[c0acaeba6ab4c2e0]::io::error::Error>_000c1808,&local_1f0,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_000c1e50);
LAB_000a153a:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
switchD_000a11be_caseD_3:
  local_40 = 0;
  uVar10 = (*(code *)puVar3)(0,param_2);
  if (uVar10 != 0xffffffffffffffff) goto LAB_000a1181;
  goto LAB_000a11a0;
switchD_000a113f_caseD_3:
  local_40 = 0;
  uVar10 = (*(code *)puVar4)();
  if (uVar10 != 0xffffffffffffffff) goto LAB_000a1102;
  goto LAB_000a1121;
LAB_000a1472:
  iVar6 = 0x16;
switchD_000a0fc0_caseD_1:
  local_1f0 = (uint)local_70;
  uStack_1ec = (undefined2)((ulonglong)local_70 >> 0x20);
  uStack_1ea = (undefined1)((ulonglong)local_70 >> 0x30);
  uStack_1e9._0_1_ = (undefined1)((ulonglong)local_70 >> 0x38);
  uStack_1e9 = CONCAT31(0xa58b0,(undefined1)uStack_1e9);
  uStack_1e5 = 0;
  uStack_1e4 = 0;
  local_1e0 = &local_40;
  local_1d8 = <u32_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
  local_70[0] = iVar6;
  (*(code *)PTR_panic_fmt_000c3e90)(param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1eb0);
LAB_000a14c7:
  local_48 = unaff_R12;
LAB_000a14cb:
  local_1f0 = (uint)local_48;
  uStack_1ec = (undefined2)((ulonglong)local_48 >> 0x20);
  uStack_1ea = (undefined1)((ulonglong)local_48 >> 0x30);
  uStack_1e9._0_1_ = (undefined1)((ulonglong)local_48 >> 0x38);
  (*(code *)PTR_unwrap_failed_000c3c78)
            (&PTR_<core[c0acaeba6ab4c2e0]::io::error::Error>_000c1808,&local_1f0,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_000c1e98);
  goto LAB_000a153a;
switchD_000a0fc0_caseD_a:
  if (local_40 != 1) {
    iVar6 = 0xb;
    goto switchD_000a0fc0_caseD_1;
  }
  goto LAB_000a11f4;
switchD_000a0fc0_caseD_0:
  getrandom::GETRANDOM_AVAILABLE = '\0';
  goto LAB_000a11f4;
LAB_000a1413:
  (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1ec8,param_2)
  ;
  goto LAB_000a1429;
LAB_000a13e6:
  (*(code *)PTR_slice_index_fail_000c3bb0)
            (&PTR_anon_a096e19ef5e60642f162739f9e865059_86_llvm_12347187141279222813_000c1520,
             param_2);
LAB_000a13fc:
  local_48 = (undefined **)
             <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::fs::File>>::
             initialize::
             <std[6c98fd8553dbae28]::sys::random::linux::getrandom::_closure_0_,core[c0acaeba6ab4c2e0]::io::error::Error>
                       (param_1);
  if (local_48 != (undefined **)0x0) goto LAB_000a14cb;
  goto LAB_000a1310;
}



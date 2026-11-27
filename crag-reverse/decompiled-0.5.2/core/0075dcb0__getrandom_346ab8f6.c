// 0075dcb0 getrandom

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
  
  puVar4 = PTR_getrandom_0079b0b0;
  puVar3 = PTR_syscall_00799e60;
  ppuVar13 = (undefined **)(param_3 & 0xffffffff);
  if (getrandom::GETRANDOM_AVAILABLE != '\0') {
    if (param_2 != 0) {
      uVar10 = param_1;
      if ((char)ppuVar13 == '\0') {
        if (PTR_getrandom_0079b0b0 == (undefined *)0x0) {
          do {
            local_40 = 0;
            uVar10 = (*(code *)puVar3)(0,param_2);
            if (uVar10 == 0xffffffffffffffff) {
              unaff_R12 = (undefined **)(*(code *)PTR___errno_location_007990a0)();
LAB_0075df30:
              param_1 = 0x13e;
              iVar6 = *(int *)unaff_R12;
              uVar10 = (ulonglong)(iVar6 - 1U);
              param_4 = uVar10;
              if (iVar6 - 1U < 0x26) {
                param_4 = (longlong)&switchD_0075df4e::switchdataD_001bf444 +
                          (longlong)(int)(&switchD_0075df4e::switchdataD_001bf444)[uVar10];
                switch(uVar10) {
                case 0:
                case 0x25:
                  goto switchD_0075dd50_caseD_0;
                default:
                  break;
                case 3:
                  goto switchD_0075df4e_caseD_3;
                case 10:
                  goto switchD_0075dd50_caseD_a;
                }
              }
              goto switchD_0075dd50_caseD_1;
            }
LAB_0075df11:
            if (param_2 < uVar10) goto LAB_0075e1a3;
            param_2 = param_2 - uVar10;
          } while (param_2 != 0);
        }
        else {
          do {
            local_40 = 0;
            uVar10 = (*(code *)puVar4)();
            if (uVar10 == 0xffffffffffffffff) {
              unaff_R12 = (undefined **)(*(code *)PTR___errno_location_007990a0)();
LAB_0075deb1:
              iVar6 = *(int *)unaff_R12;
              uVar10 = (ulonglong)(iVar6 - 1U);
              param_4 = uVar10;
              if (iVar6 - 1U < 0x26) {
                param_4 = (longlong)&switchD_0075decf::switchdataD_001bf3ac +
                          (longlong)(int)(&switchD_0075decf::switchdataD_001bf3ac)[uVar10];
                switch(uVar10) {
                case 0:
                case 0x25:
                  goto switchD_0075dd50_caseD_0;
                default:
                  break;
                case 3:
                  goto switchD_0075decf_caseD_3;
                case 10:
                  goto switchD_0075dd50_caseD_a;
                }
              }
              goto switchD_0075dd50_caseD_1;
            }
LAB_0075de92:
            if (param_2 < uVar10) goto LAB_0075e1a3;
            param_1 = param_1 + uVar10;
            param_2 = param_2 - uVar10;
          } while (param_2 != 0);
        }
      }
      else {
        do {
          if (PTR_getrandom_0079b0b0 == (undefined *)0x0) {
            bVar14 = getrandom::GRND_INSECURE_AVAILABLE == '\0';
            local_40 = (uint)!bVar14 * 3 + 1;
            uVar7 = (*(code *)PTR_syscall_00799e60)(local_40,param_2);
            if (uVar7 == 0xffffffffffffffff) {
              ppuVar9 = (undefined **)(*(code *)PTR___errno_location_007990a0)();
              do {
                param_1 = 0x13e;
                iVar6 = *(int *)ppuVar9;
                uVar7 = (ulonglong)(iVar6 - 1U);
                param_4 = uVar7;
                if (0x25 < iVar6 - 1U) goto switchD_0075dd50_caseD_1;
                param_4 = (longlong)&switchD_0075de16::switchdataD_001bf574 +
                          (longlong)(int)(&switchD_0075de16::switchdataD_001bf574)[uVar7];
                switch(uVar7) {
                case 0:
                case 0x25:
                  goto switchD_0075dd50_caseD_0;
                default:
                  goto switchD_0075dd50_caseD_1;
                case 3:
                  break;
                case 10:
                  goto switchD_0075dd50_caseD_a;
                case 0x15:
                  if (bVar14) goto LAB_0075e202;
                  getrandom::GRND_INSECURE_AVAILABLE = '\0';
                }
                bVar14 = getrandom::GRND_INSECURE_AVAILABLE == '\0';
                local_40 = (uint)!bVar14 * 3 + 1;
                local_48 = ppuVar9;
                uVar7 = (*(code *)PTR_syscall_00799e60)(local_40,param_2);
                ppuVar9 = local_48;
              } while (uVar7 == 0xffffffffffffffff);
            }
          }
          else {
            bVar14 = getrandom::GRND_INSECURE_AVAILABLE == '\0';
            local_40 = (uint)!bVar14 * 3 + 1;
            uVar7 = (*(code *)PTR_getrandom_0079b0b0)();
            if (uVar7 == 0xffffffffffffffff) {
              piVar8 = (int *)(*(code *)PTR___errno_location_007990a0)();
              do {
                iVar6 = *piVar8;
                uVar7 = (ulonglong)(iVar6 - 1U);
                param_4 = uVar7;
                if (0x25 < iVar6 - 1U) goto switchD_0075dd50_caseD_1;
                param_4 = (longlong)&switchD_0075dd50::switchdataD_001bf4dc +
                          (longlong)(int)(&switchD_0075dd50::switchdataD_001bf4dc)[uVar7];
                param_1 = uVar10;
                switch(uVar7) {
                case 0:
                case 0x25:
                  goto switchD_0075dd50_caseD_0;
                default:
                  goto switchD_0075dd50_caseD_1;
                case 3:
                  break;
                case 10:
                  goto switchD_0075dd50_caseD_a;
                case 0x15:
                  if (bVar14) goto LAB_0075e202;
                  getrandom::GRND_INSECURE_AVAILABLE = '\0';
                }
                bVar14 = getrandom::GRND_INSECURE_AVAILABLE == '\0';
                local_40 = (uint)!bVar14 * 3 + 1;
                uVar7 = (*(code *)PTR_getrandom_0079b0b0)();
                unaff_R12 = ppuVar13;
              } while (uVar7 == 0xffffffffffffffff);
            }
          }
          if (param_2 < uVar7) goto LAB_0075e1a3;
          param_2 = param_2 - uVar7;
          uVar10 = uVar10 + uVar7;
        } while (param_2 != 0);
      }
    }
    return;
  }
LAB_0075df84:
  if (((char)ppuVar13 != '\0') || (getrandom::URANDOM_READY != '\0')) {
LAB_0075e092:
    if (getrandom::DEVICE != 0) goto LAB_0075e18c;
LAB_0075e0a0:
    puVar3 = PTR_read_00799e98;
    if (param_2 == 0) {
      return;
    }
    local_48 = &PTR_DAT_00796300;
    do {
      param_1 = (*(code *)puVar3)();
      if (param_1 == 0xffffffffffffffff) {
        puVar11 = (uint *)(*(code *)PTR___errno_location_007990a0)();
        uVar1 = *puVar11;
        if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
          (*(code *)PTR_set_functions_inner_007990c0)();
        }
        unaff_R12 = (undefined **)((ulonglong)uVar1 << 0x20 | 2);
        local_1f0 = 1;
        uStack_1ec = 0;
        uStack_1ea = 0;
        uStack_1e9 = 0x200;
        uStack_1e5 = 0;
        uStack_1e4 = uVar1;
        lVar12 = (*(code *)PTR_get_os_functions_007992e0)();
        cVar5 = (**(code **)(lVar12 + 0x10))();
        if (cVar5 == '\0') goto LAB_0075e257;
      }
      else {
        if (param_1 == 0) goto LAB_0075e25b;
        if (param_2 < param_1) goto LAB_0075e176;
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
  (*(code *)PTR_from_bytes_with_nul_0079abd0)(param_4,0xc);
  if (local_70[0] == 1) {
    local_38 = &DAT_00796450;
  }
  else {
    <std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c(&local_40,local_68,&local_58);
    puVar3 = PTR_poll_00799b78;
    if (local_40 != 1) {
      local_1f0 = local_3c;
      uStack_1ec = 1;
      uStack_1ea = 0;
      uStack_1e9 = uStack_1e9 & 0xffffff00;
      do {
        if (getrandom::URANDOM_READY != '\0') {
LAB_0075e089:
          param_1 = (ulonglong)local_3c;
          (*(code *)PTR_close_00799030)();
          goto LAB_0075e092;
        }
        iVar6 = (*(code *)puVar3)();
        if (iVar6 != -1) {
          if (iVar6 == 1) {
            if (CONCAT11((undefined1)uStack_1e9,uStack_1ea) == 1) {
              getrandom::URANDOM_READY = '\x01';
              goto LAB_0075e089;
            }
            (*(code *)PTR_<i16,i16>_0079ac60)(0,&DAT_001c08ea);
            goto LAB_0075e2ca;
          }
          break;
        }
        piVar8 = (int *)(*(code *)PTR___errno_location_007990a0)();
      } while (*piVar8 == 4);
LAB_0075e1b9:
      (*(code *)PTR_panic_fmt_007991a8)();
      goto LAB_0075e2ca;
    }
  }
  local_1f0 = (uint)local_38;
  uStack_1ec = (undefined2)((ulonglong)local_38 >> 0x20);
  uStack_1ea = (undefined1)((ulonglong)local_38 >> 0x30);
  uStack_1e9._0_1_ = (undefined1)((ulonglong)local_38 >> 0x38);
  (*(code *)PTR_unwrap_failed_00799028)
            (&PTR_<core[c0acaeba6ab4c2e0]::io::error::Error>_007966d8,&local_1f0,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_00796f20);
LAB_0075e2ca:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
switchD_0075df4e_caseD_3:
  local_40 = 0;
  uVar10 = (*(code *)puVar3)(0,param_2);
  if (uVar10 != 0xffffffffffffffff) goto LAB_0075df11;
  goto LAB_0075df30;
switchD_0075decf_caseD_3:
  local_40 = 0;
  uVar10 = (*(code *)puVar4)();
  if (uVar10 != 0xffffffffffffffff) goto LAB_0075de92;
  goto LAB_0075deb1;
LAB_0075e202:
  iVar6 = 0x16;
switchD_0075dd50_caseD_1:
  local_1f0 = (uint)local_70;
  uStack_1ec = (undefined2)((ulonglong)local_70 >> 0x20);
  uStack_1ea = (undefined1)((ulonglong)local_70 >> 0x30);
  uStack_1e9._0_1_ = (undefined1)((ulonglong)local_70 >> 0x38);
  uStack_1e9 = CONCAT31(0x7652a0,(undefined1)uStack_1e9);
  uStack_1e5 = 0;
  uStack_1e4 = 0;
  local_1e0 = &local_40;
  local_1d8 = <u32_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
  local_70[0] = iVar6;
  (*(code *)PTR_panic_fmt_007991a8)(param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00796f80);
LAB_0075e257:
  local_48 = unaff_R12;
LAB_0075e25b:
  local_1f0 = (uint)local_48;
  uStack_1ec = (undefined2)((ulonglong)local_48 >> 0x20);
  uStack_1ea = (undefined1)((ulonglong)local_48 >> 0x30);
  uStack_1e9._0_1_ = (undefined1)((ulonglong)local_48 >> 0x38);
  (*(code *)PTR_unwrap_failed_00799028)
            (&PTR_<core[c0acaeba6ab4c2e0]::io::error::Error>_007966d8,&local_1f0,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_00796f68);
  goto LAB_0075e2ca;
switchD_0075dd50_caseD_a:
  if (local_40 != 1) {
    iVar6 = 0xb;
    goto switchD_0075dd50_caseD_1;
  }
  goto LAB_0075df84;
switchD_0075dd50_caseD_0:
  getrandom::GETRANDOM_AVAILABLE = '\0';
  goto LAB_0075df84;
LAB_0075e1a3:
  (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00796f98,param_2)
  ;
  goto LAB_0075e1b9;
LAB_0075e176:
  (*(code *)PTR_slice_index_fail_007993c8)
            (&PTR_anon_ed01ef58651a73351ccd2244bf431f77_42_llvm_1588049147593173555_00796318,param_2
            );
LAB_0075e18c:
  local_48 = (undefined **)
             <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::fs::File>>::
             initialize::
             <std[6c98fd8553dbae28]::sys::random::linux::getrandom::_closure_0_,core[c0acaeba6ab4c2e0]::io::error::Error>
                       (param_1);
  if (local_48 != (undefined **)0x0) goto LAB_0075e25b;
  goto LAB_0075e0a0;
}



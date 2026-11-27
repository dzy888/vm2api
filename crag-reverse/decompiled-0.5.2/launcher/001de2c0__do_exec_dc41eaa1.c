// 001de2c0 do_exec

/* WARNING: Type propagation algorithm not settling */
/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::do_exec */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::common::Command>::do_exec
          (longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  uint local_3c;
  uint *local_38;
  
  puVar5 = PTR_dup2_0021a930;
  puVar4 = PTR_get_os_functions_0021a0e8;
  local_3c = *param_2;
  local_50 = param_1;
  local_48 = param_3;
  local_38 = param_2;
  if (local_3c == 0) {
LAB_001de351:
    puVar5 = PTR_dup2_0021a930;
    puVar4 = PTR_get_os_functions_0021a0e8;
    if (local_38[2] == 0) {
LAB_001de3c4:
      puVar5 = PTR_dup2_0021a930;
      puVar4 = PTR_get_os_functions_0021a0e8;
      if (local_38[4] == 0) {
LAB_001de434:
        lVar10 = local_50;
        lVar12 = *(longlong *)(local_50 + 0xb0);
        if ((lVar12 == 0) || (iVar8 = (*(code *)PTR_setgroups_0021a938)(), iVar8 != -1)) {
          if ((*(char *)(lVar10 + 0x38) == '\0') ||
             (iVar8 = (*(code *)PTR_setgid_0021a940)(), iVar8 != -1)) {
            if (*(char *)(lVar10 + 0x30) != '\0') {
              if ((lVar12 == 0) && (iVar8 = (*(code *)PTR_setgroups_0021a938)(), iVar8 == -1)) {
                piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
                iVar8 = *piVar9;
                if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
                  (*(code *)PTR_set_functions_inner_00219f28)();
                }
                local_58 = (longlong)iVar8 << 0x20 | 2;
                uVar11 = local_58;
                puVar3 = local_38;
                if (iVar8 != 1) goto joined_r0x001de5cb;
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                          (&local_58,0);
              }
              iVar8 = (*(code *)PTR_setuid_0021a948)();
              if (iVar8 == -1) {
                piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
                lVar12 = (longlong)*piVar9;
                if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
                  (*(code *)PTR_set_functions_inner_00219f28)();
                }
                goto LAB_001de7ed;
              }
            }
            if ((*(longlong *)(lVar10 + 0xa0) == 0) ||
               (iVar8 = (*(code *)PTR_chroot_0021a880)(), iVar8 != -1)) {
              if ((*(longlong *)(lVar10 + 0x90) == 0) ||
                 (iVar8 = (*(code *)PTR_chdir_0021a7b0)(), iVar8 != -1)) {
                if ((*(char *)(lVar10 + 0x40) == '\0') ||
                   (iVar8 = (*(code *)PTR_setpgid_0021a950)(), iVar8 != -1)) {
                  if ((*(char *)(lVar10 + 0xc2) == '\x01') &&
                     (iVar8 = (*(code *)PTR_setsid_0021a958)(), iVar8 == -1)) {
                    piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
                    lVar12 = (longlong)*piVar9;
                    if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
                      (*(code *)PTR_set_functions_inner_00219f28)();
                    }
                  }
                  else {
                    if ((DAT_0021c908._4_1_ != '\0') ||
                       (lVar12 = (*(code *)PTR_signal_0021a960)(), lVar12 != -1)) {
                      lVar12 = *(longlong *)(lVar10 + 0x20);
                      lVar13 = *(longlong *)(lVar10 + 0x28) << 4;
                      do {
                        lVar6 = local_48;
                        if (lVar13 == 0) {
                          if (local_48 != 0) {
                            lVar12 = *(longlong *)PTR_environ_0021a928;
                            *(undefined8 *)PTR_environ_0021a928 = *(undefined8 *)(local_48 + 8);
                          }
                          uVar2 = *(undefined8 *)(lVar10 + 8);
                          (*(code *)PTR_execvp_0021a968)();
                          piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
                          iVar8 = *piVar9;
                          if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8)
                          {
                            (*(code *)PTR_set_functions_inner_00219f28)();
                          }
                          if (lVar6 != 0) {
                            *(longlong *)PTR_environ_0021a928 = lVar12;
                          }
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <std[6c98fd8553dbae28]::sys::process::unix::common::ChildPipes>
                                    (local_38,uVar2);
                          return (longlong)iVar8 << 0x20 | 2;
                        }
                        uVar11 = (**(code **)(*(longlong *)(lVar12 + 8) + 0x20))();
                        lVar12 = lVar12 + 0x10;
                        lVar13 = lVar13 + -0x10;
                        puVar3 = local_38;
                      } while (uVar11 == 0);
                      goto joined_r0x001de5cb;
                    }
                    piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
                    lVar12 = (longlong)*piVar9;
                    if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
                      (*(code *)PTR_set_functions_inner_00219f28)();
                    }
                  }
                }
                else {
                  piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
                  lVar12 = (longlong)*piVar9;
                  if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
                    (*(code *)PTR_set_functions_inner_00219f28)();
                  }
                }
              }
              else {
                piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
                lVar12 = (longlong)*piVar9;
                if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
                  (*(code *)PTR_set_functions_inner_00219f28)();
                }
              }
            }
            else {
              piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
              lVar12 = (longlong)*piVar9;
              if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
                (*(code *)PTR_set_functions_inner_00219f28)();
              }
            }
          }
          else {
            piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
            lVar12 = (longlong)*piVar9;
            if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
              (*(code *)PTR_set_functions_inner_00219f28)();
            }
          }
        }
        else {
          piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
          lVar12 = (longlong)*piVar9;
          if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
            (*(code *)PTR_set_functions_inner_00219f28)();
          }
        }
      }
      else {
        do {
          iVar8 = (*(code *)puVar5)();
          if (iVar8 != -1) goto LAB_001de434;
          piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
          lVar12 = (longlong)*piVar9;
          if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
            (*(code *)PTR_set_functions_inner_00219f28)();
          }
          lVar10 = (*(code *)puVar4)();
          cVar7 = (**(code **)(lVar10 + 0x10))();
        } while (cVar7 != '\0');
      }
    }
    else {
      do {
        iVar8 = (*(code *)puVar5)();
        if (iVar8 != -1) goto LAB_001de3c4;
        piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
        lVar12 = (longlong)*piVar9;
        if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
          (*(code *)PTR_set_functions_inner_00219f28)();
        }
        lVar10 = (*(code *)puVar4)();
        cVar7 = (**(code **)(lVar10 + 0x10))();
      } while (cVar7 != '\0');
    }
  }
  else {
    do {
      iVar8 = (*(code *)puVar5)();
      if (iVar8 != -1) goto LAB_001de351;
      piVar9 = (int *)(*(code *)PTR___errno_location_00219f18)();
      lVar12 = (longlong)*piVar9;
      if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
        (*(code *)PTR_set_functions_inner_00219f28)();
      }
      lVar10 = (*(code *)puVar4)();
      cVar7 = (**(code **)(lVar10 + 0x10))();
    } while (cVar7 != '\0');
  }
LAB_001de7ed:
  uVar11 = lVar12 << 0x20 | 2;
  puVar3 = local_38;
joined_r0x001de5cb:
  local_38 = puVar3;
  if (local_3c < 2) {
    uVar1 = puVar3[2];
  }
  else {
    (*(code *)PTR_close_00219d60)();
    uVar1 = puVar3[2];
  }
  if (uVar1 < 2) {
    uVar1 = puVar3[4];
  }
  else {
    (*(code *)PTR_close_00219d60)();
    uVar1 = puVar3[4];
  }
  if (1 < uVar1) {
    (*(code *)PTR_close_00219d60)();
  }
  return uVar11;
}



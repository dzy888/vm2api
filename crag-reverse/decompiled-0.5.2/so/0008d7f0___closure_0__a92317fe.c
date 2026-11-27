// 0008d7f0 {closure#0}

/* std[6c98fd8553dbae28]::thread::current::with_current_name::<std[6c98fd8553dbae28]::panicking::default_hook::{closure#0}::{closure#0},
   ()>::{closure#0} */

void __rustcall
std[6c98fd8553dbae28]::thread::current::with_current_name::
<std[6c98fd8553dbae28]::panicking::default_hook::{closure#0}::{closure#0},()>::_closure_0_
          (undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  longlong lVar6;
  int iVar7;
  longlong in_RAX;
  longlong *plVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined1 local_2b0 [512];
  undefined1 *local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  char *local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  char **local_70;
  code *local_68;
  longlong *local_60;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 local_40;
  code *local_38;
  
  lVar6 = main_thread::MAIN;
  if (param_2 == (longlong *)0x0) {
    if (main_thread::MAIN == 0) {
LAB_0008d86b:
      pcVar10 = (char *)0x0;
      goto LAB_0008d86d;
    }
    plVar8 = (longlong *)__tls_get_addr();
    lVar1 = *plVar8;
  }
  else {
    in_RAX = *param_2;
    pcVar10 = *(char **)(in_RAX + 0x18);
    if (pcVar10 != (char *)0x0) {
      in_RAX = *(longlong *)(in_RAX + 0x20) + -1;
      goto LAB_0008d86d;
    }
    if (main_thread::MAIN == 0) goto LAB_0008d86b;
    lVar1 = *(longlong *)(in_RAX + 0x10);
  }
  pcVar10 = (char *)0x0;
  if (lVar6 == lVar1) {
    pcVar10 = "main";
  }
  in_RAX = 4;
LAB_0008d86d:
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_80 = param_1[2];
  local_98 = &DAT_00015d00;
  if (pcVar10 != (char *)0x0) {
    local_98 = pcVar10;
  }
  local_78 = param_1[3];
  local_90 = 9;
  if (pcVar10 != (char *)0x0) {
    local_90 = in_RAX;
  }
  if (PTR_gettid_000c41e8 == (undefined *)0x0) {
    iVar7 = (*(code *)PTR_syscall_000c4110)();
  }
  else {
    iVar7 = (*(code *)PTR_gettid_000c41e8)();
  }
  local_88 = (longlong)iVar7;
  (*(code *)PTR_memset_000c3cd8)();
  puVar5 = PTR_fmt_000c3b68;
  local_a8 = 0x200;
  local_a0 = 0;
  local_70 = &local_98;
  local_68 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_60 = &local_88;
  local_58 = PTR_fmt_000c3b68;
  local_48 = <&core[c0acaeba6ab4c2e0]::panic::location::Location_as_core[c0acaeba6ab4c2e0]::fmt::Display>
             ::fmt;
  local_38 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_b0 = local_2b0;
  local_50 = uVar2;
  local_40 = uVar3;
  uVar9 = <core[c0acaeba6ab4c2e0]::io::cursor::Cursor<&mut[u8]>as_std[6c98fd8553dbae28]::io::Write>
          ::write_fmt(&local_b0,&DAT_00009d9e,&local_70);
  if (uVar9 == 0) {
    if (0x200 < local_a0) {
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c16c0,0x200);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar9 = (**(code **)(local_78 + 0x38))();
  }
  else {
    if ((1 < ((uint)uVar9 & 3) - 2) && ((uVar9 & 3) != 0)) {
      local_68 = (code *)(uVar9 - 1);
      local_70 = (char **)CONCAT71(local_70._1_7_,3);
      (*(code *)PTR_drop_000c3ae0)();
    }
    local_70 = &local_98;
    local_68 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_60 = &local_88;
    local_58 = puVar5;
    local_48 = <&core[c0acaeba6ab4c2e0]::panic::location::Location_as_core[c0acaeba6ab4c2e0]::fmt::Display>
               ::fmt;
    local_38 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_50 = uVar2;
    local_40 = uVar3;
    uVar9 = (**(code **)(local_78 + 0x48))(local_60,&local_70);
  }
  if (((uVar9 != 0) && (1 < ((uint)uVar9 & 3) - 2)) && ((uVar9 & 3) != 0)) {
    local_68 = (code *)(uVar9 - 1);
    local_70._1_7_ = (undefined7)((ulonglong)local_70 >> 8);
    local_70 = (char **)CONCAT71(local_70._1_7_,3);
    (*(code *)PTR_drop_000c3ae0)();
  }
  return;
}



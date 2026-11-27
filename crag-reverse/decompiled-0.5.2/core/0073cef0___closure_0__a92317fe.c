// 0073cef0 {closure#0}

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
  int iVar6;
  longlong in_RAX;
  ulonglong uVar7;
  char *pcVar8;
  longlong *in_FS_OFFSET;
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
  
  if (param_2 == (longlong *)0x0) {
    if (main_thread::MAIN == 0) {
LAB_0073cf6b:
      pcVar8 = (char *)0x0;
      goto LAB_0073cf6d;
    }
    lVar1 = *(longlong *)(*in_FS_OFFSET + -8);
  }
  else {
    in_RAX = *param_2;
    pcVar8 = *(char **)(in_RAX + 0x18);
    if (pcVar8 != (char *)0x0) {
      in_RAX = *(longlong *)(in_RAX + 0x20) + -1;
      goto LAB_0073cf6d;
    }
    if (main_thread::MAIN == 0) goto LAB_0073cf6b;
    lVar1 = *(longlong *)(in_RAX + 0x10);
  }
  pcVar8 = (char *)0x0;
  if (main_thread::MAIN == lVar1) {
    pcVar8 = "main";
  }
  in_RAX = 4;
LAB_0073cf6d:
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_80 = param_1[2];
  local_98 = &DAT_001bfdce;
  if (pcVar8 != (char *)0x0) {
    local_98 = pcVar8;
  }
  local_78 = param_1[3];
  local_90 = 9;
  if (pcVar8 != (char *)0x0) {
    local_90 = in_RAX;
  }
  if (PTR_gettid_0079acf0 == (undefined *)0x0) {
    iVar6 = (*(code *)PTR_syscall_00799e60)();
  }
  else {
    iVar6 = (*(code *)PTR_gettid_0079acf0)();
  }
  local_88 = (longlong)iVar6;
  (*(code *)PTR_memset_00799090)();
  puVar5 = PTR_fmt_007991f8;
  local_a8 = 0x200;
  local_a0 = 0;
  local_70 = &local_98;
  local_68 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_60 = &local_88;
  local_58 = PTR_fmt_007991f8;
  local_48 = <&core[c0acaeba6ab4c2e0]::panic::location::Location_as_core[c0acaeba6ab4c2e0]::fmt::Display>
             ::fmt;
  local_38 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_b0 = local_2b0;
  local_50 = uVar2;
  local_40 = uVar3;
  uVar7 = <core[c0acaeba6ab4c2e0]::io::cursor::Cursor<&mut[u8]>as_std[6c98fd8553dbae28]::io::Write>
          ::write_fmt(&local_b0,&DAT_00186ba4,&local_70);
  if (uVar7 == 0) {
    if (0x200 < local_a0) {
      (*(code *)PTR_slice_index_fail_007993c8)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_00796530,0x200);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = (**(code **)(local_78 + 0x38))();
  }
  else {
    if ((1 < ((uint)uVar7 & 3) - 2) && ((uVar7 & 3) != 0)) {
      local_68 = (code *)(uVar7 - 1);
      local_70 = (char **)CONCAT71(local_70._1_7_,3);
      (*(code *)PTR_drop_00799040)();
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
    uVar7 = (**(code **)(local_78 + 0x48))(local_60,&local_70);
  }
  if (((uVar7 != 0) && (1 < ((uint)uVar7 & 3) - 2)) && ((uVar7 & 3) != 0)) {
    local_68 = (code *)(uVar7 - 1);
    local_70._1_7_ = (undefined7)((ulonglong)local_70 >> 8);
    local_70 = (char **)CONCAT71(local_70._1_7_,3);
    (*(code *)PTR_drop_00799040)();
  }
  return;
}



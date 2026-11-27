// 00091220 new

/* <std[6c98fd8553dbae28]::sys::thread::unix::Thread>::new */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::sys::thread::unix::Thread>::new
          (ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined1 auVar8 [16];
  undefined1 local_60 [56];
  undefined **local_28;
  
  local_28._0_4_ = (*(code *)PTR_pthread_attr_init_000c4300)();
  if ((int)local_28 != 0) {
    (*(code *)PTR_<i32,i32>_000c4130)(0,"",param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c19a0)
    ;
    goto LAB_00091407;
  }
  uVar5 = 0x4000;
  if (std[6c98fd8553dbae28]::sys::thread::unix::min_stack_size::DLSYM != (code *)0x0) {
    if (std[6c98fd8553dbae28]::sys::thread::unix::min_stack_size::DLSYM ==
        (code *)Elf64_Ehdr_00000000.e_ident_magic_str) {
      std[6c98fd8553dbae28]::sys::thread::unix::min_stack_size::DLSYM =
           (code *)(*(code *)PTR_dlsym_000c4318)();
      uVar5 = 0x4000;
      if (std[6c98fd8553dbae28]::sys::thread::unix::min_stack_size::DLSYM == (code *)0x0)
      goto LAB_0009126c;
    }
    uVar5 = (*std[6c98fd8553dbae28]::sys::thread::unix::min_stack_size::DLSYM)();
  }
LAB_0009126c:
  if (param_1 < uVar5) {
    param_1 = uVar5;
  }
  local_28._0_4_ = (*(code *)PTR_pthread_attr_setstacksize_000c4308)();
  if ((int)local_28 == 0) {
LAB_000912e1:
    local_28 = (undefined **)0x0;
    uVar3 = (*(code *)PTR_pthread_create_000c4310)(param_2,new::thread_start);
    if (uVar3 == 0) {
      uVar6 = 0;
      ppuVar7 = local_28;
    }
    else {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<std[6c98fd8553dbae28]::thread::lifecycle::ThreadInit>>
                (param_2,local_60);
      if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
        (*(code *)PTR_set_functions_inner_000c3d08)();
      }
      uVar6 = 1;
      ppuVar7 = (undefined **)((ulonglong)uVar3 << 0x20 | 2);
    }
    iVar2 = (*(code *)PTR_pthread_attr_destroy_000c4128)();
    if (iVar2 == 0) {
LAB_00091353:
      auVar8._8_8_ = ppuVar7;
      auVar8._0_8_ = uVar6;
      return auVar8;
    }
    local_28._0_4_ = iVar2;
    (*(code *)PTR_<i32,i32>_000c4130)(0,"",param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1738)
    ;
  }
  else {
    if ((int)local_28 != 0x16) {
      (*(code *)PTR_<i32,i32>_000c4130)
                (0,&DAT_0000b924,param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1988);
      goto LAB_00091407;
    }
    lVar4 = (*(code *)PTR_sysconf_000c3f20)();
    iVar2 = (*(code *)PTR_pthread_attr_setstacksize_000c4308)();
    if (iVar2 == 0) goto LAB_000912e1;
    local_28._0_4_ = (*(code *)PTR_pthread_attr_destroy_000c4128)();
    if ((int)local_28 == 0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<std[6c98fd8553dbae28]::thread::lifecycle::ThreadInit>>
                (param_2,(param_1 + lVar4) - 1 & -lVar4);
      uVar6 = 1;
      ppuVar7 = &PTR_DAT_000c1970;
      goto LAB_00091353;
    }
  }
  (*(code *)PTR_<i32,i32>_000c4130)(0,"",param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1738);
LAB_00091407:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// 0009e320 _set_extension

/* WARNING: Removing unreachable block (ram,0x0009e445) */
/* <std[6c98fd8553dbae28]::path::PathBuf>::_set_extension */

undefined8 __rustcall
<std[6c98fd8553dbae28]::path::PathBuf>::_set_extension
          (char *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  short *psVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char **ppcVar8;
  char *unaff_R12;
  char *unaff_R13;
  char *pcVar9;
  char *pcVar10;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_78;
  char *local_70;
  undefined1 local_68;
  undefined2 local_40;
  undefined1 local_3e;
  char *local_38;
  
  local_b0 = param_2;
  local_a8 = param_3;
  if (param_3 != (char *)0x0) {
    psVar4 = (short *)0x0;
    do {
      if (param_2[(longlong)psVar4] == '/') {
        local_78 = (char *)&local_b0;
        local_70 = PTR_fmt_000c43b8;
        ppcVar8 = &local_78;
        (*(code *)PTR_panic_fmt_000c3e90)(param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1c70);
        goto LAB_0009e586;
      }
      psVar4 = (short *)((longlong)psVar4 + 1);
    } while ((short *)param_3 != psVar4);
  }
  unaff_R12 = *(char **)(param_1 + 8);
  pcVar9 = *(char **)(param_1 + 0x10);
  if (pcVar9 == (char *)0x0) {
    local_3e = false;
  }
  else {
    local_3e = *unaff_R12 == '/';
  }
  local_68 = 0xff;
  local_40 = 0x201;
  pcVar6 = param_3;
  local_78 = unaff_R12;
  local_70 = pcVar9;
  (*(code *)PTR_next_back_000c40d0)();
  if (((char)local_b0 == -1) || ((char)local_b0 != '\t')) {
    return 0;
  }
  pcVar10 = local_a8;
  if ((local_a0 == Elf64_Ehdr_00000000.e_ident_magic_str + 1) && (*(short *)local_a8 == 0x2e2e)) {
    pcVar6 = Elf64_Ehdr_00000000.e_ident_magic_str + 1;
    pcVar7 = (char *)0x0;
    if (local_a8 != (char *)0x0) {
      pcVar7 = local_a8;
    }
  }
  else {
    pcVar7 = local_a0;
    do {
      if (pcVar7 == (char *)0x0) {
        pcVar7 = local_a8;
        pcVar10 = (char *)0x0;
        goto joined_r0x0009e436;
      }
      pcVar6 = pcVar7 + -1;
      pcVar1 = pcVar7 + (longlong)(((Elf64_Ehdr *)(local_a8 + -1))->e_ident_magic_str + -1);
      pcVar7 = pcVar6;
    } while (*pcVar1 != '.');
    if (pcVar6 == (char *)0x0) {
      pcVar6 = local_a0;
      pcVar7 = (char *)0x0;
      if (local_a8 != (char *)0x0) {
        pcVar7 = local_a8;
      }
    }
    else {
      local_a0 = local_a0 + ~(ulonglong)pcVar6;
      pcVar7 = local_a8 + (longlong)pcVar6 + 1;
      if (local_a8 != (char *)0x0) {
        pcVar7 = local_a8;
      }
    }
  }
joined_r0x0009e436:
  if (pcVar7 == (char *)0x0) {
    return 0;
  }
  if (pcVar10 == (char *)0x0) {
    pcVar6 = local_a0;
  }
  pcVar10 = pcVar7 + (longlong)pcVar6 + -(longlong)unaff_R12;
  local_38 = param_1;
  if (pcVar9 < pcVar10) {
joined_r0x0009e4c0:
    param_1 = pcVar9;
    if (param_3 == (char *)0x0) {
      return 1;
    }
    unaff_R13 = param_3 + 1;
    ppcVar8 = *(char ***)local_38;
    if ((undefined1 *)((longlong)ppcVar8 - (longlong)param_1) < unaff_R13) {
LAB_0009e586:
      pcVar9 = unaff_R13 + (longlong)param_1;
      if (CARRY8((ulonglong)unaff_R13,(ulonglong)param_1)) goto LAB_0009e64d;
      <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
                (&local_78,ppcVar8,unaff_R12,pcVar9,1,1);
      if ((int)local_78 == 1) goto LAB_0009e655;
      *(char **)(local_38 + 8) = local_70;
      *(char **)local_38 = pcVar9;
      unaff_R12 = local_70;
      if (pcVar9 != param_1) goto LAB_0009e4ec;
    }
    else if (ppcVar8 != (char **)param_1) goto LAB_0009e4ec;
    pcVar9 = local_38;
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(local_38,param_1,1,1,1);
    param_1 = *(char **)(pcVar9 + 0x10);
    unaff_R12 = *(char **)(pcVar9 + 8);
LAB_0009e4ec:
    pcVar9 = local_38;
    unaff_R12[(longlong)param_1] = '.';
    param_1 = param_1 + 1;
    *(char **)(local_38 + 0x10) = param_1;
    if ((short *)(*(longlong *)local_38 - (longlong)param_1) < param_3) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(local_38,param_1,param_3,1,1);
      param_1 = *(char **)(pcVar9 + 0x10);
    }
    pcVar9 = local_38;
    (*(code *)PTR_memcpy_000c3aa8)();
    *(char **)(pcVar9 + 0x10) = param_1 + (longlong)param_3;
    return 1;
  }
  local_b0 = pcVar10;
  if ((((pcVar7 + (longlong)pcVar6 == unaff_R12) || (pcVar10 == pcVar9)) ||
      ((pcVar10 < pcVar9 &&
       ((-1 < pcVar10[(longlong)(unaff_R12 + -1)] || (-1 < unaff_R12[(longlong)pcVar10])))))) ||
     (cVar3 = (*(code *)PTR_slow_path_000c43b0)(local_a0,pcVar10), cVar3 != '\0')) {
    *(char **)(local_38 + 0x10) = pcVar10;
    pcVar9 = pcVar10;
    goto joined_r0x0009e4c0;
  }
  local_78 = (char *)&local_b0;
  local_70 = PTR_fmt_000c3c58;
  (*(code *)PTR_panic_fmt_000c3e90)();
LAB_0009e64d:
  (*(code *)PTR_handle_error_000c3a98)();
LAB_0009e655:
  (*(code *)PTR_handle_error_000c3a98)();
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}



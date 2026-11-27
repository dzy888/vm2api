// 00757770 _set_extension

/* WARNING: Removing unreachable block (ram,0x00757895) */
/* WARNING: Type propagation algorithm not settling */
/* <std[6c98fd8553dbae28]::path::PathBuf>::_set_extension */

undefined8 __rustcall
<std[6c98fd8553dbae28]::path::PathBuf>::_set_extension
          (longlong *******param_1,longlong *******param_2,short *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  short *psVar3;
  char cVar4;
  short *psVar5;
  undefined8 uVar6;
  short *psVar7;
  longlong *******ppppppplVar8;
  longlong *******unaff_R12;
  ulonglong unaff_R13;
  longlong *******ppppppplVar9;
  longlong ******pppppplVar10;
  longlong *******local_b0;
  short *local_a8;
  short *local_a0;
  longlong *******local_78;
  longlong *******local_70;
  undefined1 local_68;
  undefined2 local_40;
  undefined1 local_3e;
  longlong *******local_38;
  
  local_b0 = param_2;
  local_a8 = param_3;
  if (param_3 != (short *)0x0) {
    psVar5 = (short *)0x0;
    do {
      if (*(char *)((longlong)param_2 + (longlong)psVar5) == '/') {
        local_78 = (longlong *******)&local_b0;
        local_70 = (longlong *******)PTR_fmt_0079afb8;
        ppppppplVar8 = (longlong *******)&local_78;
        (*(code *)PTR_panic_fmt_007991a8)(param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00796cf0);
        goto LAB_007579d6;
      }
      psVar5 = (short *)((longlong)psVar5 + 1);
    } while (param_3 != psVar5);
  }
  unaff_R12 = (longlong *******)param_1[1];
  ppppppplVar8 = (longlong *******)param_1[2];
  if (ppppppplVar8 == (longlong *******)0x0) {
    local_3e = false;
  }
  else {
    local_3e = *(char *)unaff_R12 == '/';
  }
  local_68 = 0xff;
  local_40 = 0x201;
  psVar5 = param_3;
  local_78 = unaff_R12;
  local_70 = ppppppplVar8;
  (*(code *)PTR_next_back_0079a1d8)();
  if (((char)local_b0 == -1) || ((char)local_b0 != '\t')) {
    return 0;
  }
  psVar3 = local_a8;
  if ((local_a0 == (short *)0x2) && (*local_a8 == 0x2e2e)) {
    psVar5 = (short *)0x2;
    psVar7 = (short *)0x0;
    if (local_a8 != (short *)0x0) {
      psVar7 = local_a8;
    }
  }
  else {
    psVar7 = local_a0;
    do {
      if (psVar7 == (short *)0x0) {
        psVar7 = local_a8;
        psVar3 = (short *)0x0;
        goto joined_r0x00757886;
      }
      psVar5 = (short *)((longlong)psVar7 - 1);
      pcVar1 = (char *)((longlong)local_a8 + -1 + (longlong)psVar7);
      psVar7 = psVar5;
    } while (*pcVar1 != '.');
    if (psVar5 == (short *)0x0) {
      psVar5 = local_a0;
      psVar7 = (short *)0x0;
      if (local_a8 != (short *)0x0) {
        psVar7 = local_a8;
      }
    }
    else {
      local_a0 = (short *)((longlong)local_a0 + ~(ulonglong)psVar5);
      psVar7 = (short *)((longlong)local_a8 + (longlong)psVar5 + 1);
      if (local_a8 != (short *)0x0) {
        psVar7 = local_a8;
      }
    }
  }
joined_r0x00757886:
  if (psVar7 == (short *)0x0) {
    return 0;
  }
  if (psVar3 == (short *)0x0) {
    psVar5 = local_a0;
  }
  ppppppplVar9 = (longlong *******)(((longlong)psVar7 + (longlong)psVar5) - (longlong)unaff_R12);
  local_38 = param_1;
  if (ppppppplVar8 < ppppppplVar9) {
joined_r0x00757910:
    param_1 = ppppppplVar8;
    if (param_3 == (short *)0x0) {
      return 1;
    }
    unaff_R13 = (longlong)param_3 + 1;
    ppppppplVar8 = (longlong *******)*local_38;
    if ((ulonglong)((longlong)ppppppplVar8 - (longlong)param_1) < unaff_R13) {
LAB_007579d6:
      ppppppplVar9 = (longlong *******)(unaff_R13 + (longlong)param_1);
      if (CARRY8(unaff_R13,(ulonglong)param_1)) goto LAB_00757a9d;
      <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
                (&local_78,ppppppplVar8,unaff_R12,ppppppplVar9,1,1);
      if ((int)local_78 == 1) goto LAB_00757aa5;
      local_38[1] = (longlong ******)local_70;
      *local_38 = (longlong ******)ppppppplVar9;
      unaff_R12 = local_70;
      if (ppppppplVar9 != param_1) goto LAB_0075793c;
    }
    else if (ppppppplVar8 != param_1) goto LAB_0075793c;
    ppppppplVar8 = local_38;
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(local_38,param_1,1,1,1);
    param_1 = (longlong *******)ppppppplVar8[2];
    unaff_R12 = (longlong *******)ppppppplVar8[1];
LAB_0075793c:
    ppppppplVar8 = local_38;
    *(char *)((longlong)unaff_R12 + (longlong)param_1) = '.';
    pppppplVar10 = (longlong ******)((longlong)param_1 + 1);
    local_38[2] = pppppplVar10;
    if ((short *)((longlong)*local_38 - (longlong)pppppplVar10) < param_3) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(local_38,pppppplVar10,param_3,1,1);
      pppppplVar10 = ppppppplVar8[2];
    }
    ppppppplVar8 = local_38;
    (*(code *)PTR_memcpy_00799008)();
    ppppppplVar8[2] = (longlong ******)((longlong)pppppplVar10 + (longlong)param_3);
    return 1;
  }
  local_b0 = ppppppplVar9;
  if (((((longlong *******)((longlong)psVar7 + (longlong)psVar5) == unaff_R12) ||
       (ppppppplVar9 == ppppppplVar8)) ||
      ((ppppppplVar9 < ppppppplVar8 &&
       ((-1 < ((char *)((longlong)unaff_R12 + -1))[(longlong)ppppppplVar9] ||
        (-1 < *(char *)((longlong)unaff_R12 + (longlong)ppppppplVar9))))))) ||
     (cVar4 = (*(code *)PTR_slow_path_0079afb0)(local_a0,ppppppplVar9), cVar4 != '\0')) {
    local_38[2] = (longlong ******)ppppppplVar9;
    ppppppplVar8 = ppppppplVar9;
    goto joined_r0x00757910;
  }
  local_78 = (longlong *******)&local_b0;
  local_70 = (longlong *******)PTR_fmt_007991f0;
  (*(code *)PTR_panic_fmt_007991a8)();
LAB_00757a9d:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_00757aa5:
  (*(code *)PTR_handle_error_00798ff0)();
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return uVar6;
}



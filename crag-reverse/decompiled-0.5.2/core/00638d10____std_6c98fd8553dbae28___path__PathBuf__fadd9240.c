// 00638d10 <&std[6c98fd8553dbae28]::path::PathBuf>

/* <tokio[d7d91d38da47d894]::net::unix::listener::UnixListener>::bind::<&std[6c98fd8553dbae28]::path::PathBuf>
    */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::net::unix::listener::UnixListener>::bind::
<&std[6c98fd8553dbae28]::path::PathBuf>(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  int local_1e0;
  undefined4 uStackY_1d8;
  undefined4 uStackY_1d4;
  undefined4 uStackY_1d0;
  undefined4 uStackY_1cc;
  undefined4 in_stack_fffffffffffffe38;
  undefined4 uStack_1c4;
  undefined4 in_stack_fffffffffffffe40;
  undefined4 uStack_1bc;
  undefined4 in_stack_fffffffffffffe48;
  undefined4 local_1b4;
  undefined4 in_stack_fffffffffffffe50;
  undefined4 uStack_1ac;
  undefined4 in_stack_fffffffffffffe58;
  undefined4 local_1a4;
  undefined4 in_stack_fffffffffffffe60;
  undefined4 uStack_19c;
  undefined4 in_stack_fffffffffffffe68;
  undefined4 local_194;
  undefined4 in_stack_fffffffffffffe70;
  undefined4 uStack_18c;
  undefined4 in_stack_fffffffffffffe78;
  undefined4 local_184;
  undefined4 in_stack_fffffffffffffe80;
  undefined4 uStack_17c;
  undefined2 in_stack_fffffffffffffe88;
  undefined2 uStack_174;
  undefined2 in_stack_fffffffffffffe90;
  undefined2 uStack_16c;
  undefined8 uVar3;
  undefined4 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_124;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined2 uStack_10c;
  undefined2 uStack_104;
  
  if ((*(longlong *)(param_2 + 0x10) == 0) || (**(char **)(param_2 + 8) != '\0')) {
    (*(code *)PTR_sockaddr_un_00799ac0)();
    if (local_1e0 != 1) {
      uVar3 = CONCAT44(uStackY_1d0,uStackY_1d4);
      local_148 = local_1b4;
      local_138 = local_1a4;
      local_118 = local_184;
      uStack_10c = in_stack_fffffffffffffe88;
      uStack_154 = in_stack_fffffffffffffe40;
      uStack_14c = in_stack_fffffffffffffe48;
      uStack_144 = in_stack_fffffffffffffe50;
      uStack_13c = in_stack_fffffffffffffe58;
      uStack_134 = in_stack_fffffffffffffe60;
      uStack_12c = in_stack_fffffffffffffe68;
      uStack_15c = in_stack_fffffffffffffe38;
      uStack_124 = in_stack_fffffffffffffe70;
      uStack_11c = in_stack_fffffffffffffe78;
      uStack_114 = in_stack_fffffffffffffe80;
      uStack_104 = in_stack_fffffffffffffe90;
LAB_00638dc4:
      (*(code *)PTR_bind_addr_0079a180)
                (local_118,param_3,local_148,local_138,uStack_15c,uStack_154,uStack_14c,uStack_144,
                 uStack_13c,uStack_134,uStack_12c,uStack_124,uStack_11c,uStack_114,uStack_10c,
                 uStack_104,uVar3);
      return param_1;
    }
  }
  else {
    uVar2 = *(longlong *)(param_2 + 0x10) - 1;
    if (0x6b < uVar2) {
      ppuVar1 = &anon_63b06cc94833867f683611f039574387_81_llvm_6903579140370050947;
      goto LAB_00638e7d;
    }
    (*(code *)PTR_memcpy_00799008)();
    (*(code *)PTR_from_parts_0079a188)(0,(int)uVar2 + 3);
    if (local_1e0 != 1) {
      uVar3 = CONCAT44(uStackY_1cc,uStackY_1d0);
      uStack_15c = uStack_1c4;
      uStack_154 = uStack_1bc;
      uStack_14c = local_1b4;
      uStack_144 = uStack_1ac;
      uStack_13c = local_1a4;
      uStack_134 = uStack_19c;
      uStack_12c = local_194;
      uStack_124 = uStack_18c;
      uStack_11c = local_184;
      uStack_114 = uStack_17c;
      uStack_10c = uStack_174;
      uStack_104 = uStack_16c;
      local_148 = in_stack_fffffffffffffe50;
      local_138 = in_stack_fffffffffffffe60;
      local_118 = in_stack_fffffffffffffe80;
      goto LAB_00638dc4;
    }
  }
  ppuVar1 = (undefined **)CONCAT44(uStackY_1d4,uStackY_1d8);
LAB_00638e7d:
  param_1[1] = ppuVar1;
  *param_1 = 2;
  return param_1;
}



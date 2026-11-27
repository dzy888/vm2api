// 002e38e0 default

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry as
   core[c0acaeba6ab4c2e0]::default::Default>::default */

void __rustcall
<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry_as_core[c0acaeba6ab4c2e0]::default::Default>
::default(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong in_FS_OFFSET;
  
  if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
    lVar5 = *(longlong *)(in_FS_OFFSET + -0x38);
    param_3 = *(undefined8 *)(in_FS_OFFSET + -0x30);
  }
  else {
    lVar5 = (*(code *)PTR_hashmap_random_keys_00799248)();
    *(undefined8 *)(in_FS_OFFSET + -0x30) = param_3;
    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  }
  *(longlong *)(in_FS_OFFSET + -0x38) = lVar5 + 2;
  uVar4 = _UNK_00785e50;
  uVar3 = _DAT_00785e48;
  param_1[5] = _DAT_00785e48;
  param_1[6] = uVar4;
  uVar2 = _UNK_00785e40;
  puVar1 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00785e38;
  param_1[3] = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00785e38;
  param_1[4] = uVar2;
  param_1[7] = lVar5;
  param_1[8] = param_3;
  param_1[9] = puVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar4;
  param_1[0xd] = lVar5 + 1;
  param_1[0xe] = param_3;
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return;
}



// 006520c0 with_license_template

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::with_license_template */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::with_license_template
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong in_FS_OFFSET;
  undefined3 uStack_76;
  undefined5 local_73;
  undefined3 uStack_6e;
  undefined5 uStack_6b;
  undefined3 uStack_66;
  undefined5 local_63;
  undefined3 uStack_5e;
  undefined4 uStack_5b;
  undefined4 uStack_57;
  undefined3 uStack_53;
  
  uVar1 = (undefined1)param_3;
  if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
    lVar5 = *(longlong *)(in_FS_OFFSET + -0x38);
    param_3 = *(undefined8 *)(in_FS_OFFSET + -0x30);
  }
  else {
    lVar5 = (*(code *)PTR_hashmap_random_keys_00799248)();
    *(longlong *)(in_FS_OFFSET + -0x38) = lVar5;
    *(undefined8 *)(in_FS_OFFSET + -0x30) = param_3;
    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  }
  uVar3 = _UNK_007904e8;
  local_63 = (undefined5)_DAT_007904e0;
  uStack_5e = (undefined3)((ulonglong)_DAT_007904e0 >> 0x28);
  uStack_5b = (undefined4)_UNK_007904e8;
  uStack_57 = (undefined4)((ulonglong)_UNK_007904e8 >> 0x20);
  uVar4 = uStack_57;
  local_73 = SUB85(anon_63b06cc94833867f683611f039574387_277_llvm_6903579140370050947,0);
  uStack_6e = (undefined3)
              ((ulonglong)anon_63b06cc94833867f683611f039574387_277_llvm_6903579140370050947 >> 0x28
              );
  uStack_6b = (undefined5)_UNK_007904d8;
  uStack_66 = (undefined3)((ulonglong)_UNK_007904d8 >> 0x28);
  *(longlong *)(in_FS_OFFSET + -0x38) = lVar5 + 2;
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  param_1[3] = param_4;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  uStack_57._0_1_ = (undefined1)((ulonglong)uVar3 >> 0x20);
  *(ulonglong *)((longlong)param_1 + 0x25) = CONCAT53(local_73,uStack_76);
  *(ulonglong *)((longlong)param_1 + 0x2d) = CONCAT53(uStack_6b,uStack_6e);
  *(ulonglong *)((longlong)param_1 + 0x35) = CONCAT53(local_63,uStack_66);
  *(ulonglong *)((longlong)param_1 + 0x3d) =
       CONCAT17((undefined1)uStack_57,CONCAT43(uStack_5b,uStack_5e));
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  param_1[9] = lVar5;
  param_1[10] = param_3;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar4;
  *(ulonglong *)((longlong)param_1 + 0x6d) = CONCAT53(local_63,uStack_66);
  *(ulonglong *)((longlong)param_1 + 0x75) =
       CONCAT17((undefined1)uStack_57,CONCAT43(uStack_5b,uStack_5e));
  *(ulonglong *)((longlong)param_1 + 0x5d) = CONCAT53(local_73,uStack_53);
  *(ulonglong *)((longlong)param_1 + 0x65) = CONCAT53(uStack_6b,uStack_6e);
  param_1[0x10] = lVar5 + 1;
  param_1[0x11] = param_3;
  return param_1;
}



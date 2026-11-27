// 00036a60 build_idle_event

/* agy_bridge[64a9e9deac6c45ce]::build_idle_event */

void __rustcall
agy_bridge[64a9e9deac6c45ce]::build_idle_event
          (char *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,ulonglong param_5,
          undefined8 param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined4 extraout_XMM0_Da;
  undefined1 local_b8;
  undefined7 uStack_b7;
  longlong lStack_b0;
  char *local_a8;
  longlong lStack_a0;
  char local_98;
  undefined7 local_97;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  char cStack_89;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_60 = 0;
  local_50 = 0;
  local_40 = param_2;
  local_38 = param_4;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)puVar2 = 0x65707974;
    local_78 = 4;
    local_68 = 4;
    local_70 = puVar2;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    pcVar3 = (char *)(*(code *)PTR___rust_alloc_000c3a90)();
    if (pcVar3 == (char *)0x0) {
      (*(code *)PTR_handle_error_000c3a98)();
      goto LAB_00036da1;
    }
    *(undefined4 *)pcVar3 = 0x656c6469;
    local_b8 = 3;
    lStack_b0 = 4;
    lStack_a0 = 4;
    local_a8 = pcVar3;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_98,&local_60,&local_78,&local_b8);
    if (local_98 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_98);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_000c3a90)();
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0x5f74736575716572;
      *(undefined2 *)(puVar2 + 1) = 0x6469;
      local_78 = 10;
      local_68 = 10;
      local_70 = puVar2;
      if (param_3 < 0) {
LAB_00036ba4:
        (*(code *)PTR_handle_error_000c3a98)();
        goto LAB_00036da1;
      }
      if (param_3 == 0) {
        pcVar3 = Elf64_Ehdr_00000000.e_ident_magic_str;
      }
      else {
        local_48 = param_5;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
        pcVar3 = (char *)(*(code *)PTR___rust_alloc_000c3a90)();
        if (pcVar3 == (char *)0x0) goto LAB_00036ba4;
        (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Da,param_3);
        param_5 = local_48;
      }
      local_b8 = 3;
      lStack_b0 = param_3;
      local_a8 = pcVar3;
      lStack_a0 = param_3;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_98,&local_60,&local_78,&local_b8);
      if (local_98 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_98);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_000c3a90)();
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0x79625f616e657261;
        *(undefined4 *)((longlong)puVar2 + 7) = 0x73657479;
        local_78 = 0xb;
        local_68 = 0xb;
        local_b8 = 2;
        lStack_b0 = 0;
        local_a8 = (char *)local_38;
        local_70 = puVar2;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_98,&local_60,&local_78,&local_b8);
        if (local_98 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_98);
        }
        uStack_90 = (undefined4)local_60;
        uStack_8c = (undefined1)((ulonglong)local_60 >> 0x20);
        uStack_8b = (undefined2)((ulonglong)local_60 >> 0x28);
        cStack_89 = (char)((ulonglong)local_60 >> 0x38);
        uStack_88 = uStack_58;
        uStack_84 = uStack_54;
        local_80 = local_50;
        local_98 = '\x05';
        if ((param_5 & 1) != 0) {
          local_b8 = 2;
          lStack_b0 = 0;
          local_a8 = (char *)param_6;
          puVar2 = (undefined8 *)
                   (*(code *)PTR_index_or_insert_000c3be0)((undefined4)local_60,&local_98);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (puVar2,9);
          puVar2[2] = local_a8;
          puVar2[3] = lStack_a0;
          *puVar2 = CONCAT71(uStack_b7,local_b8);
          puVar2[1] = lStack_b0;
        }
        *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_84,uStack_88);
        *(undefined8 *)(param_1 + 0x18) = local_80;
        *param_1 = local_98;
        *(ulonglong *)(param_1 + 1) = CONCAT17((undefined1)uStack_90,local_97);
        *(uint *)(param_1 + 9) = CONCAT13(uStack_8c,uStack_90._1_3_);
        *(undefined2 *)(param_1 + 0xd) = uStack_8b;
        param_1[0xf] = cStack_89;
        return;
      }
    }
  }
  (*(code *)PTR_handle_error_000c3a98)();
LAB_00036da1:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



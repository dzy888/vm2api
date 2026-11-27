// 005d3b40 mcp_to_original_map

/* <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>::mcp_to_original_map */

void __rustcall
<craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>::mcp_to_original_map
          (undefined8 *param_1,longlong param_2)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong in_FS_OFFSET;
  undefined4 uVar4;
  longlong local_b0 [3];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
    local_78 = *(longlong *)(in_FS_OFFSET + -0x38);
    lVar2 = *(longlong *)(in_FS_OFFSET + -0x30);
  }
  else {
    lVar2 = lVar3 * 2;
    local_78 = (*(code *)PTR_hashmap_random_keys_00799248)();
    *(longlong *)(in_FS_OFFSET + -0x38) = local_78;
    *(longlong *)(in_FS_OFFSET + -0x30) = lVar2;
    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  }
  *(longlong *)(in_FS_OFFSET + -0x38) = local_78 + 1;
  <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
  <alloc[12e961f32105355]::alloc::Global>(&local_50,0x30,lVar3 * 2);
  puVar1 = PTR_clone_00798fd0;
  local_98 = local_50;
  uStack_94 = uStack_4c;
  uStack_90 = uStack_48;
  uStack_8c = uStack_44;
  local_88 = local_40;
  uStack_80 = uStack_38;
  local_70 = lVar2;
  if (lVar3 != 0) {
    lVar3 = lVar3 * 0xa8;
    do {
      (*(code *)puVar1)();
      (*(code *)puVar1)();
      uVar4 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>>
              ::insert(local_b0,&local_98,local_68,&local_50);
      if ((local_b0[0] != -1) && (local_b0[0] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
      }
      (*(code *)puVar1)();
      (*(code *)puVar1)();
      uVar4 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>>
              ::insert(local_b0,&local_98,local_68,&local_50);
      if ((local_b0[0] != -1) && (local_b0[0] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
      }
      lVar3 = lVar3 + -0xa8;
    } while (lVar3 != 0);
  }
  param_1[4] = local_78;
  param_1[5] = local_70;
  param_1[2] = local_88;
  param_1[3] = uStack_80;
  *param_1 = CONCAT44(uStack_94,local_98);
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  return;
}



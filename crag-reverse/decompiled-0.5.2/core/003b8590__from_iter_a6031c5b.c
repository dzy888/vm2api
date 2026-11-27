// 003b8590 from_iter

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,
   craggemini_core[66f3c71560d70857]::resume::canonicalize_json>>>::from_iter */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,craggemini_core[66f3c71560d70857]::resume::canonicalize_json>>>
::from_iter(ulonglong *param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong local_78;
  undefined4 *local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar2 = param_3 - param_2;
  if (uVar2 < 0xaaaaaaaaaaaaaaa1) goto LAB_003b85c2;
  puVar1 = (ulonglong *)0x0;
  while( true ) {
    param_1 = puVar1;
    param_2 = unaff_R12;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003b85c2:
    uVar2 = uVar2 >> 5;
    if (param_3 == param_2) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_70 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    unaff_R12 = uVar2 * 0x18;
    puVar1 = (ulonglong *)&DAT_00000008;
    if (local_70 != (undefined4 *)0x0) {
      uVar3 = 0;
      puVar4 = local_70;
      do {
        local_60 = 0;
        uStack_58 = 1;
        local_50 = 0;
        craggemini_core[66f3c71560d70857]::resume::write_canonical_json(param_2,&local_60);
        local_38 = local_50;
        local_48 = (undefined4)local_60;
        uStack_44 = local_60._4_4_;
        uStack_40 = (undefined4)uStack_58;
        uStack_3c = uStack_58._4_4_;
        *(undefined8 *)(puVar4 + 4) = local_50;
        *puVar4 = (undefined4)local_60;
        puVar4[1] = local_60._4_4_;
        puVar4[2] = (undefined4)uStack_58;
        puVar4[3] = uStack_58._4_4_;
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 6;
        param_2 = param_2 + 0x20;
        local_78 = uVar2;
      } while (uVar2 != uVar3);
LAB_003b8685:
      param_1[2] = uVar2;
      *param_1 = local_78;
      param_1[1] = (ulonglong)local_70;
      return param_1;
    }
  }
  local_78 = 0;
  local_70 = (undefined4 *)&DAT_00000008;
  goto LAB_003b8685;
}



// 003b86f0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::ClientTool>,
   <craggemini_core[66f3c71560d70857]::mcp::McpToolSpec as
   core[c0acaeba6ab4c2e0]::convert::From<&craggemini_core[66f3c71560d70857]::tools::ClientTool>>::from>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::ClientTool>,<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec_as_core[c0acaeba6ab4c2e0]::convert::From<&craggemini_core[66f3c71560d70857]::tools::ClientTool>>::from>>>
::from_iter(ulonglong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  ulonglong local_c8;
  undefined4 *local_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = (ulonglong)(param_3 - param_2) / 0xa8;
  uVar2 = uVar1;
  if ((ulonglong)(param_3 - param_2) < 0xa7ffffffffffff59) goto LAB_003b873e;
  puVar3 = (ulonglong *)0x0;
  while( true ) {
    (*(code *)PTR_handle_error_00798ff0)();
    uVar2 = uVar1;
    param_1 = puVar3;
LAB_003b873e:
    if (param_3 == param_2) break;
    uVar1 = uVar2;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar3 = (ulonglong *)&DAT_00000008;
    local_c0 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (local_c0 != (undefined4 *)0x0) {
      uVar1 = 0;
      puVar4 = local_c0;
      do {
        <craggemini_core[66f3c71560d70857]::mcp::McpToolSpec_as_core[c0acaeba6ab4c2e0]::convert::From<&craggemini_core[66f3c71560d70857]::tools::ClientTool>>
        ::from(&local_b0,param_2);
        *(undefined8 *)(puVar4 + 0x1c) = local_40;
        *(undefined8 *)(puVar4 + 0x1e) = uStack_38;
        *(undefined8 *)(puVar4 + 0x18) = local_50;
        *(undefined8 *)(puVar4 + 0x1a) = uStack_48;
        *(undefined8 *)(puVar4 + 0x14) = local_60;
        *(undefined8 *)(puVar4 + 0x16) = uStack_58;
        *(undefined8 *)(puVar4 + 0x10) = local_70;
        *(undefined8 *)(puVar4 + 0x12) = uStack_68;
        *(undefined8 *)(puVar4 + 0xc) = local_80;
        *(undefined8 *)(puVar4 + 0xe) = uStack_78;
        *(undefined8 *)(puVar4 + 8) = local_90;
        *(undefined8 *)(puVar4 + 10) = uStack_88;
        *(undefined8 *)(puVar4 + 4) = local_a0;
        *(undefined8 *)(puVar4 + 6) = uStack_98;
        *puVar4 = local_b0;
        puVar4[1] = uStack_ac;
        puVar4[2] = uStack_a8;
        puVar4[3] = uStack_a4;
        uVar1 = uVar1 + 1;
        puVar4 = puVar4 + 0x20;
        param_2 = param_2 + 0xa8;
        local_c8 = uVar2;
      } while (uVar2 != uVar1);
LAB_003b881b:
      param_1[2] = uVar2;
      *param_1 = local_c8;
      param_1[1] = (ulonglong)local_c0;
      return param_1;
    }
  }
  local_c8 = 0;
  local_c0 = (undefined4 *)&DAT_00000008;
  goto LAB_003b881b;
}



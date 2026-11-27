// 0035aa00 <&str>

/* <craggemini_core[66f3c71560d70857]::mcp::McpToolResult>::text::<&str> */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>::text::<&str>
          (undefined8 *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar6;
  undefined1 local_b8;
  undefined6 uStack_b7;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined8 local_98;
  undefined4 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char local_68 [56];
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined1 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    local_80 = 0;
    local_70 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar3 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0x65707974;
      local_98 = 4;
      local_88 = 4;
      local_90 = puVar3;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar3 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar3 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0035acc3;
      }
      *puVar3 = 0x74786574;
      local_b8 = 3;
      uStack_b0 = 4;
      uStack_a9 = 0;
      uStack_a8 = SUB87(puVar3,0);
      uStack_a1 = (undefined1)((ulonglong)puVar3 >> 0x38);
      uStack_a0 = 4;
      uStack_99 = 0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(local_68,&local_80,&local_98,&local_b8);
      if (local_68[0] != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_68);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar3 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0x74786574;
        local_98 = 4;
        local_88 = 4;
        local_90 = puVar3;
        if (-1 < param_3) {
          if (param_3 == 0) {
            lVar4 = 1;
            lVar5 = 1;
LAB_0035abca:
            local_b8 = 3;
            uStack_b0 = (undefined7)param_3;
            uStack_a9 = (undefined1)((ulonglong)param_3 >> 0x38);
            uStack_a8 = (undefined7)lVar5;
            uStack_a1 = (undefined1)((ulonglong)lVar5 >> 0x38);
            uStack_a0 = uStack_b0;
            uStack_99 = uStack_a9;
            uVar6 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(local_68,&local_80,&local_98,&local_b8,param_5,param_6,lVar4);
            if (local_68[0] != -1) {
              uVar6 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(local_68);
            }
            if (param_3 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
            }
            uStack_b1 = (undefined1)local_80;
            uStack_b0 = (undefined7)((ulonglong)local_80 >> 8);
            uStack_a9 = (undefined1)uStack_78;
            *puVar2 = 5;
            *(ulonglong *)(puVar2 + 1) = CONCAT17(uStack_b1,CONCAT61(uStack_b7,local_b8));
            *(ulonglong *)(puVar2 + 9) = CONCAT17(uStack_a9,uStack_b0);
            *(undefined8 *)(puVar2 + 0x10) = uStack_78;
            *(undefined8 *)(puVar2 + 0x18) = local_70;
            *param_1 = 1;
            param_1[1] = puVar2;
            param_1[2] = 1;
            *(undefined1 *)(param_1 + 3) = param_4;
            return param_1;
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar4 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar4 != 0) {
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_3);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar5 = (*(code *)PTR___rust_alloc_00799000)();
            if (lVar5 == 0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0035acc3;
            }
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,param_3);
            goto LAB_0035abca;
          }
        }
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0035acc3;
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_0035acc3:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



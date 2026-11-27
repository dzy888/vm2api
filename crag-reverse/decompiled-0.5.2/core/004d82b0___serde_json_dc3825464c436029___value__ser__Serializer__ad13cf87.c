// 004d82b0 <serde_json[dc3825464c436029]::value::ser::Serializer>

/* <craggemini_core[66f3c71560d70857]::protocol::SchedulingStrategy as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
    */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::protocol::SchedulingStrategy_as_serde_core[48776c27239fa21f]::ser::Serialize>
::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
          (undefined1 *param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  cVar1 = *param_2;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  if (cVar1 == '\0') {
    uVar5 = 8;
    puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0x6465636e616c6162;
      goto LAB_004d8345;
    }
  }
  else {
    if (cVar1 != '\x01') {
      uVar5 = 0xb;
      puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0x6f725f646e756f72;
        *(undefined4 *)((longlong)puVar3 + 7) = 0x6e69626f;
        goto LAB_004d8345;
      }
      goto LAB_004d837c;
    }
    uVar5 = 4;
    puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)puVar3 = 0x6c6c6966;
LAB_004d8345:
      *param_1 = 3;
      *(undefined8 *)(param_1 + 8) = uVar5;
      *(undefined8 **)(param_1 + 0x10) = puVar3;
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      return param_1;
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_004d837c:
  (*(code *)PTR_handle_error_00798ff0)();
  pcVar2 = (code *)swi(3);
  puVar4 = (undefined1 *)(*pcVar2)();
  return puVar4;
}



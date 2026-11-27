// 006a9810 <http[56314f485c23ccf6]::uri::Uri>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::uri::Uri> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::uri::Uri>
          (byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (1 < *param_1) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(param_4,(*(longlong **)(param_1 + 8))[2]);
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))(param_4,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x006a9872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x20))(param_4,*(undefined8 *)(param_1 + 0x40));
  return;
}



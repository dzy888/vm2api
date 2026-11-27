// 00554690 <alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   serde_json[dc3825464c436029]::value::Value>>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
          (longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR_drop_task_00799060)();
  }
  if ((uVar1 & 8) != 0) {
    (*(code *)PTR_drop_task_00799060)();
  }
  if (*(int *)(param_1 + 0x38) == 2) {
    return;
  }
  <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x40);
  return;
}



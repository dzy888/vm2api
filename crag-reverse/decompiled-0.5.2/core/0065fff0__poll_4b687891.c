// 0065fff0 poll

/* WARNING: Removing unreachable block (ram,0x00660089) */
/* <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,
   core[c0acaeba6ab4c2e0]::io::error::Error>> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  longlong in_FS_OFFSET;
  
  if (*(char *)(in_FS_OFFSET + -0xf0) != '\0') {
    if (*(char *)(in_FS_OFFSET + -0xf0) != '\x01') goto LAB_00660066;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
  }
  cVar1 = *(char *)(in_FS_OFFSET + -0xf3);
  if (*(char *)(in_FS_OFFSET + -0xf4) == '\x01') {
    if (cVar1 == '\0') {
      (*(code *)PTR_register_waker_00799e58)();
      (*(code *)PTR_drop_00799e50)();
      *param_1 = 0xfffffffffffffffe;
      return param_1;
    }
    cVar1 = cVar1 + -1;
  }
  *(char *)(in_FS_OFFSET + -0xf3) = cVar1;
  (*(code *)PTR_drop_00799e50)();
LAB_00660066:
  (**(code **)(*(longlong *)(*param_2 + 0x10) + 0x18))(param_4,*param_3);
  (*(code *)PTR_memcpy_00799008)(param_4,0xb0);
  (*(code *)PTR_drop_00799e50)();
  return param_1;
}



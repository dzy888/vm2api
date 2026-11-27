// 0065fe90 poll

/* WARNING: Removing unreachable block (ram,0x0065ff26) */
/* <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::File,
   core[c0acaeba6ab4c2e0]::io::error::Error>> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::File,core[c0acaeba6ab4c2e0]::io::error::Error>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined4 param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  char cVar1;
  longlong in_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(char *)(in_FS_OFFSET + -0xf0) != '\0') {
    if (*(char *)(in_FS_OFFSET + -0xf0) != '\x01') goto LAB_0065ff03;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
  }
  cVar1 = *(char *)(in_FS_OFFSET + -0xf3);
  if (*(char *)(in_FS_OFFSET + -0xf4) == '\x01') {
    if (cVar1 == '\0') {
      (*(code *)PTR_register_waker_00799e58)();
      (*(code *)PTR_drop_00799e50)();
      *param_2 = 1;
      return param_2;
    }
    cVar1 = cVar1 + -1;
  }
  *(char *)(in_FS_OFFSET + -0xf3) = cVar1;
  param_1 = (*(code *)PTR_drop_00799e50)();
LAB_0065ff03:
  (**(code **)(*(longlong *)(*param_3 + 0x10) + 0x18))(param_1,*param_4);
  *(undefined4 *)(param_2 + 2) = local_40;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3c;
  *(undefined4 *)(param_2 + 3) = uStack_38;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_34;
  *(undefined4 *)param_2 = 1;
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = uStack_48;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_44;
  (*(code *)PTR_drop_00799e50)();
  return param_2;
}



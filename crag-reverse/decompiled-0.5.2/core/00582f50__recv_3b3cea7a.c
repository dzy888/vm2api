// 00582f50 recv

/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<bytes[e9829e187354639b]::bytes::Bytes,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>::recv */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
::recv(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong in_FS_OFFSET;
  undefined4 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
LAB_00582f7d:
    cVar1 = *(char *)(in_FS_OFFSET + -0xf3);
    if (*(char *)(in_FS_OFFSET + -0xf4) == '\x01') {
      if (cVar1 == '\0') {
        (*(code *)PTR_register_waker_00799e58)();
        local_58 = (uint)local_58._3_1_ << 0x18;
        (*(code *)PTR_drop_00799e50)();
        *param_1 = 1;
        return param_1;
      }
      cVar1 = cVar1 + -1;
    }
    *(char *)(in_FS_OFFSET + -0xf3) = cVar1;
    local_58 = local_58 & 0xff000000;
    (*(code *)PTR_drop_00799e50)();
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    goto LAB_00582f7d;
  }
  lVar2 = *param_2;
  <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<bytes[e9829e187354639b]::bytes::Bytes>>::pop
            (&local_58,lVar2 + 0x1a0,lVar2 + 0x80);
  if (local_58 == 1) {
    if (local_50 != 0) {
      (*(code *)PTR_add_permit_00799da0)();
      goto LAB_0058306f;
    }
LAB_00583087:
    lVar2 = 8;
    local_38 = 0;
  }
  else {
    (*(code *)PTR_register_by_ref_00799738)();
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<bytes[e9829e187354639b]::bytes::Bytes>>::pop
              (&local_58,lVar2 + 0x1a0,lVar2 + 0x80);
    if (local_58 != 1) {
      if ((*(char *)(lVar2 + 0x1b8) == '\0') ||
         (cVar1 = (*(code *)PTR_is_idle_00799110)(), cVar1 == '\0')) {
        *param_1 = 1;
      }
      else {
        *param_1 = 0;
        param_1[1] = 0;
      }
      goto LAB_0058309f;
    }
    if (local_50 == 0) goto LAB_00583087;
    (*(code *)PTR_add_permit_00799da0)();
LAB_0058306f:
    param_1[1] = local_50;
    param_1[2] = local_48;
    param_1[3] = local_40;
    lVar2 = 0x20;
  }
  *(undefined8 *)((longlong)param_1 + lVar2) = local_38;
  *param_1 = 0;
LAB_0058309f:
  (*(code *)PTR_drop_00799e50)();
  return param_1;
}



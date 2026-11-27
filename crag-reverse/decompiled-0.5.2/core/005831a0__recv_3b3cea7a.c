// 005831a0 recv

/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,
   tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>::recv */

uint * __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
::recv(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong in_FS_OFFSET;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
LAB_005831cd:
    cVar2 = *(char *)(in_FS_OFFSET + -0xf3);
    if (*(char *)(in_FS_OFFSET + -0xf4) == '\x01') {
      if (cVar2 == '\0') {
        (*(code *)PTR_register_waker_00799e58)();
        local_68 = (uint)local_68._3_1_ << 0x18;
        (*(code *)PTR_drop_00799e50)();
        param_1[0] = 0xffffffff;
        param_1[1] = 0xffffffff;
        return param_1;
      }
      cVar2 = cVar2 + -1;
    }
    *(char *)(in_FS_OFFSET + -0xf3) = cVar2;
    local_68 = local_68 & 0xff000000;
    (*(code *)PTR_drop_00799e50)();
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    goto LAB_005831cd;
  }
  lVar1 = *param_2;
  <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>>
  ::pop(&local_98,lVar1 + 0x1a0,lVar1 + 0x80);
  if (CONCAT44(uStack_94,local_98) != 2) {
    if (local_98 != 0xffffffff) {
      local_48 = local_78;
      uStack_44 = uStack_74;
      uStack_40 = uStack_70;
      uStack_3c = uStack_6c;
      local_58 = local_88;
      uStack_54 = uStack_84;
      uStack_50 = uStack_80;
      uStack_4c = uStack_7c;
      local_68 = local_98;
      uStack_64 = uStack_94;
      uStack_60 = uStack_90;
      uStack_5c = uStack_8c;
      (*(code *)PTR_add_permit_00799da0)();
LAB_0058333b:
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_74,local_78);
      *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_6c,uStack_70);
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_84,local_88);
      *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_7c,uStack_80);
      *param_1 = local_98;
      param_1[1] = uStack_94;
      param_1[2] = uStack_90;
      param_1[3] = uStack_8c;
      goto LAB_0058335a;
    }
    (*(code *)PTR_register_by_ref_00799738)();
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>>
    ::pop(&local_98,lVar1 + 0x1a0,lVar1 + 0x80);
    if (CONCAT44(uStack_94,local_98) != 2) {
      if (local_98 != 0xffffffff) {
        local_48 = local_78;
        uStack_44 = uStack_74;
        uStack_40 = uStack_70;
        uStack_3c = uStack_6c;
        local_58 = local_88;
        uStack_54 = uStack_84;
        uStack_50 = uStack_80;
        uStack_4c = uStack_7c;
        local_68 = local_98;
        uStack_64 = uStack_94;
        uStack_60 = uStack_90;
        uStack_5c = uStack_8c;
        (*(code *)PTR_add_permit_00799da0)();
        goto LAB_0058333b;
      }
      if ((*(char *)(lVar1 + 0x1b8) == '\0') ||
         (cVar2 = (*(code *)PTR_is_idle_00799110)(), cVar2 == '\0')) {
        param_1[0] = 0xffffffff;
        param_1[1] = 0xffffffff;
        goto LAB_0058335a;
      }
    }
  }
  param_1[0] = 2;
  param_1[1] = 0;
LAB_0058335a:
  (*(code *)PTR_drop_00799e50)();
  return param_1;
}



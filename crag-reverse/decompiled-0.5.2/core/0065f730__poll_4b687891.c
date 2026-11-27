// 0065f730 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::handle_live_control::{closure#0}::{closure#2}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

longlong * __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::handle_live_control::{closure#0}::{closure#2}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  longlong in_FS_OFFSET;
  bool bVar6;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  pbVar1 = (byte *)*param_2;
  lVar4 = param_2[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar2 = *(char *)(in_FS_OFFSET + -0xf4);
joined_r0x0065f7b4:
    if ((cVar2 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
      (*(code *)PTR_register_waker_00799e58)();
      *param_1 = -5;
      return param_1;
    }
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar2 = *(char *)(in_FS_OFFSET + -0xf4);
    goto joined_r0x0065f7b4;
  }
  uVar3 = (*(code *)PTR_thread_rng_n_0079a280)();
  bVar5 = *pbVar1;
  if ((uVar3 & 1) == 0) {
    bVar6 = (bVar5 & 1) == 0;
    if (!bVar6) {
LAB_0065f8d7:
      if ((bVar5 & 2) == 0) {
        if ((*(char *)(in_FS_OFFSET + -0xf0) != '\0') && (*(char *)(in_FS_OFFSET + -0xf0) != '\x02')
           ) {
          (*(code *)PTR_register_00799240)(bVar5,param_3);
          *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
        }
        <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
        ::poll(&local_70,lVar4 + 0xb8,param_3);
        if (local_70 == -4) {
          if (*(int *)(lVar4 + 0x48) == 2) goto LAB_0065f958;
          cVar2 = (*(code *)PTR_poll_delay_00799228)(0xfffffffffffffffc,param_3);
          local_70 = -4;
          if (cVar2 != '\0') goto LAB_0065f958;
          goto LAB_0065f992;
        }
        goto LAB_0065f964;
      }
      goto LAB_0065f953;
    }
    cVar2 = (*(code *)PTR_poll_0079a290)();
    if (cVar2 != '\0') {
      bVar5 = *pbVar1;
      goto LAB_0065f8d7;
    }
  }
  else {
    bVar6 = (bVar5 & 2) == 0;
    if (bVar6) {
      if ((*(char *)(in_FS_OFFSET + -0xf0) != '\0') && (*(char *)(in_FS_OFFSET + -0xf0) != '\x02'))
      {
        (*(code *)PTR_register_00799240)(bVar5,param_3);
        *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
      }
      <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
      ::poll(&local_70,lVar4 + 0xb8,param_3);
      if (local_70 != -4) {
LAB_0065f964:
        local_78 = local_38;
        local_88 = local_48;
        lStack_80 = lStack_40;
        local_98 = local_58;
        lStack_90 = lStack_50;
        local_a8 = local_68;
        lStack_a0 = lStack_60;
LAB_0065f992:
        *pbVar1 = *pbVar1 | 2;
        *param_1 = local_70;
        param_1[1] = local_a8;
        param_1[2] = lStack_a0;
        param_1[3] = local_98;
        param_1[4] = lStack_90;
        param_1[5] = local_88;
        param_1[6] = lStack_80;
        param_1[7] = local_78;
        return param_1;
      }
      if (*(int *)(lVar4 + 0x48) != 2) {
        cVar2 = (*(code *)PTR_poll_delay_00799228)(0xfffffffffffffffc,param_3);
        local_70 = -4;
        if (cVar2 == '\0') goto LAB_0065f992;
      }
    }
    if ((*pbVar1 & 1) != 0) {
LAB_0065f953:
      if (bVar6) {
LAB_0065f958:
        *param_1 = -5;
        return param_1;
      }
      lVar4 = -0x7ffffffffffffffe;
      goto LAB_0065f9e5;
    }
    cVar2 = (*(code *)PTR_poll_0079a290)();
    if (cVar2 != '\0') goto LAB_0065f958;
  }
  *pbVar1 = *pbVar1 | 1;
  lVar4 = -0x8000000000000000;
LAB_0065f9e5:
  *param_1 = lVar4;
  return param_1;
}



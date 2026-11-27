// 006037b0 settle_err

/* <craggemini_core[66f3c71560d70857]::server::Turn>::settle_err */

void __rustcall
<craggemini_core[66f3c71560d70857]::server::Turn>::settle_err
          (undefined4 param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_88;
  longlong local_80;
  longlong local_70;
  longlong local_68;
  undefined8 local_58;
  undefined8 local_50;
  
  iVar2 = *(int *)(param_2 + 0x20);
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = '\0';
  param_2[0x27] = '\0';
  if (iVar2 == 1) {
    uStack_100 = (undefined4)*param_3;
    uStack_fc = *(undefined4 *)((longlong)param_3 + 4);
    uStack_f8 = (undefined4)param_3[1];
    uStack_f4 = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_f0 = (undefined4)param_3[2];
    uStack_ec = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_e8 = (undefined4)param_3[3];
    uStack_e4 = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_e0 = (undefined4)param_3[4];
    uStack_dc = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_d8 = (undefined4)param_3[5];
    uStack_d4 = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_d0 = (undefined4)param_3[6];
    uStack_cc = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_c8 = (undefined4)param_3[7];
    uStack_c4 = *(undefined4 *)((longlong)param_3 + 0x3c);
    local_108 = -1;
    uVar3 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
            ::send(&local_88,*(undefined8 *)(param_2 + 0x28),&local_108);
    if (local_88 != -2) {
      if (local_88 == -1) {
        if ((local_80 != -1) && (local_80 != 0)) {
          uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
        }
        if ((local_68 != -1) && (local_68 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                  (local_50);
      }
      else {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini_core[66f3c71560d70857]::server::JsonTurnResult>(&local_88);
      }
    }
  }
  else {
    cVar1 = param_2[0x10];
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    if (cVar1 == '\0') {
      param_2[0] = '\0';
      param_2[1] = '\0';
      param_2[2] = '\0';
      param_2[3] = '\0';
      param_2[4] = '\0';
      param_2[5] = '\0';
      param_2[6] = '\0';
      param_2[7] = '\0';
      if (*param_2 == '\0') {
        if ((*param_3 != -1) && (*param_3 != 0)) {
          param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(iVar2,1);
        }
        if ((param_3[3] != -1) && (param_3[3] != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                  (param_3[6]);
      }
      else {
        local_108 = *param_3;
        uStack_100 = (undefined4)param_3[1];
        uStack_fc = *(undefined4 *)((longlong)param_3 + 0xc);
        uStack_f8 = (undefined4)param_3[2];
        uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x14);
        uStack_f0 = (undefined4)param_3[3];
        uStack_ec = *(undefined4 *)((longlong)param_3 + 0x1c);
        uStack_e8 = (undefined4)param_3[4];
        uStack_e4 = *(undefined4 *)((longlong)param_3 + 0x24);
        local_e0 = (undefined4)param_3[5];
        uStack_dc = *(undefined4 *)((longlong)param_3 + 0x2c);
        uStack_d8 = (undefined4)param_3[6];
        uStack_d4 = *(undefined4 *)((longlong)param_3 + 0x34);
        local_d0 = (undefined4)param_3[7];
        uStack_cc = *(undefined4 *)((longlong)param_3 + 0x3c);
        <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
        ::send(&local_88,*(undefined8 *)(param_2 + 8),&local_108);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                  (&local_88);
      }
    }
    else {
      local_108 = *param_3;
      uStack_100 = (undefined4)param_3[1];
      uStack_fc = *(undefined4 *)((longlong)param_3 + 0xc);
      uStack_f8 = (undefined4)param_3[2];
      uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x14);
      uStack_f0 = (undefined4)param_3[3];
      uStack_ec = *(undefined4 *)((longlong)param_3 + 0x1c);
      uStack_e8 = (undefined4)param_3[4];
      uStack_e4 = *(undefined4 *)((longlong)param_3 + 0x24);
      local_e0 = (undefined4)param_3[5];
      uStack_dc = *(undefined4 *)((longlong)param_3 + 0x2c);
      uStack_d8 = (undefined4)param_3[6];
      uStack_d4 = *(undefined4 *)((longlong)param_3 + 0x34);
      local_d0 = (undefined4)param_3[7];
      uStack_cc = *(undefined4 *)((longlong)param_3 + 0x3c);
      uVar3 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>
              ::send(&local_88,*(undefined8 *)(param_2 + 0x18),&local_108);
      if (-2 < local_88) {
        if ((local_88 != -1) && (local_88 != 0)) {
          uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
        }
        if ((local_70 != -1) && (local_70 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                  (local_58);
      }
    }
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::Turn>(param_2)
  ;
  return;
}



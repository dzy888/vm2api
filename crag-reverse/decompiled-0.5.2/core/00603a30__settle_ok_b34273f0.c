// 00603a30 settle_ok

/* <craggemini_core[66f3c71560d70857]::server::Turn>::settle_ok */

void __rustcall
<craggemini_core[66f3c71560d70857]::server::Turn>::settle_ok(char *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_108;
  char *pcStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  char *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_78;
  longlong local_70;
  undefined8 local_60;
  undefined8 local_58;
  
  iVar2 = *(int *)(param_1 + 0x20);
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  if (iVar2 == 1) {
    local_98 = param_2[0xe];
    local_a8 = param_2[0xc];
    uStack_a0 = param_2[0xd];
    local_b8 = param_2[10];
    uStack_b0 = param_2[0xb];
    local_c8 = param_2[8];
    uStack_c0 = param_2[9];
    local_108 = *param_2;
    pcStack_100 = (char *)param_2[1];
    local_f8 = param_2[2];
    uStack_f0 = param_2[3];
    local_e8 = (char *)param_2[4];
    uStack_e0 = param_2[5];
    local_d8 = param_2[6];
    uStack_d0 = *(undefined4 *)(param_2 + 7);
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0x3c);
    uVar3 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
            ::send(&local_90,*(undefined8 *)(param_1 + 0x28),&local_108);
    if (local_90 != -2) {
      if (local_90 == -1) {
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
      else {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini_core[66f3c71560d70857]::server::JsonTurnResult>(&local_90);
      }
    }
  }
  else {
    cVar1 = param_1[0x10];
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    if (cVar1 == '\0') {
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      if (*param_1 != '\0') {
        local_108 = 0xffffffffffffffff;
        pcStack_100 = "empty_upstream_stream";
        local_f8 = 0x15;
        uStack_f0 = 0xffffffffffffffff;
        local_e8 = "upstream completed turn without emitting any response frame";
        uStack_e0 = 0x3b;
        local_d8 = 0;
        uStack_d0 = 0x10201f6;
        <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
        ::send(&local_90,*(undefined8 *)(param_1 + 8),&local_108);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                  (&local_90);
      }
    }
    else {
      local_108 = 0xfffffffffffffffe;
      uVar3 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>
              ::send(&local_90,*(undefined8 *)(param_1 + 0x18),&local_108);
      if (-2 < local_90) {
        if ((local_90 != -1) && (local_90 != 0)) {
          uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
        }
        if ((local_78 != -1) && (local_78 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                  (local_60);
      }
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini_core[66f3c71560d70857]::server::JsonTurnResult>(param_2);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::Turn>(param_1)
  ;
  return;
}



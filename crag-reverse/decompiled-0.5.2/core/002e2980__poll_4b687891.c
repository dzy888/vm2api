// 002e2980 poll

/* WARNING: Instruction at (ram,0x002e2b09) overlaps instruction at (ram,0x002e2b08)
    */
/* <core[c0acaeba6ab4c2e0]::pin::Pin<&mut
   craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 extraout_RDX;
  undefined4 *puVar9;
  undefined4 *unaff_R14;
  ulonglong unaff_R15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  longlong alStack_380 [5];
  ulonglong in_stack_fffffffffffffca8;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  
  puVar1 = (undefined4 *)*param_1;
  puVar7 = &switchD_002e29aa::switchdataD_00185b68;
  uVar3 = (longlong)&switchD_002e29aa::switchdataD_00185b68 +
          (longlong)(int)(&switchD_002e29aa::switchdataD_00185b68)[*(byte *)(puVar1 + 0x18)];
  puVar9 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(puVar1 + 0x18)) {
  case 0:
    puVar1[0xe] = puVar1[4];
    puVar1[0xf] = puVar1[5];
    puVar1[0x10] = puVar1[6];
    puVar1[0x11] = puVar1[7];
    puVar1[10] = *puVar1;
    puVar1[0xb] = puVar1[1];
    puVar1[0xc] = puVar1[2];
    puVar1[0xd] = puVar1[3];
    *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(puVar1 + 8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar4 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
      goto LAB_002e2aad;
    }
    *puVar4 = 1;
    puVar4[1] = 1;
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined1 *)((longlong)puVar4 + 0x14) = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined8 **)(puVar1 + 0x14) = puVar4;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    uVar3 = 0;
    goto LAB_002e2bd0;
  case 1:
    (*(code *)PTR_panic_const_async_fn_resumed_007991b8)();
    break;
  case 3:
    goto switchD_002e29aa_caseD_3;
  case 4:
    uVar3 = (ulonglong)*(byte *)(puVar1 + 0x1e);
    goto code_r0x002e2a35;
  case 5:
    param_3 = (undefined4 *)
              CONCAT62((int6)((ulonglong)param_3 >> 0x10),CONCAT11(0x44,(char)param_3));
    uVar3 = uVar3 & 0xffffffffffffff78;
code_r0x002e2a35:
    puVar7 = &UINT_00185b7c;
    uVar3 = (ulonglong)(int)(&UINT_00185b7c)[uVar3];
switchD_002e29aa_caseD_8:
                    /* WARNING: Could not recover jumptable at 0x002e2a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar10._0_8_ = (*(code *)(uVar3 + (longlong)puVar7))();
    auVar10._8_8_ = param_3;
    return auVar10;
  case 6:
    break;
  case 7:
    break;
  case 8:
    goto switchD_002e29aa_caseD_8;
  case 9:
    while (*(char *)unaff_R14 = (char)puVar7, uVar3 != 2) {
      if ((int)uVar3 != 1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>(puVar1 + 0x14);
        <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(puVar1 + 10);
        if (puVar1[0x10] != -1) {
          (*(code *)PTR_close_00799030)();
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(puVar1 + 10);
        unaff_R14 = (undefined4 *)0x0;
        goto LAB_002e2d78;
      }
      if (CONCAT44(uStack_34c,uStack_350) != 0) {
        unaff_R14 = (undefined4 *)
                    ::<core[c0acaeba6ab4c2e0]::io::error::Error>::new::
                    <tokio[d7d91d38da47d894]::runtime::task::error::JoinError>(alStack_380 + 5);
        goto LAB_002e2d1e;
      }
      puVar9 = puVar1 + 0x14;
      *(undefined4 **)(puVar1 + 0x1a) = puVar9;
      unaff_R14 = puVar1 + 0x1e;
      *(undefined1 *)(puVar1 + 0x1e) = 0;
      *(undefined4 **)(puVar1 + 0x1c) = puVar9;
      <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::poll_join_next
                (alStack_380 + 5,puVar9,param_2);
      puVar7 = (uint *)(ulonglong)(byte)((in_stack_fffffffffffffca8 == 2) * '\x02' + 1);
      uVar3 = in_stack_fffffffffffffca8;
    }
    *(undefined1 *)(puVar1 + 0x18) = 4;
    uVar5 = 1;
    goto LAB_002e2d80;
  case 10:
    goto LAB_002e2adc;
  case 0xb:
    if (uVar3 != 0) {
      unaff_R14 = (undefined4 *)
                  ::<core[c0acaeba6ab4c2e0]::io::error::Error>::new::
                  <tokio[d7d91d38da47d894]::runtime::task::error::JoinError>(alStack_380 + 5);
LAB_002e2d1e:
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>
                (puVar1 + 0x14);
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(puVar1 + 10);
      if (puVar1[0x10] != -1) {
        (*(code *)PTR_close_00799030)();
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(puVar1 + 10);
LAB_002e2d78:
      *(undefined1 *)(puVar1 + 0x18) = 1;
      uVar5 = 0;
      goto LAB_002e2d80;
    }
    uVar3 = *(ulonglong *)(puVar1 + 0x16);
LAB_002e2bd0:
    unaff_R14 = puVar1 + 0x1a;
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    uVar6 = 2;
    if ((uVar3 == 0) || (uVar6 = 4, 0x5f < uVar3)) {
      *(undefined1 *)unaff_R14 = uVar6;
    }
    (*(code *)PTR_cancelled_00799180)();
    in_stack_fffffffffffffca8 = CONCAT44(uStack_3c4,local_3c8);
    *(undefined8 *)(puVar1 + 0x2c) = local_388;
    puVar1[0x28] = local_398;
    puVar1[0x29] = uStack_394;
    puVar1[0x2a] = uStack_390;
    puVar1[0x2b] = uStack_38c;
    puVar1[0x24] = local_3a8;
    puVar1[0x25] = uStack_3a4;
    puVar1[0x26] = uStack_3a0;
    puVar1[0x27] = uStack_39c;
    puVar1[0x20] = local_3b8;
    puVar1[0x21] = uStack_3b4;
    puVar1[0x22] = uStack_3b0;
    puVar1[0x23] = uStack_3ac;
    puVar1[0x1c] = local_3c8;
    puVar1[0x1d] = uStack_3c4;
    puVar1[0x1e] = uStack_3c0;
    puVar1[0x1f] = uStack_3bc;
    *(undefined4 **)(puVar1 + 0x2e) = puVar1 + 0x14;
    *(undefined1 *)(puVar1 + 0x32) = 0;
    *(undefined4 **)(puVar1 + 0x34) = puVar1 + 10;
    *(undefined1 *)(puVar1 + 0x60) = 0;
    *(undefined4 **)(puVar1 + 0x62) = unaff_R14;
    *(undefined4 **)(puVar1 + 100) = puVar1 + 0x1c;
switchD_002e29aa_caseD_3:
    puVar9 = puVar1 + 0x62;
    param_1 = alStack_380 + 5;
    param_3 = param_2;
    goto switchD_002e29aa_caseD_c;
  case 0xc:
    goto switchD_002e29aa_caseD_c;
  }
  (*(code *)PTR_panic_const_async_fn_resumed_panic_007991b0)();
  (*(code *)PTR_panic_const_async_fn_resumed_panic_007991b0)();
LAB_002e2aad:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
switchD_002e29aa_caseD_c:
  unaff_R15 = in_stack_fffffffffffffca8;
  <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
  ::poll(param_1,puVar9,param_3);
  if (unaff_R15 != 0xffffffffffffffff) {
LAB_002e2adc:
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::join_next::_closure_0_,<tokio[d7d91d38da47d894]::net::unix::listener::UnixListener>::accept::_closure_0_)>
              (puVar1 + 0x1c);
    lVar8 = 2;
    if (2 < unaff_R15) {
      lVar8 = unaff_R15 - 3;
    }
    uVar5 = extraout_RDX;
                    /* WARNING: Could not recover jumptable at 0x002e2b2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar11._0_8_ =
         (*(code *)((longlong)&UINT_00185b8c + (longlong)(int)(&UINT_00185b8c)[lVar8]))
                   ((code *)((longlong)&UINT_00185b8c + (longlong)(int)(&UINT_00185b8c)[lVar8]));
    auVar11._8_8_ = uVar5;
    return auVar11;
  }
  *(undefined1 *)(puVar1 + 0x18) = 3;
  uVar5 = 1;
LAB_002e2d80:
  auVar12._8_8_ = unaff_R14;
  auVar12._0_8_ = uVar5;
  return auVar12;
}



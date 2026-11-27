// 00666b60 poll

/* <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

void __rustcall
<tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  uint *puVar2;
  longlong in_FS_OFFSET;
  undefined4 uVar3;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if ((*(char *)(in_FS_OFFSET + -0xf0) != '\0') && (*(char *)(in_FS_OFFSET + -0xf0) == '\x01')) {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
  }
  puVar2 = &switchD_00666bc1::switchdataD_001a21c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x48]) {
  case '\0':
    param_2[0x22] = -1;
    param_2[0x23] = -1;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
    param_2[0x3c] = 8;
    param_2[0x3d] = 0;
    param_2[0x3e] = 0;
    param_2[0x3f] = 0;
    param_2[0x40] = 0;
    param_2[0x41] = 0;
    param_2[0x42] = param_2[0x1c];
    param_2[0x43] = param_2[0x1d];
    param_2[0x44] = param_2[0x1e];
    param_2[0x45] = param_2[0x1f];
    *(undefined8 *)(param_2 + 0x46) = *(undefined8 *)(param_2 + 0x20);
    break;
  case '\x02':
    (*(code *)PTR_panic_const_async_fn_resumed_panic_007991b0)();
  case '\x01':
    (*(code *)PTR_panic_const_async_fn_resumed_007991b8)();
    *(undefined1 *)(param_2 + 0x48) = 2;
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  uVar3 = <http_body_util[89f9933de382700b]::combinators::collect::Collect<http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
          ::poll(&local_138,param_2 + 0x22,param_3);
  if (local_138 == -3) {
    *(undefined1 *)(param_2 + 0x48) = 3;
    if ((*param_2 == 2) ||
       (cVar1 = (*(code *)PTR_poll_delay_00799228)(uVar3,param_3), cVar1 != '\0')) {
      *param_1 = 2;
      return;
    }
    *param_1 = 1;
    return;
  }
  local_98 = local_120;
  uStack_90 = uStack_118;
  local_88 = local_110;
  uStack_84 = uStack_10c;
  uStack_80 = uStack_108;
  uStack_7c = uStack_104;
  local_78 = local_100;
  uStack_74 = uStack_fc;
  uStack_70 = uStack_f8;
  uStack_6c = uStack_f4;
  local_68 = local_f0;
  uStack_64 = uStack_ec;
  uStack_60 = uStack_e8;
  uStack_5c = uStack_e4;
  local_58 = local_e0;
  uStack_50 = uStack_d8;
  local_48 = local_d0;
  uStack_44 = uStack_cc;
  uStack_40 = uStack_c8;
  uStack_3c = uStack_c4;
  local_38 = local_c0;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <http_body_util[89f9933de382700b]::combinators::collect::Collect<http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>>>
            (param_2 + 0x22);
  if ((int)local_138 != -2) {
    local_120 = local_98;
    uStack_118 = uStack_90;
    local_110 = local_88;
    uStack_10c = uStack_84;
    uStack_108 = uStack_80;
    uStack_104 = uStack_7c;
    local_100 = local_78;
    uStack_fc = uStack_74;
    uStack_f8 = uStack_70;
    uStack_f4 = uStack_6c;
    local_f0 = local_68;
    uStack_ec = uStack_64;
    uStack_e8 = uStack_60;
    uStack_e4 = uStack_5c;
    local_e0 = local_58;
    uStack_d8 = uStack_50;
    local_d0 = local_48;
    uStack_cc = uStack_44;
    uStack_c8 = uStack_40;
    uStack_c4 = uStack_3c;
    local_c0 = local_38;
    <http_body_util[89f9933de382700b]::collected::Collected<bytes[e9829e187354639b]::bytes::Bytes>>
    ::to_bytes(&local_b8,&local_138);
    local_128 = local_a8;
    local_130 = local_b0;
    if (local_b8 != 0) goto LAB_00666d77;
  }
  local_a0 = puVar2;
  local_b8 = 0;
  local_a8 = local_128;
  local_b0 = local_130;
LAB_00666d77:
  *(undefined1 *)(param_2 + 0x48) = 1;
  *param_1 = 0;
  param_1[1] = local_b8;
  param_1[2] = local_b0;
  param_1[3] = local_a8;
  param_1[4] = local_a0;
  return;
}



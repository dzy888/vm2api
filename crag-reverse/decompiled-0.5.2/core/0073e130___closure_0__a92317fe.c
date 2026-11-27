// 0073e130 {closure#0}

/* std[6c98fd8553dbae28]::sys::net::connection::socket::lookup_host::{closure#0} */

undefined8 * __rustcall
std[6c98fd8553dbae28]::sys::net::connection::socket::lookup_host::_closure_0_
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da_00;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_70;
  code *local_68;
  longlong local_60 [3];
  int local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_a8 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 1;
  local_30 = 0;
  iVar3 = (*(code *)PTR_getaddrinfo_0079ad88)(&local_30,&local_a8);
  if (iVar3 == 0) {
    uVar1 = *(undefined2 *)*param_2;
    param_1[1] = local_30;
    param_1[2] = local_30;
    *(undefined2 *)(param_1 + 3) = uVar1;
    uVar6 = 0;
  }
  else {
    pal::unix::conf::glibc_version(&local_48,0);
    if (local_48 == 1) {
      bVar2 = local_40 < 2;
      if (local_40 == 2) {
        bVar2 = local_38 < 0x1a;
      }
      if (bVar2) {
        (*(code *)PTR___res_init_0079ad90)();
      }
    }
    if (iVar3 == -0xb) {
      piVar4 = (int *)(*(code *)PTR___errno_location_007990a0)();
      iVar3 = *piVar4;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      uVar7 = (longlong)iVar3 << 0x20 | 2;
    }
    else {
      (*(code *)PTR_gai_strerror_0079ad98)();
      lVar5 = (*(code *)PTR_strlen_0079aa38)();
      uVar8 = (*(code *)PTR_to_string_lossy_0079ada0)(extraout_XMM0_Da,lVar5 + 1);
      local_68 = <alloc[12e961f32105355]::borrow::Cow<str>as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                 fmt;
      local_70 = local_60;
      uVar8 = (*(code *)PTR_format_inner_00799048)(uVar8,&local_70);
      uVar7 = (*(code *)PTR_<&str>_007991e8)(uVar8,local_38);
      uVar8 = extraout_XMM0_Da_00;
      if (CONCAT44(uStack_44,local_48) != 0) {
        uVar8 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_00,1);
      }
      if (0 < local_60[0]) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
      }
    }
    param_1[1] = uVar7;
    uVar6 = 1;
  }
  *param_1 = uVar6;
  return param_1;
}



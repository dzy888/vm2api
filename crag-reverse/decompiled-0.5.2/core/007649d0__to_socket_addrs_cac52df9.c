// 007649d0 to_socket_addrs

/* WARNING: Removing unreachable block (ram,0x00764a84) */
/* <(&str, u16) as std[6c98fd8553dbae28]::net::socket_addr::ToSocketAddrs>::to_socket_addrs */

longlong * __rustcall
<(&str,u16)as_std[6c98fd8553dbae28]::net::socket_addr::ToSocketAddrs>::to_socket_addrs
          (longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  char local_208;
  uint uStack_207;
  undefined3 uStack_203;
  undefined5 local_200;
  undefined4 uStack_1fb;
  undefined7 uStack_1f7;
  char local_88 [8];
  undefined8 local_80;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 *local_40;
  undefined2 local_32;
  
  uVar7 = *param_2;
  uVar6 = param_2[1];
  uVar1 = *(undefined2 *)(param_2 + 2);
  uVar8 = (*(code *)PTR_from_str_0079a270)(param_4,uVar6);
  if (local_208 == '\x02') {
    local_40 = &local_32;
    local_32 = uVar1;
    if (0x17f < uVar6) goto LAB_00764b56;
    uVar8 = (*(code *)PTR_memcpy_00799008)(uVar8,uVar6);
    (&local_208)[uVar6] = '\0';
    (*(code *)PTR_from_bytes_with_nul_0079abd0)(uVar8,uVar6 + 1);
    if (local_68 != 1) {
      std[6c98fd8553dbae28]::sys::net::connection::socket::lookup_host::_closure_0_
                (local_88,&local_40,CONCAT44(uStack_5c,uStack_60));
      goto joined_r0x00764b6d;
    }
    local_80 = &DAT_00796450;
  }
  else {
    if (local_208 == '\x01') {
      local_48 = uStack_1fb;
      local_50 = CONCAT53(local_200,uStack_203);
      uVar7 = CONCAT62((int6)((ulonglong)uVar7 >> 0x10),1);
      uVar5 = (short)(uStack_207 >> 0x10);
      uVar2 = uStack_207 << 0x10;
    }
    else {
      uVar7 = 0;
      uVar5 = uVar1;
      uVar2 = uStack_207;
    }
    uVar6 = (ulonglong)uVar2;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar3 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = (short)uVar7;
      *(uint *)(puVar3 + 1) = uVar2;
      puVar3[3] = uVar5;
      *(undefined8 *)(puVar3 + 4) = local_50;
      *(undefined4 *)(puVar3 + 8) = local_48;
      *(undefined8 *)(puVar3 + 10) = 0;
      puVar3[0xe] = uVar1;
      *param_1 = (longlong)puVar3;
      param_1[1] = (longlong)puVar3;
      param_1[2] = 1;
      param_1[3] = (longlong)(puVar3 + 0x10);
      return param_1;
    }
    (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_00764b56:
    std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::
    <std[6c98fd8553dbae28]::sys::net::connection::socket::LookupHost>(local_88,uVar7,uVar6);
joined_r0x00764b6d:
    if (local_88[0] == '\0') {
      local_80._4_4_ = (undefined4)((ulonglong)local_80 >> 0x20);
      local_68 = (int)local_80;
      uStack_64 = local_80._4_4_;
      <alloc[12e961f32105355]::vec::Vec<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr,std[6c98fd8553dbae28]::sys::net::connection::socket::LookupHost>>
      ::from_iter(&local_208,&local_68);
      local_80 = (undefined1 *)CONCAT35((undefined3)uStack_1fb,local_200);
      param_1[2] = CONCAT35(uStack_203,CONCAT41(uStack_207,local_208));
      param_1[3] = (longlong)(local_80 + CONCAT71(uStack_1f7,uStack_1fb._3_1_) * 0x20);
      puVar4 = local_80;
      goto LAB_00764bb6;
    }
  }
  puVar4 = (undefined1 *)0x0;
LAB_00764bb6:
  param_1[1] = (longlong)local_80;
  *param_1 = (longlong)puVar4;
  return param_1;
}



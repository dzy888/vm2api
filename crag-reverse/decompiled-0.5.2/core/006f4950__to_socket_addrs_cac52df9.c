// 006f4950 to_socket_addrs

/* <(&str, u16) as tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs
    */

undefined2 * __rustcall
<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs
          (undefined2 *param_1,longlong param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  char local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  char cStack_58;
  undefined7 uStack_57;
  undefined2 local_50;
  undefined2 uStack_42;
  undefined6 local_40;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  undefined2 uStack_32;
  
  lVar2 = *(longlong *)(param_2 + 8);
  uVar1 = *(undefined2 *)(param_2 + 0x10);
  uVar3 = (*(code *)PTR_from_str_0079a2d0)();
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR_from_str_0079a2d8)(extraout_XMM0_Da,lVar2);
    if (local_68 == '\0') {
      local_40 = (undefined6)uStack_67;
      uStack_3a = (undefined2)(CONCAT17(uStack_60,uStack_67) >> 0x30);
      uStack_38 = (undefined6)uStack_5f;
      uStack_32 = (undefined2)(CONCAT17(cStack_58,uStack_5f) >> 0x30);
      *param_1 = 1;
      *(ulonglong *)(param_1 + 1) = CONCAT62(local_40,uStack_42);
      *(ulonglong *)(param_1 + 5) = CONCAT62(uStack_38,uStack_3a);
      param_1[9] = uStack_32;
      *(undefined8 *)(param_1 + 10) = 0;
      param_1[0xe] = uVar1;
      return param_1;
    }
    if (-1 < lVar2) {
      if (lVar2 == 0) {
        lVar4 = 1;
LAB_006f4a24:
        local_68 = (char)lVar2;
        uStack_67 = (undefined7)((ulonglong)lVar2 >> 8);
        uStack_60 = (undefined1)lVar4;
        uStack_5f = (undefined7)((ulonglong)lVar4 >> 8);
        cStack_58 = local_68;
        uStack_57 = uStack_67;
        local_50 = uVar1;
        uVar5 = tokio[d7d91d38da47d894]::runtime::blocking::pool::spawn_blocking::
                <<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>>
                          (&local_68,&PTR_s__vendor_tokio_1_54_1_src_net_add_007944d0);
        *param_1 = 0xffff;
        *(undefined8 *)(param_1 + 4) = uVar5;
        return param_1;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar4 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar4 != 0) {
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar2);
        goto LAB_006f4a24;
      }
    }
    uVar3 = (*(code *)PTR_handle_error_00798ff0)();
  }
  *param_1 = 0;
  *(int *)(param_1 + 1) = (int)(uVar3 >> 8);
  param_1[3] = uVar1;
  return param_1;
}


